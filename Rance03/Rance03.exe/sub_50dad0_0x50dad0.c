// 函数: sub_50dad0
// 地址: 0x50dad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg1
int32_t eax = *(ebp + 0x24)
void* edx = ebp + 0x10
void* var_4 = ebp
int32_t esi = *(edx + 0x10)
void* ecx

if (eax u< 0x10)
    ecx = edx
else
    ecx = *edx

if (eax u>= 0x10)
    edx = *edx

void* var_34 = arg2
void* ebx = arg2
sub_468ff0(ebx + 4, *(ebx + 8), edx, ecx + esi)
uint8_t var_9 = 0
sub_414b60(ebx + 4, &var_9)
sub_468ec0(ebx, *(ebp + 0x28))
sub_468ec0(ebx, (*(ebp + 0x30) - *(ebp + 0x2c)) s>> 2)
int32_t* i = *(ebp + 0x2c)

while (i != *(ebp + 0x30))
    int32_t eax_5 = *(ebx + 8)
    int32_t ebx_2 = *i
    char var_20 = ebx_2.b
    int32_t ecx_5
    
    if (&var_20 u< eax_5)
        ecx_5 = *(ebx + 4)
    
    if (&var_20 u>= eax_5 || ecx_5 u> &var_20)
        if (eax_5 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        char* eax_7 = *(ebx + 8)
        
        if (eax_7 != 0)
            *eax_7 = ebx_2.b
    else
        if (eax_5 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        char* ecx_7 = *(ebx + 8)
        
        if (ecx_7 != 0)
            char* eax_6
            eax_6.b = *(*(ebx + 4) + &var_20 - ecx_5)
            *ecx_7 = eax_6.b
    
    *(ebx + 8) += 1
    int32_t ecx_9 = *(ebx + 8)
    uint32_t eax_9 = ebx_2 u>> 8
    char var_1f = eax_9.b
    int32_t edx_1
    
    if (&var_1f u< ecx_9)
        edx_1 = *(ebx + 4)
    
    char* ecx_12
    
    if (&var_1f u>= ecx_9 || edx_1 u> &var_1f)
        if (ecx_9 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        ecx_12 = *(ebx + 8)
        
        if (ecx_12 != 0)
            *ecx_12 = eax_9.b
    else
        if (ecx_9 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        ecx_12 = *(ebx + 8)
        
        if (ecx_12 != 0)
            eax_9.b = *(*(ebx + 4) + &var_1f - edx_1)
            *ecx_12 = eax_9.b
    *(ebx + 8) += 1
    int32_t ecx_13 = *(ebx + 8)
    uint32_t eax_11 = ebx_2 u>> 0x10
    char var_1e = eax_11.b
    int32_t edx_2
    
    if (&var_1e u< ecx_13)
        edx_2 = *(ebx + 4)
    
    char* ecx_16
    
    if (&var_1e u>= ecx_13 || edx_2 u> &var_1e)
        if (ecx_13 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        ecx_16 = *(ebx + 8)
        
        if (ecx_16 != 0)
            *ecx_16 = eax_11.b
    else
        if (ecx_13 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        ecx_16 = *(ebx + 8)
        
        if (ecx_16 != 0)
            eax_11.b = *(*(ebx + 4) + &var_1e - edx_2)
            *ecx_16 = eax_11.b
    *(ebx + 8) += 1
    int32_t eax_12 = *(ebx + 8)
    uint8_t ebx_3 = (ebx_2 u>> 0x18).b
    uint8_t var_1d = ebx_3
    int32_t ecx_17
    
    if (&var_1d u< eax_12)
        ecx_17 = *(ebx + 4)
    
    if (&var_1d u>= eax_12 || ecx_17 u> &var_1d)
        if (eax_12 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        uint8_t* eax_14 = *(ebx + 8)
        
        if (eax_14 != 0)
            *eax_14 = ebx_3
    else
        if (eax_12 == *(ebx + 0xc))
            sub_403590(ebx + 4, 1)
        
        char* ecx_19 = *(ebx + 8)
        
        if (ecx_19 != 0)
            int32_t eax_13
            eax_13.b = *(&var_1d - ecx_17 + *(ebx + 4))
            *ecx_19 = eax_13.b
    
    ebp = var_4
    i = &i[1]
    *(ebx + 8) += 1

int32_t eax_15 = *(ebx + 8)
int32_t ebx_5 = *(ebp + 0x2b0)
char var_1c = ebx_5.b
int32_t ecx_21

if (&var_1c u< eax_15)
    ecx_21 = *(ebx + 4)

if (&var_1c u>= eax_15 || ecx_21 u> &var_1c)
    if (eax_15 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* eax_17 = *(ebx + 8)
    
    if (eax_17 != 0)
        *eax_17 = ebx_5.b
else
    if (eax_15 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* ecx_23 = *(ebx + 8)
    
    if (ecx_23 != 0)
        int32_t eax_16
        eax_16.b = *(&var_1c - ecx_21 + *(ebx + 4))
        *ecx_23 = eax_16.b

*(ebx + 8) += 1
int32_t ecx_25 = *(ebx + 8)
uint32_t eax_19 = ebx_5 u>> 8
char var_1b = eax_19.b
int32_t edx_3

if (&var_1b u< ecx_25)
    edx_3 = *(ebx + 4)

char* ecx_28

if (&var_1b u>= ecx_25 || edx_3 u> &var_1b)
    if (ecx_25 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_28 = *(ebx + 8)
    
    if (ecx_28 != 0)
        *ecx_28 = eax_19.b
else
    if (ecx_25 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_28 = *(ebx + 8)
    
    if (ecx_28 != 0)
        eax_19.b = *(&var_1b - edx_3 + *(ebx + 4))
        *ecx_28 = eax_19.b
*(ebx + 8) += 1
int32_t ecx_29 = *(ebx + 8)
uint32_t eax_21 = ebx_5 u>> 0x10
char var_1a = eax_21.b
int32_t edx_4

if (&var_1a u< ecx_29)
    edx_4 = *(ebx + 4)

char* ecx_32

if (&var_1a u>= ecx_29 || edx_4 u> &var_1a)
    if (ecx_29 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_32 = *(ebx + 8)
    
    if (ecx_32 != 0)
        *ecx_32 = eax_21.b
else
    if (ecx_29 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_32 = *(ebx + 8)
    
    if (ecx_32 != 0)
        eax_21.b = *(&var_1a - edx_4 + *(ebx + 4))
        *ecx_32 = eax_21.b
*(ebx + 8) += 1
int32_t eax_22 = *(ebx + 8)
uint8_t ebx_6 = (ebx_5 u>> 0x18).b
uint8_t var_19 = ebx_6
int32_t ecx_33

if (&var_19 u< eax_22)
    ecx_33 = *(ebx + 4)

if (&var_19 u>= eax_22 || ecx_33 u> &var_19)
    if (eax_22 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    uint8_t* eax_24 = *(ebx + 8)
    
    if (eax_24 != 0)
        *eax_24 = ebx_6
else
    if (eax_22 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* ecx_35 = *(ebx + 8)
    
    if (ecx_35 != 0)
        int32_t eax_23
        eax_23.b = *(&var_19 - ecx_33 + *(ebx + 4))
        *ecx_35 = eax_23.b

*(ebx + 8) += 1
int32_t eax_25 = *(ebx + 8)
ebx_6 = *(ebp + 0x2b4) != 0
uint8_t var_18 = ebx_6
int32_t ecx_37

if (&var_18 u< eax_25)
    ecx_37 = *(ebx + 4)

if (&var_18 u>= eax_25 || ecx_37 u> &var_18)
    if (eax_25 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    uint8_t* eax_27 = *(ebx + 8)
    
    if (eax_27 != 0)
        *eax_27 = ebx_6
else
    if (eax_25 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* ecx_39 = *(ebx + 8)
    
    if (ecx_39 != 0)
        int32_t eax_26
        eax_26.b = *(&var_18 - ecx_37 + *(ebx + 4))
        *ecx_39 = eax_26.b

*(ebx + 8) += 1
int32_t eax_28 = *(ebx + 8)
int32_t ebx_7 = *(ebp + 0x2b8)
char var_17 = ebx_7.b
int32_t ecx_41

if (&var_17 u< eax_28)
    ecx_41 = *(ebx + 4)

if (&var_17 u>= eax_28 || ecx_41 u> &var_17)
    if (eax_28 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* eax_30 = *(ebx + 8)
    
    if (eax_30 != 0)
        *eax_30 = ebx_7.b
else
    if (eax_28 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* ecx_43 = *(ebx + 8)
    
    if (ecx_43 != 0)
        int32_t eax_29
        eax_29.b = *(&var_17 - ecx_41 + *(ebx + 4))
        *ecx_43 = eax_29.b

*(ebx + 8) += 1
int32_t ecx_45 = *(ebx + 8)
uint32_t eax_32 = ebx_7 u>> 8
char var_16 = eax_32.b
int32_t edx_5

if (&var_16 u< ecx_45)
    edx_5 = *(ebx + 4)

char* ecx_48

if (&var_16 u>= ecx_45 || edx_5 u> &var_16)
    if (ecx_45 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_48 = *(ebx + 8)
    
    if (ecx_48 != 0)
        *ecx_48 = eax_32.b
else
    if (ecx_45 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_48 = *(ebx + 8)
    
    if (ecx_48 != 0)
        eax_32.b = *(&var_16 - edx_5 + *(ebx + 4))
        *ecx_48 = eax_32.b
*(ebx + 8) += 1
int32_t ecx_49 = *(ebx + 8)
uint32_t eax_34 = ebx_7 u>> 0x10
char var_15 = eax_34.b
int32_t edx_6

if (&var_15 u< ecx_49)
    edx_6 = *(ebx + 4)

char* ecx_52

if (&var_15 u>= ecx_49 || edx_6 u> &var_15)
    if (ecx_49 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_52 = *(ebx + 8)
    
    if (ecx_52 != 0)
        *ecx_52 = eax_34.b
else
    if (ecx_49 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_52 = *(ebx + 8)
    
    if (ecx_52 != 0)
        eax_34.b = *(&var_15 - edx_6 + *(ebx + 4))
        *ecx_52 = eax_34.b
*(ebx + 8) += 1
int32_t eax_35 = *(ebx + 8)
uint8_t ebx_8 = (ebx_7 u>> 0x18).b
uint8_t var_14 = ebx_8
int32_t ecx_53

if (&var_14 u< eax_35)
    ecx_53 = *(ebx + 4)

if (&var_14 u>= eax_35 || ecx_53 u> &var_14)
    if (eax_35 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    uint8_t* eax_37 = *(ebx + 8)
    
    if (eax_37 != 0)
        *eax_37 = ebx_8
else
    if (eax_35 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* ecx_55 = *(ebx + 8)
    
    if (ecx_55 != 0)
        int32_t eax_36
        eax_36.b = *(&var_14 - ecx_53 + *(ebx + 4))
        *ecx_55 = eax_36.b

*(ebx + 8) += 1
int32_t eax_38 = *(ebx + 8)
int32_t ebx_9 = *(ebp + 0x27c)
char var_13 = ebx_9.b
int32_t ecx_57

if (&var_13 u< eax_38)
    ecx_57 = *(ebx + 4)

if (&var_13 u>= eax_38 || ecx_57 u> &var_13)
    if (eax_38 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* eax_40 = *(ebx + 8)
    
    if (eax_40 != 0)
        *eax_40 = ebx_9.b
else
    if (eax_38 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* ecx_59 = *(ebx + 8)
    
    if (ecx_59 != 0)
        int32_t eax_39
        eax_39.b = *(&var_13 - ecx_57 + *(ebx + 4))
        *ecx_59 = eax_39.b

*(ebx + 8) += 1
int32_t ecx_61 = *(ebx + 8)
uint32_t eax_42 = ebx_9 u>> 8
char var_12 = eax_42.b
int32_t edx_7

if (&var_12 u< ecx_61)
    edx_7 = *(ebx + 4)

char* ecx_64

if (&var_12 u>= ecx_61 || edx_7 u> &var_12)
    if (ecx_61 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_64 = *(ebx + 8)
    
    if (ecx_64 != 0)
        *ecx_64 = eax_42.b
else
    if (ecx_61 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_64 = *(ebx + 8)
    
    if (ecx_64 != 0)
        eax_42.b = *(&var_12 - edx_7 + *(ebx + 4))
        *ecx_64 = eax_42.b
*(ebx + 8) += 1
int32_t ecx_65 = *(ebx + 8)
uint32_t eax_44 = ebx_9 u>> 0x10
char var_11 = eax_44.b
int32_t edx_8

if (&var_11 u< ecx_65)
    edx_8 = *(ebx + 4)

char* ecx_68

if (&var_11 u>= ecx_65 || edx_8 u> &var_11)
    if (ecx_65 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_68 = *(ebx + 8)
    
    if (ecx_68 != 0)
        *ecx_68 = eax_44.b
else
    if (ecx_65 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_68 = *(ebx + 8)
    
    if (ecx_68 != 0)
        eax_44.b = *(&var_11 - edx_8 + *(ebx + 4))
        *ecx_68 = eax_44.b
*(ebx + 8) += 1
int32_t eax_45 = *(ebx + 8)
uint8_t ebx_10 = (ebx_9 u>> 0x18).b
uint8_t var_10 = ebx_10
int32_t ecx_69

if (&var_10 u< eax_45)
    ecx_69 = *(ebx + 4)

if (&var_10 u>= eax_45 || ecx_69 u> &var_10)
    if (eax_45 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    uint8_t* eax_47 = *(ebx + 8)
    
    if (eax_47 != 0)
        *eax_47 = ebx_10
else
    if (eax_45 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* ecx_71 = *(ebx + 8)
    
    if (ecx_71 != 0)
        int32_t eax_46
        eax_46.b = *(&var_10 - ecx_69 + *(ebx + 4))
        *ecx_71 = eax_46.b

*(ebx + 8) += 1
int32_t eax_48 = *(ebx + 8)
int32_t ebx_11 = *(ebp + 0x280)
char var_f = ebx_11.b
int32_t ecx_73

if (&var_f u< eax_48)
    ecx_73 = *(ebx + 4)

if (&var_f u>= eax_48 || ecx_73 u> &var_f)
    if (eax_48 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* eax_50 = *(ebx + 8)
    
    if (eax_50 != 0)
        *eax_50 = ebx_11.b
else
    if (eax_48 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* ecx_75 = *(ebx + 8)
    
    if (ecx_75 != 0)
        int32_t eax_49
        eax_49.b = *(&var_f - ecx_73 + *(ebx + 4))
        *ecx_75 = eax_49.b

*(ebx + 8) += 1
int32_t ecx_77 = *(ebx + 8)
uint32_t eax_52 = ebx_11 u>> 8
char var_e = eax_52.b
int32_t edx_9

if (&var_e u< ecx_77)
    edx_9 = *(ebx + 4)

char* ecx_80

if (&var_e u>= ecx_77 || edx_9 u> &var_e)
    if (ecx_77 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_80 = *(ebx + 8)
    
    if (ecx_80 != 0)
        *ecx_80 = eax_52.b
else
    if (ecx_77 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_80 = *(ebx + 8)
    
    if (ecx_80 != 0)
        eax_52.b = *(&var_e - edx_9 + *(ebx + 4))
        *ecx_80 = eax_52.b
*(ebx + 8) += 1
int32_t ecx_81 = *(ebx + 8)
uint32_t eax_54 = ebx_11 u>> 0x10
char var_d = eax_54.b
int32_t edx_10

if (&var_d u< ecx_81)
    edx_10 = *(ebx + 4)

char* ecx_84

if (&var_d u>= ecx_81 || edx_10 u> &var_d)
    if (ecx_81 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_84 = *(ebx + 8)
    
    if (ecx_84 != 0)
        *ecx_84 = eax_54.b
else
    if (ecx_81 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    ecx_84 = *(ebx + 8)
    
    if (ecx_84 != 0)
        eax_54.b = *(&var_d - edx_10 + *(ebx + 4))
        *ecx_84 = eax_54.b
*(ebx + 8) += 1
int32_t eax_55 = *(ebx + 8)
uint8_t ebx_12 = (ebx_11 u>> 0x18).b
uint8_t var_c = ebx_12
int32_t ecx_85

if (&var_c u< eax_55)
    ecx_85 = *(ebx + 4)

if (&var_c u>= eax_55 || ecx_85 u> &var_c)
    if (eax_55 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    uint8_t* eax_57 = *(ebx + 8)
    
    if (eax_57 != 0)
        *eax_57 = ebx_12
else
    if (eax_55 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
    
    char* ecx_87 = *(ebx + 8)
    
    if (ecx_87 != 0)
        int32_t eax_56
        eax_56.b = *(&var_c - ecx_85 + *(ebx + 4))
        *ecx_87 = eax_56.b

*(ebx + 8) += 1
int32_t ecx_89 = *(ebp + 0x28c)
int32_t eax_58 = *(ebx + 8)
int32_t var_8_3 = ecx_89
char var_b = ecx_89.b
int32_t edx_11

if (&var_b u< eax_58)
    edx_11 = *(ebx + 4)

if (&var_b u>= eax_58 || edx_11 u> &var_b)
    if (eax_58 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
        ecx_89 = var_8_3
    
    char* eax_60 = *(ebx + 8)
    
    if (eax_60 != 0)
        *eax_60 = ecx_89.b
else
    if (eax_58 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
        ecx_89 = var_8_3
    
    char* edx_12 = *(ebx + 8)
    
    if (edx_12 != 0)
        int32_t eax_59
        eax_59.b = *(&var_b - edx_11 + *(ebx + 4))
        *edx_12 = eax_59.b

*(ebx + 8) += 1
int32_t eax_61 = *(ebx + 8)
uint8_t ebx_14 = (ecx_89 u>> 8).b
uint8_t var_a = ebx_14
int32_t edx_13

if (&var_a u< eax_61)
    edx_13 = *(ebx + 4)

if (&var_a u>= eax_61 || edx_13 u> &var_a)
    if (eax_61 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
        ecx_89 = var_8_3
    
    uint8_t* eax_63 = *(ebx + 8)
    
    if (eax_63 != 0)
        *eax_63 = ebx_14
else
    if (eax_61 == *(ebx + 0xc))
        sub_403590(ebx + 4, 1)
        ecx_89 = var_8_3
    
    char* edx_14 = *(ebx + 8)
    
    if (edx_14 != 0)
        int32_t eax_62
        eax_62.b = *(&var_a - edx_13 + *(ebx + 4))
        *edx_14 = eax_62.b

*(ebx + 8) += 1
var_9 = (ecx_89 u>> 0x10).b
sub_414b60(ebx + 4, &var_9)
var_9 = (var_8_3 u>> 0x18).b
sub_414b60(ebx + 4, &var_9)
void* ebx_15 = arg2
sub_468ec0(ebx_15, *(ebp + 0x288))
sub_468ec0(ebx_15, *(ebp + 0x284))
arg2 = *(ebp + 0x294)
sub_468ec0(ebx_15, arg2)
arg2 = *(ebp + 0x298)
sub_468ec0(ebx_15, arg2)
sub_468ec0(ebx_15, *(ebp + 0x2a4))
sub_468ec0(ebx_15, *(ebp + 0x2a0))
sub_468ec0(ebx_15, *(ebp + 0x29c))
arg2.b = *(ebp + 0x2ac) != 0
sub_414b60(ebx + 4, &arg2)
sub_468ec0(ebx_15, *(ebp + 0x2bc))
arg2.b = *(ebp + 0x2c0) != 0
sub_414b60(ebx + 4, &arg2)
sub_468ec0(ebx_15, *(ebp + 0x2e0))
sub_468ec0(ebx_15, *(ebp + 0x2e4))
sub_468ec0(ebx_15, *(ebp + 0x2e8))
sub_468ec0(ebx_15, *(ebp + 0x2ec))
int32_t result
result.b = 1
return result
