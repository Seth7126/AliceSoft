// 函数: ?RegisterAsyncTimerAndLoadLibrary@details@Concurrency@@YAPAU_TP_TIMER@@KP6GXPAU_TP_CALLBACK_INSTANCE@@PAXPAU3@@Z1_N@Z
// 地址: 0x6eb5bb
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg3
int32_t var_c = arg3
int32_t result = sub_6e79a3(arg5, arg6, 0)

if (result == 0)
    return result

Concurrency::details::ReferenceLoadLibrary()
data_7e1374 += 1
int32_t eax
int32_t edx
eax, edx = __allmul(arg4, 0, 0xffffd8f0, 0xffffffff)
var_c = eax
uint32_t eax_1 = zx.d(arg7)
int32_t eax_2 = neg.d(eax_1)
int32_t var_8_1 = edx
___crtSetThreadpoolTimer(result, &var_c, sbb.d(eax_2, eax_2, eax_1 != 0) & arg4, 0)
return result
