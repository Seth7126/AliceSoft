// 函数: sub_4b9b80
// 地址: 0x4b9b80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t ebp = arg2
sub_468ec0(ebp, *(arg1 + 8))
void* edi = ebp + 4
bool var_d = *(arg1 + 0xc) != 0
sub_414b60(edi, &var_d)
var_d = *(arg1 + 0xd) != 0
sub_414b60(edi, &var_d)
sub_468ec0(ebp, *(arg1 + 0x10))
sub_468ec0(ebp, *(arg1 + 0x14))
sub_468ec0(ebp, *(arg1 + 0x18))
sub_468ec0(ebp, *(arg1 + 0x1c))
var_d = *(arg1 + 0x20) != 0
sub_414b60(edi, &var_d)
var_d = *(arg1 + 0x21) != 0
sub_414b60(edi, &var_d)
sub_468ec0(ebp, *(arg1 + 0x24))
sub_468ec0(ebp, *(arg1 + 0x2c))
sub_468ec0(ebp, *(arg1 + 0x30))
sub_468ec0(ebp, *(arg1 + 0x34))
sub_468ec0(ebp, *(arg1 + 0x38))
sub_468ec0(ebp, *(arg1 + 0x3c))
sub_468ec0(ebp, *(arg1 + 0x40))
sub_468ec0(ebp, *(arg1 + 0x44))
sub_468ec0(ebp, *(arg1 + 0x48))
sub_468ec0(ebp, *(arg1 + 0x4c))
sub_468ec0(ebp, *(arg1 + 0x50))
sub_468ec0(ebp, *(arg1 + 0x54))
sub_468ec0(ebp, *(arg1 + 0x58))
sub_468ec0(ebp, *(arg1 + 0x5c))
sub_468ec0(ebp, *(arg1 + 0x60))
sub_468ec0(ebp, *(arg1 + 0x64))
sub_468ec0(ebp, *(arg1 + 0x68))
sub_468ec0(ebp, *(arg1 + 0x6c))
sub_468ec0(ebp, *(arg1 + 0x70))
sub_468ec0(ebp, *(arg1 + 0x74))
sub_468ec0(ebp, *(arg1 + 0x78))
sub_468ec0(ebp, *(arg1 + 0x7c))
sub_468ec0(ebp, *(arg1 + 0x80))
sub_468ec0(ebp, *(arg1 + 0x84))
var_d = *(arg1 + 0x88) != 0
sub_414b60(edi, &var_d)
sub_468ec0(ebp, *(arg1 + 0x8c))
sub_468ec0(ebp, *(arg1 + 0x90))
sub_468ec0(ebp, (*(arg1 + 0x98) - *(arg1 + 0x94)) s>> 2)
int32_t* i = *(arg1 + 0x94)

if (i != *(arg1 + 0x98))
    do
        int32_t ecx_38 = *i
        int32_t eax_3 = *(edi + 4)
        int32_t var_c_7 = ecx_38
        char var_24 = ecx_38.b
        
        if (&var_24 u>= eax_3 || *edi u> &var_24)
            if (eax_3 == *(edi + 8))
                sub_403590(edi, 1)
                ecx_38 = var_c_7
            
            char* eax_6 = *(edi + 4)
            
            if (eax_6 != 0)
                *eax_6 = ecx_38.b
        else
            void* edx_1 = &var_24 - *edi
            
            if (eax_3 == *(edi + 8))
                sub_403590(edi, 1)
                ecx_38 = var_c_7
            
            char* eax_4 = *(edi + 4)
            
            if (eax_4 != 0)
                int32_t eax_5
                eax_5.b = *(edx_1 + *edi)
                *eax_4 = eax_5.b
        
        *(edi + 4) += 1
        int32_t edx_3 = *(edi + 4)
        uint32_t eax_8 = ecx_38 u>> 8
        char var_23 = eax_8.b
        
        if (&var_23 u>= edx_3 || *edi u> &var_23)
            if (edx_3 == *(edi + 8))
                sub_403590(edi, 1)
                ecx_38 = var_c_7
            
            char* edx_5 = *(edi + 4)
            
            if (edx_5 != 0)
                *edx_5 = eax_8.b
        else
            void* eax_9 = &var_23 - *edi
            
            if (edx_3 == *(edi + 8))
                sub_403590(edi, 1)
                ecx_38 = var_c_7
            
            char* eax_10 = *(edi + 4)
            
            if (eax_10 != 0)
                eax_8.b = *(eax_9 + *edi)
                *eax_10 = eax_8.b
        
        *(edi + 4) += 1
        int32_t edx_6 = *(edi + 4)
        uint32_t eax_12 = ecx_38 u>> 0x10
        char var_22 = eax_12.b
        
        if (&var_22 u>= edx_6 || *edi u> &var_22)
            if (edx_6 == *(edi + 8))
                sub_403590(edi, 1)
                ecx_38 = var_c_7
            
            char* edx_8 = *(edi + 4)
            
            if (edx_8 != 0)
                *edx_8 = eax_12.b
        else
            void* eax_13 = &var_22 - *edi
            
            if (edx_6 == *(edi + 8))
                sub_403590(edi, 1)
                ecx_38 = var_c_7
            
            char* eax_14 = *(edi + 4)
            
            if (eax_14 != 0)
                eax_12.b = *(eax_13 + *edi)
                *eax_14 = eax_12.b
        
        *(edi + 4) += 1
        int32_t eax_15 = *(edi + 4)
        uint32_t ecx_44 = ecx_38 u>> 0x18
        char var_21 = ecx_44.b
        int32_t edx_9
        
        if (&var_21 u< eax_15)
            edx_9 = *edi
        
        if (&var_21 u>= eax_15 || edx_9 u> &var_21)
            if (eax_15 == *(edi + 8))
                sub_403590(edi, 1)
            
            char* eax_17 = *(edi + 4)
            
            if (eax_17 != 0)
                *eax_17 = ecx_44.b
        else
            if (eax_15 == *(edi + 8))
                sub_403590(edi, 1)
            
            char* edx_10 = *(edi + 4)
            
            if (edx_10 != 0)
                int32_t eax_16
                eax_16.b = *(&var_21 - edx_9 + *edi)
                *edx_10 = eax_16.b
        
        *(edi + 4) += 1
        i = &i[1]
    while (i != *(arg1 + 0x98))
    
    ebp = arg2

uint32_t ecx_49 = *(arg1 + 0xa0)
int32_t eax_18 = *(edi + 4)
arg2 = ecx_49
char var_20 = ecx_49.b
int32_t edx_11

if (&var_20 u< eax_18)
    edx_11 = *edi

if (&var_20 u>= eax_18 || edx_11 u> &var_20)
    if (eax_18 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_49 = arg2
    
    char* eax_20 = *(edi + 4)
    
    if (eax_20 != 0)
        *eax_20 = ecx_49.b
else
    if (eax_18 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_49 = arg2
    
    char* edx_12 = *(edi + 4)
    
    if (edx_12 != 0)
        int32_t eax_19
        eax_19.b = *(&var_20 - edx_11 + *edi)
        *edx_12 = eax_19.b

*(edi + 4) += 1
int32_t edx_13 = *(edi + 4)
uint32_t eax_22 = ecx_49 u>> 8
char var_1f = eax_22.b
char* edx_14

if (&var_1f u>= edx_13 || *edi u> &var_1f)
    if (edx_13 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_49 = arg2
    
    edx_14 = *(edi + 4)
    
    if (edx_14 != 0)
        *edx_14 = eax_22.b
else
    void* esi_1 = &var_1f - *edi
    
    if (edx_13 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_49 = arg2
    
    edx_14 = *(edi + 4)
    
    if (edx_14 != 0)
        eax_22.b = *(esi_1 + *edi)
        *edx_14 = eax_22.b
*(edi + 4) += 1
int32_t edx_15 = *(edi + 4)
uint32_t eax_24 = ecx_49 u>> 0x10
char var_1e = eax_24.b
char* edx_16

if (&var_1e u>= edx_15 || *edi u> &var_1e)
    if (edx_15 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_49 = arg2
    
    edx_16 = *(edi + 4)
    
    if (edx_16 != 0)
        *edx_16 = eax_24.b
else
    void* esi_2 = &var_1e - *edi
    
    if (edx_15 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_49 = arg2
    
    edx_16 = *(edi + 4)
    
    if (edx_16 != 0)
        eax_24.b = *(esi_2 + *edi)
        *edx_16 = eax_24.b
*(edi + 4) += 1
int32_t eax_25 = *(edi + 4)
uint32_t ecx_55 = ecx_49 u>> 0x18
arg2 = ecx_55
char var_1d = ecx_55.b
int32_t edx_17

if (&var_1d u< eax_25)
    edx_17 = *edi

if (&var_1d u>= eax_25 || edx_17 u> &var_1d)
    if (eax_25 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_55 = arg2
    
    char* eax_27 = *(edi + 4)
    
    if (eax_27 != 0)
        *eax_27 = ecx_55.b
else
    if (eax_25 == *(edi + 8))
        sub_403590(edi, 1)
    
    char* ecx_57 = *(edi + 4)
    
    if (ecx_57 != 0)
        int32_t eax_26
        eax_26.b = *(&var_1d - edx_17 + *edi)
        *ecx_57 = eax_26.b

*(edi + 4) += 1
uint32_t ecx_59 = *(arg1 + 0xa4)
int32_t eax_28 = *(edi + 4)
arg2 = ecx_59
char var_1c = ecx_59.b
int32_t edx_18

if (&var_1c u< eax_28)
    edx_18 = *edi

if (&var_1c u>= eax_28 || edx_18 u> &var_1c)
    if (eax_28 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_59 = arg2
    
    char* eax_30 = *(edi + 4)
    
    if (eax_30 != 0)
        *eax_30 = ecx_59.b
else
    if (eax_28 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_59 = arg2
    
    char* edx_19 = *(edi + 4)
    
    if (edx_19 != 0)
        int32_t eax_29
        eax_29.b = *(&var_1c - edx_18 + *edi)
        *edx_19 = eax_29.b

*(edi + 4) += 1
int32_t edx_20 = *(edi + 4)
uint32_t eax_32 = ecx_59 u>> 8
char var_1b = eax_32.b
char* edx_21

if (&var_1b u>= edx_20 || *edi u> &var_1b)
    if (edx_20 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_59 = arg2
    
    edx_21 = *(edi + 4)
    
    if (edx_21 != 0)
        *edx_21 = eax_32.b
else
    void* esi_5 = &var_1b - *edi
    
    if (edx_20 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_59 = arg2
    
    edx_21 = *(edi + 4)
    
    if (edx_21 != 0)
        eax_32.b = *(esi_5 + *edi)
        *edx_21 = eax_32.b
*(edi + 4) += 1
int32_t edx_22 = *(edi + 4)
uint32_t eax_34 = ecx_59 u>> 0x10
char var_1a = eax_34.b
char* edx_23

if (&var_1a u>= edx_22 || *edi u> &var_1a)
    if (edx_22 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_59 = arg2
    
    edx_23 = *(edi + 4)
    
    if (edx_23 != 0)
        *edx_23 = eax_34.b
else
    void* esi_6 = &var_1a - *edi
    
    if (edx_22 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_59 = arg2
    
    edx_23 = *(edi + 4)
    
    if (edx_23 != 0)
        eax_34.b = *(esi_6 + *edi)
        *edx_23 = eax_34.b
*(edi + 4) += 1
int32_t eax_35 = *(edi + 4)
uint32_t ecx_66 = ecx_59 u>> 0x18
arg2 = ecx_66
char var_19 = ecx_66.b
int32_t edx_24

if (&var_19 u< eax_35)
    edx_24 = *edi

if (&var_19 u>= eax_35 || edx_24 u> &var_19)
    if (eax_35 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_66 = arg2
    
    char* eax_37 = *(edi + 4)
    
    if (eax_37 != 0)
        *eax_37 = ecx_66.b
else
    if (eax_35 == *(edi + 8))
        sub_403590(edi, 1)
    
    char* ecx_68 = *(edi + 4)
    
    if (ecx_68 != 0)
        int32_t eax_36
        eax_36.b = *(&var_19 - edx_24 + *edi)
        *ecx_68 = eax_36.b

*(edi + 4) += 1
sub_4be0c0(arg1 + 0x24c, ebp)
sub_4be0c0(arg1 + 0x268, ebp)
sub_4bd940(arg1 + 0x284, ebp)
sub_4bd940(arg1 + 0x2a0, ebp)
sub_4bd940(arg1 + 0x2bc, ebp)
sub_4bd940(arg1 + 0x2d8, ebp)
sub_4bd940(arg1 + 0x2f4, ebp)
sub_4bd940(arg1 + 0x310, ebp)
sub_4bd940(arg1 + 0x32c, ebp)
sub_4bd940(arg1 + 0xd8, ebp)
sub_4bd940(arg1 + 0xf4, ebp)
uint32_t ecx_81 = *(arg1 + 0x110)
int32_t eax_38 = *(edi + 4)
arg2 = ecx_81
char var_18 = ecx_81.b
int32_t edx_25

if (&var_18 u< eax_38)
    edx_25 = *edi

if (&var_18 u>= eax_38 || edx_25 u> &var_18)
    if (eax_38 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_81 = arg2
    
    char* eax_40 = *(edi + 4)
    
    if (eax_40 != 0)
        *eax_40 = ecx_81.b
else
    if (eax_38 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_81 = arg2
    
    char* edx_26 = *(edi + 4)
    
    if (edx_26 != 0)
        int32_t eax_39
        eax_39.b = *(&var_18 - edx_25 + *edi)
        *edx_26 = eax_39.b

*(edi + 4) += 1
int32_t edx_27 = *(edi + 4)
uint32_t eax_42 = ecx_81 u>> 8
char var_17 = eax_42.b
char* edx_28

if (&var_17 u>= edx_27 || *edi u> &var_17)
    if (edx_27 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_81 = arg2
    
    edx_28 = *(edi + 4)
    
    if (edx_28 != 0)
        *edx_28 = eax_42.b
else
    void* esi_9 = &var_17 - *edi
    
    if (edx_27 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_81 = arg2
    
    edx_28 = *(edi + 4)
    
    if (edx_28 != 0)
        eax_42.b = *(esi_9 + *edi)
        *edx_28 = eax_42.b
*(edi + 4) += 1
int32_t edx_29 = *(edi + 4)
uint32_t eax_44 = ecx_81 u>> 0x10
char var_16 = eax_44.b
char* edx_30

if (&var_16 u>= edx_29 || *edi u> &var_16)
    if (edx_29 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_81 = arg2
    
    edx_30 = *(edi + 4)
    
    if (edx_30 != 0)
        *edx_30 = eax_44.b
else
    void* esi_10 = &var_16 - *edi
    
    if (edx_29 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_81 = arg2
    
    edx_30 = *(edi + 4)
    
    if (edx_30 != 0)
        eax_44.b = *(esi_10 + *edi)
        *edx_30 = eax_44.b
*(edi + 4) += 1
int32_t eax_45 = *(edi + 4)
uint32_t ecx_88 = ecx_81 u>> 0x18
arg2 = ecx_88
char var_15 = ecx_88.b
int32_t edx_31

if (&var_15 u< eax_45)
    edx_31 = *edi

if (&var_15 u>= eax_45 || edx_31 u> &var_15)
    if (eax_45 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_88 = arg2
    
    char* eax_47 = *(edi + 4)
    
    if (eax_47 != 0)
        *eax_47 = ecx_88.b
else
    if (eax_45 == *(edi + 8))
        sub_403590(edi, 1)
    
    char* ecx_90 = *(edi + 4)
    
    if (ecx_90 != 0)
        int32_t eax_46
        eax_46.b = *(&var_15 - edx_31 + *edi)
        *ecx_90 = eax_46.b

*(edi + 4) += 1
uint32_t ecx_92 = *(arg1 + 0x114)
int32_t eax_48 = *(edi + 4)
arg2 = ecx_92
char var_14 = ecx_92.b
int32_t edx_32

if (&var_14 u< eax_48)
    edx_32 = *edi

if (&var_14 u>= eax_48 || edx_32 u> &var_14)
    if (eax_48 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_92 = arg2
    
    char* eax_50 = *(edi + 4)
    
    if (eax_50 != 0)
        *eax_50 = ecx_92.b
else
    if (eax_48 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_92 = arg2
    
    char* edx_33 = *(edi + 4)
    
    if (edx_33 != 0)
        int32_t eax_49
        eax_49.b = *(&var_14 - edx_32 + *edi)
        *edx_33 = eax_49.b

*(edi + 4) += 1
int32_t edx_34 = *(edi + 4)
uint32_t eax_52 = ecx_92 u>> 8
char var_13 = eax_52.b
char* edx_35

if (&var_13 u>= edx_34 || *edi u> &var_13)
    if (edx_34 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_92 = arg2
    
    edx_35 = *(edi + 4)
    
    if (edx_35 != 0)
        *edx_35 = eax_52.b
else
    void* esi_13 = &var_13 - *edi
    
    if (edx_34 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_92 = arg2
    
    edx_35 = *(edi + 4)
    
    if (edx_35 != 0)
        eax_52.b = *(esi_13 + *edi)
        *edx_35 = eax_52.b
*(edi + 4) += 1
int32_t edx_36 = *(edi + 4)
uint32_t eax_54 = ecx_92 u>> 0x10
char var_12 = eax_54.b
char* edx_37

if (&var_12 u>= edx_36 || *edi u> &var_12)
    if (edx_36 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_92 = arg2
    
    edx_37 = *(edi + 4)
    
    if (edx_37 != 0)
        *edx_37 = eax_54.b
else
    void* esi_14 = &var_12 - *edi
    
    if (edx_36 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_92 = arg2
    
    edx_37 = *(edi + 4)
    
    if (edx_37 != 0)
        eax_54.b = *(esi_14 + *edi)
        *edx_37 = eax_54.b
*(edi + 4) += 1
int32_t eax_55 = *(edi + 4)
uint32_t ecx_99 = ecx_92 u>> 0x18
arg2 = ecx_99
char var_11 = ecx_99.b
int32_t edx_38

if (&var_11 u< eax_55)
    edx_38 = *edi

if (&var_11 u>= eax_55 || edx_38 u> &var_11)
    if (eax_55 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_99 = arg2
    
    char* eax_57 = *(edi + 4)
    
    if (eax_57 != 0)
        *eax_57 = ecx_99.b
else
    if (eax_55 == *(edi + 8))
        sub_403590(edi, 1)
    
    char* ecx_101 = *(edi + 4)
    
    if (ecx_101 != 0)
        int32_t eax_56
        eax_56.b = *(&var_11 - edx_38 + *edi)
        *ecx_101 = eax_56.b

*(edi + 4) += 1
sub_4be0c0(arg1 + 0x118, ebp)
sub_4be0c0(arg1 + 0x134, ebp)
sub_4be0c0(arg1 + 0x150, ebp)
sub_4be0c0(arg1 + 0x16c, ebp)
sub_4be0c0(arg1 + 0x188, ebp)
sub_4bd940(arg1 + 0x1a4, ebp)
sub_4be0c0(arg1 + 0x1c0, ebp)
sub_4be0c0(arg1 + 0x1dc, ebp)
sub_4be0c0(arg1 + 0x1f8, ebp)
sub_4be0c0(arg1 + 0x214, ebp)
sub_4bd940(arg1 + 0x230, ebp)
int32_t eax_58 = *(edi + 4)
uint32_t ecx_116 = (*(arg1 + 0xac) - *(arg1 + 0xa8)) s>> 2
arg2 = ecx_116
char var_10 = ecx_116.b
int32_t edx_39

if (&var_10 u< eax_58)
    edx_39 = *edi

if (&var_10 u>= eax_58 || edx_39 u> &var_10)
    if (eax_58 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_116 = arg2
    
    char* eax_60 = *(edi + 4)
    
    if (eax_60 != 0)
        *eax_60 = ecx_116.b
else
    if (eax_58 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_116 = arg2
    
    char* edx_40 = *(edi + 4)
    
    if (edx_40 != 0)
        int32_t eax_59
        eax_59.b = *(&var_10 - edx_39 + *edi)
        *edx_40 = eax_59.b

*(edi + 4) += 1
int32_t edx_41 = *(edi + 4)
uint32_t eax_62 = ecx_116 u>> 8
char var_f = eax_62.b
char* edx_42

if (&var_f u>= edx_41 || *edi u> &var_f)
    if (edx_41 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_116 = arg2
    
    edx_42 = *(edi + 4)
    
    if (edx_42 != 0)
        *edx_42 = eax_62.b
else
    void* esi_17 = &var_f - *edi
    
    if (edx_41 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_116 = arg2
    
    edx_42 = *(edi + 4)
    
    if (edx_42 != 0)
        eax_62.b = *(esi_17 + *edi)
        *edx_42 = eax_62.b
*(edi + 4) += 1
int32_t edx_43 = *(edi + 4)
uint32_t eax_64 = ecx_116 u>> 0x10
char var_e = eax_64.b
char* edx_44

if (&var_e u>= edx_43 || *edi u> &var_e)
    if (edx_43 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_116 = arg2
    
    edx_44 = *(edi + 4)
    
    if (edx_44 != 0)
        *edx_44 = eax_64.b
else
    void* esi_18 = &var_e - *edi
    
    if (edx_43 == *(edi + 8))
        sub_403590(edi, 1)
        ecx_116 = arg2
    
    edx_44 = *(edi + 4)
    
    if (edx_44 != 0)
        eax_64.b = *(esi_18 + *edi)
        *edx_44 = eax_64.b
*(edi + 4) += 1
arg2.b = (ecx_116 u>> 0x18).b
sub_414b60(edi, &arg2)

for (int32_t* i_1 = *(arg1 + 0xa8); i_1 != *(arg1 + 0xac); i_1 = &i_1[1])
    sub_468ec0(ebp, *i_1)

sub_468ec0(ebp, (*(arg1 + 0xb8) - *(arg1 + 0xb4)) s>> 2)

for (int32_t* i_2 = *(arg1 + 0xb4); i_2 != *(arg1 + 0xb8); i_2 = &i_2[1])
    sub_468ec0(ebp, *i_2)

arg2.b = *(arg1 + 0x410) != 0
sub_414b60(edi, &arg2)
arg2.b = *(arg1 + 0x411) != 0
sub_414b60(edi, &arg2)
arg2.b = *(arg1 + 0x412) != 0
sub_414b60(edi, &arg2)
arg2.b = *(arg1 + 0x413) != 0
sub_414b60(edi, &arg2)
arg2.b = *(arg1 + 0x42c) != 0
sub_414b60(edi, &arg2)

for (int32_t i_3 = 0; i_3 s< 0x60; i_3 += 0x18)
    int32_t* ecx_136 = *(arg1 + 0x414) + i_3
    arg2 = ecx_136[4]
    int32_t eax_69 = ecx_136[5]
    int32_t* edx_45
    
    if (eax_69 u< 0x10)
        edx_45 = ecx_136
    else
        edx_45 = *ecx_136
    
    if (eax_69 u>= 0x10)
        ecx_136 = *ecx_136
    
    uint32_t var_38_68 = arg2
    sub_468ff0(edi, *(ebp + 8), ecx_136, arg2 + edx_45)
    arg2.b = 0
    sub_414b60(edi, &arg2)

for (int32_t* i_4 = *(arg1 + 0x420); i_4 != *(arg1 + 0x424); i_4 = &i_4[1])
    sub_468ec0(ebp, *i_4)

int32_t result
result.b = 1
return result
