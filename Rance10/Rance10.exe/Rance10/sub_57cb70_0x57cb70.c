// 函数: sub_57cb70
// 地址: 0x57cb70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
void* esi = *arg1

if (esi != edi)
    int32_t var_10_1 = 0x7fffffff
    int32_t var_c_1 = 0x80000000
    int32_t ecx_1
    int32_t edx_1
    
    do
        void* ebp_1 = esi
        int32_t* ebx_1 = esi + 0x30
        int32_t i_1 = 3
        int32_t i
        
        do
            int32_t eax_1 = sub_5df4d0(arg2, ebp_1)
            ebp_1 += 0x10
            *ebx_1 = eax_1
            ebx_1 = &ebx_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        int32_t eax_2 = *(esi + 0x30)
        edx_1 = var_10_1
        ecx_1 = var_c_1
        
        if (edx_1 s> eax_2)
            edx_1 = eax_2
        
        if (ecx_1 s< eax_2)
            ecx_1 = eax_2
        
        int32_t eax_3 = *(esi + 0x34)
        
        if (edx_1 s> eax_3)
            edx_1 = eax_3
        
        if (ecx_1 s< eax_3)
            ecx_1 = eax_3
        
        int32_t eax_4 = *(esi + 0x38)
        
        if (edx_1 s> eax_4)
            edx_1 = eax_4
        
        var_10_1 = edx_1
        
        if (ecx_1 s< eax_4)
            ecx_1 = eax_4
        
        esi += 0x3c
        var_c_1 = ecx_1
    while (esi != edi)
    
    arg1[0xa] = edx_1
    arg1[0xb] = ecx_1 - edx_1 + 1

return arg1
