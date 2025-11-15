// 函数: sub_432330
// 地址: 0x432330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** result = *arg1
void** result_1 = result[1]

if (*(result_1 + 0xd) == 0)
    int32_t eax_1 = arg2[4]
    
    do
        int32_t* ecx = &result_1[4]
        int32_t* edx_1
        
        if (arg2[5] u< 0x10)
            edx_1 = arg2
        else
            edx_1 = *arg2
        
        if (ecx[5] u>= 0x10)
            ecx = *ecx
        
        int32_t edi_2 = ecx[4]
        
        if (edi_2 u< arg2[4])
            eax_1 = edi_2
        
        int32_t eax_2 = sub_406ac0(eax_1, edx_1, ecx, eax_1)
        eax_1 = arg2[4]
        
        if (eax_2 != 0)
            if (eax_2 s>= 0)
                result = result_1
                result_1 = *result_1
            else
                result_1 = result_1[2]
        else if (edi_2 u< eax_1)
            result_1 = result_1[2]
        else
            result = result_1
            result_1 = *result_1
    while (*(result_1 + 0xd) == 0)

return result
