// 函数: sub_56b770
// 地址: 0x56b770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg2
int32_t* ebp = arg1
ebp[4] = ebp[3]
ebp[1] = *ebp

for (int32_t* i = *ebx; i != ebx[1]; i = &i[1])
    int32_t edi_3 = (i - *ebx) s>> 2
    
    if (ebp[1] == ebp[2])
        int32_t* var_28_1 = arg1
        sub_56baf0(ebp)
    
    arg1 = ebp[1]
    
    if (arg1 != 0)
        arg1 = sub_56a860(arg1, edi_3, *i)
    
    ebp[1] += 0xd8

int32_t edi_4 = ebp[1]

for (int32_t* i_1 = *ebp; i_1 != edi_4; i_1 = &i_1[0x36])
    arg2 = i_1
    sub_428f00(&ebp[3], &arg2)

void* esi = &ebp[3]
int32_t result = (ebp[4] - *esi) s>> 2
int32_t result_1 = result
int32_t i_3 = result - 1
int32_t i_4 = i_3

if (i_3 s> 0)
    int32_t* ecx_2 = nullptr
    int32_t edx_1 = 1
    arg2 = nullptr
    int32_t var_14_1 = 1
    int32_t i_2
    
    do
        int32_t ebx_1 = edx_1
        
        if (edx_1 s< result)
            do
                void* eax_6 = *esi
                int32_t* edi_5 = *(eax_6 + (ebx_1 << 2))
                void* esi_1 = eax_6 + (ebx_1 << 2)
                void* eax_7 = eax_6 + ecx_2
                int32_t* ecx_3 = *eax_7
                
                if (edi_5 != ecx_3)
                    int32_t j = edi_5[1]
                    
                    if (j != 0xffffffff)
                        int32_t edx_2 = *ebp
                        
                        do
                            int32_t* eax_8 = j * 0xd8
                            
                            if (*ecx_3 == *(eax_8 + edx_2))
                                goto label_56b8b2
                            
                            j = *(eax_8 + edx_2 + 4)
                        while (j != 0xffffffff)
                    
                    if (edi_5 != ecx_3)
                        int32_t j_1 = ecx_3[1]
                        
                        if (j_1 != 0xffffffff)
                            int32_t ecx_4 = *ebp
                            
                            do
                                int32_t* eax_9 = j_1 * 0xd8
                                
                                if (*edi_5 == *(eax_9 + ecx_4))
                                    int32_t ecx_5 = *eax_7
                                    *eax_7 = *esi_1
                                    *esi_1 = ecx_5
                                    break
                                
                                j_1 = *(eax_9 + ecx_4 + 4)
                            while (j_1 != 0xffffffff)
                
            label_56b8b2:
                result = result_1
                esi = &ebp[3]
                ecx_2 = arg2
                ebx_1 += 1
            while (ebx_1 s< result)
            
            edx_1 = var_14_1
            esi = &ebp[3]
            i_3 = i_4
        
        edx_1 += 1
        ecx_2 = &ecx_2[1]
        i_2 = i_3
        i_3 -= 1
        var_14_1 = edx_1
        arg2 = ecx_2
        i_4 = i_3
    while (i_2 != 1)

return result
