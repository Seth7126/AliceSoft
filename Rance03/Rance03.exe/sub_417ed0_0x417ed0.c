// 函数: sub_417ed0
// 地址: 0x417ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
void** result = *arg1
void** result_1 = result
void** result_2 = result[1]

if (*(result_2 + 0xd) == 0)
    int32_t* ecx = arg2
    int32_t ebp_1 = ecx[4]
    
    do
        void* eax_1 = &result_2[4]
        int32_t* esi_1
        
        if (ecx[5] u< 0x10)
            esi_1 = ecx
        else
            esi_1 = *ecx
        
        int32_t ebx_1 = *(eax_1 + 0x10)
        
        if (*(eax_1 + 0x14) u>= 0x10)
            eax_1 = *eax_1
        
        int32_t edx = ebp_1
        
        if (ebx_1 u< ebp_1)
            edx = ebx_1
        
        bool cond:4_1
        
        if (edx != 0)
            int32_t i_1 = edx - 4
            
            if (edx u>= 4)
                int32_t i
                
                do
                    if (*eax_1 != *esi_1)
                        goto label_417f36
                    
                    eax_1 += 4
                    esi_1 = &esi_1[1]
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            int32_t eax_3
            
            if (i_1 == 0xfffffffc)
                eax_3 = 0
            else
            label_417f36:
                ecx.b = *eax_1
                char temp2_1 = *esi_1
                
                if (ecx.b != temp2_1)
                    eax_3 = sbb.d(eax_1, eax_1, ecx.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    eax_3 = 0
                else
                    ecx.b = *(eax_1 + 1)
                    char temp5_1 = *(esi_1 + 1)
                    
                    if (ecx.b != temp5_1)
                        eax_3 = sbb.d(eax_1, eax_1, ecx.b u< temp5_1) | 1
                    else if (i_1 == 0xfffffffe)
                        eax_3 = 0
                    else
                        ecx.b = *(eax_1 + 2)
                        char temp6_1 = *(esi_1 + 2)
                        
                        if (ecx.b != temp6_1)
                            eax_3 = sbb.d(eax_1, eax_1, ecx.b u< temp6_1) | 1
                        else if (i_1 == 0xffffffff)
                            eax_3 = 0
                        else
                            eax_1.b = *(eax_1 + 3)
                            char temp7_1 = *(esi_1 + 3)
                            
                            if (eax_1.b == temp7_1)
                                eax_3 = 0
                            else
                                eax_3 = sbb.d(eax_1, eax_1, eax_1.b u< temp7_1) | 1
            
            cond:4_1 = eax_3 s< 0
            
            if (eax_3 != 0)
                goto label_417f7d
            
            goto label_417f70
        
    label_417f70:
        
        if (ebx_1 u< ebp_1)
            result_2 = result_2[2]
            result = result_1
        else
            int32_t eax_4
            eax_4.b = ebx_1 != ebp_1
            cond:4_1 = eax_4 s< 0
        label_417f7d:
            
            if (cond:4_1)
                result_2 = result_2[2]
                result = result_1
            else
                result = result_2
                result_2 = *result_2
                result_1 = result
        
        ecx = arg2
    while (*(result_2 + 0xd) == 0)

return result
