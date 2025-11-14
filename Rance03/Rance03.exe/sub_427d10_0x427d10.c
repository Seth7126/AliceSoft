// 函数: sub_427d10
// 地址: 0x427d10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1 + 8
int32_t result = 0
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
int32_t edx_1 = edx s>> 2
int32_t* var_4 = esi

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t* eax_4 = arg2
    void* ebx_1 = *esi
    int32_t ebp_1 = eax_4[4]
    
    while (true)
        int32_t* edx_2
        
        if (eax_4[5] u< 0x10)
            edx_2 = eax_4
        else
            edx_2 = *eax_4
        
        int32_t edi_1 = *(ebx_1 + 0x10)
        void* esi_1
        
        if (*(ebx_1 + 0x14) u< 0x10)
            esi_1 = ebx_1
        else
            esi_1 = *ebx_1
        
        int32_t eax_5 = ebp_1
        
        if (edi_1 u< ebp_1)
            eax_5 = edi_1
        
        if (eax_5 == 0)
        label_427dd0:
            
            if (edi_1 u>= ebp_1)
                int32_t eax_8
                eax_8.b = edi_1 != ebp_1
                
                if (eax_8 == 0)
                    return result
        else
            int32_t i_1 = eax_5 - 4
            
            if (eax_5 u>= 4)
                int32_t i
                
                do
                    if (*esi_1 != *edx_2)
                        goto label_427d96
                    
                    esi_1 += 4
                    edx_2 = &edx_2[1]
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            int32_t eax_7
            
            if (i_1 == 0xfffffffc)
                eax_7 = 0
            else
            label_427d96:
                int32_t ecx_1
                ecx_1.b = *esi_1
                char temp2_1 = *edx_2
                
                if (ecx_1.b != temp2_1)
                    eax_7 = sbb.d(i_1, i_1, ecx_1.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    eax_7 = 0
                else
                    ecx_1.b = *(esi_1 + 1)
                    char temp4_1 = *(edx_2 + 1)
                    
                    if (ecx_1.b != temp4_1)
                        eax_7 = sbb.d(i_1, i_1, ecx_1.b u< temp4_1) | 1
                    else if (i_1 == 0xfffffffe)
                        eax_7 = 0
                    else
                        ecx_1.b = *(esi_1 + 2)
                        char temp5_1 = *(edx_2 + 2)
                        
                        if (ecx_1.b != temp5_1)
                            eax_7 = sbb.d(i_1, i_1, ecx_1.b u< temp5_1) | 1
                        else if (i_1 == 0xffffffff)
                            eax_7 = 0
                        else
                            i_1.b = *(esi_1 + 3)
                            char temp6_1 = *(edx_2 + 3)
                            
                            if (i_1.b == temp6_1)
                                eax_7 = 0
                            else
                                eax_7 = sbb.d(i_1, i_1, i_1.b u< temp6_1) | 1
            
            if (eax_7 == 0)
                goto label_427dd0
        
        esi = var_4
        ebx_1 += 0x18
        int32_t result_1 = result + 1
        result = result_1
        int32_t eax_9
        int32_t edx_3
        edx_3:eax_9 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
        int32_t edx_4 = edx_3 s>> 2
        
        if (result_1 s>= (edx_4 u>> 0x1f) + edx_4)
            break
        
        eax_4 = arg2

sub_421cd0(esi, arg2)
int32_t eax_14
int32_t edx_5
edx_5:eax_14 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
int32_t edx_6 = edx_5 s>> 2
return (edx_6 u>> 0x1f) - 1 + edx_6
