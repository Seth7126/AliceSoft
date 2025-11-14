// 函数: sub_5d0b60
// 地址: 0x5d0b60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 8)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x38e38e39, *(esi + 0xa0) - *(esi + 0x9c))
int32_t edx_1 = edx s>> 4

if (arg2 u< (edx_1 u>> 0x1f) + edx_1)
    void* edi_1 = *(esi + 0x9c) + arg2 * 0x48
    
    if (edi_1 != 0 && arg3 s>= 0)
        int32_t eax_5
        int32_t edx_2
        edx_2:eax_5 = muls.dp.d(0x66666667, *(edi_1 + 0x40) - *(edi_1 + 0x3c))
        int32_t edx_3 = edx_2 s>> 4
        
        if (arg3 s< (edx_3 u>> 0x1f) + edx_3)
            return *(*(edi_1 + 0x3c) + arg3 * 0x28 + 0x18)

return 0xffffffff
