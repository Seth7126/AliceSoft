// 函数: ??$__crt_time_is_leap_year@H@@YA_NH@Z
// 地址: 0x70c844
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = arg1 & 0x80000003
bool cond:0 = eax_1 != 0

if (eax_1 s< 0)
    cond:0 = ((eax_1 - 1) | 0xfffffffc) != 0xffffffff

if (not(cond:0) && mods.dp.d(sx.q(arg1), 0x64) != 0)
    int32_t result
    result.b = 1
    return result

int32_t temp1_2 = mods.dp.d(sx.q(arg1 + 0x76c), 0x190)
int32_t edx_5 = neg.d(temp1_2)
edx_5.b = sbb.b(edx_5.b, edx_5.b, temp1_2 != 0)
return edx_5 + 1
