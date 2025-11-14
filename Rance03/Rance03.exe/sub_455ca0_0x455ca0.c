// 函数: sub_455ca0
// 地址: 0x455ca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = data_75d4d8
int32_t var_4 = 0

if (((*(edx + 0x14) - *(edx + 0x10)) & 0xfffffffc) s> 0)
    char* ecx_1 = arg1
    int32_t* ebp_1 = *(edx + 0x10)
    void* ebx
    ebx.b = *ecx_1
    char var_5_1 = ebx.b
    
    while (true)
        void* eax_2 = *ebp_1 + 8
        void* esi_1
        
        if (ebx.b != 0)
            char* esi_2 = ecx_1
            
            do
                ecx_1.b = *esi_2
                esi_2 = &esi_2[1]
            while (ecx_1.b != 0)
            
            ecx_1 = arg1
            esi_1 = esi_2 - &esi_2[1]
        else
            esi_1 = nullptr
        
        ebx = *(eax_2 + 0x10)
        
        if (*(eax_2 + 0x14) u>= 0x10)
            eax_2 = *eax_2
        
        void* edx_2 = esi_1
        
        if (ebx u< esi_1)
            edx_2 = ebx
        
        if (edx_2 == 0)
        label_455d60:
            
            if (ebx u>= esi_1)
                int32_t eax_5
                eax_5.b = ebx != esi_1
                
                if (eax_5 == 0)
                    eax_5.b = 1
                    return 1
        else
            char* edi_1 = ecx_1
            void* i_1 = edx_2 - 4
            
            if (edx_2 u>= 4)
                void* i
                
                do
                    if (*eax_2 != *edi_1)
                        goto label_455d26
                    
                    eax_2 += 4
                    edi_1 = &edi_1[4]
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            int32_t eax_4
            
            if (i_1 == 0xfffffffc)
                eax_4 = 0
            else
            label_455d26:
                ecx_1.b = *eax_2
                char temp2_1 = *edi_1
                
                if (ecx_1.b != temp2_1)
                    eax_4 = sbb.d(eax_2, eax_2, ecx_1.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    eax_4 = 0
                else
                    ecx_1.b = *(eax_2 + 1)
                    char temp4_1 = edi_1[1]
                    
                    if (ecx_1.b != temp4_1)
                        eax_4 = sbb.d(eax_2, eax_2, ecx_1.b u< temp4_1) | 1
                    else if (i_1 == 0xfffffffe)
                        eax_4 = 0
                    else
                        ecx_1.b = *(eax_2 + 2)
                        char temp5_1 = edi_1[2]
                        
                        if (ecx_1.b != temp5_1)
                            eax_4 = sbb.d(eax_2, eax_2, ecx_1.b u< temp5_1) | 1
                        else if (i_1 == 0xffffffff)
                            eax_4 = 0
                        else
                            eax_2.b = *(eax_2 + 3)
                            char temp6_1 = edi_1[3]
                            
                            if (eax_2.b == temp6_1)
                                eax_4 = 0
                            else
                                eax_4 = sbb.d(eax_2, eax_2, eax_2.b u< temp6_1) | 1
            
            if (eax_4 == 0)
                goto label_455d60
        
        void* edx_3 = data_75d4d8
        ebp_1 = &ebp_1[1]
        int32_t ecx_3 = var_4 + 1
        var_4 = ecx_3
        
        if (ecx_3 s>= (*(edx_3 + 0x14) - *(edx_3 + 0x10)) s>> 2)
            break
        
        ecx_1 = arg1
        ebx.b = var_5_1

int32_t result
result.b = 0
return result
