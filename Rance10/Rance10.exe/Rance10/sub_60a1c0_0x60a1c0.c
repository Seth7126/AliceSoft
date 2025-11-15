// 函数: sub_60a1c0
// 地址: 0x60a1c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, *(arg1 + 0x68) - *(arg1 + 0x64))
int32_t edx_3 = edx_2 s>> 4

if (arg2 u< (edx_3 u>> 0x1f) + edx_3)
    void* esi_1 = *(arg1 + 0x64) + arg2 * 0x28
    int32_t eax_6
    int32_t edx_4
    edx_4:eax_6 = muls.dp.d(0x2aaaaaab, *(esi_1 + 0x1c) - *(esi_1 + 0x18))
    int32_t edx_5 = edx_4 s>> 3
    
    if (arg3 u< (edx_5 u>> 0x1f) + edx_5)
        return arg3 * 0x30 + *(esi_1 + 0x18)

return 0
