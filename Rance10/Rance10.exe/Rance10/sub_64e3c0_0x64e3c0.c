// 函数: sub_64e3c0
// 地址: 0x64e3c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg3

if (arg4 == 0)
    *(**(arg3 + 0x78) + 0x14) = 0x29
    int32_t* eax_2 = *(arg3 + 0x78)
    (**eax_2)(eax_2)

if (*(arg3 + 0x6c) != 0)
    return 

void* edx_1 = *(arg3 + 0x10) + arg4
int32_t edi_5 = (((1 << arg4.b) - 1) & arg2) << (0x18 - edx_1.b) | *(arg3 + 0xc)

if (edx_1 s>= 8)
    uint32_t i_1 = edx_1 u>> 3
    var_4 = edx_1 + (neg.d(i_1) << 3)
    uint32_t i
    
    do
        uint32_t ecx_3 = zx.d((edi_5 s>> 0x10).b)
        **(arg3 + 0x70) = ecx_3.b
        *(arg3 + 0x70) += 1
        int32_t temp0_1 = *(arg3 + 0x74)
        *(arg3 + 0x74) -= 1
        
        if (temp0_1 == 1)
            void* eax_8 = *(arg3 + 0x78)
            int32_t* ebx_1 = *(eax_8 + 0x18)
            
            if (ebx_1[3](eax_8) == 0)
                *(**(arg3 + 0x78) + 0x14) = 0x19
                int32_t* eax_13 = *(arg3 + 0x78)
                (**eax_13)(eax_13)
            
            *(arg3 + 0x70) = *ebx_1
            *(arg3 + 0x74) = ebx_1[1]
        
        if (ecx_3 == 0xff)
            **(arg3 + 0x70) = 0
            *(arg3 + 0x70) += 1
            int32_t temp2_1 = *(arg3 + 0x74)
            *(arg3 + 0x74) -= 1
            
            if (temp2_1 == 1)
                void* eax_16 = *(arg3 + 0x78)
                int32_t* ebx_2 = *(eax_16 + 0x18)
                
                if (ebx_2[3](eax_16) == 0)
                    *(**(arg3 + 0x78) + 0x14) = 0x19
                    int32_t* eax_21 = *(arg3 + 0x78)
                    (**eax_21)(eax_21)
                
                *(arg3 + 0x70) = *ebx_2
                *(arg3 + 0x74) = ebx_2[1]
        
        edi_5 <<= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    edx_1 = var_4

*(arg3 + 0xc) = edi_5
*(arg3 + 0x10) = edx_1
