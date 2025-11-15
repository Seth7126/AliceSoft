// 函数: sub_408460
// 地址: 0x408460
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
        
        int32_t* ecx
        
        if (esi[5] u< 0x10)
            ecx = esi
        else
            ecx = *esi
        
        int32_t ebx_1 = esi[4]
        int32_t eax_1 = ebp_1
        
        if (ebx_1 u< ebp_1)
            eax_1 = ebx_1
        
        result = sub_406ac0(eax_1, edx_1, ecx, eax_1)
        
        if (result == 0 && ebx_1 u>= ebp_1 && ebx_1 u<= ebp_1)
            result = arg3
            
            if (esi[6] == result)
                result.b = arg4
                esi[7].b = result.b
                return __vcasan::OnAsanReport(result_1)
        
        esi = &esi[0xf]
        
        if (esi == edi)
            break
        
        eax = arg2

return result
