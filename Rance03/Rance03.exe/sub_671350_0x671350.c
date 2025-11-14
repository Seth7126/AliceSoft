// 函数: sub_671350
// 地址: 0x671350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
void* result = arg1
int32_t i_2 = (*(result + 8) - *(result + 4)) s>> 5
void* result_1 = result
int32_t i_1 = i_2

if (i_2 s> 0)
    int32_t ebp_1 = 0
    int32_t i
    
    do
        int32_t var_20
        char* eax_2 = sub_456bd0(*(result + 4) + ebp_1, &var_20)
        int32_t ebx_1 = arg2[4]
        int32_t* esi_2
        
        if (arg2[5] u< 0x10)
            esi_2 = arg2
        else
            esi_2 = *arg2
        
        int32_t edi_1 = *(eax_2 + 0x10)
        
        if (*(eax_2 + 0x14) u>= 0x10)
            eax_2 = *eax_2
        
        int32_t edx_1 = ebx_1
        
        if (edi_1 u< ebx_1)
            edx_1 = edi_1
        
        int32_t* ecx_2
        bool cond:2_1
        
        if (edx_1 == 0)
        label_671412:
            int32_t eax_5
            
            if (edi_1 u>= ebx_1)
                eax_5.b = edi_1 != ebx_1
            else
                eax_5 = 0xffffffff
            
            cond:2_1 = eax_5 == 0
        else
            int32_t j_1 = edx_1 - 4
            
            if (edx_1 u>= 4)
                int32_t j
                
                do
                    if (*eax_2 != *esi_2)
                        goto label_6713d6
                    
                    eax_2 = &eax_2[4]
                    esi_2 = &esi_2[1]
                    j = j_1
                    j_1 -= 4
                while (j u>= 4)
            
            int32_t eax_4
            
            if (j_1 == 0xfffffffc)
                eax_4 = 0
            else
            label_6713d6:
                ecx_2.b = *eax_2
                char temp2_1 = *esi_2
                
                if (ecx_2.b != temp2_1)
                    eax_4 = sbb.d(eax_2, eax_2, ecx_2.b u< temp2_1) | 1
                else if (j_1 == 0xfffffffd)
                    eax_4 = 0
                else
                    ecx_2.b = eax_2[1]
                    char temp5_1 = *(esi_2 + 1)
                    
                    if (ecx_2.b != temp5_1)
                        eax_4 = sbb.d(eax_2, eax_2, ecx_2.b u< temp5_1) | 1
                    else if (j_1 == 0xfffffffe)
                        eax_4 = 0
                    else
                        ecx_2.b = eax_2[2]
                        char temp7_1 = *(esi_2 + 2)
                        
                        if (ecx_2.b != temp7_1)
                            eax_4 = sbb.d(eax_2, eax_2, ecx_2.b u< temp7_1) | 1
                        else if (j_1 == 0xffffffff)
                            eax_4 = 0
                        else
                            eax_2.b = eax_2[3]
                            char temp8_1 = *(esi_2 + 3)
                            
                            if (eax_2.b == temp8_1)
                                eax_4 = 0
                            else
                                eax_4 = sbb.d(eax_2, eax_2, eax_2.b u< temp8_1) | 1
            
            cond:2_1 = eax_4 == 0
            
            if (eax_4 == 0)
                goto label_671412
        
        ebx_1.b = cond:2_1
        int32_t var_c
        
        if (var_c u>= 0x10)
            j__free(var_20)
        
        if (ebx_1.b != 0)
            ecx_2.b = arg3
            *(*(result_1 + 4) + ebp_1 + 0x1c) = ecx_2.b
        
        result = result_1
        ebp_1 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_69a5bc(eax_1 ^ &var_2c)
return result
