// 函数: sub_421bc0
// 地址: 0x421bc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t i = 0
void* var_4 = arg1

if (((*(arg1 + 0x28) - *(arg1 + 0x24)) & 0xfffffffc) s> 0)
    do
        void* ecx = arg2[4]
        int32_t* eax_3 = *(arg1 + 0x24) + (i << 2)
        void** eax_5 = *eax_3 + 0xc
        int32_t* esi_1
        
        if (arg2[5] u< 0x10)
            esi_1 = arg2
        else
            esi_1 = *arg2
        
        void* edi_1 = eax_5[4]
        
        if (eax_5[5] u>= 0x10)
            eax_5 = *eax_5
        
        void* edx_1 = ecx
        
        if (edi_1 u< ecx)
            edx_1 = edi_1
        
        if (edx_1 == 0)
            goto label_421c73
        
        void* j_1 = edx_1 - 4
        
        if (edx_1 u>= 4)
            void* j
            
            do
                if (*eax_5 != *esi_1)
                    goto label_421c36
                
                eax_5 = &eax_5[1]
                esi_1 = &esi_1[1]
                j = j_1
                j_1 -= 4
            while (j u>= 4)
        
        int32_t eax_7
        
        if (j_1 == 0xfffffffc)
            eax_7 = 0
        else
        label_421c36:
            ecx.b = *eax_5
            char temp2_1 = *esi_1
            
            if (ecx.b != temp2_1)
                eax_7 = sbb.d(eax_5, eax_5, ecx.b u< temp2_1) | 1
            else if (j_1 == 0xfffffffd)
                eax_7 = 0
            else
                ecx.b = *(eax_5 + 1)
                char temp4_1 = *(esi_1 + 1)
                
                if (ecx.b != temp4_1)
                    eax_7 = sbb.d(eax_5, eax_5, ecx.b u< temp4_1) | 1
                else if (j_1 == 0xfffffffe)
                    eax_7 = 0
                else
                    ecx.b = *(eax_5 + 2)
                    char temp5_1 = *(esi_1 + 2)
                    
                    if (ecx.b != temp5_1)
                        eax_7 = sbb.d(eax_5, eax_5, ecx.b u< temp5_1) | 1
                    else if (j_1 == 0xffffffff)
                        eax_7 = 0
                    else
                        eax_5.b = *(eax_5 + 3)
                        char temp6_1 = *(esi_1 + 3)
                        
                        if (eax_5.b == temp6_1)
                            eax_7 = 0
                        else
                            eax_7 = sbb.d(eax_5, eax_5, eax_5.b u< temp6_1) | 1
        
        if (eax_7 == 0)
            ecx = arg2[4]
        label_421c73:
            
            if (edi_1 u>= ecx)
                int32_t eax_8
                eax_8.b = edi_1 != ecx
                
                if (eax_8 == 0)
                    return *(*(var_4 + 0x24) + (i << 2))
        
        *eax_3
        int32_t result = sub_421bc0(arg2)
        
        if (result != 0)
            return result
        
        arg1 = var_4
        i += 1
    while (i s< (*(arg1 + 0x28) - *(arg1 + 0x24)) s>> 2)

return 0
