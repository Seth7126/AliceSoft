// 函数: sub_5d0d20
// 地址: 0x5d0d20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = *(arg1 + 8)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, *(edi + 0xc4) - *(edi + 0xc0))
int32_t edx_1 = edx s>> 3

if (arg2 u< (edx_1 u>> 0x1f) + edx_1)
    int32_t esi_1 = arg2 * 0x2c
    void* esi_2 = esi_1 + *(edi + 0xc0)
    
    if (esi_1 != neg.d(*(edi + 0xc0)) && arg3 s>= 0)
        int32_t eax_4
        int32_t edx_2
        edx_2:eax_4 = muls.dp.d(0x66666667, *(esi_2 + 0x24) - *(esi_2 + 0x20))
        int32_t edx_3 = edx_2 s>> 4
        
        if (arg3 s< (edx_3 u>> 0x1f) + edx_3)
            return *(*(esi_2 + 0x20) + arg3 * 0x28 + 0x18)

return 0xffffffff
