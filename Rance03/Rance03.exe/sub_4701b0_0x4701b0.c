// 函数: sub_4701b0
// 地址: 0x4701b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** result = *arg1
void** result_1 = result
void** result_2 = result[1]

if (*(result_2 + 0xd) == 0)
    int32_t* edx = arg2
    int32_t ecx = edx[4]
    int32_t var_4_1 = ecx
    
    while (true)
        void* eax_1 = &result_2[4]
        int32_t ebp_1 = *(eax_1 + 0x10)
        
        if (result_2[9] u>= 0x10)
            eax_1 = *eax_1
        
        int32_t ebx_1 = ecx
        
        if (ecx u< ecx)
            ebx_1 = ecx
        
        int32_t* esi_1
        
        if (edx[5] u< 0x10)
            esi_1 = edx
        else
            esi_1 = *edx
        
        int32_t edx_1 = ebp_1
        
        if (ebx_1 u< ebp_1)
            edx_1 = ebx_1
        
        bool cond:4_1
        
        if (edx_1 != 0)
            int32_t i_1 = edx_1 - 4
            
            if (edx_1 u>= 4)
                int32_t i
                
                do
                    if (*esi_1 != *eax_1)
                        goto label_47022b
                    
                    esi_1 = &esi_1[1]
                    eax_1 += 4
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            int32_t eax_3
            
            if (i_1 == 0xfffffffc)
                eax_3 = 0
            else
            label_47022b:
                ecx.b = *esi_1
                char temp2_1 = *eax_1
                
                if (ecx.b != temp2_1)
                    eax_3 = sbb.d(eax_1, eax_1, ecx.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    eax_3 = 0
                else
                    ecx.b = *(esi_1 + 1)
                    char temp5_1 = *(eax_1 + 1)
                    
                    if (ecx.b != temp5_1)
                        eax_3 = sbb.d(eax_1, eax_1, ecx.b u< temp5_1) | 1
                    else if (i_1 == 0xfffffffe)
                        eax_3 = 0
                    else
                        ecx.b = *(esi_1 + 2)
                        char temp6_1 = *(eax_1 + 2)
                        
                        if (ecx.b != temp6_1)
                            eax_3 = sbb.d(eax_1, eax_1, ecx.b u< temp6_1) | 1
                        else if (i_1 == 0xffffffff)
                            eax_3 = 0
                        else
                            ecx.b = *(esi_1 + 3)
                            char temp7_1 = *(eax_1 + 3)
                            
                            if (ecx.b == temp7_1)
                                eax_3 = 0
                            else
                                eax_3 = sbb.d(eax_1, eax_1, ecx.b u< temp7_1) | 1
            
            cond:4_1 = eax_3 s< 0
            
            if (eax_3 != 0)
                goto label_470272
            
            goto label_470265
        
    label_470265:
        
        if (ebx_1 u< ebp_1)
        label_47027d:
            result = result_2
            result_2 = *result_2
            result_1 = result
        else
            int32_t eax_4
            eax_4.b = ebx_1 != ebp_1
            cond:4_1 = eax_4 s< 0
        label_470272:
            
            if (cond:4_1)
                goto label_47027d
            
            result_2 = result_2[2]
            result = result_1
        
        ecx = var_4_1
        
        if (*(result_2 + 0xd) != 0)
            break
        
        edx = arg2

return result
