// 函数: sub_64b150
// 地址: 0x64b150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg3
uint32_t ecx = zx.d(*arg2)
void* edi = arg3[0x66]
int32_t edx = *(((ecx & 0x7f) << 2) + &data_76db18)
var_4:2.b = edx.b
int32_t edx_1 = edx s>> 8
var_4:3.b = edx_1.b
int32_t edx_2 = edx_1 s>> 8
*(edi + 0x10) -= edx_2
int32_t ebx = *(edi + 0x10)
int32_t result = ecx s>> 7

if (arg4 != result)
    if (ebx s>= edx_2)
        *(edi + 0xc) += ebx
        *(edi + 0x10) = edx_2
    
    ecx.b &= 0x80
    ecx.b ^= var_4:2.b
    goto label_64b1be

if (ebx s< 0x8000)
    if (ebx s< edx_2)
        *(edi + 0xc) += ebx
        *(edi + 0x10) = edx_2
    
    ecx.b &= 0x80
    ecx.b ^= var_4:3.b
label_64b1be:
    *arg2 = ecx.b
    
    do
        *(edi + 0xc) <<= 1
        *(edi + 0x10) <<= 1
        int32_t temp0_1 = *(edi + 0x1c)
        *(edi + 0x1c) -= 1
        
        if (temp0_1 == 1)
            int32_t ebx_2 = *(edi + 0xc) s>> 0x13
            
            if (ebx_2 s> 0xff)
                if (*(edi + 0x20) s>= 0)
                    if (*(edi + 0x18) != 0)
                        int32_t i
                        
                        do
                            ecx = arg3[6]
                            **ecx = 0
                            *ecx += 1
                            int32_t temp3_1 = *(ecx + 4)
                            *(ecx + 4) -= 1
                            
                            if (temp3_1 == 1)
                                char eax_5
                                eax_5, ecx = (*(ecx + 0xc))(arg3)
                                
                                if (eax_5 == 0)
                                    *(*arg3 + 0x14) = 0x19
                                    (**arg3)(arg3)
                            
                            i = *(edi + 0x18)
                            *(edi + 0x18) -= 1
                        while (i != 1)
                    
                    int32_t* edx_3 = arg3[6]
                    ecx.b = *(edi + 0x20)
                    ecx.b += 1
                    **edx_3 = ecx.b
                    *edx_3 += 1
                    int32_t temp2_1 = edx_3[1]
                    edx_3[1] -= 1
                    
                    if (temp2_1 == 1)
                        char eax_11
                        eax_11, ecx = edx_3[3](arg3)
                        
                        if (eax_11 == 0)
                            *(*arg3 + 0x14) = 0x19
                            (**arg3)(arg3)
                    
                    if (*(edi + 0x20) == 0xfe)
                        ecx = arg3[6]
                        **ecx = 0
                        *ecx += 1
                        int32_t temp7_1 = *(ecx + 4)
                        *(ecx + 4) -= 1
                        
                        if (temp7_1 == 1)
                            char eax_17
                            eax_17, ecx = (*(ecx + 0xc))(arg3)
                            
                            if (eax_17 == 0)
                                *(*arg3 + 0x14) = 0x19
                                (**arg3)(arg3)
                
                *(edi + 0x18) += *(edi + 0x14)
                *(edi + 0x14) = 0
                result = zx.d(ebx_2.b)
                *(edi + 0x20) = result
            else if (ebx_2 != 0xff)
                char* eax_22 = *(edi + 0x20)
                
                if (eax_22 == 0)
                    *(edi + 0x18) += 1
                else if (eax_22 s>= 0)
                    if (*(edi + 0x18) != 0)
                        int32_t i_1
                        
                        do
                            int32_t* ecx_1 = arg3[6]
                            **ecx_1 = 0
                            *ecx_1 += 1
                            int32_t temp6_1 = ecx_1[1]
                            ecx_1[1] -= 1
                            
                            if (temp6_1 == 1 && ecx_1[3](arg3).b == 0)
                                *(*arg3 + 0x14) = 0x19
                                (**arg3)(arg3)
                            
                            i_1 = *(edi + 0x18)
                            *(edi + 0x18) -= 1
                        while (i_1 != 1)
                    
                    uint32_t* edx_4 = arg3[6]
                    eax_22.b = *(edi + 0x20)
                    **edx_4 = eax_22.b
                    *edx_4 += 1
                    int32_t temp5_1 = edx_4[1]
                    edx_4[1] -= 1
                    
                    if (temp5_1 == 1)
                        char eax_28
                        eax_28, ecx = edx_4[3](arg3)
                        
                        if (eax_28 == 0)
                            *(*arg3 + 0x14) = 0x19
                            (**arg3)(arg3)
                
                if (*(edi + 0x14) != 0)
                    if (*(edi + 0x18) != 0)
                        int32_t i_2
                        
                        do
                            int32_t* ecx_2 = arg3[6]
                            **ecx_2 = 0
                            *ecx_2 += 1
                            int32_t temp11_1 = ecx_2[1]
                            ecx_2[1] -= 1
                            
                            if (temp11_1 == 1 && ecx_2[3](arg3) == 0)
                                *(*arg3 + 0x14) = 0x19
                                (**arg3)(arg3)
                            
                            i_2 = *(edi + 0x18)
                            *(edi + 0x18) -= 1
                        while (i_2 != 1)
                    
                    int32_t i_3
                    
                    do
                        int32_t* ecx_3 = arg3[6]
                        **ecx_3 = 0xff
                        *ecx_3 += 1
                        int32_t temp8_1 = ecx_3[1]
                        ecx_3[1] -= 1
                        
                        if (temp8_1 == 1 && ecx_3[3](arg3) == 0)
                            *(*arg3 + 0x14) = 0x19
                            (**arg3)(arg3)
                        
                        ecx = arg3[6]
                        **ecx = 0
                        *ecx += 1
                        int32_t temp10_1 = *(ecx + 4)
                        *(ecx + 4) -= 1
                        
                        if (temp10_1 == 1)
                            char eax_46
                            eax_46, ecx = (*(ecx + 0xc))(arg3)
                            
                            if (eax_46 == 0)
                                *(*arg3 + 0x14) = 0x19
                                (**arg3)(arg3)
                        
                        i_3 = *(edi + 0x14)
                        *(edi + 0x14) -= 1
                    while (i_3 != 1)
                
                result = zx.d(ebx_2.b)
                *(edi + 0x20) = result
            else
                *(edi + 0x14) += 1
            
            *(edi + 0xc) &= 0x7ffff
            *(edi + 0x1c) += 8
    while (*(edi + 0x10) s< 0x8000)

return result
