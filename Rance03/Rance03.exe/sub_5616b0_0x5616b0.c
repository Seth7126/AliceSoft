// 函数: sub_5616b0
// 地址: 0x5616b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = 0
void* var_4 = arg1
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x1a6d01a7, *(arg1 + 0x18) - *(arg1 + 0x14))
int32_t edx_3 = edx_2 s>> 6

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    int32_t* eax_4 = arg2
    int32_t* edi_2 = *(arg1 + 0x14) + 0x18
    int32_t ebp_1 = eax_4[4]
    
    while (true)
        int32_t* edx_4
        
        if (eax_4[5] u< 0x10)
            edx_4 = eax_4
        else
            edx_4 = *eax_4
        
        int32_t ebx_1 = *edi_2
        void* esi_1
        
        if (edi_2[1] u< 0x10)
            esi_1 = &edi_2[-4]
        else
            esi_1 = edi_2[-4]
        
        int32_t eax_5 = ebp_1
        
        if (ebx_1 u< ebp_1)
            eax_5 = ebx_1
        
        if (eax_5 == 0)
        label_561770:
            
            if (ebx_1 u>= ebp_1)
                int32_t eax_8
                eax_8.b = ebx_1 != ebp_1
                
                if (eax_8 == 0)
                    return result
        else
            int32_t i_1 = eax_5 - 4
            
            if (eax_5 u>= 4)
                int32_t i
                
                do
                    if (*esi_1 != *edx_4)
                        goto label_561736
                    
                    esi_1 += 4
                    edx_4 = &edx_4[1]
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            int32_t eax_7
            
            if (i_1 == 0xfffffffc)
                eax_7 = 0
            else
            label_561736:
                arg1.b = *esi_1
                char temp2_1 = *edx_4
                
                if (arg1.b != temp2_1)
                    eax_7 = sbb.d(i_1, i_1, arg1.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    eax_7 = 0
                else
                    arg1.b = *(esi_1 + 1)
                    char temp4_1 = *(edx_4 + 1)
                    
                    if (arg1.b != temp4_1)
                        eax_7 = sbb.d(i_1, i_1, arg1.b u< temp4_1) | 1
                    else if (i_1 == 0xfffffffe)
                        eax_7 = 0
                    else
                        arg1.b = *(esi_1 + 2)
                        char temp5_1 = *(edx_4 + 2)
                        
                        if (arg1.b != temp5_1)
                            eax_7 = sbb.d(i_1, i_1, arg1.b u< temp5_1) | 1
                        else if (i_1 == 0xffffffff)
                            eax_7 = 0
                        else
                            i_1.b = *(esi_1 + 3)
                            char temp6_1 = *(edx_4 + 3)
                            
                            if (i_1.b == temp6_1)
                                eax_7 = 0
                            else
                                eax_7 = sbb.d(i_1, i_1, i_1.b u< temp6_1) | 1
            
            if (eax_7 == 0)
                goto label_561770
        
        edi_2 = &edi_2[0x9b]
        int32_t result_1 = result + 1
        result = result_1
        int32_t eax_9
        int32_t edx_5
        edx_5:eax_9 = muls.dp.d(0x1a6d01a7, *(var_4 + 0x18) - *(var_4 + 0x14))
        int32_t edx_6 = edx_5 s>> 6
        
        if (result_1 s>= (edx_6 u>> 0x1f) + edx_6)
            break
        
        eax_4 = arg2

return 0xffffffff
