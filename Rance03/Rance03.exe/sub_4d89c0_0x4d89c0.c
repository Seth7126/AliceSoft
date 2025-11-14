// 函数: sub_4d89c0
// 地址: 0x4d89c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x3e0f83e1, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_3 = edx_2 s>> 5
sub_468ec0(arg2, (edx_3 u>> 0x1f) + edx_3)

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[0x21])
    sub_4d9500(i, arg2)

void* ebx_1 = arg2 + 4
int32_t eax_4
int32_t edx_4
edx_4:eax_4 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x14) - *(arg1 + 0x10))
void* var_8 = ebx_1
int32_t edx_5 = edx_4 s>> 1
int32_t ecx_6 = (edx_5 u>> 0x1f) + edx_5
int32_t edx_6 = *(ebx_1 + 4)
int32_t var_10 = ecx_6
char var_18 = ecx_6.b
int32_t eax_5

if (&var_18 u< edx_6)
    eax_5 = *ebx_1

if (&var_18 u>= edx_6 || eax_5 u> &var_18)
    if (edx_6 == *(ebx_1 + 8))
        sub_403590(ebx_1, 1)
        ecx_6 = var_10
    
    char* eax_7 = *(ebx_1 + 4)
    
    if (eax_7 != 0)
        *eax_7 = ecx_6.b
else
    if (edx_6 == *(ebx_1 + 8))
        sub_403590(ebx_1, 1)
        ecx_6 = var_10
    
    char* edx_7 = *(ebx_1 + 4)
    
    if (edx_7 != 0)
        int32_t eax_6
        eax_6.b = *(&var_18 - eax_5 + *ebx_1)
        *edx_7 = eax_6.b

*(ebx_1 + 4) += 1
int32_t edx_8 = *(ebx_1 + 4)
uint32_t eax_9 = ecx_6 u>> 8
char var_17 = eax_9.b
int32_t edi_1

if (&var_17 u< edx_8)
    edi_1 = *ebx_1

char* edx_9

if (&var_17 u>= edx_8 || edi_1 u> &var_17)
    if (edx_8 == *(ebx_1 + 8))
        sub_403590(ebx_1, 1)
        ecx_6 = var_10
    
    edx_9 = *(ebx_1 + 4)
    
    if (edx_9 != 0)
        *edx_9 = eax_9.b
else
    if (edx_8 == *(ebx_1 + 8))
        sub_403590(ebx_1, 1)
        ecx_6 = var_10
    
    edx_9 = *(ebx_1 + 4)
    
    if (edx_9 != 0)
        eax_9.b = *(&var_17 - edi_1 + *ebx_1)
        *edx_9 = eax_9.b
*(ebx_1 + 4) += 1
int32_t edx_10 = *(ebx_1 + 4)
uint32_t eax_11 = ecx_6 u>> 0x10
char var_16 = eax_11.b
int32_t edi_2

if (&var_16 u< edx_10)
    edi_2 = *ebx_1

char* edx_11

if (&var_16 u>= edx_10 || edi_2 u> &var_16)
    if (edx_10 == *(ebx_1 + 8))
        sub_403590(ebx_1, 1)
        ecx_6 = var_10
    
    edx_11 = *(ebx_1 + 4)
    
    if (edx_11 != 0)
        *edx_11 = eax_11.b
else
    if (edx_10 == *(ebx_1 + 8))
        sub_403590(ebx_1, 1)
        ecx_6 = var_10
    
    edx_11 = *(ebx_1 + 4)
    
    if (edx_11 != 0)
        eax_11.b = *(&var_16 - edi_2 + *ebx_1)
        *edx_11 = eax_11.b
*(ebx_1 + 4) += 1
char* result = *(ebx_1 + 4)
uint32_t ecx_13 = ecx_6 u>> 0x18
char var_15 = ecx_13.b
int32_t edx_12

if (&var_15 u< result)
    edx_12 = *ebx_1

if (&var_15 u>= result || edx_12 u> &var_15)
    if (result == *(ebx_1 + 8))
        sub_403590(ebx_1, 1)
    
    result = *(ebx_1 + 4)
    
    if (result != 0)
        *result = ecx_13.b
else
    if (result == *(ebx_1 + 8))
        result = sub_403590(ebx_1, 1)
    
    char* ecx_15 = *(ebx_1 + 4)
    
    if (ecx_15 != 0)
        result.b = *(&var_15 - edx_12 + *ebx_1)
        *ecx_15 = result.b

*(ebx_1 + 4) += 1
int32_t* edi_3 = *(arg1 + 0x10)

if (edi_3 != *(arg1 + 0x14))
    while (true)
        int32_t eax_12
        int32_t edx_13
        edx_13:eax_12 = muls.dp.d(0x3e0f83e1, edi_3[1] - *edi_3)
        int32_t ecx_19 = *(ebx_1 + 4)
        int32_t edx_14 = edx_13 s>> 5
        int32_t eax_15 = (edx_14 u>> 0x1f) + edx_14
        char var_14 = eax_15.b
        int32_t esi_4
        
        if (&var_14 u< ecx_19)
            esi_4 = *ebx_1
        
        if (&var_14 u>= ecx_19 || esi_4 u> &var_14)
            int32_t edx_21 = *(ebx_1 + 8)
            
            if (ecx_19 != edx_21 || edx_21 - ecx_19 u>= 1)
            label_4d8cf3:
                char* eax_37 = *(ebx_1 + 4)
                int32_t ecx_24
                
                if (eax_37 == 0)
                label_4d8c41:
                    ecx_24 = eax_15
                else
                    ecx_24 = eax_15
                    *eax_37 = ecx_24.b
                
                *(ebx_1 + 4) += 1
                int32_t ecx_25 = *(ebx_1 + 4)
                uint32_t eax_24 = ecx_24 u>> 8
                char var_13 = eax_24.b
                int32_t esi_7
                
                if (&var_13 u< ecx_25)
                    esi_7 = *ebx_1
                
                char* ecx_35
                
                if (&var_13 u>= ecx_25 || esi_7 u> &var_13)
                    int32_t edx_24 = *(ebx_1 + 8)
                    
                    if (ecx_25 != edx_24 || edx_24 - ecx_25 u>= 1)
                    label_4d8d6f:
                        ecx_35 = *(ebx_1 + 4)
                        
                        if (ecx_35 == 0)
                            goto label_4d8d78
                        
                        goto label_4d8d76
                    
                    int32_t esi_13 = *ebx_1
                    
                    if (esi_13 - ecx_25 - 1 u>= 1)
                        int32_t edx_25 = edx_24 - esi_13
                        uint32_t esi_15 = edx_25 u>> 1
                        uint32_t edx_26
                        
                        if (0xffffffff - esi_15 u>= edx_25)
                            edx_26 = edx_25 + esi_15
                        else
                            edx_26 = 0
                        
                        if (edx_26 u< ecx_25 - esi_13 + 1)
                            edx_26 = ecx_25 - esi_13 + 1
                        
                        sub_403640(ebx_1, edx_26)
                        goto label_4d8d6f
                else
                    int32_t edx_18 = *(ebx_1 + 8)
                    
                    if (ecx_25 != edx_18 || edx_18 - ecx_25 u>= 1)
                    label_4d8d18:
                        ecx_35 = *(ebx_1 + 4)
                        
                        if (ecx_35 == 0)
                            goto label_4d8d78
                        
                        eax_24.b = *(*ebx_1 + &var_13 - esi_7)
                    label_4d8d76:
                        *ecx_35 = eax_24.b
                    label_4d8d78:
                        *(ebx_1 + 4) += 1
                        int32_t ecx_36 = *(ebx_1 + 4)
                        uint32_t eax_45 = eax_15 u>> 0x10
                        char var_12 = eax_45.b
                        int32_t esi_16
                        
                        if (&var_12 u< ecx_36)
                            esi_16 = *ebx_1
                        
                        char* ecx_43
                        
                        if (&var_12 u>= ecx_36 || esi_16 u> &var_12)
                            int32_t edx_30 = *(ebx_1 + 8)
                            
                            if (ecx_36 != edx_30 || edx_30 - ecx_36 u>= 1)
                            label_4d8e39:
                                ecx_43 = *(ebx_1 + 4)
                                
                                if (ecx_43 == 0)
                                    goto label_4d8e46
                                
                                goto label_4d8e40
                            
                            int32_t esi_19 = *ebx_1
                            
                            if (esi_19 - ecx_36 - 1 u>= 1)
                                int32_t edx_31 = edx_30 - esi_19
                                uint32_t esi_21 = edx_31 u>> 1
                                uint32_t edx_32
                                
                                if (0xffffffff - esi_21 u>= edx_31)
                                    edx_32 = edx_31 + esi_21
                                else
                                    edx_32 = 0
                                
                                if (edx_32 u< ecx_36 - esi_19 + 1)
                                    edx_32 = ecx_36 - esi_19 + 1
                                
                                sub_403640(ebx_1, edx_32)
                                goto label_4d8e39
                        else
                            int32_t edx_27 = *(ebx_1 + 8)
                            
                            if (ecx_36 != edx_27 || edx_27 - ecx_36 u>= 1)
                            label_4d8de2:
                                ecx_43 = *(ebx_1 + 4)
                                
                                if (ecx_43 == 0)
                                    goto label_4d8e46
                                
                                eax_45.b = *(*ebx_1 + &var_12 - esi_16)
                            label_4d8e40:
                                *ecx_43 = eax_45.b
                            label_4d8e46:
                                *(ebx_1 + 4) += 1
                                int32_t ecx_44 = *(ebx_1 + 4)
                                uint8_t eax_59 = (eax_15 u>> 0x18).b
                                uint8_t var_11 = eax_59
                                int32_t esi_22
                                
                                if (&var_11 u< ecx_44)
                                    esi_22 = *ebx_1
                                
                                if (&var_11 u>= ecx_44 || esi_22 u> &var_11)
                                    int32_t edx_36 = *(ebx_1 + 8)
                                    
                                    if (ecx_44 != edx_36 || edx_36 - ecx_44 u>= 1)
                                    label_4d8efd:
                                        uint8_t* eax_73 = *(ebx_1 + 4)
                                        
                                        if (eax_73 != 0)
                                            *eax_73 = eax_59
                                        
                                    label_4d8f0a:
                                        *(ebx_1 + 4) += 1
                                        int32_t* i_1 = *edi_3
                                        
                                        if (i_1 != edi_3[1])
                                            do
                                                sub_4d9500(i_1, arg2)
                                                i_1 = &i_1[0x21]
                                            while (i_1 != edi_3[1])
                                            
                                            ebx_1 = var_8
                                        
                                        result = arg1
                                        edi_3 = &edi_3[3]
                                        
                                        if (edi_3 == *(result + 0x14))
                                            break
                                        
                                        continue
                                    else
                                        int32_t esi_25 = *ebx_1
                                        
                                        if (esi_25 - ecx_44 - 1 u>= 1)
                                            int32_t edx_37 = edx_36 - esi_25
                                            uint32_t esi_27 = edx_37 u>> 1
                                            uint32_t edx_38
                                            
                                            if (0xffffffff - esi_27 u>= edx_37)
                                                edx_38 = edx_37 + esi_27
                                            else
                                                edx_38 = 0
                                            
                                            if (edx_38 u< ecx_44 - esi_25 + 1)
                                                edx_38 = ecx_44 - esi_25 + 1
                                            
                                            sub_403640(ebx_1, edx_38)
                                            goto label_4d8efd
                                else
                                    int32_t edx_33 = *(ebx_1 + 8)
                                    
                                    if (ecx_44 != edx_33 || edx_33 - ecx_44 u>= 1)
                                    label_4d8eac:
                                        char* ecx_48 = *(ebx_1 + 4)
                                        
                                        if (ecx_48 != 0)
                                            char* eax_66
                                            eax_66.b = *(*ebx_1 + &var_11 - esi_22)
                                            *ecx_48 = eax_66.b
                                        
                                        goto label_4d8f0a
                                    
                                    if (esi_22 - ecx_44 - 1 u>= 1)
                                        int32_t edx_34 = edx_33 - esi_22
                                        uint32_t esi_24 = edx_34 u>> 1
                                        uint32_t edx_35
                                        
                                        if (0xffffffff - esi_24 u>= edx_34)
                                            edx_35 = edx_34 + esi_24
                                        else
                                            edx_35 = 0
                                        
                                        if (edx_35 u< ecx_44 - esi_22 + 1)
                                            edx_35 = ecx_44 - esi_22 + 1
                                        
                                        sub_403640(ebx_1, edx_35)
                                        goto label_4d8eac
                            else if (esi_16 - ecx_36 - 1 u>= 1)
                                int32_t edx_28 = edx_27 - esi_16
                                uint32_t esi_18 = edx_28 u>> 1
                                uint32_t edx_29
                                
                                if (0xffffffff - esi_18 u>= edx_28)
                                    edx_29 = edx_28 + esi_18
                                else
                                    edx_29 = 0
                                
                                if (edx_29 u< ecx_36 - esi_16 + 1)
                                    edx_29 = ecx_36 - esi_16 + 1
                                
                                sub_403640(ebx_1, edx_29)
                                goto label_4d8de2
                    else if (esi_7 - ecx_25 - 1 u>= 1)
                        int32_t edx_19 = edx_18 - esi_7
                        uint32_t esi_9 = edx_19 u>> 1
                        uint32_t edx_20
                        
                        if (0xffffffff - esi_9 u>= edx_19)
                            edx_20 = edx_19 + esi_9
                        else
                            edx_20 = 0
                        
                        if (edx_20 u< ecx_25 - esi_7 + 1)
                            edx_20 = ecx_25 - esi_7 + 1
                        
                        sub_403640(ebx_1, edx_20)
                        goto label_4d8d18
            else
                int32_t esi_10 = *ebx_1
                
                if (esi_10 - ecx_19 - 1 u>= 1)
                    int32_t edx_22 = edx_21 - esi_10
                    uint32_t esi_12 = edx_22 u>> 1
                    uint32_t edx_23
                    
                    if (0xffffffff - esi_12 u>= edx_22)
                        edx_23 = edx_22 + esi_12
                    else
                        edx_23 = 0
                    
                    if (edx_23 u< ecx_19 - esi_10 + 1)
                        edx_23 = ecx_19 - esi_10 + 1
                    
                    sub_403640(ebx_1, edx_23)
                    goto label_4d8cf3
        else
            int32_t edx_15 = *(ebx_1 + 8)
            
            if (ecx_19 != edx_15 || edx_15 - ecx_19 u>= 1)
            label_4d8c33:
                char* ecx_23 = *(ebx_1 + 4)
                
                if (ecx_23 != 0)
                    char* eax_22
                    eax_22.b = *(*ebx_1 + &var_14 - esi_4)
                    *ecx_23 = eax_22.b
                
                goto label_4d8c41
            
            if (esi_4 - ecx_19 - 1 u>= 1)
                int32_t edx_16 = edx_15 - esi_4
                uint32_t esi_6 = edx_16 u>> 1
                uint32_t edx_17
                
                if (0xffffffff - esi_6 u>= edx_16)
                    edx_17 = edx_16 + esi_6
                else
                    edx_17 = 0
                
                if (edx_17 u< ecx_19 - esi_4 + 1)
                    edx_17 = ecx_19 - esi_4 + 1
                
                sub_403640(ebx_1, edx_17)
                goto label_4d8c33
        
        sub_69a551("vector<T> too long")
        noreturn

return result
