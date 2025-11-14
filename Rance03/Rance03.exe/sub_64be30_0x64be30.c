// 函数: sub_64be30
// 地址: 0x64be30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** result = *arg1
void** result_1 = result
void** result_2 = result[1]

if (*(result_2 + 0xd) == 0)
    int32_t* ecx = arg2
    int32_t eax_1 = ecx[4]
    int32_t ebx_1 = ecx[5]
    int32_t var_c_1 = eax_1
    int32_t var_4_1 = ebx_1
    
    do
        int32_t* edx
        
        if (ebx_1 u< 0x10)
            edx = ecx
        else
            edx = *ecx
        
        int32_t ebx_2 = result_2[8]
        int32_t* esi_1
        
        if (result_2[9] u< 0x10)
            esi_1 = &result_2[4]
        else
            esi_1 = result_2[4]
        
        int32_t ecx_1 = eax_1
        
        if (ebx_2 u< eax_1)
            ecx_1 = ebx_2
        
        if (ecx_1 == 0)
            goto label_64bee4
        
        int32_t i_2 = ecx_1 - 4
        
        if (ecx_1 u>= 4)
            int32_t i
            
            do
                if (*esi_1 != *edx)
                    goto label_64bea6
                
                esi_1 = &esi_1[1]
                edx = &edx[1]
                i = i_2
                i_2 -= 4
            while (i u>= 4)
        
        int32_t eax_3
        
        if (i_2 == 0xfffffffc)
            eax_3 = 0
        else
        label_64bea6:
            eax_1.b = *esi_1
            char temp2_1 = *edx
            
            if (eax_1.b != temp2_1)
                eax_3 = sbb.d(eax_1, eax_1, eax_1.b u< temp2_1) | 1
            else if (i_2 == 0xfffffffd)
                eax_3 = 0
            else
                eax_1.b = *(esi_1 + 1)
                char temp5_1 = *(edx + 1)
                
                if (eax_1.b != temp5_1)
                    eax_3 = sbb.d(eax_1, eax_1, eax_1.b u< temp5_1) | 1
                else if (i_2 == 0xfffffffe)
                    eax_3 = 0
                else
                    eax_1.b = *(esi_1 + 2)
                    char temp6_1 = *(edx + 2)
                    
                    if (eax_1.b != temp6_1)
                        eax_3 = sbb.d(eax_1, eax_1, eax_1.b u< temp6_1) | 1
                    else if (i_2 == 0xffffffff)
                        eax_3 = 0
                    else
                        eax_1.b = *(esi_1 + 3)
                        char temp8_1 = *(edx + 3)
                        
                        if (eax_1.b == temp8_1)
                            eax_3 = 0
                        else
                            eax_3 = sbb.d(eax_1, eax_1, eax_1.b u< temp8_1) | 1
        
        bool cond:2_1 = eax_3 s< 0
        
        if (eax_3 != 0)
            goto label_64bef7
        
        eax_1 = var_c_1
    label_64bee4:
        
        if (ebx_2 u< eax_1)
        label_64bfb9:
            ecx = arg2
            result_2 = result_2[2]
            result = result_1
        else
            int32_t eax_4
            eax_4.b = ebx_2 != var_c_1
            cond:2_1 = eax_4 s< 0
        label_64bef7:
            
            if (cond:2_1)
                goto label_64bfb9
            
            void* edx_1
            
            if (result_2[9] u< 0x10)
                edx_1 = &result_2[4]
            else
                edx_1 = result_2[4]
            
            int32_t* esi_2 = arg2
            
            if (var_4_1 u>= 0x10)
                esi_2 = *esi_2
            
            int32_t eax_5 = var_c_1
            int32_t ecx_2 = ebx_2
            
            if (eax_5 u< ebx_2)
                ecx_2 = eax_5
            
            bool cond:5_1
            
            if (ecx_2 != 0)
                int32_t i_3 = ecx_2 - 4
                
                if (ecx_2 u>= 4)
                    int32_t i_1
                    
                    do
                        if (*esi_2 != *edx_1)
                            goto label_64bf46
                        
                        esi_2 = &esi_2[1]
                        edx_1 += 4
                        i_1 = i_3
                        i_3 -= 4
                    while (i_1 u>= 4)
                
                int32_t eax_7
                
                if (i_3 == 0xfffffffc)
                    eax_7 = 0
                else
                label_64bf46:
                    eax_5.b = *esi_2
                    char temp9_1 = *edx_1
                    
                    if (eax_5.b != temp9_1)
                        eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp9_1) | 1
                    else if (i_3 == 0xfffffffd)
                        eax_7 = 0
                    else
                        eax_5.b = *(esi_2 + 1)
                        char temp12_1 = *(edx_1 + 1)
                        
                        if (eax_5.b != temp12_1)
                            eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp12_1) | 1
                        else if (i_3 == 0xfffffffe)
                            eax_7 = 0
                        else
                            eax_5.b = *(esi_2 + 2)
                            char temp13_1 = *(edx_1 + 2)
                            
                            if (eax_5.b != temp13_1)
                                eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp13_1) | 1
                            else if (i_3 == 0xffffffff)
                                eax_7 = 0
                            else
                                eax_5.b = *(esi_2 + 3)
                                char temp14_1 = *(edx_1 + 3)
                                
                                if (eax_5.b == temp14_1)
                                    eax_7 = 0
                                else
                                    eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp14_1) | 1
                
                cond:5_1 = eax_7 s< 0
                
                if (eax_7 != 0)
                    goto label_64bf93
                
                eax_5 = var_c_1
            
            if (eax_5 u< ebx_2)
                ecx = arg2
            label_64bfaf:
                result = result_2
                result_2 = *result_2
                result_1 = result
            else
                int32_t eax_8
                eax_8.b = var_c_1 != ebx_2
                cond:5_1 = eax_8 s< 0
            label_64bf93:
                ecx = arg2
                
                if (cond:5_1)
                    goto label_64bfaf
                
                if (result_2[0xa] s< ecx[6])
                    result_2 = result_2[2]
                    result = result_1
                else
                    result = result_2
                    result_2 = *result_2
                    result_1 = result
        
        eax_1 = var_c_1
        ebx_1 = ecx[5]
    while (*(result_2 + 0xd) == 0)

return result
