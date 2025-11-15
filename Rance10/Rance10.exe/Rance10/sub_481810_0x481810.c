// 函数: sub_481810
// 地址: 0x481810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** result = *arg1
void** result_1 = result[1]

while (*(result_1 + 0xd) == 0)
    void* edx_1 = &result_1[4]
    void* edi_1 = edx_1 + 0x10
    
    if (result_1[9] u>= 0x10)
        edx_1 = *edx_1
    
    int32_t* ecx
    
    if (arg2[5] u< 0x10)
        ecx = arg2
    else
        ecx = *arg2
    
    int32_t edi_2 = *edi_1
    int32_t eax_1 = edi_2
    
    if (arg2[4] u< edi_2)
        eax_1 = arg2[4]
    
    int32_t eax_2 = sub_406ac0(eax_1, edx_1, ecx, eax_1)
    
    if (eax_2 != 0)
        if (eax_2 s>= 0)
            result_1 = result_1[2]
        else
            result = result_1
            result_1 = *result_1
    else if (arg2[4] u< edi_2)
        result = result_1
        result_1 = *result_1
    else
        result_1 = result_1[2]

return result
