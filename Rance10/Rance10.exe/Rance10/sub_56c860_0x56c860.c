// 函数: sub_56c860
// 地址: 0x56c860
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
void* result = *(arg1 + 0x1c)

if (result != *(arg1 + 0x20))
    int32_t ecx = *(arg1 + 0x20)
    int32_t ebp_1 = 0
    int32_t ebx_1 = 0
    
    if (result != ecx)
        int32_t* edi_1 = result + 0x10
        
        do
            int32_t edx_1 = *edi_1
            edi_1 = &edi_1[9]
            int32_t edx_2 = edx_1 + edi_1[-6]
            
            if (ebp_1 s< edx_2)
                ebp_1 = edx_2
            
            int32_t edx_4 = edi_1[-8] + edi_1[-5]
            
            if (ebx_1 s< edx_4)
                ebx_1 = edx_4
            
            result += 0x24
        while (result != ecx)
    
    int32_t ecx_1 = 1
    
    if (ebx_1 s> 1)
        do
            ecx_1 *= 2
        while (ecx_1 s< ebx_1)
    
    int32_t eax = 1
    
    if (ebp_1 s> 1)
        do
            eax *= 2
        while (eax s< ebp_1)
    
    if (*(arg1 + 4) s> eax)
        *(arg1 + 4) = eax
    
    if (*(arg1 + 8) s> ecx_1)
        *(arg1 + 8) = ecx_1
    
    int32_t ebx_2 = *(arg1 + 0x14)
    
    for (int32_t* i = *(arg1 + 0x10); i != ebx_2; i = &i[7])
        (**i)(0)
    
    result = *(arg1 + 0x10)
    *(arg1 + 0x14) = result

return result
