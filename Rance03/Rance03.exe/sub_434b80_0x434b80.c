// 函数: sub_434b80
// 地址: 0x434b80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t* eax = *(arg1 + 0x1c)
int32_t ecx = *(arg1 + 0x20)

if (eax != ecx)
    int32_t ebp_1 = arg2[4]
    int32_t* ecx_2 = arg2
    
    while (true)
        int32_t* esi_1
        
        if (ecx_2[5] u< 0x10)
            esi_1 = ecx_2
        else
            esi_1 = *ecx_2
        
        int32_t ebx_1 = eax[4]
        int32_t* edi_1
        
        if (eax[5] u< 0x10)
            edi_1 = eax
        else
            edi_1 = *eax
        
        int32_t ecx_3 = ebp_1
        
        if (ebx_1 u< ebp_1)
            ecx_3 = ebx_1
        
        if (ecx_3 == 0)
        label_434c20:
            
            if (ebx_1 u>= ebp_1)
                int32_t ecx_6
                ecx_6.b = ebx_1 != ebp_1
                
                if (ecx_6 == 0)
                    return eax[6]
        else
            int32_t i_1 = ecx_3 - 4
            
            if (ecx_3 u>= 4)
                int32_t i
                
                do
                    if (*edi_1 != *esi_1)
                        goto label_434be6
                    
                    edi_1 = &edi_1[1]
                    esi_1 = &esi_1[1]
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            int32_t ecx_5
            
            if (i_1 == 0xfffffffc)
                ecx_5 = 0
            else
            label_434be6:
                int32_t edx
                edx.b = *edi_1
                char temp2_1 = *esi_1
                
                if (edx.b != temp2_1)
                    ecx_5 = sbb.d(i_1, i_1, edx.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    ecx_5 = 0
                else
                    edx.b = *(edi_1 + 1)
                    char temp4_1 = *(esi_1 + 1)
                    
                    if (edx.b != temp4_1)
                        ecx_5 = sbb.d(i_1, i_1, edx.b u< temp4_1) | 1
                    else if (i_1 == 0xfffffffe)
                        ecx_5 = 0
                    else
                        edx.b = *(edi_1 + 2)
                        char temp5_1 = *(esi_1 + 2)
                        
                        if (edx.b != temp5_1)
                            ecx_5 = sbb.d(i_1, i_1, edx.b u< temp5_1) | 1
                        else if (i_1 == 0xffffffff)
                            ecx_5 = 0
                        else
                            i_1.b = *(edi_1 + 3)
                            char temp6_1 = *(esi_1 + 3)
                            
                            if (i_1.b == temp6_1)
                                ecx_5 = 0
                            else
                                ecx_5 = sbb.d(i_1, i_1, i_1.b u< temp6_1) | 1
            
            if (ecx_5 == 0)
                goto label_434c20
        
        eax = &eax[7]
        
        if (eax == ecx)
            break
        
        ecx_2 = arg2

return 0
