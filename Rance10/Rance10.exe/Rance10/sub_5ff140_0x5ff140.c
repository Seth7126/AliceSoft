// 函数: sub_5ff140
// 地址: 0x5ff140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 s<= 0)
    int32_t result
    result.b = 1
    return result

int32_t ebp = 0xffffffff
void* edi = **(arg1 + 4)
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x4bda12f7, *(edi + 0x7c) - *(edi + 0x78))
int32_t edx_1 = edx s>> 5

if (arg3 u< (edx_1 u>> 0x1f) + edx_1)
    int32_t eax_5 = arg3 * 0x6c
    
    if (eax_5 != neg.d(*(edi + 0x78)) && *(eax_5 + *(edi + 0x78) + 0x54) != 0)
        ebp = *(*(edi + 0xa10) - 4)

return sub_5ff090(arg1 - 0x20, arg2, arg3, ebp)
