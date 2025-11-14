// 函数: sub_4be0c0
// 地址: 0x4be0c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_468ec0(arg2, (*(arg1 + 8) - *(arg1 + 4)) s/ 0x5c)

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[0x17])
    sub_4bed30(i, arg2)

int32_t eax_4
int32_t edx_3
edx_3:eax_4 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x14) - *(arg1 + 0x10))
int32_t edx_4 = edx_3 s>> 1
int32_t ecx_6 = (edx_4 u>> 0x1f) + edx_4
int32_t edx_5 = *(arg2 + 8)
int32_t var_10 = ecx_6
char var_18 = ecx_6.b
int32_t eax_5

if (&var_18 u< edx_5)
    eax_5 = *(arg2 + 4)

if (&var_18 u>= edx_5 || eax_5 u> &var_18)
    if (edx_5 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
        ecx_6 = var_10
    
    char* eax_7 = *(arg2 + 8)
    
    if (eax_7 != 0)
        *eax_7 = ecx_6.b
else
    if (edx_5 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
        ecx_6 = var_10
    
    char* edx_6 = *(arg2 + 8)
    
    if (edx_6 != 0)
        int32_t eax_6
        eax_6.b = *(&var_18 - eax_5 + *(arg2 + 4))
        *edx_6 = eax_6.b

*(arg2 + 8) += 1
int32_t edx_7 = *(arg2 + 8)
uint32_t eax_9 = ecx_6 u>> 8
char var_17 = eax_9.b
int32_t edi_1

if (&var_17 u< edx_7)
    edi_1 = *(arg2 + 4)

char* edx_8

if (&var_17 u>= edx_7 || edi_1 u> &var_17)
    if (edx_7 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
        ecx_6 = var_10
    
    edx_8 = *(arg2 + 8)
    
    if (edx_8 != 0)
        *edx_8 = eax_9.b
else
    if (edx_7 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
        ecx_6 = var_10
    
    edx_8 = *(arg2 + 8)
    
    if (edx_8 != 0)
        eax_9.b = *(&var_17 - edi_1 + *(arg2 + 4))
        *edx_8 = eax_9.b
*(arg2 + 8) += 1
int32_t edx_9 = *(arg2 + 8)
uint32_t eax_11 = ecx_6 u>> 0x10
char var_16 = eax_11.b
int32_t edi_2

if (&var_16 u< edx_9)
    edi_2 = *(arg2 + 4)

char* edx_10

if (&var_16 u>= edx_9 || edi_2 u> &var_16)
    if (edx_9 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
        ecx_6 = var_10
    
    edx_10 = *(arg2 + 8)
    
    if (edx_10 != 0)
        *edx_10 = eax_11.b
else
    if (edx_9 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
        ecx_6 = var_10
    
    edx_10 = *(arg2 + 8)
    
    if (edx_10 != 0)
        eax_11.b = *(&var_16 - edi_2 + *(arg2 + 4))
        *edx_10 = eax_11.b
*(arg2 + 8) += 1
char* result = *(arg2 + 8)
uint32_t ecx_13 = ecx_6 u>> 0x18
char var_15 = ecx_13.b
int32_t edx_11

if (&var_15 u< result)
    edx_11 = *(arg2 + 4)

if (&var_15 u>= result || edx_11 u> &var_15)
    if (result == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    result = *(arg2 + 8)
    
    if (result != 0)
        *result = ecx_13.b
else
    if (result == *(arg2 + 0xc))
        result = sub_403590(arg2 + 4, 1)
    
    char* ecx_15 = *(arg2 + 8)
    
    if (ecx_15 != 0)
        result.b = *(&var_15 - edx_11 + *(arg2 + 4))
        *ecx_15 = result.b

*(arg2 + 8) += 1
int32_t* edi_3 = *(arg1 + 0x10)

if (edi_3 != *(arg1 + 0x14))
    void* ebx_2 = arg2 + 4
    
    while (true)
        int32_t ecx_19 = *(ebx_2 + 4)
        int32_t eax_15 = (edi_3[1] - *edi_3) s/ 0x5c
        char var_14 = eax_15.b
        int32_t esi_6
        
        if (&var_14 u< ecx_19)
            esi_6 = *ebx_2
        
        if (&var_14 u>= ecx_19 || esi_6 u> &var_14)
            int32_t edx_21 = *(ebx_2 + 8)
            
            if (ecx_19 != edx_21 || edx_21 - ecx_19 u>= 1)
            label_4be400:
                char* eax_37 = *(ebx_2 + 4)
                int32_t ecx_24
                
                if (eax_37 == 0)
                label_4be34e:
                    ecx_24 = eax_15
                else
                    ecx_24 = eax_15
                    *eax_37 = ecx_24.b
                
                *(ebx_2 + 4) += 1
                int32_t ecx_25 = *(ebx_2 + 4)
                uint32_t eax_24 = ecx_24 u>> 8
                char var_13 = eax_24.b
                int32_t esi_9
                
                if (&var_13 u< ecx_25)
                    esi_9 = *ebx_2
                
                char* ecx_35
                
                if (&var_13 u>= ecx_25 || esi_9 u> &var_13)
                    int32_t edx_24 = *(ebx_2 + 8)
                    
                    if (ecx_25 != edx_24 || edx_24 - ecx_25 u>= 1)
                    label_4be47c:
                        ecx_35 = *(ebx_2 + 4)
                        
                        if (ecx_35 == 0)
                            goto label_4be485
                        
                        goto label_4be483
                    
                    int32_t esi_15 = *ebx_2
                    
                    if (esi_15 - ecx_25 - 1 u>= 1)
                        int32_t edx_25 = edx_24 - esi_15
                        uint32_t esi_17 = edx_25 u>> 1
                        uint32_t edx_26
                        
                        if (0xffffffff - esi_17 u>= edx_25)
                            edx_26 = edx_25 + esi_17
                        else
                            edx_26 = 0
                        
                        if (edx_26 u< ecx_25 - esi_15 + 1)
                            edx_26 = ecx_25 - esi_15 + 1
                        
                        sub_403640(ebx_2, edx_26)
                        goto label_4be47c
                else
                    int32_t edx_18 = *(ebx_2 + 8)
                    
                    if (ecx_25 != edx_18 || edx_18 - ecx_25 u>= 1)
                    label_4be425:
                        ecx_35 = *(ebx_2 + 4)
                        
                        if (ecx_35 == 0)
                            goto label_4be485
                        
                        eax_24.b = *(*ebx_2 + &var_13 - esi_9)
                    label_4be483:
                        *ecx_35 = eax_24.b
                    label_4be485:
                        *(ebx_2 + 4) += 1
                        int32_t ecx_36 = *(ebx_2 + 4)
                        uint32_t eax_45 = eax_15 u>> 0x10
                        char var_12 = eax_45.b
                        int32_t esi_18
                        
                        if (&var_12 u< ecx_36)
                            esi_18 = *ebx_2
                        
                        char* ecx_43
                        
                        if (&var_12 u>= ecx_36 || esi_18 u> &var_12)
                            int32_t edx_30 = *(ebx_2 + 8)
                            
                            if (ecx_36 != edx_30 || edx_30 - ecx_36 u>= 1)
                            label_4be546:
                                ecx_43 = *(ebx_2 + 4)
                                
                                if (ecx_43 == 0)
                                    goto label_4be553
                                
                                goto label_4be54d
                            
                            int32_t esi_21 = *ebx_2
                            
                            if (esi_21 - ecx_36 - 1 u>= 1)
                                int32_t edx_31 = edx_30 - esi_21
                                uint32_t esi_23 = edx_31 u>> 1
                                uint32_t edx_32
                                
                                if (0xffffffff - esi_23 u>= edx_31)
                                    edx_32 = edx_31 + esi_23
                                else
                                    edx_32 = 0
                                
                                if (edx_32 u< ecx_36 - esi_21 + 1)
                                    edx_32 = ecx_36 - esi_21 + 1
                                
                                sub_403640(ebx_2, edx_32)
                                goto label_4be546
                        else
                            int32_t edx_27 = *(ebx_2 + 8)
                            
                            if (ecx_36 != edx_27 || edx_27 - ecx_36 u>= 1)
                            label_4be4ef:
                                ecx_43 = *(ebx_2 + 4)
                                
                                if (ecx_43 == 0)
                                    goto label_4be553
                                
                                eax_45.b = *(*ebx_2 + &var_12 - esi_18)
                            label_4be54d:
                                *ecx_43 = eax_45.b
                            label_4be553:
                                *(ebx_2 + 4) += 1
                                int32_t ecx_44 = *(ebx_2 + 4)
                                uint8_t eax_59 = (eax_15 u>> 0x18).b
                                uint8_t var_11 = eax_59
                                int32_t esi_24
                                
                                if (&var_11 u< ecx_44)
                                    esi_24 = *ebx_2
                                
                                if (&var_11 u>= ecx_44 || esi_24 u> &var_11)
                                    int32_t edx_36 = *(ebx_2 + 8)
                                    
                                    if (ecx_44 != edx_36 || edx_36 - ecx_44 u>= 1)
                                    label_4be60a:
                                        uint8_t* eax_73 = *(ebx_2 + 4)
                                        
                                        if (eax_73 != 0)
                                            *eax_73 = eax_59
                                        
                                    label_4be617:
                                        *(ebx_2 + 4) += 1
                                        int32_t* i_1 = *edi_3
                                        
                                        if (i_1 != edi_3[1])
                                            do
                                                sub_4bed30(i_1, arg2)
                                                i_1 = &i_1[0x17]
                                            while (i_1 != edi_3[1])
                                            
                                            ebx_2 = arg2 + 4
                                        
                                        result = arg1
                                        edi_3 = &edi_3[3]
                                        
                                        if (edi_3 == *(result + 0x14))
                                            break
                                        
                                        continue
                                    else
                                        int32_t esi_27 = *ebx_2
                                        
                                        if (esi_27 - ecx_44 - 1 u>= 1)
                                            int32_t edx_37 = edx_36 - esi_27
                                            uint32_t esi_29 = edx_37 u>> 1
                                            uint32_t edx_38
                                            
                                            if (0xffffffff - esi_29 u>= edx_37)
                                                edx_38 = edx_37 + esi_29
                                            else
                                                edx_38 = 0
                                            
                                            if (edx_38 u< ecx_44 - esi_27 + 1)
                                                edx_38 = ecx_44 - esi_27 + 1
                                            
                                            sub_403640(ebx_2, edx_38)
                                            goto label_4be60a
                                else
                                    int32_t edx_33 = *(ebx_2 + 8)
                                    
                                    if (ecx_44 != edx_33 || edx_33 - ecx_44 u>= 1)
                                    label_4be5b9:
                                        char* ecx_48 = *(ebx_2 + 4)
                                        
                                        if (ecx_48 != 0)
                                            char* eax_66
                                            eax_66.b = *(*ebx_2 + &var_11 - esi_24)
                                            *ecx_48 = eax_66.b
                                        
                                        goto label_4be617
                                    
                                    if (esi_24 - ecx_44 - 1 u>= 1)
                                        int32_t edx_34 = edx_33 - esi_24
                                        uint32_t esi_26 = edx_34 u>> 1
                                        uint32_t edx_35
                                        
                                        if (0xffffffff - esi_26 u>= edx_34)
                                            edx_35 = edx_34 + esi_26
                                        else
                                            edx_35 = 0
                                        
                                        if (edx_35 u< ecx_44 - esi_24 + 1)
                                            edx_35 = ecx_44 - esi_24 + 1
                                        
                                        sub_403640(ebx_2, edx_35)
                                        goto label_4be5b9
                            else if (esi_18 - ecx_36 - 1 u>= 1)
                                int32_t edx_28 = edx_27 - esi_18
                                uint32_t esi_20 = edx_28 u>> 1
                                uint32_t edx_29
                                
                                if (0xffffffff - esi_20 u>= edx_28)
                                    edx_29 = edx_28 + esi_20
                                else
                                    edx_29 = 0
                                
                                if (edx_29 u< ecx_36 - esi_18 + 1)
                                    edx_29 = ecx_36 - esi_18 + 1
                                
                                sub_403640(ebx_2, edx_29)
                                goto label_4be4ef
                    else if (esi_9 - ecx_25 - 1 u>= 1)
                        int32_t edx_19 = edx_18 - esi_9
                        uint32_t esi_11 = edx_19 u>> 1
                        uint32_t edx_20
                        
                        if (0xffffffff - esi_11 u>= edx_19)
                            edx_20 = edx_19 + esi_11
                        else
                            edx_20 = 0
                        
                        if (edx_20 u< ecx_25 - esi_9 + 1)
                            edx_20 = ecx_25 - esi_9 + 1
                        
                        sub_403640(ebx_2, edx_20)
                        goto label_4be425
            else
                int32_t esi_12 = *ebx_2
                
                if (esi_12 - ecx_19 - 1 u>= 1)
                    int32_t edx_22 = edx_21 - esi_12
                    uint32_t esi_14 = edx_22 u>> 1
                    uint32_t edx_23
                    
                    if (0xffffffff - esi_14 u>= edx_22)
                        edx_23 = edx_22 + esi_14
                    else
                        edx_23 = 0
                    
                    if (edx_23 u< ecx_19 - esi_12 + 1)
                        edx_23 = ecx_19 - esi_12 + 1
                    
                    sub_403640(ebx_2, edx_23)
                    goto label_4be400
        else
            int32_t edx_15 = *(ebx_2 + 8)
            
            if (ecx_19 != edx_15 || edx_15 - ecx_19 u>= 1)
            label_4be340:
                char* ecx_23 = *(ebx_2 + 4)
                
                if (ecx_23 != 0)
                    char* eax_22
                    eax_22.b = *(*ebx_2 + &var_14 - esi_6)
                    *ecx_23 = eax_22.b
                
                goto label_4be34e
            
            if (esi_6 - ecx_19 - 1 u>= 1)
                int32_t edx_16 = edx_15 - esi_6
                uint32_t esi_8 = edx_16 u>> 1
                uint32_t edx_17
                
                if (0xffffffff - esi_8 u>= edx_16)
                    edx_17 = edx_16 + esi_8
                else
                    edx_17 = 0
                
                if (edx_17 u< ecx_19 - esi_6 + 1)
                    edx_17 = ecx_19 - esi_6 + 1
                
                sub_403640(ebx_2, edx_17)
                goto label_4be340
        
        sub_69a551("vector<T> too long")
        noreturn

return result
