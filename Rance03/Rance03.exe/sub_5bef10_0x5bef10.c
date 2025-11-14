// 函数: sub_5bef10
// 地址: 0x5bef10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebp = arg1 + 0xa8
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x38e38e39, *(arg1 + 0x58) - *(arg1 + 0x54))
int32_t edx_3 = edx_2 s>> 4
int32_t i_7 = (edx_3 u>> 0x1f) + edx_3
int32_t eax_1
int32_t edx_4
edx_4:eax_1 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0x7c) - *(arg1 + 0x78))
int32_t edx_5 = edx_4 s>> 3
ebp[1] = *ebp
int32_t i_4 = (edx_5 u>> 0x1f) + edx_5
sub_5b6170(ebp, i_7 + 1 + i_4)
int32_t i_8 = 0
int32_t i_6 = 0

if (i_7 s> 0)
    int32_t i_5 = i_7
    int32_t edx_6 = 0
    int32_t esi_2 = 0
    i_6 = i_5
    int32_t i
    
    do
        edx_6 += 0x10
        int32_t ecx_4 = *(arg1 + 0x54) + esi_2
        esi_2 += 0x48
        *(edx_6 + *ebp - 8) = ecx_4
        *(edx_6 + *ebp - 0x10) = 0
        i = i_5
        i_5 -= 1
    while (i != 1)
    i_8 = i_6

*(arg1 + 0x104) = i_8

if (i_4 s> 0)
    int32_t esi_3 = 0
    int32_t edx_8 = i_8 << 4
    i_6 = i_8 + i_4
    int32_t i_1
    
    do
        edx_8 += 0x10
        int32_t ecx_6 = *(arg1 + 0x78) + esi_3
        esi_3 += 0x2c
        *(edx_8 + *ebp - 0xc) = ecx_6
        *(edx_8 + *ebp - 0x10) = 1
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    i_8 = i_6

int32_t edx_10 = i_8 * 2
*(*ebp + (edx_10 << 3) + 0xc) = arg1 + 0x90
*(*ebp + (edx_10 << 3)) = 2
*(arg1 + 0x108) = i_6
void* edi_1 = arg1 + 0xe4
void* var_14 = edi_1
sub_418220(*(*edi_1 + 4))
void* eax_14 = *edi_1
int32_t ecx_9 = 0
int32_t var_c_1 = 0
*(eax_14 + 4) = eax_14
int32_t* eax_15 = *edi_1
*eax_15 = eax_15
void* eax_16 = *edi_1
*(eax_16 + 8) = eax_16
*(edi_1 + 4) = 0
int32_t result = ebp[1] - *ebp

if ((result & 0xfffffff0) s> 0)
    int32_t edx_11 = 0
    int32_t var_8_1 = 0
    
    do
        int32_t* ebx_2 = *(edx_11 + *ebp + 4)
        
        if (ebx_2 != 0)
            void** eax_19
            int32_t* ecx_11
            eax_19, ecx_11 = sub_417ed0(edi_1, ebx_2)
            void** esi_4 = eax_19
            
            if (esi_4 == *edi_1)
                goto label_5bf113
            
            bool cond:0_1 = esi_4[9] u< 0x10
            void* eax_20 = &esi_4[4]
            int32_t* edx_12 = *(eax_20 + 0x10)
            int32_t* var_10 = edx_12
            
            if (not(cond:0_1))
                eax_20 = *eax_20
            
            ecx_11 = ebx_2[4]
            int32_t* edi_2
            
            if (ebx_2[5] u< 0x10)
                edi_2 = ebx_2
            else
                edi_2 = *ebx_2
            
            if (ecx_11 u< var_10)
                edx_12 = ecx_11
            
            if (edx_12 == 0)
                goto label_5bf0f6
            
            void* i_3 = edx_12 - 4
            
            if (edx_12 u>= 4)
                void* i_2
                
                do
                    ecx_11 = *edi_2
                    
                    if (ecx_11 != *eax_20)
                        goto label_5bf0b9
                    
                    edi_2 = &edi_2[1]
                    eax_20 += 4
                    i_2 = i_3
                    i_3 -= 4
                while (i_2 u>= 4)
            
            int32_t eax_22
            
            if (i_3 == 0xfffffffc)
                eax_22 = 0
            else
            label_5bf0b9:
                ecx_11.b = *edi_2
                char temp3_1 = *eax_20
                
                if (ecx_11.b != temp3_1)
                    eax_22 = sbb.d(eax_20, eax_20, ecx_11.b u< temp3_1) | 1
                else if (i_3 == 0xfffffffd)
                    eax_22 = 0
                else
                    ecx_11.b = *(edi_2 + 1)
                    char temp6_1 = *(eax_20 + 1)
                    
                    if (ecx_11.b != temp6_1)
                        eax_22 = sbb.d(eax_20, eax_20, ecx_11.b u< temp6_1) | 1
                    else if (i_3 == 0xfffffffe)
                        eax_22 = 0
                    else
                        ecx_11.b = *(edi_2 + 2)
                        char temp7_1 = *(eax_20 + 2)
                        
                        if (ecx_11.b != temp7_1)
                            eax_22 = sbb.d(eax_20, eax_20, ecx_11.b u< temp7_1) | 1
                        else if (i_3 == 0xffffffff)
                            eax_22 = 0
                        else
                            ecx_11.b = *(edi_2 + 3)
                            char temp8_1 = *(eax_20 + 3)
                            
                            if (ecx_11.b == temp8_1)
                                eax_22 = 0
                            else
                                eax_22 = sbb.d(eax_20, eax_20, ecx_11.b u< temp8_1) | 1
            
            bool cond:2_1 = eax_22 s>= 0
            
            if (eax_22 != 0)
                goto label_5bf107
            
            ecx_11 = ebx_2[4]
        label_5bf0f6:
            int32_t* edx_13 = var_10
            
            if (ecx_11 u< edx_13)
                edi_1 = var_14
            label_5bf113:
                int32_t* var_28_3 = ecx_11
                var_10 = ebx_2
                int32_t** var_2c_1 = &var_10
                int32_t* eax_24 = sub_427ff0(ecx_11)
                void** var_4
                sub_4280a0(edi_1, &var_4, esi_4, &eax_24[4], eax_24)
                esi_4 = var_4
            else
                int32_t eax_23
                eax_23.b = ecx_11 != edx_13
                cond:2_1 = eax_23 s>= 0
            label_5bf107:
                edi_1 = var_14
                
                if (not(cond:2_1))
                    goto label_5bf113
            
            ecx_9 = var_c_1
            edx_11 = var_8_1
            esi_4[0xa] = ecx_9
        
        ecx_9 += 1
        edx_11 += 0x10
        result = (ebp[1] - *ebp) s>> 4
        var_c_1 = ecx_9
        var_8_1 = edx_11
    while (ecx_9 s< result)

return result
