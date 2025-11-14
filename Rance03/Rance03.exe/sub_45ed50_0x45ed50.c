// 函数: sub_45ed50
// 地址: 0x45ed50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t* i = *(arg1 + 4)
var_20 = arg1

if (i != *(arg1 + 8))
    do
        int32_t var_1c
        char* eax_3 = sub_464920(*i, &var_1c)
        int32_t ebp_1 = arg2[4]
        int32_t* edi_1
        
        if (arg2[5] u< 0x10)
            edi_1 = arg2
        else
            edi_1 = *arg2
        
        int32_t ebx_1 = *(eax_3 + 0x10)
        
        if (*(eax_3 + 0x14) u>= 0x10)
            eax_3 = *eax_3
        
        int32_t edx_1 = ebp_1
        
        if (ebx_1 u< ebp_1)
            edx_1 = ebx_1
        
        int32_t eax_5
        bool cond:3_1
        
        if (edx_1 == 0)
        label_45ee02:
            
            if (ebx_1 u>= ebp_1)
                eax_5.b = ebx_1 != ebp_1
            else
                eax_5 = 0xffffffff
            
            cond:3_1 = eax_5 == 0
        else
            int32_t j_1 = edx_1 - 4
            
            if (edx_1 u>= 4)
                int32_t j
                
                do
                    if (*eax_3 != *edi_1)
                        goto label_45edc6
                    
                    eax_3 = &eax_3[4]
                    edi_1 = &edi_1[1]
                    j = j_1
                    j_1 -= 4
                while (j u>= 4)
            
            if (j_1 == 0xfffffffc)
                eax_5 = 0
            else
            label_45edc6:
                int32_t* ecx_1
                ecx_1.b = *eax_3
                char temp2_1 = *edi_1
                
                if (ecx_1.b != temp2_1)
                    eax_5 = sbb.d(eax_3, eax_3, ecx_1.b u< temp2_1) | 1
                else if (j_1 == 0xfffffffd)
                    eax_5 = 0
                else
                    ecx_1.b = eax_3[1]
                    char temp5_1 = *(edi_1 + 1)
                    
                    if (ecx_1.b != temp5_1)
                        eax_5 = sbb.d(eax_3, eax_3, ecx_1.b u< temp5_1) | 1
                    else if (j_1 == 0xfffffffe)
                        eax_5 = 0
                    else
                        ecx_1.b = eax_3[2]
                        char temp6_1 = *(edi_1 + 2)
                        
                        if (ecx_1.b != temp6_1)
                            eax_5 = sbb.d(eax_3, eax_3, ecx_1.b u< temp6_1) | 1
                        else if (j_1 == 0xffffffff)
                            eax_5 = 0
                        else
                            eax_3.b = eax_3[3]
                            char temp7_1 = *(edi_1 + 3)
                            
                            if (eax_3.b == temp7_1)
                                eax_5 = 0
                            else
                                eax_5 = sbb.d(eax_3, eax_3, eax_3.b u< temp7_1) | 1
            
            cond:3_1 = eax_5 == 0
            
            if (eax_5 == 0)
                goto label_45ee02
        
        ebx_1.b = cond:3_1
        int32_t var_8
        
        if (var_8 u>= 0x10)
            j__free(var_1c)
        
        if (ebx_1.b != 0)
            eax_5.b = 1
            sub_69a5bc(eax_1 ^ &var_20)
            return eax_5
        
        i = &i[1]
    while (i != *(var_20 + 8))

void* eax_2
eax_2.b = 0
sub_69a5bc(eax_1 ^ &var_20)
return eax_2
