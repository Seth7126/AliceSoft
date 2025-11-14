// 函数: sub_692a20
// 地址: 0x692a20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg3
void* result_1 = result
int32_t i = (arg2 - result) s/ 0x44

if (i s> 0)
    int32_t* ebx_2 = arg4 + 0xc
    int32_t* var_c_1 = ebx_2
    
    do
        int32_t eax_2
        int32_t edx_3
        edx_3:eax_2 = sx.q(i)
        int32_t i_1 = (eax_2 - edx_3) s>> 1
        void* eax_4 = result + i_1 * 0x44
        void** ecx_3 = eax_4 + 0xc
        int32_t* esi
        
        if (ebx_2[5] u< 0x10)
            esi = ebx_2
        else
            esi = *ebx_2
        
        void* ebx_3 = ecx_3[4]
        
        if (ecx_3[5] u>= 0x10)
            ecx_3 = *ecx_3
        
        void* eax_5 = var_c_1[4]
        void* edx_5 = eax_5
        
        if (ebx_3 u< eax_5)
            edx_5 = ebx_3
        
        bool cond:3_1
        
        if (edx_5 != 0)
            void* j_1 = edx_5 - 4
            
            if (edx_5 u>= 4)
                void* j
                
                do
                    if (*ecx_3 != *esi)
                        goto label_692ab6
                    
                    ecx_3 = &ecx_3[1]
                    esi = &esi[1]
                    j = j_1
                    j_1 -= 4
                while (j u>= 4)
            
            int32_t eax_7
            
            if (j_1 == 0xfffffffc)
                eax_7 = 0
            else
            label_692ab6:
                eax_5.b = *ecx_3
                char temp1_1 = *esi
                
                if (eax_5.b != temp1_1)
                    eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp1_1) | 1
                else if (j_1 == 0xfffffffd)
                    eax_7 = 0
                else
                    eax_5.b = *(ecx_3 + 1)
                    char temp4_1 = *(esi + 1)
                    
                    if (eax_5.b != temp4_1)
                        eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp4_1) | 1
                    else if (j_1 == 0xfffffffe)
                        eax_7 = 0
                    else
                        eax_5.b = *(ecx_3 + 2)
                        char temp5_1 = *(esi + 2)
                        
                        if (eax_5.b != temp5_1)
                            eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp5_1) | 1
                        else if (j_1 == 0xffffffff)
                            eax_7 = 0
                        else
                            eax_5.b = *(ecx_3 + 3)
                            char temp6_1 = *(esi + 3)
                            
                            if (eax_5.b == temp6_1)
                                eax_7 = 0
                            else
                                eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp6_1) | 1
            
            cond:3_1 = eax_7 s< 0
            
            if (eax_7 != 0)
                goto label_692b04
            
            goto label_692af4
        
    label_692af4:
        int32_t esi_1 = var_c_1[4]
        
        if (ebx_3 u< esi_1)
        label_692b15:
            result = eax_4 + 0x44
            result_1 = result
            i += 0xffffffff - i_1
        else
            int32_t eax_9
            eax_9.b = ebx_3 != esi_1
            cond:3_1 = eax_9 s< 0
        label_692b04:
            
            if (cond:3_1)
                goto label_692b15
            
            result = result_1
            i = i_1
        
        ebx_2 = var_c_1
    while (i s> 0)

return result
