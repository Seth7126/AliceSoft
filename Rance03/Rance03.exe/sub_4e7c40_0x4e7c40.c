// 函数: sub_4e7c40
// 地址: 0x4e7c40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = *(arg1 + 4)

if (arg2 s>= result && *(arg1 + 8) s> result)
    int32_t* esi_1 = *(arg1 + 0x10)
    int32_t i = (*(arg1 + 0x14) - esi_1) s>> 2
    
    while (i s> 0)
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = sx.q(i)
        int32_t i_1 = (eax_1 - edx_1) s>> 1
        result = &esi_1[i_1]
        
        if (esi_1[i_1] s>= arg2)
            i = i_1
        else
            esi_1 = &result[1]
            result = 0xffffffff - i_1
            i += result
    
    if (esi_1 != *(arg1 + 0x14) && *esi_1 == arg2)
        result = _memcpy(esi_1, &esi_1[1], (*(arg1 + 0x14) - &esi_1[1]) & 0xfffffffc)
        *(arg1 + 0x14) -= 4

return result
