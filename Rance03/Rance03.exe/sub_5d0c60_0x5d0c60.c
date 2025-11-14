// 函数: sub_5d0c60
// 地址: 0x5d0c60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx_3 = *(arg1 + 8)

if (ecx_3 == 0xffffff28)
    return 0

if (arg2 s>= 0)
    int32_t edi_1 = *(ecx_3 + 0xd8)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x66666667, *(ecx_3 + 0xdc) - edi_1)
    int32_t edx_2 = edx_1 s>> 4
    
    if (arg2 s< (edx_2 u>> 0x1f) + edx_2)
        int32_t eax_6 = arg2 * 5
        int32_t* result = edi_1 + (eax_6 << 3)
        
        if (*(edi_1 + (eax_6 << 3) + 0x14) u< 0x10)
            return result
        
        return *result

return nullptr
