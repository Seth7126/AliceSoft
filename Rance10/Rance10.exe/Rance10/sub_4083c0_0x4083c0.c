// 函数: sub_4083c0
// 地址: 0x4083c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** result = arg1
int32_t** esi = result[6]
int32_t edi = result[7]
void** result_1 = result

if (esi != edi)
    int32_t* eax = arg2
    int32_t ebp_1 = eax[4]
    
    while (true)
        int32_t* edx_1
        
        if (eax[5] u< 0x10)
            edx_1 = eax
        else
            edx_1 = *eax
        
        int32_t* ecx_1
        
        if (esi[5] u< 0x10)
            ecx_1 = esi
        else
            ecx_1 = *esi
        
        int32_t ebx_1 = esi[4]
        int32_t eax_1 = ebp_1
        
        if (ebx_1 u< ebp_1)
            eax_1 = ebx_1
        
        result = sub_406ac0(eax_1, edx_1, ecx_1, eax_1)
        
        if (result == 0 && ebx_1 u>= ebp_1 && ebx_1 u<= ebp_1)
            result = arg3
            
            if (esi[6] == result)
                sub_408d50(&result[6], &arg2, esi)
                return __vcasan::OnAsanReport(result_1)
        
        esi = &esi[0xf]
        
        if (esi == edi)
            break
        
        eax = arg2

return result
