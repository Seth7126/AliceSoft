// 函数: sub_631640
// 地址: 0x631640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg1[2]

if (result != arg2[2])
    result.b = 0
    return result

if (result == 0)
    result.b = 1
    return result

if (*arg1 == *arg2 && arg1[1] == arg2[1] && arg1[3] == arg2[3])
    int64_t* eax_3 = arg2[6]
    int64_t xmm0_1 = *eax_3
    int64_t* eax_5 = arg1[6]
    int64_t xmm0_2 = *eax_5
    int32_t eax_6 = eax_5[1].d
    int32_t var_10_1 = eax_6
    int32_t* ecx
    int32_t edx
    
    if (eax_6.b == 0)
        ecx = nullptr
        edx = 0
    else
        ecx = xmm0_2.d
        edx = xmm0_2:4.d
    
    int32_t eax_7
    int32_t* esi_1
    
    if ((eax_3[1].d).b == 0)
        esi_1 = nullptr
        eax_7 = 0
    else
        esi_1 = xmm0_1.d
        eax_7 = xmm0_1:4.d
    
    void* eax_8 = eax_7 - esi_1
    
    if ((((edx - ecx) ^ eax_8) & 0xfffffffe) == 0)
        int32_t __saved_edi_1 = 0
        int32_t* var_24_1 = ecx
        
        if (sub_555ab0(eax_8, edx, ecx, esi_1) != 0)
            return 1

return 0
