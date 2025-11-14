// 函数: sub_692b40
// 地址: 0x692b40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg3
void* result_1 = result
int32_t i = (arg2 - result) s/ 0x44

if (i s> 0)
    void** esi_2 = arg4 + 0xc
    void** var_4_1 = esi_2
    
    do
        int32_t eax_2
        int32_t edx_3
        edx_3:eax_2 = sx.q(i)
        int32_t i_1 = (eax_2 - edx_3) s>> 1
        void* eax_4 = result + i_1 * 0x44
        void** ecx_3 = eax_4 + 0xc
        int32_t ebp_1 = ecx_3[4]
        void* var_8_1 = eax_4
        
        if (*(eax_4 + 0x20) u>= 0x10)
            ecx_3 = *ecx_3
        
        int32_t ebx = esi_2[4]
        
        if (esi_2[5] u>= 0x10)
            esi_2 = *esi_2
        
        int32_t edx_4 = ebp_1
        
        if (ebx u< ebp_1)
            edx_4 = ebx
        
        bool cond:3_1
        
        if (edx_4 != 0)
            int32_t j_1 = edx_4 - 4
            
            if (edx_4 u>= 4)
                int32_t j
                
                do
                    if (*esi_2 != *ecx_3)
                        goto label_692bcb
                    
                    esi_2 = &esi_2[1]
                    ecx_3 = &ecx_3[1]
                    j = j_1
                    j_1 -= 4
                while (j u>= 4)
            
            int32_t eax_6
            
            if (j_1 == 0xfffffffc)
                eax_6 = 0
            else
            label_692bcb:
                eax_4.b = *esi_2
                char temp1_1 = *ecx_3
                
                if (eax_4.b != temp1_1)
                    eax_6 = sbb.d(eax_4, eax_4, eax_4.b u< temp1_1) | 1
                else if (j_1 == 0xfffffffd)
                    eax_6 = 0
                else
                    eax_4.b = *(esi_2 + 1)
                    char temp4_1 = *(ecx_3 + 1)
                    
                    if (eax_4.b != temp4_1)
                        eax_6 = sbb.d(eax_4, eax_4, eax_4.b u< temp4_1) | 1
                    else if (j_1 == 0xfffffffe)
                        eax_6 = 0
                    else
                        eax_4.b = *(esi_2 + 2)
                        char temp5_1 = *(ecx_3 + 2)
                        
                        if (eax_4.b != temp5_1)
                            eax_6 = sbb.d(eax_4, eax_4, eax_4.b u< temp5_1) | 1
                        else if (j_1 == 0xffffffff)
                            eax_6 = 0
                        else
                            eax_4.b = *(esi_2 + 3)
                            char temp6_1 = *(ecx_3 + 3)
                            
                            if (eax_4.b == temp6_1)
                                eax_6 = 0
                            else
                                eax_6 = sbb.d(eax_4, eax_4, eax_4.b u< temp6_1) | 1
            
            cond:3_1 = eax_6 s< 0
            
            if (eax_6 != 0)
                goto label_692c12
            
            goto label_692c05
        
    label_692c05:
        
        if (ebx u< ebp_1)
            i = i_1
            result = result_1
        else
            int32_t eax_7
            eax_7.b = ebx != ebp_1
            cond:3_1 = eax_7 s< 0
        label_692c12:
            
            if (cond:3_1)
                i = i_1
                result = result_1
            else
                result = var_8_1 + 0x44
                result_1 = result
                i += 0xffffffff - i_1
        
        esi_2 = var_4_1
    while (i s> 0)

return result
