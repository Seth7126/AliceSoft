// 函数: sub_4d7810
// 地址: 0x4d7810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg1
void* var_8 = ebp
bool var_d = *(ebp + 4) != 0
sub_414b60(arg2 + 4, &var_d)
sub_468ec0(arg2, *(ebp + 0x20))
sub_468ec0(arg2, *(ebp + 0x24))
sub_4bd940(ebp + 0x40, arg2)
sub_4bd940(ebp + 0x5c, arg2)
sub_4d89c0(ebp + 0x90, arg2)
sub_468ec0(arg2, (*(ebp + 0xc) - *(ebp + 8)) s>> 2)
int32_t* i = *(ebp + 8)

while (i != *(ebp + 0xc))
    int32_t eax_3 = *(arg2 + 8)
    int32_t ebx_1 = *i
    char var_1c = ebx_1.b
    int32_t ecx_7
    
    if (&var_1c u< eax_3)
        ecx_7 = *(arg2 + 4)
    
    if (&var_1c u>= eax_3 || ecx_7 u> &var_1c)
        if (eax_3 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
        
        char* eax_5 = *(arg2 + 8)
        
        if (eax_5 != 0)
            *eax_5 = ebx_1.b
    else
        if (eax_3 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
        
        char* ecx_9 = *(arg2 + 8)
        
        if (ecx_9 != 0)
            char* eax_4
            eax_4.b = *(*(arg2 + 4) + &var_1c - ecx_7)
            *ecx_9 = eax_4.b
    
    *(arg2 + 8) += 1
    int32_t ecx_11 = *(arg2 + 8)
    uint32_t eax_7 = ebx_1 u>> 8
    char var_1b = eax_7.b
    int32_t edx_1
    
    if (&var_1b u< ecx_11)
        edx_1 = *(arg2 + 4)
    
    char* ecx_14
    
    if (&var_1b u>= ecx_11 || edx_1 u> &var_1b)
        if (ecx_11 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
        
        ecx_14 = *(arg2 + 8)
        
        if (ecx_14 != 0)
            *ecx_14 = eax_7.b
    else
        if (ecx_11 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
        
        ecx_14 = *(arg2 + 8)
        
        if (ecx_14 != 0)
            eax_7.b = *(*(arg2 + 4) + &var_1b - edx_1)
            *ecx_14 = eax_7.b
    *(arg2 + 8) += 1
    int32_t ecx_15 = *(arg2 + 8)
    uint32_t eax_9 = ebx_1 u>> 0x10
    char var_1a = eax_9.b
    int32_t edx_2
    
    if (&var_1a u< ecx_15)
        edx_2 = *(arg2 + 4)
    
    char* ecx_18
    
    if (&var_1a u>= ecx_15 || edx_2 u> &var_1a)
        if (ecx_15 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
        
        ecx_18 = *(arg2 + 8)
        
        if (ecx_18 != 0)
            *ecx_18 = eax_9.b
    else
        if (ecx_15 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
        
        ecx_18 = *(arg2 + 8)
        
        if (ecx_18 != 0)
            eax_9.b = *(*(arg2 + 4) + &var_1a - edx_2)
            *ecx_18 = eax_9.b
    *(arg2 + 8) += 1
    int32_t eax_10 = *(arg2 + 8)
    uint8_t ebx_2 = (ebx_1 u>> 0x18).b
    uint8_t var_19 = ebx_2
    int32_t ecx_19
    
    if (&var_19 u< eax_10)
        ecx_19 = *(arg2 + 4)
    
    if (&var_19 u>= eax_10 || ecx_19 u> &var_19)
        if (eax_10 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
        
        uint8_t* eax_12 = *(arg2 + 8)
        
        if (eax_12 != 0)
            *eax_12 = ebx_2
    else
        if (eax_10 == *(arg2 + 0xc))
            sub_403590(arg2 + 4, 1)
        
        char* ecx_21 = *(arg2 + 8)
        
        if (ecx_21 != 0)
            int32_t eax_11
            eax_11.b = *(&var_19 - ecx_19 + *(arg2 + 4))
            *ecx_21 = eax_11.b
    
    ebp = var_8
    i = &i[1]
    *(arg2 + 8) += 1

int32_t eax_13 = *(arg2 + 8)
int32_t ebx_6 = (*(ebp + 0x2c) - *(ebp + 0x28)) s>> 2
char var_18 = ebx_6.b
int32_t ecx_23

if (&var_18 u< eax_13)
    ecx_23 = *(arg2 + 4)

if (&var_18 u>= eax_13 || ecx_23 u> &var_18)
    if (eax_13 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    char* eax_15 = *(arg2 + 8)
    
    if (eax_15 != 0)
        *eax_15 = ebx_6.b
else
    if (eax_13 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    char* ecx_25 = *(arg2 + 8)
    
    if (ecx_25 != 0)
        int32_t eax_14
        eax_14.b = *(&var_18 - ecx_23 + *(arg2 + 4))
        *ecx_25 = eax_14.b

*(arg2 + 8) += 1
int32_t ecx_27 = *(arg2 + 8)
uint32_t eax_17 = ebx_6 u>> 8
char var_17 = eax_17.b
int32_t edx_3

if (&var_17 u< ecx_27)
    edx_3 = *(arg2 + 4)

char* ecx_30

if (&var_17 u>= ecx_27 || edx_3 u> &var_17)
    if (ecx_27 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    ecx_30 = *(arg2 + 8)
    
    if (ecx_30 != 0)
        *ecx_30 = eax_17.b
else
    if (ecx_27 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    ecx_30 = *(arg2 + 8)
    
    if (ecx_30 != 0)
        eax_17.b = *(&var_17 - edx_3 + *(arg2 + 4))
        *ecx_30 = eax_17.b
*(arg2 + 8) += 1
int32_t ecx_31 = *(arg2 + 8)
uint32_t eax_19 = ebx_6 u>> 0x10
char var_16 = eax_19.b
int32_t edx_4

if (&var_16 u< ecx_31)
    edx_4 = *(arg2 + 4)

char* ecx_34

if (&var_16 u>= ecx_31 || edx_4 u> &var_16)
    if (ecx_31 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    ecx_34 = *(arg2 + 8)
    
    if (ecx_34 != 0)
        *ecx_34 = eax_19.b
else
    if (ecx_31 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    ecx_34 = *(arg2 + 8)
    
    if (ecx_34 != 0)
        eax_19.b = *(&var_16 - edx_4 + *(arg2 + 4))
        *ecx_34 = eax_19.b
*(arg2 + 8) += 1
int32_t eax_20 = *(arg2 + 8)
uint8_t ebx_7 = (ebx_6 u>> 0x18).b
uint8_t var_15 = ebx_7
int32_t ecx_35

if (&var_15 u< eax_20)
    ecx_35 = *(arg2 + 4)

if (&var_15 u>= eax_20 || ecx_35 u> &var_15)
    if (eax_20 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    uint8_t* eax_22 = *(arg2 + 8)
    
    if (eax_22 != 0)
        *eax_22 = ebx_7
else
    if (eax_20 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    char* ecx_37 = *(arg2 + 8)
    
    if (ecx_37 != 0)
        int32_t eax_21
        eax_21.b = *(&var_15 - ecx_35 + *(arg2 + 4))
        *ecx_37 = eax_21.b

*(arg2 + 8) += 1
int32_t* esi_4 = *(ebp + 0x28)

while (true)
    int32_t ecx_39 = *(arg2 + 8)
    
    if (esi_4 == *(var_8 + 0x2c))
        int32_t ebx_34 = (*(var_8 + 0x38) - *(var_8 + 0x34)) s>> 2
        char var_10 = ebx_34.b
        int32_t esi_5
        
        if (&var_10 u< ecx_39)
            esi_5 = *(arg2 + 4)
        
        if (&var_10 u< ecx_39 && esi_5 u<= &var_10)
            int32_t edx_30 = *(arg2 + 0xc)
            
            if (ecx_39 != edx_30 || edx_30 - ecx_39 u>= 1)
            label_4d7f30:
                char* ecx_76 = *(arg2 + 8)
                
                if (ecx_76 != 0)
                    char* eax_88
                    eax_88.b = *(*(arg2 + 4) + &var_10 - esi_5)
                    *ecx_76 = eax_88.b
                
                goto label_4d7f8d
            
            if (esi_5 - ecx_39 - 1 u>= 1)
                int32_t edx_31 = edx_30 - esi_5
                uint32_t esi_7 = edx_31 u>> 1
                uint32_t edx_32
                
                if (0xffffffff - esi_7 u>= edx_31)
                    edx_32 = edx_31 + esi_7
                else
                    edx_32 = 0
                
                if (edx_32 u< ecx_39 - esi_5 + 1)
                    edx_32 = ecx_39 - esi_5 + 1
                
                sub_403640(arg2 + 4, edx_32)
                goto label_4d7f30
            
            break
        
        int32_t edx_33 = *(arg2 + 0xc)
        
        if (ecx_39 == edx_33 && edx_33 - ecx_39 u< 1)
            int32_t esi_8 = *(arg2 + 4)
            
            if (esi_8 - ecx_39 - 1 u< 1)
                sub_69a551("vector<T> too long")
                noreturn
            
            int32_t edx_34 = edx_33 - esi_8
            uint32_t esi_10 = edx_34 u>> 1
            uint32_t edx_35
            
            if (0xffffffff - esi_10 u>= edx_34)
                edx_35 = edx_34 + esi_10
            else
                edx_35 = 0
            
            if (edx_35 u< ecx_39 - esi_8 + 1)
                edx_35 = ecx_39 - esi_8 + 1
            
            sub_403640(arg2 + 4, edx_35)
        
        char* eax_95 = *(arg2 + 8)
        
        if (eax_95 != 0)
            *eax_95 = ebx_34.b
        
    label_4d7f8d:
        *(arg2 + 8) += 1
        int32_t ecx_80 = *(arg2 + 8)
        uint32_t eax_97 = ebx_34 u>> 8
        char var_f = eax_97.b
        int32_t esi_11
        
        if (&var_f u< ecx_80)
            esi_11 = *(arg2 + 4)
        
        char* ecx_87
        
        if (&var_f u>= ecx_80 || esi_11 u> &var_f)
            int32_t edx_39 = *(arg2 + 0xc)
            
            if (ecx_80 == edx_39 && edx_39 - ecx_80 u< 1)
                int32_t esi_14 = *(arg2 + 4)
                
                if (esi_14 - ecx_80 - 1 u< 1)
                    sub_69a551("vector<T> too long")
                    noreturn
                
                int32_t edx_40 = edx_39 - esi_14
                uint32_t esi_16 = edx_40 u>> 1
                uint32_t edx_41
                
                if (0xffffffff - esi_16 u>= edx_40)
                    edx_41 = edx_40 + esi_16
                else
                    edx_41 = 0
                
                if (edx_41 u< ecx_80 - esi_14 + 1)
                    edx_41 = ecx_80 - esi_14 + 1
                
                sub_403640(arg2 + 4, edx_41)
            
            ecx_87 = *(arg2 + 8)
            
            if (ecx_87 != 0)
                *ecx_87 = eax_97.b
        else
            int32_t edx_36 = *(arg2 + 0xc)
            
            if (ecx_80 == edx_36 && edx_36 - ecx_80 u< 1)
                if (esi_11 - ecx_80 - 1 u< 1)
                    sub_69a551("vector<T> too long")
                    noreturn
                
                int32_t edx_37 = edx_36 - esi_11
                uint32_t esi_13 = edx_37 u>> 1
                uint32_t edx_38
                
                if (0xffffffff - esi_13 u>= edx_37)
                    edx_38 = edx_37 + esi_13
                else
                    edx_38 = 0
                
                if (edx_38 u< ecx_80 - esi_11 + 1)
                    edx_38 = ecx_80 - esi_11 + 1
                
                sub_403640(arg2 + 4, edx_38)
            
            ecx_87 = *(arg2 + 8)
            
            if (ecx_87 != 0)
                eax_97.b = *(*(arg2 + 4) + &var_f - esi_11)
                *ecx_87 = eax_97.b
        *(arg2 + 8) += 1
        int32_t ecx_88 = *(arg2 + 8)
        uint32_t eax_111 = ebx_34 u>> 0x10
        char var_e = eax_111.b
        int32_t esi_17
        
        if (&var_e u< ecx_88)
            esi_17 = *(arg2 + 4)
        
        char* ecx_95
        
        if (&var_e u>= ecx_88 || esi_17 u> &var_e)
            int32_t edx_45 = *(arg2 + 0xc)
            
            if (ecx_88 == edx_45 && edx_45 - ecx_88 u< 1)
                int32_t esi_19 = *(arg2 + 4)
                
                if (esi_19 - ecx_88 - 1 u< 1)
                    sub_69a551("vector<T> too long")
                    noreturn
                
                int32_t edx_46 = edx_45 - esi_19
                uint32_t eax_125 = edx_46 u>> 1
                uint32_t edx_47
                
                if (0xffffffff - eax_125 u>= edx_46)
                    edx_47 = edx_46 + eax_125
                else
                    edx_47 = 0
                
                if (edx_47 u< ecx_88 - esi_19 + 1)
                    edx_47 = ecx_88 - esi_19 + 1
                
                sub_403640(arg2 + 4, edx_47)
            
            ecx_95 = *(arg2 + 8)
            
            if (ecx_95 != 0)
                *ecx_95 = eax_111.b
        else
            int32_t edx_42 = *(arg2 + 0xc)
            
            if (ecx_88 == edx_42 && edx_42 - ecx_88 u< 1)
                if (esi_17 - ecx_88 - 1 u< 1)
                    sub_69a551("vector<T> too long")
                    noreturn
                
                int32_t edx_43 = edx_42 - esi_17
                uint32_t eax_118 = edx_43 u>> 1
                uint32_t edx_44
                
                if (0xffffffff - eax_118 u>= edx_43)
                    edx_44 = edx_43 + eax_118
                else
                    edx_44 = 0
                
                if (edx_44 u< ecx_88 - esi_17 + 1)
                    edx_44 = ecx_88 - esi_17 + 1
                
                sub_403640(arg2 + 4, edx_44)
            
            ecx_95 = *(arg2 + 8)
            
            if (ecx_95 != 0)
                eax_111.b = *(*(arg2 + 4) + &var_e - esi_17)
                *ecx_95 = eax_111.b
        *(arg2 + 8) += 1
        var_d = (ebx_34 u>> 0x18).b
        sub_414b60(arg2 + 4, &var_d)
        
        for (int32_t* i_1 = *(var_8 + 0x34); i_1 != *(var_8 + 0x38); i_1 = &i_1[1])
            sub_468ec0(arg2, *i_1)
        
        if (sub_4a90b0(var_8 + 0x100, arg2) != 0 && sub_4b6390(arg2, var_8 + 0xc0) != 0
                && sub_4b6390(arg2, var_8 + 0xcc) != 0)
            return sub_4cff70(var_8 + 0xf0, arg2) != 0
        
        return 0
    
    int32_t eax_23 = *esi_4
    char var_14 = eax_23.b
    int32_t ebx_8
    
    if (&var_14 u< ecx_39)
        ebx_8 = *(arg2 + 4)
    
    int32_t ecx_44
    
    if (&var_14 u>= ecx_39 || ebx_8 u> &var_14)
        int32_t edx_9 = *(arg2 + 0xc)
        
        if (ecx_39 == edx_9 && edx_9 - ecx_39 u< 1)
            int32_t ebx_11 = *(arg2 + 4)
            
            if (ebx_11 - ecx_39 - 1 u< 1)
                break
            
            int32_t edx_10 = edx_9 - ebx_11
            uint32_t ebx_13 = edx_10 u>> 1
            uint32_t edx_11
            
            if (0xffffffff - ebx_13 u>= edx_10)
                edx_11 = edx_10 + ebx_13
            else
                edx_11 = 0
            
            if (edx_11 u< ecx_39 - ebx_11 + 1)
                edx_11 = ecx_39 - ebx_11 + 1
            
            sub_403640(arg2 + 4, edx_11)
        
        char* eax_37 = *(arg2 + 8)
        ecx_44 = eax_23
        
        if (eax_37 != 0)
            *eax_37 = ecx_44.b
        
        *(arg2 + 8) += 1
    else
        int32_t edx_6 = *(arg2 + 0xc)
        
        if (ecx_39 == edx_6 && edx_6 - ecx_39 u< 1)
            if (ebx_8 - ecx_39 - 1 u< 1)
                break
            
            int32_t edx_7 = edx_6 - ebx_8
            uint32_t ebx_10 = edx_7 u>> 1
            uint32_t edx_8
            
            if (0xffffffff - ebx_10 u>= edx_7)
                edx_8 = edx_7 + ebx_10
            else
                edx_8 = 0
            
            if (edx_8 u< ecx_39 - ebx_8 + 1)
                edx_8 = ecx_39 - ebx_8 + 1
            
            sub_403640(arg2 + 4, edx_8)
        
        char* ecx_43 = *(arg2 + 8)
        
        if (ecx_43 != 0)
            char* eax_30
            eax_30.b = *(*(arg2 + 4) + &var_14 - ebx_8)
            *ecx_43 = eax_30.b
        
        *(arg2 + 8) += 1
        ecx_44 = eax_23
    
    int32_t ecx_48 = *(arg2 + 8)
    uint32_t eax_39 = ecx_44 u>> 8
    char var_13 = eax_39.b
    int32_t ebx_14
    
    if (&var_13 u< ecx_48)
        ebx_14 = *(arg2 + 4)
    
    char* ecx_55
    
    if (&var_13 u>= ecx_48 || ebx_14 u> &var_13)
        int32_t edx_15 = *(arg2 + 0xc)
        
        if (ecx_48 == edx_15 && edx_15 - ecx_48 u< 1)
            int32_t ebx_17 = *(arg2 + 4)
            
            if (ebx_17 - ecx_48 - 1 u< 1)
                break
            
            int32_t edx_16 = edx_15 - ebx_17
            uint32_t ebx_19 = edx_16 u>> 1
            uint32_t edx_17
            
            if (0xffffffff - ebx_19 u>= edx_16)
                edx_17 = edx_16 + ebx_19
            else
                edx_17 = 0
            
            if (edx_17 u< ecx_48 - ebx_17 + 1)
                edx_17 = ecx_48 - ebx_17 + 1
            
            sub_403640(arg2 + 4, edx_17)
        
        ecx_55 = *(arg2 + 8)
        
        if (ecx_55 != 0)
            *ecx_55 = eax_39.b
    else
        int32_t edx_12 = *(arg2 + 0xc)
        
        if (ecx_48 == edx_12 && edx_12 - ecx_48 u< 1)
            if (ebx_14 - ecx_48 - 1 u< 1)
                break
            
            int32_t edx_13 = edx_12 - ebx_14
            uint32_t ebx_16 = edx_13 u>> 1
            uint32_t edx_14
            
            if (0xffffffff - ebx_16 u>= edx_13)
                edx_14 = edx_13 + ebx_16
            else
                edx_14 = 0
            
            if (edx_14 u< ecx_48 - ebx_14 + 1)
                edx_14 = ecx_48 - ebx_14 + 1
            
            sub_403640(arg2 + 4, edx_14)
        
        ecx_55 = *(arg2 + 8)
        
        if (ecx_55 != 0)
            eax_39.b = *(*(arg2 + 4) + &var_13 - ebx_14)
            *ecx_55 = eax_39.b
    *(arg2 + 8) += 1
    int32_t ecx_56 = *(arg2 + 8)
    uint32_t eax_53 = eax_23 u>> 0x10
    char var_12 = eax_53.b
    int32_t ebx_20
    
    if (&var_12 u< ecx_56)
        ebx_20 = *(arg2 + 4)
    
    char* ecx_63
    
    if (&var_12 u>= ecx_56 || ebx_20 u> &var_12)
        int32_t edx_21 = *(arg2 + 0xc)
        
        if (ecx_56 == edx_21 && edx_21 - ecx_56 u< 1)
            int32_t ebx_23 = *(arg2 + 4)
            
            if (ebx_23 - ecx_56 - 1 u< 1)
                break
            
            int32_t edx_22 = edx_21 - ebx_23
            uint32_t ebx_25 = edx_22 u>> 1
            uint32_t edx_23
            
            if (0xffffffff - ebx_25 u>= edx_22)
                edx_23 = edx_22 + ebx_25
            else
                edx_23 = 0
            
            if (edx_23 u< ecx_56 - ebx_23 + 1)
                edx_23 = ecx_56 - ebx_23 + 1
            
            sub_403640(arg2 + 4, edx_23)
        
        ecx_63 = *(arg2 + 8)
        
        if (ecx_63 != 0)
            *ecx_63 = eax_53.b
    else
        int32_t edx_18 = *(arg2 + 0xc)
        
        if (ecx_56 == edx_18 && edx_18 - ecx_56 u< 1)
            if (ebx_20 - ecx_56 - 1 u< 1)
                break
            
            int32_t edx_19 = edx_18 - ebx_20
            uint32_t ebx_22 = edx_19 u>> 1
            uint32_t edx_20
            
            if (0xffffffff - ebx_22 u>= edx_19)
                edx_20 = edx_19 + ebx_22
            else
                edx_20 = 0
            
            if (edx_20 u< ecx_56 - ebx_20 + 1)
                edx_20 = ecx_56 - ebx_20 + 1
            
            sub_403640(arg2 + 4, edx_20)
        
        ecx_63 = *(arg2 + 8)
        
        if (ecx_63 != 0)
            eax_53.b = *(*(arg2 + 4) + &var_12 - ebx_20)
            *ecx_63 = eax_53.b
    *(arg2 + 8) += 1
    int32_t ecx_64 = *(arg2 + 8)
    uint8_t eax_67 = (eax_23 u>> 0x18).b
    uint8_t var_11 = eax_67
    int32_t ebx_26
    
    if (&var_11 u< ecx_64)
        ebx_26 = *(arg2 + 4)
    
    if (&var_11 u>= ecx_64 || ebx_26 u> &var_11)
        int32_t edx_27 = *(arg2 + 0xc)
        
        if (ecx_64 == edx_27 && edx_27 - ecx_64 u< 1)
            int32_t ebx_29 = *(arg2 + 4)
            
            if (ebx_29 - ecx_64 - 1 u< 1)
                break
            
            int32_t edx_28 = edx_27 - ebx_29
            uint32_t ebx_31 = edx_28 u>> 1
            uint32_t edx_29
            
            if (0xffffffff - ebx_31 u>= edx_28)
                edx_29 = edx_28 + ebx_31
            else
                edx_29 = 0
            
            if (edx_29 u< ecx_64 - ebx_29 + 1)
                edx_29 = ecx_64 - ebx_29 + 1
            
            sub_403640(arg2 + 4, edx_29)
        
        uint8_t* eax_81 = *(arg2 + 8)
        
        if (eax_81 != 0)
            *eax_81 = eax_67
    else
        int32_t edx_24 = *(arg2 + 0xc)
        
        if (ecx_64 == edx_24 && edx_24 - ecx_64 u< 1)
            if (ebx_26 - ecx_64 - 1 u< 1)
                break
            
            int32_t edx_25 = edx_24 - ebx_26
            uint32_t ebx_28 = edx_25 u>> 1
            uint32_t edx_26
            
            if (0xffffffff - ebx_28 u>= edx_25)
                edx_26 = edx_25 + ebx_28
            else
                edx_26 = 0
            
            if (edx_26 u< ecx_64 - ebx_26 + 1)
                edx_26 = ecx_64 - ebx_26 + 1
            
            sub_403640(arg2 + 4, edx_26)
        
        char* ecx_68 = *(arg2 + 8)
        
        if (ecx_68 != 0)
            char* eax_74
            eax_74.b = *(*(arg2 + 4) + &var_11 - ebx_26)
            *ecx_68 = eax_74.b
            *(arg2 + 8) += 1
            esi_4 = &esi_4[1]
            continue
    
    *(arg2 + 8) += 1
    esi_4 = &esi_4[1]

sub_69a551("vector<T> too long")
noreturn
