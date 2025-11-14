// 函数: sub_49b6a0
// 地址: 0x49b6a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_6bbe80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b8
int32_t eax_2 = __security_cookie ^ &var_b8
int32_t __saved_edi
int32_t var_c4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14_1 = 0
int32_t var_84
void* var_54
int32_t* ecx_2 =
    sub_410930(sub_410930(&ExceptionList, arg4, &var_54, ."), &var_54, &var_84, 0x6e02e0)
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
*(arg1 + 4) = eax_8
int32_t var_70

if (var_70 u>= 0x10)
    eax_8 = j__free(var_84)

int32_t* ecx_5 = sub_410930(eax_8, &var_54, &var_84, 0x6e02fc)
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
*(arg1 + 8) = eax_12

if (var_70 u>= 0x10)
    eax_12 = j__free(var_84)

int32_t* ecx_8 = sub_410930(eax_12, &var_54, &var_84, 0x6e02ec)
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
eax_16.b = eax_16 == 1
*(arg1 + 0xc) = eax_16.b

if (var_70 u>= 0x10)
    eax_16 = j__free(var_84)

int32_t* ecx_11 = sub_410930(eax_16, &var_54, &var_84, 0x6e0310)
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
*(arg1 + 0x10) = eax_20

if (var_70 u>= 0x10)
    eax_20 = j__free(var_84)

int32_t* ecx_14 = sub_410930(eax_20, &var_54, &var_84, 0x6e0304)
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
*(arg1 + 0x14) = eax_24

if (var_70 u>= 0x10)
    eax_24 = j__free(var_84)

int32_t* ecx_17 = sub_410930(eax_24, &var_54, &var_84, 0x6e0278)
var_14_1.b = 6
int32_t* edx_12 = *(arg3 + 4)
int32_t eax_28

if (edx_12 != 0)
    if (ecx_17[5] u>= 0x10)
        ecx_17 = *ecx_17
    
    eax_28 = (*(*edx_12 + 0x50))(ecx_17, 2)
else
    eax_28 = 0

var_14_1.b = 0
*(arg1 + 0x18) = eax_28

if (var_70 u>= 0x10)
    eax_28 = j__free(var_84)

int32_t* ecx_20 = sub_410930(eax_28, &var_54, &var_84, 0x6e0268)
var_14_1.b = 7
int32_t* edx_14 = *(arg3 + 4)
int32_t eax_32

if (edx_14 != 0)
    if (ecx_20[5] u>= 0x10)
        ecx_20 = *ecx_20
    
    eax_32 = (*(*edx_14 + 0x44))(ecx_20)
else
    eax_32 = 0

var_14_1.b = 0
*(arg1 + 0x20) = eax_32

if (var_70 u>= 0x10)
    eax_32 = j__free(var_84)

int32_t* ecx_23 = sub_410930(eax_32, &var_54, &var_84, 0x6e0290)
var_14_1.b = 8
int32_t* edx_16 = *(arg3 + 4)
int32_t eax_36

if (edx_16 != 0)
    if (ecx_23[5] u>= 0x10)
        ecx_23 = *ecx_23
    
    eax_36 = (*(*edx_16 + 0x44))(ecx_23)
else
    eax_36 = 0

var_14_1.b = 0
*(arg1 + 0x24) = eax_36

if (var_70 u>= 0x10)
    eax_36 = j__free(var_84)

int32_t var_6c
int32_t* eax_39 = sub_410930(eax_36, &var_54, &var_6c, 0x6e0284)
var_14_1.b = 9
int32_t* eax_40 = sub_410930(eax_39, &var_54, &var_84, 0x6e02ac)
var_14_1.b = 0xa
char var_3c
int32_t* eax_41 = sub_410930(eax_40, &var_54, &var_3c, 0x6e02a0)
var_14_1.b = 0xb
int32_t* edx_20 = *(arg3 + 4)
int32_t* var_b0_1

if (edx_20 != 0)
    int32_t* ecx_28 = eax_39
    
    if (ecx_28[5] u>= 0x10)
        ecx_28 = *ecx_28
    
    var_b0_1 = (*(*edx_20 + 0x50))(ecx_28, 2)
else
    var_b0_1 = edx_20

int32_t* edx_21 = *(arg3 + 4)
int32_t* var_a8_1

if (edx_21 != 0)
    int32_t* ecx_30 = eax_40
    
    if (ecx_30[5] u>= 0x10)
        ecx_30 = *ecx_30
    
    var_a8_1 = (*(*edx_21 + 0x50))(ecx_30, 1)
else
    var_a8_1 = edx_21

int32_t* edx_22 = *(arg3 + 4)
int32_t eax_48

if (edx_22 != 0)
    int32_t* ecx_32 = eax_41
    
    if (ecx_32[5] u>= 0x10)
        ecx_32 = *ecx_32
    
    eax_48 = (*(*edx_22 + 0x50))(ecx_32, 0)
else
    eax_48 = 0

int32_t ecx_34 = 0
int32_t var_94 = 0xff

if (eax_48 s> 0)
    ecx_34 = eax_48

if (ecx_34 s> 0xff)
    ecx_34 = 0xff

int32_t* eax_51 = nullptr

if (var_a8_1 s> 0)
    eax_51 = var_a8_1

if (eax_51 s> 0xff)
    eax_51 = 0xff

int32_t* var_9c = eax_51
int32_t* eax_52 = nullptr

if (var_b0_1 s> 0)
    eax_52 = var_b0_1

if (eax_52 s> 0xff)
    eax_52 = 0xff

int32_t* var_98 = eax_52
*(arg1 + 0x28) = ecx_34.o
int32_t var_28

if (var_28 u>= 0x10)
    eax_52 = j__free(var_3c.d)

int32_t var_28_1 = 0xf
int32_t var_2c = 0
var_3c = 0

if (var_70 u>= 0x10)
    eax_52 = j__free(var_84)

var_14_1.b = 0
int32_t var_70_1 = 0xf
int32_t var_74 = 0
var_84.b = 0
int32_t var_58

if (var_58 u>= 0x10)
    eax_52 = j__free(var_6c)

int32_t* eax_53 = sub_410930(eax_52, &var_54, &var_6c, 0x6e02c8)
int32_t* ecx_38 = eax_53
var_14_1.b = 0xc
int32_t* edx_24 = *(arg3 + 4)
int32_t xmm0_1

if (edx_24 != 0)
    if (ecx_38[5] u>= 0x10)
        ecx_38 = *ecx_38
    
    eax_53 = (*(*edx_24 + 0x48))(ecx_38)
    xmm0_1 = fconvert.s(arg2)
else
    xmm0_1 = (zx.o(0)).d

var_14_1.b = 0
*(arg1 + 0x38) = xmm0_1

if (var_58 u>= 0x10)
    eax_53 = j__free(var_6c)

int32_t* eax_56 = sub_410930(eax_53, &var_54, &var_6c, 0x6e02b8)
int32_t* ecx_41 = eax_56
var_14_1.b = 0xd
int32_t* edx_26 = *(arg3 + 4)
int32_t xmm0_2

if (edx_26 != 0)
    if (ecx_41[5] u>= 0x10)
        ecx_41 = *ecx_41
    
    eax_56 = (*(*edx_26 + 0x48))(ecx_41)
    int32_t var_ac_2 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
    unimplemented  {fstp dword [esp+0x18], st0}
    xmm0_2 = var_ac_2
else
    xmm0_2 = (zx.o(0)).d

var_14_1.b = 0
*(arg1 + 0x3c) = xmm0_2

if (var_58 u>= 0x10)
    eax_56 = j__free(var_6c)

int32_t* eax_59 = sub_410930(eax_56, &var_54, &var_6c, 0x6e0344)
var_14_1.b = 0xe
int32_t* eax_60 = sub_410930(eax_59, &var_54, &var_3c, 0x6e0330)
var_14_1.b = 0xf
int32_t* eax_61 = sub_410930(eax_60, &var_54, &var_84, 0x6e0360)
var_14_1.b = 0x10
int32_t* edx_30 = *(arg3 + 4)
int32_t* var_a8_2

if (edx_30 != 0)
    int32_t* ecx_46 = eax_59
    
    if (ecx_46[5] u>= 0x10)
        ecx_46 = *ecx_46
    
    var_a8_2 = (*(*edx_30 + 0x50))(ecx_46, 2)
else
    var_a8_2 = edx_30

int32_t* edx_31 = *(arg3 + 4)
int32_t* var_b0_3

if (edx_31 != 0)
    int32_t* ecx_48 = eax_60
    
    if (ecx_48[5] u>= 0x10)
        ecx_48 = *ecx_48
    
    var_b0_3 = (*(*edx_31 + 0x50))(ecx_48, 1)
else
    var_b0_3 = edx_31

int32_t* edx_32 = *(arg3 + 4)
int32_t eax_68

if (edx_32 != 0)
    int32_t* ecx_50 = eax_61
    
    if (ecx_50[5] u>= 0x10)
        ecx_50 = *ecx_50
    
    eax_68 = (*(*edx_32 + 0x50))(ecx_50, 0)
else
    eax_68 = 0

int32_t ecx_52 = 0
int32_t var_94_1 = 0xff

if (eax_68 s> 0)
    ecx_52 = eax_68

if (ecx_52 s> 0xff)
    ecx_52 = 0xff

int32_t* eax_71 = nullptr

if (var_b0_3 s> 0)
    eax_71 = var_b0_3

if (eax_71 s> 0xff)
    eax_71 = 0xff

int32_t* var_9c_1 = eax_71
int32_t* eax_72 = nullptr

if (var_a8_2 s> 0)
    eax_72 = var_a8_2

if (eax_72 s> 0xff)
    eax_72 = 0xff

int32_t* var_98_1 = eax_72
*(arg1 + 0x40) = ecx_52.o

if (var_70_1 u>= 0x10)
    eax_72 = j__free(var_84)

int32_t var_70_2 = 0xf
int32_t var_74_1 = 0
var_84.b = 0

if (var_28_1 u>= 0x10)
    eax_72 = j__free(var_3c.d)

var_14_1.b = 0
int32_t var_28_2 = 0xf
int32_t var_2c_1 = 0
var_3c = 0

if (var_58 u>= 0x10)
    eax_72 = j__free(var_6c)

var_14_1.b = 0x11
var_14_1.b = 0x12
int32_t* eax_75 =
    sub_49a270(arg1, sub_401c90(arg3, &var_84, sub_410930(eax_72, &var_54, &var_6c, 0x6e0358)))

if (var_70_2 u>= 0x10)
    eax_75 = j__free(var_84)

var_14_1.b = 0
int32_t var_70_3 = 0xf
int32_t var_74_2 = 0
var_84.b = 0

if (var_58 u>= 0x10)
    eax_75 = j__free(var_6c)

var_14_1.b = 0x13
var_14_1.b = 0x14
int32_t* eax_78 =
    sub_49a530(arg1, sub_401c90(arg3, &var_84, sub_410930(eax_75, &var_54, &var_6c, 0x6e0380)))

if (var_70_3 u>= 0x10)
    eax_78 = j__free(var_84)

var_14_1.b = 0
int32_t var_70_4 = 0xf
int32_t var_74_3 = 0
var_84.b = 0

if (var_58 u>= 0x10)
    eax_78 = j__free(var_6c)

var_14_1.b = 0x15
char* ecx_63 = sub_401c90(arg3, &var_84, sub_410930(eax_78, &var_54, &var_6c, 0x6e0374))
int32_t* eax_81 = arg1 + 0x1a0

if (eax_81 != ecx_63)
    if (eax_81[5] u>= 0x10)
        j__free(*eax_81)
        eax_81 = arg1 + 0x1a0
    
    eax_81[5] = 0xf
    eax_81[4] = 0
    *eax_81 = 0
    eax_81 = sub_4030b0(eax_81, ecx_63)

if (var_70_4 u>= 0x10)
    eax_81 = j__free(var_84)

var_14_1.b = 0
int32_t var_70_5 = 0xf
int32_t var_74_4 = 0
var_84.b = 0

if (var_58 u>= 0x10)
    eax_81 = j__free(var_6c)

int32_t* ecx_66 = sub_410930(eax_81, &var_54, &var_6c, 0x6e039c)
var_14_1.b = 0x16
int32_t* edx_37 = *(arg3 + 4)
int32_t eax_83

if (edx_37 != 0)
    if (ecx_66[5] u>= 0x10)
        ecx_66 = *ecx_66
    
    eax_83 = (*(*edx_37 + 0x44))(ecx_66)
else
    eax_83 = 0

var_14_1.b = 0
*(arg1 + 0x1b8) = eax_83

if (var_58 u>= 0x10)
    eax_83 = j__free(var_6c)

int32_t* ecx_69 = sub_410930(eax_83, &var_54, &var_6c, 0x6e038c)
var_14_1.b = 0x17
int32_t* edx_39 = *(arg3 + 4)
int32_t eax_87

if (edx_39 != 0)
    if (ecx_69[5] u>= 0x10)
        ecx_69 = *ecx_69
    
    eax_87 = (*(*edx_39 + 0x44))(ecx_69)
else
    eax_87 = 0

var_14_1.b = 0
eax_87.b = eax_87 == 1
*(arg1 + 0x1bc) = eax_87.b

if (var_58 u>= 0x10)
    eax_87 = j__free(var_6c)

int32_t* ecx_72 = sub_410930(eax_87, &var_54, &var_6c, 0x6e0324)
var_14_1.b = 0x18
int32_t* edx_41 = *(arg3 + 4)
int32_t eax_91

if (edx_41 != 0)
    if (ecx_72[5] u>= 0x10)
        ecx_72 = *ecx_72
    
    eax_91 = (*(*edx_41 + 0x44))(ecx_72)
else
    eax_91 = 0

var_14_1.b = 0
*(arg1 + 0x1c0) = eax_91

if (var_58 u>= 0x10)
    eax_91 = j__free(var_6c)

int32_t* ecx_75 = sub_410930(eax_91, &var_54, &var_6c, 0x6e031c)
var_14_1.b = 0x19
int32_t* edx_43 = *(arg3 + 4)
int32_t result

if (edx_43 != 0)
    if (ecx_75[5] u>= 0x10)
        ecx_75 = *ecx_75
    
    result = (*(*edx_43 + 0x44))(ecx_75)
else
    result = 0

*(arg1 + 0x1c4) = result

if (var_58 u>= 0x10)
    j__free(var_6c)

int32_t var_40

if (var_40 u>= 0x10)
    j__free(var_54)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b8)
return result
