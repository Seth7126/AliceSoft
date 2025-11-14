// 函数: sub_5d0be0
// 地址: 0x5d0be0
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
            int32_t eax_9 = *(edi_1 + 0x3c)
            int32_t ecx_6 = arg3 * 5
            int32_t* result = eax_9 + (ecx_6 << 3)
            
            if (*(eax_9 + (ecx_6 << 3) + 0x14) u< 0x10)
                return result
            
            return *result

return nullptr
