// 函数: sub_4b15c0
// 地址: 0x4b15c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_6bd47c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_c8
int32_t eax_2 = __security_cookie ^ &var_c8
int32_t __saved_edi
int32_t var_d4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14_1 = 0
int32_t var_a8
void* var_90
int32_t* ecx_2 =
    sub_410930(sub_410930(&ExceptionList, arg4, &var_90, ."), &var_90, &var_a8, 0x6e0be8)
var_14_1.b = 1
int32_t* edx_2 = *(arg3 + 4)
int32_t eax_8

if (edx_2 != 0)
    if (ecx_2[5] u>= 0x10)
        ecx_2 = *ecx_2
    
    eax_8 = (*(*edx_2 + 0x50))(ecx_2, 0)
else
    eax_8 = 0

var_14_1.b = 0
*(arg1 + 0x50) = eax_8
int32_t var_94

if (var_94 u>= 0x10)
    eax_8 = j__free(var_a8)

int32_t* ecx_5 = sub_410930(eax_8, &var_90, &var_a8, 0x6e0bd0)
var_14_1.b = 2
int32_t* edx_4 = *(arg3 + 4)
int32_t eax_12

if (edx_4 != 0)
    if (ecx_5[5] u>= 0x10)
        ecx_5 = *ecx_5
    
    eax_12 = (*(*edx_4 + 0x50))(ecx_5, 1)
else
    eax_12 = 0

var_14_1.b = 0
*(arg1 + 0x58) = eax_12

if (var_94 u>= 0x10)
    eax_12 = j__free(var_a8)

int32_t* ecx_8 = sub_410930(eax_12, &var_90, &var_a8, 0x6e0bd8)
var_14_1.b = 3
int32_t* edx_6 = *(arg3 + 4)
int32_t eax_16

if (edx_6 != 0)
    if (ecx_8[5] u>= 0x10)
        ecx_8 = *ecx_8
    
    eax_16 = (*(*edx_6 + 0x44))(ecx_8)
else
    eax_16 = 0

var_14_1.b = 0
*(arg1 + 0x54) = eax_16

if (var_94 u>= 0x10)
    eax_16 = j__free(var_a8)

int32_t* ecx_11 = sub_410930(eax_16, &var_90, &var_a8, 0x6e0c0c)
var_14_1.b = 4
int32_t* edx_8 = *(arg3 + 4)
int32_t eax_20

if (edx_8 != 0)
    if (ecx_11[5] u>= 0x10)
        ecx_11 = *ecx_11
    
    eax_20 = (*(*edx_8 + 0x50))(ecx_11, 0)
else
    eax_20 = 0

var_14_1.b = 0
*(arg1 + 0x5c) = eax_20

if (var_94 u>= 0x10)
    eax_20 = j__free(var_a8)

int32_t* ecx_14 = sub_410930(eax_20, &var_90, &var_a8, 0x6e0c18)
var_14_1.b = 5
int32_t* edx_10 = *(arg3 + 4)
int32_t eax_24

if (edx_10 != 0)
    if (ecx_14[5] u>= 0x10)
        ecx_14 = *ecx_14
    
    eax_24 = (*(*edx_10 + 0x50))(ecx_14, 1)
else
    eax_24 = 0

var_14_1.b = 0
*(arg1 + 0x60) = eax_24

if (var_94 u>= 0x10)
    eax_24 = j__free(var_a8)

var_14_1.b = 6
char var_60
int32_t* ecx_18 = sub_401c90(arg3, &var_60, sub_410930(eax_24, &var_90, &var_a8, 0x6e0bf0))
void* eax_29 = arg1 + 0x64

if (eax_29 != ecx_18)
    if (*(eax_29 + 0x14) u>= 0x10)
        j__free(*eax_29)
        eax_29 = arg1 + 0x64
    
    *(eax_29 + 0x14) = 0xf
    *(eax_29 + 0x10) = 0
    *eax_29 = 0
    eax_29 = sub_4030b0(eax_29, ecx_18)

int32_t var_4c

if (var_4c u>= 0x10)
    eax_29 = j__free(var_60.d)

var_14_1.b = 0
int32_t var_4c_1 = 0xf
int32_t var_50 = 0
var_60 = 0

if (var_94 u>= 0x10)
    eax_29 = j__free(var_a8)

int32_t* ecx_21 = sub_410930(eax_29, &var_90, &var_a8, 0x6e0bfc)
var_14_1.b = 7
int32_t* edx_13 = *(arg3 + 4)
int32_t eax_31

if (edx_13 != 0)
    if (ecx_21[5] u>= 0x10)
        ecx_21 = *ecx_21
    
    eax_31 = (*(*edx_13 + 0x44))(ecx_21)
else
    eax_31 = 0

var_14_1.b = 0
*(arg1 + 0x7c) = eax_31

if (var_94 u>= 0x10)
    eax_31 = j__free(var_a8)

int32_t* ecx_24 = sub_410930(eax_31, &var_90, &var_a8, 0x6e0cbc)
var_14_1.b = 8
int32_t* edx_15 = *(arg3 + 4)
int32_t eax_35

if (edx_15 != 0)
    if (ecx_24[5] u>= 0x10)
        ecx_24 = *ecx_24
    
    eax_35 = (*(*edx_15 + 0x44))(ecx_24)
else
    eax_35 = 0

var_14_1.b = 0
*(arg1 + 0x84) = eax_35

if (var_94 u>= 0x10)
    eax_35 = j__free(var_a8)

int32_t* ecx_27 = sub_410930(eax_35, &var_90, &var_a8, 0x6e0ccc)
var_14_1.b = 9
int32_t* edx_17 = *(arg3 + 4)
int32_t eax_39

if (edx_17 != 0)
    if (ecx_27[5] u>= 0x10)
        ecx_27 = *ecx_27
    
    eax_39 = (*(*edx_17 + 0x44))(ecx_27)
else
    eax_39 = 0

var_14_1.b = 0
*(arg1 + 0x88) = eax_39

if (var_94 u>= 0x10)
    eax_39 = j__free(var_a8)

int32_t var_78
int32_t* eax_42 = sub_410930(eax_39, &var_90, &var_78, 0x6e0ca4)
var_14_1.b = 0xa
int32_t* eax_43 = sub_410930(eax_42, &var_90, &var_a8, 0x6e0cb0)
var_14_1.b = 0xb
char var_3c
int32_t* eax_44 = sub_410930(eax_43, &var_90, &var_3c, 0x6e0d00)
var_14_1.b = 0xc
int32_t* edx_21 = *(arg3 + 4)
int32_t* var_bc_2

if (edx_21 != 0)
    int32_t* ecx_32 = eax_42
    
    if (ecx_32[5] u>= 0x10)
        ecx_32 = *ecx_32
    
    var_bc_2 = (*(*edx_21 + 0x50))(ecx_32, 2)
else
    var_bc_2 = edx_21

int32_t* edx_22 = *(arg3 + 4)
int32_t* var_b8_1

if (edx_22 != 0)
    int32_t* ecx_34 = eax_43
    
    if (ecx_34[5] u>= 0x10)
        ecx_34 = *ecx_34
    
    var_b8_1 = (*(*edx_22 + 0x50))(ecx_34, 1)
else
    var_b8_1 = edx_22

int32_t* edx_23 = *(arg3 + 4)
int32_t eax_51

if (edx_23 != 0)
    int32_t* ecx_36 = eax_44
    
    if (ecx_36[5] u>= 0x10)
        ecx_36 = *ecx_36
    
    eax_51 = (*(*edx_23 + 0x50))(ecx_36, 0)
else
    eax_51 = 0

int32_t ecx_38 = 0
int32_t var_54 = 0xff

if (eax_51 s> 0)
    ecx_38 = eax_51

if (ecx_38 s> 0xff)
    ecx_38 = 0xff

int32_t* eax_54 = nullptr
var_60.d = ecx_38

if (var_b8_1 s> 0)
    eax_54 = var_b8_1

if (eax_54 s> 0xff)
    eax_54 = 0xff

int32_t* var_5c = eax_54
int32_t* eax_55 = nullptr

if (var_bc_2 s> 0)
    eax_55 = var_bc_2

if (eax_55 s> 0xff)
    eax_55 = 0xff

int32_t* var_58 = eax_55
*(arg1 + 0x8c) = var_60.o
int32_t var_28

if (var_28 u>= 0x10)
    eax_55 = j__free(var_3c.d)

int32_t var_28_1 = 0xf
int32_t var_2c = 0
var_3c = 0

if (var_94 u>= 0x10)
    eax_55 = j__free(var_a8)

var_14_1.b = 0
int32_t var_94_1 = 0xf
int32_t var_98 = 0
var_a8.b = 0
int32_t var_64

if (var_64 u>= 0x10)
    eax_55 = j__free(var_78)

int32_t* eax_56 = sub_410930(eax_55, &var_90, &var_78, 0x6e0d0c)
int32_t* ecx_42 = eax_56
var_14_1.b = 0xd
int32_t* edx_25 = *(arg3 + 4)
int32_t xmm0_1

if (edx_25 != 0)
    if (ecx_42[5] u>= 0x10)
        ecx_42 = *ecx_42
    
    eax_56 = (*(*edx_25 + 0x48))(ecx_42)
    xmm0_1 = fconvert.s(arg2)
else
    xmm0_1 = (zx.o(0)).d

var_14_1.b = 0
*(arg1 + 0x9c) = xmm0_1

if (var_64 u>= 0x10)
    eax_56 = j__free(var_78)

int32_t* eax_59 = sub_410930(eax_56, &var_90, &var_78, 0x6e0cdc)
int32_t* ecx_45 = eax_59
var_14_1.b = 0xe
int32_t* edx_27 = *(arg3 + 4)
int32_t xmm0_2

if (edx_27 != 0)
    if (ecx_45[5] u>= 0x10)
        ecx_45 = *ecx_45
    
    eax_59 = (*(*edx_27 + 0x48))(ecx_45)
    int32_t var_b4_2 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
    unimplemented  {fstp dword [esp+0x20], st0}
    xmm0_2 = var_b4_2
else
    xmm0_2 = (zx.o(0)).d

var_14_1.b = 0
*(arg1 + 0xa0) = xmm0_2

if (var_64 u>= 0x10)
    eax_59 = j__free(var_78)

int32_t* eax_62 = sub_410930(eax_59, &var_90, &var_78, 0x6e0cec)
var_14_1.b = 0xf
int32_t* eax_63 = sub_410930(eax_62, &var_90, &var_3c, 0x6e0c64)
var_14_1.b = 0x10
int32_t* eax_64 = sub_410930(eax_63, &var_90, &var_a8, 0x6e0c78)
var_14_1.b = 0x11
int32_t* edx_31 = *(arg3 + 4)
int32_t* var_b8_2

if (edx_31 != 0)
    int32_t* ecx_50 = eax_62
    
    if (ecx_50[5] u>= 0x10)
        ecx_50 = *ecx_50
    
    var_b8_2 = (*(*edx_31 + 0x50))(ecx_50, 2)
else
    var_b8_2 = edx_31

int32_t* edx_32 = *(arg3 + 4)
int32_t* var_bc_4

if (edx_32 != 0)
    int32_t* ecx_52 = eax_63
    
    if (ecx_52[5] u>= 0x10)
        ecx_52 = *ecx_52
    
    var_bc_4 = (*(*edx_32 + 0x50))(ecx_52, 1)
else
    var_bc_4 = edx_32

int32_t* edx_33 = *(arg3 + 4)
int32_t eax_71

if (edx_33 != 0)
    int32_t* ecx_54 = eax_64
    
    if (ecx_54[5] u>= 0x10)
        ecx_54 = *ecx_54
    
    eax_71 = (*(*edx_33 + 0x50))(ecx_54, 0)
else
    eax_71 = 0

int32_t ecx_56 = 0
int32_t var_54_1 = 0xff

if (eax_71 s> 0)
    ecx_56 = eax_71

if (ecx_56 s> 0xff)
    ecx_56 = 0xff

int32_t* eax_74 = nullptr
var_60.d = ecx_56

if (var_bc_4 s> 0)
    eax_74 = var_bc_4

if (eax_74 s> 0xff)
    eax_74 = 0xff

int32_t* var_5c_1 = eax_74
int32_t* eax_75 = nullptr

if (var_b8_2 s> 0)
    eax_75 = var_b8_2

if (eax_75 s> 0xff)
    eax_75 = 0xff

int32_t* var_58_1 = eax_75
*(arg1 + 0xa4) = var_60.o

if (var_94_1 u>= 0x10)
    eax_75 = j__free(var_a8)

int32_t var_94_2 = 0xf
int32_t var_98_1 = 0
var_a8.b = 0

if (var_28_1 u>= 0x10)
    eax_75 = j__free(var_3c.d)

var_14_1.b = 0
int32_t var_28_2 = 0xf
int32_t var_2c_1 = 0
var_3c = 0

if (var_64 u>= 0x10)
    eax_75 = j__free(var_78)

int32_t* ecx_60 = sub_410930(eax_75, &var_90, &var_78, 0x6e0c44)
var_14_1.b = 0x12
int32_t* edx_35 = *(arg3 + 4)
int32_t eax_77

if (edx_35 != 0)
    if (ecx_60[5] u>= 0x10)
        ecx_60 = *ecx_60
    
    eax_77 = (*(*edx_35 + 0x44))(ecx_60)
else
    eax_77 = 0

var_14_1.b = 0
*(arg1 + 0xc0) = eax_77

if (var_64 u>= 0x10)
    eax_77 = j__free(var_78)

int32_t* ecx_63 = sub_410930(eax_77, &var_90, &var_78, 0x6e0c58)
var_14_1.b = 0x13
int32_t* edx_37 = *(arg3 + 4)
int32_t eax_81

if (edx_37 != 0)
    if (ecx_63[5] u>= 0x10)
        ecx_63 = *ecx_63
    
    eax_81 = (*(*edx_37 + 0x44))(ecx_63)
else
    eax_81 = 0

var_14_1.b = 0
*(arg1 + 0xc4) = eax_81

if (var_64 u>= 0x10)
    eax_81 = j__free(var_78)

void* ecx_66 = sub_410930(eax_81, &var_90, &var_78, 0x6e0c8c)
var_14_1.b = 0x14
void* edx_39 = *(arg3 + 4)
void* var_b8_3

if (edx_39 != 0)
    if (*(ecx_66 + 0x14) u>= 0x10)
        ecx_66 = *ecx_66
    
    var_b8_3 = (*(*edx_39 + 0x10))(ecx_66)
else
    var_b8_3 = edx_39

var_14_1.b = 0

if (var_64 u>= 0x10)
    j__free(var_78)

int32_t esi_1 = 0
void* result

if (var_b8_3 s> 0)
    result = arg1 + 0xb4
    void* result_1 = result
    
    do
        var_14_1.b = 0x15
        var_14_1.b = 0x16
        result = sub_412d60(result_1, 
            sub_401d70(arg3, &var_a8, sub_410930(result, &var_90, &var_78, 0x6e0c98), esi_1))
        
        if (var_94_2 u>= 0x10)
            result = j__free(var_a8)
        
        var_14_1.b = 0
        var_94_2 = 0xf
        int32_t var_98_2 = 0
        var_a8.b = 0
        
        if (var_64 u>= 0x10)
            result = j__free(var_78)
        
        esi_1 += 1
    while (esi_1 s< var_b8_3)

int32_t var_7c

if (var_7c u>= 0x10)
    j__free(var_90)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_c8)
return result
