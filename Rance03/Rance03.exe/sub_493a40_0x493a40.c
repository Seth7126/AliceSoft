// 函数: sub_493a40
// 地址: 0x493a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg2
void* ebp = arg1
void* var_8 = ebp
sub_468ec0(ebx, *(ebp + 0x24))
int32_t* edi = *(ebp + 0x20)
int32_t* i = *edi

if (i != edi)
    char var_18 = 0
    char var_17 = 0
    
    do
        int32_t eax_1 = i[9]
        void* edx_1
        
        if (eax_1 u< 0x10)
            edx_1 = &i[4]
        else
            edx_1 = i[4]
        
        int32_t* ecx_1
        
        if (eax_1 u< 0x10)
            ecx_1 = &i[4]
        else
            ecx_1 = i[4]
        
        void* var_2c_1 = arg2
        sub_468ff0(ebx + 4, *(arg2 + 8), ecx_1, i[8] + edx_1)
        int32_t eax_5 = *(ebx + 8)
        int32_t edx_2
        
        if (&var_18 u< eax_5)
            edx_2 = *(ebx + 4)
        
        if (&var_18 u>= eax_5 || edx_2 u> &var_18)
            if (eax_5 == *(ebx + 0xc))
                sub_403590(ebx + 4, 1)
            
            char* eax_7 = *(ebx + 8)
            
            if (eax_7 != 0)
                *eax_7 = 0
        else
            if (eax_5 == *(ebx + 0xc))
                sub_403590(ebx + 4, 1)
            
            char* edx_3 = *(ebx + 8)
            
            if (edx_3 != 0)
                int32_t eax_6
                eax_6.b = *(&var_18 - edx_2 + *(ebx + 4))
                *edx_3 = eax_6.b
        
        *(ebx + 8) += 1
        void** ecx_6 = i[0xa]
        int32_t eax_8 = ecx_6[5]
        int32_t ebp_1 = ecx_6[4]
        void** edx_4
        
        if (eax_8 u< 0x10)
            edx_4 = ecx_6
        else
            edx_4 = *ecx_6
        
        if (eax_8 u>= 0x10)
            ecx_6 = *ecx_6
        
        void* var_2c_2 = arg2
        sub_468ff0(ebx + 4, *(arg2 + 8), ecx_6, edx_4 + ebp_1)
        int32_t eax_11 = *(ebx + 8)
        int32_t ecx_8
        
        if (&var_17 u< eax_11)
            ecx_8 = *(ebx + 4)
        
        if (&var_17 u>= eax_11 || ecx_8 u> &var_17)
            if (eax_11 == *(ebx + 0xc))
                sub_403590(ebx + 4, 1)
            
            char* eax_13 = *(ebx + 8)
            
            if (eax_13 != 0)
                *eax_13 = 0
        else
            if (eax_11 == *(ebx + 0xc))
                sub_403590(ebx + 4, 1)
            
            char* ecx_10 = *(ebx + 8)
            
            if (ecx_10 != 0)
                char* eax_12
                eax_12.b = *(*(ebx + 4) + &var_17 - ecx_8)
                *ecx_10 = eax_12.b
        
        *(ebx + 8) += 1
        
        if (*(i + 0xd) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0xd) != 0)
                int32_t* i_4 = i[1]
                
                if (*(i_4 + 0xd) == 0)
                    while (i == i_4[2])
                        i = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0xd) != 0)
                            break
                
                i = i_4
            else
                i = i_2
                int32_t* i_3 = *i
                
                while (*(i_3 + 0xd) == 0)
                    i = i_3
                    i_3 = *i
    while (i != edi)
    
    ebx = arg2
    ebp = var_8

int32_t ecx_13 = *(ebp + 0x2c)
int32_t eax_14 = *(ebx + 8)
int32_t var_c_2 = ecx_13
char var_16 = ecx_13.b
int32_t edx_5

if (&var_16 u< eax_14)
    edx_5 = *(ebx + 4)

if (&var_16 u>= eax_14 || edx_5 u> &var_16)
    if (eax_14 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
        ecx_13 = var_c_2
    
    char* eax_16 = *(ebx + 8)
    
    if (eax_16 != 0)
        *eax_16 = ecx_13.b
else
    if (eax_14 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
        ecx_13 = var_c_2
    
    char* edx_6 = *(ebx + 8)
    
    if (edx_6 != 0)
        int32_t eax_15
        eax_15.b = *(&var_16 - edx_5 + *(ebx + 4))
        *edx_6 = eax_15.b

*(ebx + 8) += 1
int32_t edx_7 = *(ebx + 8)
uint32_t eax_18 = ecx_13 u>> 8
char var_15 = eax_18.b
int32_t edi_1

if (&var_15 u< edx_7)
    edi_1 = *(ebx + 4)

char* edx_8

if (&var_15 u>= edx_7 || edi_1 u> &var_15)
    if (edx_7 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
        ecx_13 = var_c_2
    
    edx_8 = *(ebx + 8)
    
    if (edx_8 != 0)
        *edx_8 = eax_18.b
else
    if (edx_7 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
        ecx_13 = var_c_2
    
    edx_8 = *(ebx + 8)
    
    if (edx_8 != 0)
        eax_18.b = *(&var_15 - edi_1 + *(ebx + 4))
        *edx_8 = eax_18.b
*(ebx + 8) += 1
int32_t edx_9 = *(ebx + 8)
uint32_t eax_20 = ecx_13 u>> 0x10
char var_14 = eax_20.b
int32_t edi_2

if (&var_14 u< edx_9)
    edi_2 = *(ebx + 4)

char* edx_10

if (&var_14 u>= edx_9 || edi_2 u> &var_14)
    if (edx_9 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
        ecx_13 = var_c_2
    
    edx_10 = *(ebx + 8)
    
    if (edx_10 != 0)
        *edx_10 = eax_20.b
else
    if (edx_9 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
        ecx_13 = var_c_2
    
    edx_10 = *(ebx + 8)
    
    if (edx_10 != 0)
        eax_20.b = *(&var_14 - edi_2 + *(ebx + 4))
        *edx_10 = eax_20.b
*(ebx + 8) += 1
int32_t eax_21 = *(ebx + 8)
uint32_t ecx_19 = ecx_13 u>> 0x18
char var_13 = ecx_19.b
int32_t edx_11

if (&var_13 u< eax_21)
    edx_11 = *(ebx + 4)

if (&var_13 u>= eax_21 || edx_11 u> &var_13)
    if (eax_21 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* eax_23 = *(ebx + 8)
    
    if (eax_23 != 0)
        *eax_23 = ecx_19.b
else
    if (eax_21 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* ecx_21 = *(ebx + 8)
    
    if (ecx_21 != 0)
        int32_t eax_22
        eax_22.b = *(&var_13 - edx_11 + *(ebx + 4))
        *ecx_21 = eax_22.b

*(ebx + 8) += 1
int32_t* edi_3 = *(ebp + 0x28)
int32_t* i_1 = *edi_3

if (i_1 != edi_3)
    char var_12 = 0
    
    do
        int32_t eax_24 = i_1[9]
        void* edx_12
        
        if (eax_24 u< 0x10)
            edx_12 = &i_1[4]
        else
            edx_12 = i_1[4]
        
        int32_t* ecx_23
        
        if (eax_24 u< 0x10)
            ecx_23 = &i_1[4]
        else
            ecx_23 = i_1[4]
        
        void* var_2c_3 = arg2
        sub_468ff0(ebx + 4, *(arg2 + 8), ecx_23, i_1[8] + edx_12)
        int32_t ecx_25 = *(ebx + 8)
        int32_t eax_28
        
        if (&var_12 u< ecx_25)
            eax_28 = *(ebx + 4)
        
        if (&var_12 u>= ecx_25 || eax_28 u> &var_12)
            int32_t edx_18 = *(ebx + 0xc)
            
            if (ecx_25 == edx_18 && edx_18 - ecx_25 u< 1)
                if (*(ebx + 4) - ecx_25 - 1 u< 1)
                    goto label_49430f
                
                int32_t edx_19 = edx_18 - *(ebx + 4)
                uint32_t eax_44 = edx_19 u>> 1
                uint32_t ecx_31 = ecx_25 - *(ebx + 4) + 1
                uint32_t edx_20
                
                if (0xffffffff - eax_44 u>= edx_19)
                    edx_20 = edx_19 + eax_44
                else
                    edx_20 = 0
                
                if (edx_20 u< ecx_31)
                    edx_20 = ecx_31
                
                sub_403640(ebx + 4, edx_20)
            
            char* eax_46 = *(ebx + 8)
            
            if (eax_46 != 0)
                *eax_46 = 0
        else
            int32_t edx_14 = *(ebx + 0xc)
            
            if (ecx_25 == edx_14 && edx_14 - ecx_25 u< 1)
                if (*(ebx + 4) - ecx_25 - 1 u< 1)
                    goto label_49430f
                
                int32_t edx_15 = edx_14 - *(ebx + 4)
                uint32_t eax_35 = edx_15 u>> 1
                uint32_t ecx_27 = ecx_25 - *(ebx + 4) + 1
                uint32_t edx_16
                
                if (0xffffffff - eax_35 u>= edx_15)
                    edx_16 = edx_15 + eax_35
                else
                    edx_16 = 0
                
                if (edx_16 u< ecx_27)
                    edx_16 = ecx_27
                
                sub_403640(ebx + 4, edx_16)
            
            char* ecx_29 = *(ebx + 8)
            
            if (ecx_29 != 0)
                int32_t eax_37
                eax_37.b = *(&var_12 - eax_28 + *(ebx + 4))
                *ecx_29 = eax_37.b
        
        *(ebx + 8) += 1
        void** ecx_33 = i_1[0xa]
        int32_t eax_47 = ecx_33[5]
        int32_t ebp_3 = ecx_33[4]
        void** edx_21
        
        if (eax_47 u< 0x10)
            edx_21 = ecx_33
        else
            edx_21 = *ecx_33
        
        if (eax_47 u>= 0x10)
            ecx_33 = *ecx_33
        
        void* var_2c_6 = arg2
        sub_468ff0(ebx + 4, *(arg2 + 8), ecx_33, edx_21 + ebp_3)
        int32_t ecx_35 = *(ebx + 8)
        char var_11 = 0
        int32_t ebp_4
        
        if (&var_11 u< ecx_35)
            ebp_4 = *(ebx + 4)
        
        if (&var_11 u>= ecx_35 || ebp_4 u> &var_11)
            int32_t edx_26 = *(ebx + 0xc)
            
            if (ecx_35 == edx_26 && edx_26 - ecx_35 u< 1)
                int32_t ebp_7 = *(ebx + 4)
                
                if (ebp_7 - ecx_35 - 1 u< 1)
                    goto label_49430f
                
                int32_t edx_27 = edx_26 - ebp_7
                uint32_t ebp_9 = edx_27 u>> 1
                uint32_t edx_28
                
                if (0xffffffff - ebp_9 u>= edx_27)
                    edx_28 = edx_27 + ebp_9
                else
                    edx_28 = 0
                
                if (edx_28 u< ecx_35 - ebp_7 + 1)
                    edx_28 = ecx_35 - ebp_7 + 1
                
                sub_403640(ebx + 4, edx_28)
            
            char* eax_64 = *(ebx + 8)
            
            if (eax_64 != 0)
                *eax_64 = 0
        else
            int32_t edx_22 = *(ebx + 0xc)
            
            if (ecx_35 == edx_22 && edx_22 - ecx_35 u< 1)
                if (ebp_4 - ecx_35 - 1 u< 1)
                    goto label_49430f
                
                int32_t edx_23 = edx_22 - ebp_4
                uint32_t ebp_6 = edx_23 u>> 1
                uint32_t edx_24
                
                if (0xffffffff - ebp_6 u>= edx_23)
                    edx_24 = edx_23 + ebp_6
                else
                    edx_24 = 0
                
                if (edx_24 u< ecx_35 - ebp_4 + 1)
                    edx_24 = ecx_35 - ebp_4 + 1
                
                sub_403640(ebx + 4, edx_24)
            
            char* ecx_39 = *(ebx + 8)
            
            if (ecx_39 != 0)
                int32_t eax_57
                eax_57.b = *(&var_11 - ebp_4 + *(ebx + 4))
                *ecx_39 = eax_57.b
        
        *(ebx + 8) += 1
        
        if (*(i_1 + 0xd) == 0)
            int32_t* i_5 = i_1[2]
            
            if (*(i_5 + 0xd) != 0)
                int32_t* i_7 = i_1[1]
                
                if (*(i_7 + 0xd) == 0)
                    while (i_1 == i_7[2])
                        i_1 = i_7
                        i_7 = i_7[1]
                        
                        if (*(i_7 + 0xd) != 0)
                            break
                
                i_1 = i_7
            else
                i_1 = i_5
                int32_t* i_6 = *i_1
                
                while (*(i_6 + 0xd) == 0)
                    i_1 = i_6
                    i_6 = *i_1
    while (i_1 != edi_3)

int32_t ecx_43 = *(ebx + 8)
void* xmm0_1 = *(var_8 + 0x30)
void* eax_66 = xmm0_1
char var_10 = eax_66.b
int32_t esi_4

if (&var_10 u< ecx_43)
    esi_4 = *(ebx + 4)

char* ecx_50

if (&var_10 u>= ecx_43 || esi_4 u> &var_10)
    int32_t edx_32 = *(ebx + 0xc)
    
    if (ecx_43 == edx_32)
        if (edx_32 - ecx_43 u< 1)
            int32_t esi_7 = *(ebx + 4)
            
            if (esi_7 - ecx_43 - 1 u< 1)
                sub_69a551("vector<T> too long")
                noreturn
            
            int32_t edx_33 = edx_32 - esi_7
            uint32_t esi_9 = edx_33 u>> 1
            uint32_t edx_34
            
            if (0xffffffff - esi_9 u>= edx_33)
                edx_34 = edx_33 + esi_9
            else
                edx_34 = 0
            
            if (edx_34 u< ecx_43 - esi_7 + 1)
                edx_34 = ecx_43 - esi_7 + 1
            
            sub_403640(ebx + 4, edx_34)
        
        eax_66 = xmm0_1
    
    ecx_50 = *(ebx + 8)
    
    if (ecx_50 == 0)
        goto label_494097
    
    goto label_49408d

int32_t edx_29 = *(ebx + 0xc)

if (ecx_43 == edx_29 && edx_29 - ecx_43 u< 1)
    if (esi_4 - ecx_43 - 1 u>= 1)
        int32_t edx_30 = edx_29 - esi_4
        uint32_t esi_6 = edx_30 u>> 1
        uint32_t edx_31
        
        if (0xffffffff - esi_6 u>= edx_30)
            edx_31 = edx_30 + esi_6
        else
            edx_31 = 0
        
        if (edx_31 u< ecx_43 - esi_4 + 1)
            edx_31 = ecx_43 - esi_4 + 1
        
        sub_403640(ebx + 4, edx_31)
        goto label_494030
    
label_49430f:
    sub_69a551("vector<T> too long")
    noreturn

label_494030:
ecx_50 = *(ebx + 8)

if (ecx_50 == 0)
    goto label_494097

eax_66.b = *(&var_10 - esi_4 + *(ebx + 4))
label_49408d:
*ecx_50 = eax_66.b
label_494097:
*(ebx + 8) += 1
int32_t ecx_51 = *(ebx + 8)
uint32_t eax_80 = xmm0_1 u>> 8
char var_f = eax_80.b
int32_t edi_5

if (&var_f u< ecx_51)
    edi_5 = *(ebx + 4)

char* ecx_58

if (&var_f u>= ecx_51 || edi_5 u> &var_f)
    int32_t edx_38 = *(ebx + 0xc)
    
    if (ecx_51 == edx_38 && edx_38 - ecx_51 u< 1)
        int32_t edi_8 = *(ebx + 4)
        
        if (edi_8 - ecx_51 - 1 u< 1)
            sub_69a551("vector<T> too long")
            noreturn
        
        int32_t edx_39 = edx_38 - edi_8
        uint32_t edi_10 = edx_39 u>> 1
        uint32_t edx_40
        
        if (0xffffffff - edi_10 u>= edx_39)
            edx_40 = edx_39 + edi_10
        else
            edx_40 = 0
        
        if (edx_40 u< ecx_51 - edi_8 + 1)
            edx_40 = ecx_51 - edi_8 + 1
        
        sub_403640(ebx + 4, edx_40)
    
    ecx_58 = *(ebx + 8)
    
    if (ecx_58 != 0)
        *ecx_58 = eax_80.b
else
    int32_t edx_35 = *(ebx + 0xc)
    
    if (ecx_51 == edx_35 && edx_35 - ecx_51 u< 1)
        if (edi_5 - ecx_51 - 1 u< 1)
            sub_69a551("vector<T> too long")
            noreturn
        
        int32_t edx_36 = edx_35 - edi_5
        uint32_t edi_7 = edx_36 u>> 1
        uint32_t edx_37
        
        if (0xffffffff - edi_7 u>= edx_36)
            edx_37 = edx_36 + edi_7
        else
            edx_37 = 0
        
        if (edx_37 u< ecx_51 - edi_5 + 1)
            edx_37 = ecx_51 - edi_5 + 1
        
        sub_403640(ebx + 4, edx_37)
    
    ecx_58 = *(ebx + 8)
    
    if (ecx_58 != 0)
        eax_80.b = *(*(ebx + 4) + &var_f - edi_5)
        *ecx_58 = eax_80.b
*(ebx + 8) += 1
int32_t ecx_59 = *(ebx + 8)
uint32_t eax_94 = xmm0_1 u>> 0x10
char var_e = eax_94.b
int32_t esi_11

if (&var_e u< ecx_59)
    esi_11 = *(ebx + 4)

char* ecx_66

if (&var_e u>= ecx_59 || esi_11 u> &var_e)
    int32_t edx_44 = *(ebx + 0xc)
    
    if (ecx_59 == edx_44 && edx_44 - ecx_59 u< 1)
        int32_t esi_14 = *(ebx + 4)
        
        if (esi_14 - ecx_59 - 1 u< 1)
            sub_69a551("vector<T> too long")
            noreturn
        
        int32_t edx_45 = edx_44 - esi_14
        uint32_t esi_16 = edx_45 u>> 1
        uint32_t edx_46
        
        if (0xffffffff - esi_16 u>= edx_45)
            edx_46 = edx_45 + esi_16
        else
            edx_46 = 0
        
        if (edx_46 u< ecx_59 - esi_14 + 1)
            edx_46 = ecx_59 - esi_14 + 1
        
        sub_403640(ebx + 4, edx_46)
    
    ecx_66 = *(ebx + 8)
    
    if (ecx_66 != 0)
        *ecx_66 = eax_94.b
else
    int32_t edx_41 = *(ebx + 0xc)
    
    if (ecx_59 == edx_41 && edx_41 - ecx_59 u< 1)
        if (esi_11 - ecx_59 - 1 u< 1)
            sub_69a551("vector<T> too long")
            noreturn
        
        int32_t edx_42 = edx_41 - esi_11
        uint32_t esi_13 = edx_42 u>> 1
        uint32_t edx_43
        
        if (0xffffffff - esi_13 u>= edx_42)
            edx_43 = edx_42 + esi_13
        else
            edx_43 = 0
        
        if (edx_43 u< ecx_59 - esi_11 + 1)
            edx_43 = ecx_59 - esi_11 + 1
        
        sub_403640(ebx + 4, edx_43)
    
    ecx_66 = *(ebx + 8)
    
    if (ecx_66 != 0)
        eax_94.b = *(&var_e - esi_11 + *(ebx + 4))
        *ecx_66 = eax_94.b
*(ebx + 8) += 1
int32_t ecx_67 = *(ebx + 8)
void* eax_108 = xmm0_1 u>> 0x18
char var_d = eax_108.b
int32_t esi_17

if (&var_d u< ecx_67)
    esi_17 = *(ebx + 4)

if (&var_d u>= ecx_67 || esi_17 u> &var_d)
    int32_t edx_50 = *(ebx + 0xc)
    
    if (ecx_67 == edx_50 && edx_50 - ecx_67 u< 1)
        int32_t esi_18 = *(ebx + 4)
        
        if (esi_18 - ecx_67 - 1 u< 1)
            sub_69a551("vector<T> too long")
            noreturn
        
        int32_t edx_51 = edx_50 - esi_18
        uint32_t eax_122 = edx_51 u>> 1
        uint32_t edx_52
        
        if (0xffffffff - eax_122 u>= edx_51)
            edx_52 = edx_51 + eax_122
        else
            edx_52 = 0
        
        if (edx_52 u< ecx_67 - esi_18 + 1)
            edx_52 = ecx_67 - esi_18 + 1
        
        sub_403640(ebx + 4, edx_52)
    
    char* ecx_75 = *(ebx + 8)
    
    if (ecx_75 != 0)
        *ecx_75 = eax_108.b
else
    int32_t edx_47 = *(ebx + 0xc)
    
    if (ecx_67 == edx_47 && edx_47 - ecx_67 u< 1)
        if (esi_17 - ecx_67 - 1 u< 1)
            sub_69a551("vector<T> too long")
            noreturn
        
        int32_t edx_48 = edx_47 - esi_17
        uint32_t eax_114 = edx_48 u>> 1
        uint32_t edx_49
        
        if (0xffffffff - eax_114 u>= edx_48)
            edx_49 = edx_48 + eax_114
        else
            edx_49 = 0
        
        if (edx_49 u< ecx_67 - esi_17 + 1)
            edx_49 = ecx_67 - esi_17 + 1
        
        sub_403640(ebx + 4, edx_49)
    
    char* ecx_71 = *(ebx + 8)
    
    if (ecx_71 != 0)
        int32_t eax_115
        eax_115.b = *(&var_d - esi_17 + *(ebx + 4))
        *ecx_71 = eax_115.b
        eax_115.b = 1
        *(ebx + 8) += 1
        return eax_115

*(ebx + 8) += 1
eax_108.b = 1
return eax_108
