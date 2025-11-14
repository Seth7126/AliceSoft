// 函数: sub_49f6e0
// 地址: 0x49f6e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_6bc2ae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_b8
int32_t eax_2 = __security_cookie ^ &var_b8
int32_t __saved_edi
int32_t var_c4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14_1 = 0
int32_t var_a8
void* var_6c
int32_t* ecx_2 =
    sub_410930(sub_410930(&ExceptionList, arg4, &var_6c, .\"), &var_6c, &var_a8, 0x6e04d0)
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

int32_t* ecx_5 = sub_410930(eax_8, &var_6c, &var_a8, 0x6e04c8)
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
*(arg1 + 0x54) = eax_12

if (var_94 u>= 0x10)
    eax_12 = j__free(var_a8)

int32_t* ecx_8 = sub_410930(eax_12, &var_6c, &var_a8, 0x6e04e4)
var_14_1.b = 3
int32_t* edx_6 = *(arg3 + 4)
int32_t eax_16

if (edx_6 != 0)
    if (ecx_8[5] u>= 0x10)
        ecx_8 = *ecx_8
    
    eax_16 = (*(*edx_6 + 0x50))(ecx_8, 0)
else
    eax_16 = 0

var_14_1.b = 0
*(arg1 + 0x58) = eax_16

if (var_94 u>= 0x10)
    eax_16 = j__free(var_a8)

int32_t* ecx_11 = sub_410930(eax_16, &var_6c, &var_a8, 0x6e04d8)
var_14_1.b = 4
int32_t* edx_8 = *(arg3 + 4)
int32_t eax_20

if (edx_8 != 0)
    if (ecx_11[5] u>= 0x10)
        ecx_11 = *ecx_11
    
    eax_20 = (*(*edx_8 + 0x50))(ecx_11, 1)
else
    eax_20 = 0

var_14_1.b = 0
*(arg1 + 0x5c) = eax_20

if (var_94 u>= 0x10)
    eax_20 = j__free(var_a8)

var_14_1.b = 5
char var_90
char* ecx_15 = sub_401c90(arg3, &var_90, sub_410930(eax_20, &var_6c, &var_a8, 0x6e04fc))
void* eax_25 = arg1 + 0x60
var_b8 = ecx_15

if (eax_25 != ecx_15)
    if (*(eax_25 + 0x14) u>= 0x10)
        j__free(*eax_25)
        ecx_15 = var_b8
        eax_25 = arg1 + 0x60
    
    *(eax_25 + 0x14) = 0xf
    *(eax_25 + 0x10) = 0
    *eax_25 = 0
    eax_25 = sub_4030b0(eax_25, ecx_15)

int32_t var_7c

if (var_7c u>= 0x10)
    eax_25 = j__free(var_90.d)

var_14_1.b = 0
int32_t var_7c_1 = 0xf
int32_t var_80 = 0
var_90 = 0

if (var_94 u>= 0x10)
    eax_25 = j__free(var_a8)

var_14_1.b = 6
int32_t* ecx_19 = sub_401c90(arg3, &var_90, sub_410930(eax_25, &var_6c, &var_a8, 0x6e04f0))
void* eax_28 = arg1 + 0x78
var_b8 = ecx_19

if (eax_28 != ecx_19)
    if (*(eax_28 + 0x14) u>= 0x10)
        j__free(*eax_28)
        ecx_19 = var_b8
        eax_28 = arg1 + 0x78
    
    *(eax_28 + 0x14) = 0xf
    *(eax_28 + 0x10) = 0
    *eax_28 = 0
    eax_28 = sub_4030b0(eax_28, ecx_19)

if (var_7c_1 u>= 0x10)
    eax_28 = j__free(var_90.d)

var_14_1.b = 0
int32_t var_7c_2 = 0xf
int32_t var_80_1 = 0
var_90 = 0

if (var_94 u>= 0x10)
    eax_28 = j__free(var_a8)

int32_t* ecx_22 = sub_410930(eax_28, &var_6c, &var_a8, 0x6e0514)
var_14_1.b = 7
int32_t* edx_12 = *(arg3 + 4)
int32_t eax_30

if (edx_12 != 0)
    if (ecx_22[5] u>= 0x10)
        ecx_22 = *ecx_22
    
    eax_30 = (*(*edx_12 + 0x44))(ecx_22)
else
    eax_30 = 0

var_14_1.b = 0
*(arg1 + 0x94) = eax_30

if (var_94 u>= 0x10)
    eax_30 = j__free(var_a8)

int32_t* ecx_25 = sub_410930(eax_30, &var_6c, &var_a8, 0x6e0504)
var_14_1.b = 8
int32_t* edx_14 = *(arg3 + 4)
int32_t eax_34

if (edx_14 != 0)
    if (ecx_25[5] u>= 0x10)
        ecx_25 = *ecx_25
    
    eax_34 = (*(*edx_14 + 0x44))(ecx_25)
else
    eax_34 = 0

var_14_1.b = 0
*(arg1 + 0x98) = eax_34

if (var_94 u>= 0x10)
    eax_34 = j__free(var_a8)

int32_t var_54
int32_t* eax_37 = sub_410930(eax_34, &var_6c, &var_54, 0x6e055c)
var_b8 = eax_37
var_14_1.b = 9
int32_t* eax_38 = sub_410930(eax_37, &var_6c, &var_a8, 0x6e0550)
var_14_1.b = 0xa
char var_3c
int32_t* eax_39 = sub_410930(eax_38, &var_6c, &var_3c, 0x6e0578)
var_14_1.b = 0xb
char* edx_18 = *(arg3 + 4)

if (edx_18 != 0)
    char* ecx_30 = var_b8
    
    if (*(ecx_30 + 0x14) u>= 0x10)
        ecx_30 = *ecx_30
    
    var_b8 = (*(*edx_18 + 0x50))(ecx_30, 2)
else
    var_b8 = edx_18

int32_t* edx_19 = *(arg3 + 4)
int32_t* var_b0_1

if (edx_19 != 0)
    int32_t* ecx_32 = eax_38
    
    if (ecx_32[5] u>= 0x10)
        ecx_32 = *ecx_32
    
    var_b0_1 = (*(*edx_19 + 0x50))(ecx_32, 1)
else
    var_b0_1 = edx_19

int32_t* edx_20 = *(arg3 + 4)
int32_t eax_46

if (edx_20 != 0)
    int32_t* ecx_34 = eax_39
    
    if (ecx_34[5] u>= 0x10)
        ecx_34 = *ecx_34
    
    eax_46 = (*(*edx_20 + 0x50))(ecx_34, 0)
else
    eax_46 = 0

int32_t ecx_36 = 0
int32_t var_84 = 0xff

if (eax_46 s> 0)
    ecx_36 = eax_46

if (ecx_36 s> 0xff)
    ecx_36 = 0xff

int32_t* eax_49 = nullptr
var_90.d = ecx_36

if (var_b0_1 s> 0)
    eax_49 = var_b0_1

char* ecx_38 = var_b8

if (eax_49 s> 0xff)
    eax_49 = 0xff

int32_t* var_8c = eax_49
char* eax_50 = nullptr

if (ecx_38 s> 0)
    eax_50 = ecx_38

if (eax_50 s> 0xff)
    eax_50 = 0xff

char* var_88 = eax_50
*(arg1 + 0x9c) = var_90.o
int32_t var_28

if (var_28 u>= 0x10)
    eax_50 = j__free(var_3c.d)

int32_t var_28_1 = 0xf
int32_t var_2c = 0
var_3c = 0

if (var_94 u>= 0x10)
    eax_50 = j__free(var_a8)

var_14_1.b = 0
int32_t var_94_1 = 0xf
int32_t var_98 = 0
var_a8.b = 0
int32_t var_40

if (var_40 u>= 0x10)
    eax_50 = j__free(var_54)

int32_t* eax_51 = sub_410930(eax_50, &var_6c, &var_54, 0x6e0568)
int32_t* ecx_40 = eax_51
var_14_1.b = 0xc
int32_t* edx_22 = *(arg3 + 4)
int32_t xmm0_1

if (edx_22 != 0)
    if (ecx_40[5] u>= 0x10)
        ecx_40 = *ecx_40
    
    eax_51 = (*(*edx_22 + 0x48))(ecx_40)
    xmm0_1 = fconvert.s(arg2)
else
    xmm0_1 = (zx.o(0)).d

var_14_1.b = 0
*(arg1 + 0xac) = xmm0_1

if (var_40 u>= 0x10)
    eax_51 = j__free(var_54)

int32_t* eax_54 = sub_410930(eax_51, &var_6c, &var_54, 0x6e0598)
int32_t* ecx_43 = eax_54
var_14_1.b = 0xd
int32_t* edx_24 = *(arg3 + 4)
int32_t xmm0_2

if (edx_24 != 0)
    if (ecx_43[5] u>= 0x10)
        ecx_43 = *ecx_43
    
    eax_54 = (*(*edx_24 + 0x48))(ecx_43)
    int32_t var_b4_2 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
    unimplemented  {fstp dword [esp+0x10], st0}
    xmm0_2 = var_b4_2
else
    xmm0_2 = (zx.o(0)).d

var_14_1.b = 0
*(arg1 + 0xb0) = xmm0_2

if (var_40 u>= 0x10)
    eax_54 = j__free(var_54)

int32_t* eax_57 = sub_410930(eax_54, &var_6c, &var_54, 0x6e0584)
var_14_1.b = 0xe
int32_t* eax_58 = sub_410930(eax_57, &var_6c, &var_3c, 0x6e05bc)
var_b8 = eax_58
var_14_1.b = 0xf
int32_t* eax_59 = sub_410930(eax_58, &var_6c, &var_a8, 0x6e05a8)
var_14_1.b = 0x10
int32_t* edx_28 = *(arg3 + 4)
int32_t* var_b0_2

if (edx_28 != 0)
    int32_t* ecx_48 = eax_57
    
    if (ecx_48[5] u>= 0x10)
        ecx_48 = *ecx_48
    
    var_b0_2 = (*(*edx_28 + 0x50))(ecx_48, 2)
else
    var_b0_2 = edx_28

char* edx_29 = *(arg3 + 4)

if (edx_29 != 0)
    char* ecx_50 = var_b8
    
    if (*(ecx_50 + 0x14) u>= 0x10)
        ecx_50 = *ecx_50
    
    var_b8 = (*(*edx_29 + 0x50))(ecx_50, 1)
else
    var_b8 = edx_29

int32_t* edx_30 = *(arg3 + 4)
int32_t eax_66

if (edx_30 != 0)
    int32_t* ecx_52 = eax_59
    
    if (ecx_52[5] u>= 0x10)
        ecx_52 = *ecx_52
    
    eax_66 = (*(*edx_30 + 0x50))(ecx_52, 0)
else
    eax_66 = 0

int32_t ecx_54 = 0
int32_t var_84_1 = 0xff

if (eax_66 s> 0)
    ecx_54 = eax_66

if (ecx_54 s> 0xff)
    ecx_54 = 0xff

char* eax_69 = nullptr
var_90.d = ecx_54
char* ecx_55 = var_b8

if (ecx_55 s> 0)
    eax_69 = ecx_55

if (eax_69 s> 0xff)
    eax_69 = 0xff

char* var_8c_1 = eax_69
int32_t* eax_70 = nullptr

if (var_b0_2 s> 0)
    eax_70 = var_b0_2

if (eax_70 s> 0xff)
    eax_70 = 0xff

int32_t* var_88_1 = eax_70
*(arg1 + 0xb4) = var_90.o

if (var_94_1 u>= 0x10)
    eax_70 = j__free(var_a8)

int32_t var_94_2 = 0xf
int32_t var_98_1 = 0
var_a8.b = 0

if (var_28_1 u>= 0x10)
    eax_70 = j__free(var_3c.d)

var_14_1.b = 0
int32_t var_28_2 = 0xf
int32_t var_2c_1 = 0
var_3c = 0

if (var_40 u>= 0x10)
    eax_70 = j__free(var_54)

int32_t* ecx_58 = sub_410930(eax_70, &var_6c, &var_54, 0x6e0544)
var_14_1.b = 0x11
int32_t* edx_32 = *(arg3 + 4)
int32_t result

if (edx_32 != 0)
    if (ecx_58[5] u>= 0x10)
        ecx_58 = *ecx_58
    
    result = (*(*edx_32 + 0x44))(ecx_58)
else
    result = 0

*(arg1 + 0xc4) = result

if (var_40 u>= 0x10)
    j__free(var_54)

int32_t var_58

if (var_58 u>= 0x10)
    j__free(var_6c)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b8)
return result
