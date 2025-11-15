// 函数: sub_6b3050
// 地址: 0x6b3050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi_1 = (arg2 + 7) & 0xfffffff8

if (*(arg1 + 0x48) + edi_1 s> *(arg1 + 0x4c))
    if (*(arg1 + 0x44) != 0)
        int32_t var_c_1 = 8
        int32_t* eax_2 = sub_705e22()
        *(arg1 + 0x50) += *(arg1 + 0x48)
        eax_2[1] = *(arg1 + 0x54)
        *eax_2 = *(arg1 + 0x44)
        *(arg1 + 0x54) = eax_2
    
    int32_t var_c_2 = edi_1
    *(arg1 + 0x4c) = edi_1
    *(arg1 + 0x44) = sub_705e22()
    *(arg1 + 0x48) = 0

int32_t ecx_3 = *(arg1 + 0x48)
int32_t result = *(arg1 + 0x44) + ecx_3
*(arg1 + 0x48) = ecx_3 + edi_1
return result
