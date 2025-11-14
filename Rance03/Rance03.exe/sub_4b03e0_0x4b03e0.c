// 函数: sub_4b03e0
// 地址: 0x4b03e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_468ec0(arg2, *(arg1 + 0x50))
sub_468ec0(arg2, *(arg1 + 0x54))
sub_468ec0(arg2, *(arg1 + 0x58))
sub_468ec0(arg2, *(arg1 + 0x5c))
sub_468ec0(arg2, *(arg1 + 0x60))
int32_t eax = *(arg1 + 0x78)
void* ecx_5 = arg1 + 0x64
int32_t ebp = *(ecx_5 + 0x10)
void* edx

if (eax u< 0x10)
    edx = ecx_5
else
    edx = *ecx_5

if (eax u>= 0x10)
    ecx_5 = *ecx_5

uint32_t var_2c_5 = arg2
void* esi = arg2 + 4
sub_468ff0(esi, *(arg2 + 8), ecx_5, edx + ebp)
char var_d = 0
sub_414b60(esi, &var_d)
sub_468ec0(arg2, *(arg1 + 0x7c))
sub_468ec0(arg2, *(arg1 + 0x84))
sub_468ec0(arg2, *(arg1 + 0x88))
sub_468ec0(arg2, *(arg1 + 0x94))
sub_468ec0(arg2, *(arg1 + 0x90))
sub_468ec0(arg2, *(arg1 + 0x8c))
sub_468ec0(arg2, *(arg1 + 0x9c))
sub_468ec0(arg2, *(arg1 + 0xa0))
sub_468ec0(arg2, *(arg1 + 0xac))
sub_468ec0(arg2, *(arg1 + 0xa8))
sub_468ec0(arg2, *(arg1 + 0xa4))
int32_t eax_2
int32_t edx_1
edx_1:eax_2 = muls.dp.d(0x2aaaaaab, *(arg1 + 0xb8) - *(arg1 + 0xb4))
int32_t edx_2 = edx_1 s>> 2
int32_t ebp_3 = (edx_2 u>> 0x1f) + edx_2
sub_468ec0(arg2, ebp_3)
int32_t ebx_1 = 0

if (ebp_3 s> 0)
    int32_t ebp_4 = 0
    char var_16 = 0
    int32_t var_c_2 = 0
    
    do
        int32_t eax_3
        int32_t edx_3
        edx_3:eax_3 = muls.dp.d(0x2aaaaaab, *(arg1 + 0xb8) - *(arg1 + 0xb4))
        int32_t edx_4 = edx_3 s>> 2
        void** ecx_25
        
        if ((edx_4 u>> 0x1f) + edx_4 s<= ebx_1 || ebx_1 s< 0)
            ecx_25 = arg1 + 4
        else
            ecx_25 = *(arg1 + 0xb4) + ebp_4
        
        void* eax_7 = ecx_25[4]
        int32_t eax_8 = ecx_25[5]
        void** edx_5
        
        if (eax_8 u< 0x10)
            edx_5 = ecx_25
        else
            edx_5 = *ecx_25
        
        if (eax_8 u>= 0x10)
            ecx_25 = *ecx_25
        
        uint32_t var_2c_19 = arg2
        sub_468ff0(esi, *(arg2 + 8), ecx_25, eax_7 + edx_5)
        int32_t eax_12 = *(esi + 4)
        int32_t ecx_27
        
        if (&var_16 u< eax_12)
            ecx_27 = *esi
        
        if (&var_16 u>= eax_12 || ecx_27 u> &var_16)
            if (eax_12 == *(esi + 8))
                sub_403590(esi, 1)
            
            char* eax_14 = *(esi + 4)
            
            if (eax_14 != 0)
                *eax_14 = 0
        else
            if (eax_12 == *(esi + 8))
                sub_403590(esi, 1)
            
            char* ecx_29 = *(esi + 4)
            
            if (ecx_29 != 0)
                char* eax_13
                eax_13.b = *(*esi + &var_16 - ecx_27)
                *ecx_29 = eax_13.b
            
            ebp_4 = var_c_2
        
        *(esi + 4) += 1
        ebx_1 += 1
        ebp_4 += 0x18
        var_c_2 = ebp_4
    while (ebx_1 s< ebp_3)

int32_t eax_15 = *(esi + 4)
int32_t ebx_2 = *(arg1 + 0xc0)
char var_15 = ebx_2.b
int32_t ecx_31

if (&var_15 u< eax_15)
    ecx_31 = *esi

if (&var_15 u>= eax_15 || ecx_31 u> &var_15)
    if (eax_15 == *(esi + 8))
        sub_403590(esi, 1)
    
    char* eax_17 = *(esi + 4)
    
    if (eax_17 != 0)
        *eax_17 = ebx_2.b
else
    if (eax_15 == *(esi + 8))
        sub_403590(esi, 1)
    
    char* ecx_33 = *(esi + 4)
    
    if (ecx_33 != 0)
        char* eax_16
        eax_16.b = *(*esi + &var_15 - ecx_31)
        *ecx_33 = eax_16.b

*(esi + 4) += 1
int32_t ecx_35 = *(esi + 4)
uint32_t eax_19 = ebx_2 u>> 8
char var_14 = eax_19.b
int32_t edx_6

if (&var_14 u< ecx_35)
    edx_6 = *esi

char* ecx_38

if (&var_14 u>= ecx_35 || edx_6 u> &var_14)
    if (ecx_35 == *(esi + 8))
        sub_403590(esi, 1)
    
    ecx_38 = *(esi + 4)
    
    if (ecx_38 != 0)
        *ecx_38 = eax_19.b
else
    if (ecx_35 == *(esi + 8))
        sub_403590(esi, 1)
    
    ecx_38 = *(esi + 4)
    
    if (ecx_38 != 0)
        eax_19.b = *(*esi + &var_14 - edx_6)
        *ecx_38 = eax_19.b
*(esi + 4) += 1
int32_t ecx_39 = *(esi + 4)
uint32_t eax_21 = ebx_2 u>> 0x10
char var_13 = eax_21.b
int32_t edx_7

if (&var_13 u< ecx_39)
    edx_7 = *esi

char* ecx_42

if (&var_13 u>= ecx_39 || edx_7 u> &var_13)
    if (ecx_39 == *(esi + 8))
        sub_403590(esi, 1)
    
    ecx_42 = *(esi + 4)
    
    if (ecx_42 != 0)
        *ecx_42 = eax_21.b
else
    if (ecx_39 == *(esi + 8))
        sub_403590(esi, 1)
    
    ecx_42 = *(esi + 4)
    
    if (ecx_42 != 0)
        eax_21.b = *(*esi + &var_13 - edx_7)
        *ecx_42 = eax_21.b
*(esi + 4) += 1
int32_t eax_22 = *(esi + 4)
uint8_t ebx_3 = (ebx_2 u>> 0x18).b
uint8_t var_12 = ebx_3
int32_t ecx_43

if (&var_12 u< eax_22)
    ecx_43 = *esi

if (&var_12 u>= eax_22 || ecx_43 u> &var_12)
    if (eax_22 == *(esi + 8))
        sub_403590(esi, 1)
    
    uint8_t* eax_24 = *(esi + 4)
    
    if (eax_24 != 0)
        *eax_24 = ebx_3
else
    if (eax_22 == *(esi + 8))
        sub_403590(esi, 1)
    
    char* ecx_45 = *(esi + 4)
    
    if (ecx_45 != 0)
        int32_t eax_23
        eax_23.b = *(&var_12 - ecx_43 + *esi)
        *ecx_45 = eax_23.b

*(esi + 4) += 1
int32_t eax_25 = *(esi + 4)
int32_t ebx_5 = *(arg1 + 0xc4)
char var_11 = ebx_5.b
int32_t ecx_47

if (&var_11 u< eax_25)
    ecx_47 = *esi

if (&var_11 u>= eax_25 || ecx_47 u> &var_11)
    if (eax_25 == *(esi + 8))
        sub_403590(esi, 1)
    
    char* eax_27 = *(esi + 4)
    
    if (eax_27 != 0)
        *eax_27 = ebx_5.b
else
    if (eax_25 == *(esi + 8))
        sub_403590(esi, 1)
    
    char* ecx_49 = *(esi + 4)
    
    if (ecx_49 != 0)
        int32_t eax_26
        eax_26.b = *(&var_11 - ecx_47 + *esi)
        *ecx_49 = eax_26.b

*(esi + 4) += 1
int32_t ecx_51 = *(esi + 4)
uint32_t eax_29 = ebx_5 u>> 8
char var_10 = eax_29.b
int32_t edx_8

if (&var_10 u< ecx_51)
    edx_8 = *esi

char* ecx_54

if (&var_10 u>= ecx_51 || edx_8 u> &var_10)
    if (ecx_51 == *(esi + 8))
        sub_403590(esi, 1)
    
    ecx_54 = *(esi + 4)
    
    if (ecx_54 != 0)
        *ecx_54 = eax_29.b
else
    if (ecx_51 == *(esi + 8))
        sub_403590(esi, 1)
    
    ecx_54 = *(esi + 4)
    
    if (ecx_54 != 0)
        eax_29.b = *(&var_10 - edx_8 + *esi)
        *ecx_54 = eax_29.b
*(esi + 4) += 1
int32_t ecx_55 = *(esi + 4)
uint32_t eax_31 = ebx_5 u>> 0x10
char var_f = eax_31.b
int32_t edx_9

if (&var_f u< ecx_55)
    edx_9 = *esi

char* ecx_58

if (&var_f u>= ecx_55 || edx_9 u> &var_f)
    if (ecx_55 == *(esi + 8))
        sub_403590(esi, 1)
    
    ecx_58 = *(esi + 4)
    
    if (ecx_58 != 0)
        *ecx_58 = eax_31.b
else
    if (ecx_55 == *(esi + 8))
        sub_403590(esi, 1)
    
    ecx_58 = *(esi + 4)
    
    if (ecx_58 != 0)
        eax_31.b = (&var_f - edx_9)[*esi]
        *ecx_58 = eax_31.b
*(esi + 4) += 1
uint8_t* eax_32 = *(esi + 4)
uint8_t ebx_6 = (ebx_5 u>> 0x18).b
uint8_t var_e = ebx_6
int32_t ecx_59

if (&var_e u< eax_32)
    ecx_59 = *esi

if (&var_e u>= eax_32 || ecx_59 u> &var_e)
    if (eax_32 == *(esi + 8))
        sub_403590(esi, 1)
    
    eax_32 = *(esi + 4)
    
    if (eax_32 != 0)
        *eax_32 = ebx_6
else
    if (eax_32 == *(esi + 8))
        sub_403590(esi, 1)
    
    char* ecx_61 = *(esi + 4)
    
    if (ecx_61 != 0)
        int32_t eax_33
        eax_33.b = *(&var_e - ecx_59 + *esi)
        *ecx_61 = eax_33.b
        eax_33.b = 1
        *(esi + 4) += 1
        return eax_33

*(esi + 4) += 1
eax_32.b = 1
return eax_32
