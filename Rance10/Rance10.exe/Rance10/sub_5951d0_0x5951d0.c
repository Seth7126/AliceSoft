// 函数: sub_5951d0
// 地址: 0x5951d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = *arg1
int32_t edi = arg1[1]

if (result != edi)
    int32_t* eax_1 = arg2
    int32_t ebp_1 = eax_1[4]
    
    while (true)
        int32_t* edx_1
        
        if (eax_1[5] u< 0x10)
            edx_1 = eax_1
        else
            edx_1 = *eax_1
        
        int32_t* ecx
        
        if (*(result + 0x2c) u< 0x10)
            ecx = result + 0x18
        else
            ecx = *(result + 0x18)
        
        int32_t ebx_1 = *(result + 0x28)
        int32_t eax_2 = ebp_1
        
        if (ebx_1 u< ebp_1)
            eax_2 = ebx_1
        
        if (sub_406ac0(eax_2, edx_1, ecx, eax_2) == 0 && ebx_1 u>= ebp_1 && ebx_1 u<= ebp_1)
            return result
        
        result += 0x40
        
        if (result == edi)
            break
        
        eax_1 = arg2

return 0
