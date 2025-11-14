// 函数: sub_4bbf40
// 地址: 0x4bbf40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bdf58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t var_58
void* var_28
int32_t* eax_7 =
    sub_410930(sub_410930(&ExceptionList, arg4, &var_28, ."), &var_28, &var_58, 0x6e109c)
int32_t* ecx_2 = eax_7
var_4.b = 1
int32_t* edx_2 = *(arg3 + 4)
int32_t xmm0

if (edx_2 != 0)
    if (ecx_2[5] u>= 0x10)
        ecx_2 = *ecx_2
    
    eax_7 = (*(*edx_2 + 0x54))(ecx_2, 0)
    xmm0 = fconvert.s(arg2)
else
    xmm0 = (zx.o(0)).d

var_4.b = 0
*(arg1 + 0x10) = xmm0
int32_t var_44

if (var_44 u>= 0x10)
    eax_7 = j__free(var_58)

int32_t* eax_10 = sub_410930(eax_7, &var_28, &var_58, 0x6e1088)
int32_t* ecx_5 = eax_10
var_4.b = 2
int32_t* edx_4 = *(arg3 + 4)
int32_t xmm0_1

if (edx_4 != 0)
    if (ecx_5[5] u>= 0x10)
        ecx_5 = *ecx_5
    
    eax_10 = (*(*edx_4 + 0x54))(ecx_5, 1)
    int32_t var_5c_2 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
    unimplemented  {fstp dword [esp+0x18], st0}
    xmm0_1 = var_5c_2
else
    xmm0_1 = (zx.o(0)).d

var_4.b = 0
*(arg1 + 0x14) = xmm0_1

if (var_44 u>= 0x10)
    eax_10 = j__free(var_58)

int32_t* ecx_8 = sub_410930(eax_10, &var_28, &var_58, 0x6e1090)
var_4.b = 3
int32_t* edx_6 = *(arg3 + 4)
int32_t eax_14

if (edx_6 != 0)
    if (ecx_8[5] u>= 0x10)
        ecx_8 = *ecx_8
    
    eax_14 = (*(*edx_6 + 0x50))(ecx_8, 2)
else
    eax_14 = 0

var_4.b = 0
*(arg1 + 0x18) = eax_14

if (var_44 u>= 0x10)
    eax_14 = j__free(var_58)

int32_t* ecx_11 = sub_410930(eax_14, &var_28, &var_58, 0x6e1040)
var_4.b = 4
int32_t* edx_8 = *(arg3 + 4)
int32_t eax_17

if (edx_8 != 0)
    if (ecx_11[5] u>= 0x10)
        ecx_11 = *ecx_11
    
    eax_17 = (*(*edx_8 + 0x44))(ecx_11)
else
    eax_17 = 0

var_4.b = 0
*(arg1 + 0x1c) = eax_17

if (var_44 u>= 0x10)
    eax_17 = j__free(var_58)

int32_t* ecx_14 = sub_410930(eax_17, &var_28, &var_58, 0x6e1050)
var_4.b = 5
int32_t* edx_10 = *(arg3 + 4)
int32_t eax_20

if (edx_10 != 0)
    if (ecx_14[5] u>= 0x10)
        ecx_14 = *ecx_14
    
    eax_20 = (*(*edx_10 + 0x44))(ecx_14)
else
    eax_20 = 0

var_4.b = 0
eax_20.b = eax_20 == 1
*(arg1 + 0x20) = eax_20.b

if (var_44 u>= 0x10)
    eax_20 = j__free(var_58)

int32_t* ecx_17 = sub_410930(eax_20, &var_28, &var_58, 0x6e1014)
var_4.b = 6
int32_t* edx_12 = *(arg3 + 4)
int32_t eax_23

if (edx_12 != 0)
    if (ecx_17[5] u>= 0x10)
        ecx_17 = *ecx_17
    
    eax_23 = (*(*edx_12 + 0x44))(ecx_17)
else
    eax_23 = 0

var_4.b = 0
eax_23.b = eax_23 == 1
*(arg1 + 0x21) = eax_23.b

if (var_44 u>= 0x10)
    eax_23 = j__free(var_58)

int32_t* ecx_20 = sub_410930(eax_23, &var_28, &var_58, 0x6e1034)
var_4.b = 7
int32_t* edx_14 = *(arg3 + 4)
int32_t eax_26

if (edx_14 != 0)
    if (ecx_20[5] u>= 0x10)
        ecx_20 = *ecx_20
    
    eax_26 = (*(*edx_14 + 0x44))(ecx_20)
else
    eax_26 = 0

var_4.b = 0
*(arg1 + 0x24) = eax_26

if (var_44 u>= 0x10)
    eax_26 = j__free(var_58)

int32_t* ecx_23 = sub_410930(eax_26, &var_28, &var_58, 0x6e1068)
var_4.b = 8
int32_t* edx_16 = *(arg3 + 4)
int32_t eax_29

if (edx_16 != 0)
    if (ecx_23[5] u>= 0x10)
        ecx_23 = *ecx_23
    
    eax_29 = (*(*edx_16 + 0x50))(ecx_23, 0)
else
    eax_29 = 0

var_4.b = 0
*(arg1 + 0x2c) = eax_29

if (var_44 u>= 0x10)
    eax_29 = j__free(var_58)

int32_t* ecx_26 = sub_410930(eax_29, &var_28, &var_58, 0x6e1070)
var_4.b = 9
int32_t* edx_18 = *(arg3 + 4)
int32_t eax_32

if (edx_18 != 0)
    if (ecx_26[5] u>= 0x10)
        ecx_26 = *ecx_26
    
    eax_32 = (*(*edx_18 + 0x50))(ecx_26, 1)
else
    eax_32 = 0

var_4.b = 0
*(arg1 + 0x30) = eax_32

if (var_44 u>= 0x10)
    eax_32 = j__free(var_58)

int32_t* ecx_29 = sub_410930(eax_32, &var_28, &var_58, 0x6e1058)
var_4.b = 0xa
int32_t* edx_20 = *(arg3 + 4)
int32_t eax_35

if (edx_20 != 0)
    if (ecx_29[5] u>= 0x10)
        ecx_29 = *ecx_29
    
    eax_35 = (*(*edx_20 + 0x50))(ecx_29, 2)
else
    eax_35 = 0

var_4.b = 0
*(arg1 + 0x34) = eax_35

if (var_44 u>= 0x10)
    eax_35 = j__free(var_58)

int32_t* ecx_32 = sub_410930(eax_35, &var_28, &var_58, 0x6e1060)
var_4.b = 0xb
int32_t* edx_22 = *(arg3 + 4)
int32_t eax_38

if (edx_22 != 0)
    if (ecx_32[5] u>= 0x10)
        ecx_32 = *ecx_32
    
    eax_38 = (*(*edx_22 + 0x50))(ecx_32, 0)
else
    eax_38 = 0

var_4.b = 0
*(arg1 + 0x38) = eax_38

if (var_44 u>= 0x10)
    eax_38 = j__free(var_58)

int32_t* ecx_35 = sub_410930(eax_38, &var_28, &var_58, 0x6e114c)
var_4.b = 0xc
int32_t* edx_24 = *(arg3 + 4)
int32_t eax_41

if (edx_24 != 0)
    if (ecx_35[5] u>= 0x10)
        ecx_35 = *ecx_35
    
    eax_41 = (*(*edx_24 + 0x50))(ecx_35, 1)
else
    eax_41 = 0

var_4.b = 0
*(arg1 + 0x3c) = eax_41

if (var_44 u>= 0x10)
    eax_41 = j__free(var_58)

int32_t* ecx_38 = sub_410930(eax_41, &var_28, &var_58, 0x6e1154)
var_4.b = 0xd
int32_t* edx_26 = *(arg3 + 4)
int32_t eax_44

if (edx_26 != 0)
    if (ecx_38[5] u>= 0x10)
        ecx_38 = *ecx_38
    
    eax_44 = (*(*edx_26 + 0x50))(ecx_38, 2)
else
    eax_44 = 0

var_4.b = 0
*(arg1 + 0x40) = eax_44

if (var_44 u>= 0x10)
    eax_44 = j__free(var_58)

int32_t* ecx_41 = sub_410930(eax_44, &var_28, &var_58, 0x6e1130)
var_4.b = 0xe
int32_t* edx_28 = *(arg3 + 4)
int32_t eax_47

if (edx_28 != 0)
    if (ecx_41[5] u>= 0x10)
        ecx_41 = *ecx_41
    
    eax_47 = (*(*edx_28 + 0x44))(ecx_41)
else
    eax_47 = 0

var_4.b = 0
*(arg1 + 0x44) = eax_47

if (var_44 u>= 0x10)
    eax_47 = j__free(var_58)

int32_t* eax_49 = sub_410930(eax_47, &var_28, &var_58, 0x6e1140)
int32_t* ecx_44 = eax_49
var_4.b = 0xf
int32_t* edx_30 = *(arg3 + 4)
int32_t xmm0_2

if (edx_30 != 0)
    if (ecx_44[5] u>= 0x10)
        ecx_44 = *ecx_44
    
    eax_49 = (*(*edx_30 + 0x54))(ecx_44, 0)
    int32_t var_5c_3 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
    unimplemented  {fstp dword [esp+0x18], st0}
    xmm0_2 = var_5c_3
else
    xmm0_2 = (zx.o(0)).d

var_4.b = 0
*(arg1 + 0x48) = xmm0_2

if (var_44 u>= 0x10)
    eax_49 = j__free(var_58)

int32_t* eax_52 = sub_410930(eax_49, &var_28, &var_58, 0x6e116c)
int32_t* ecx_47 = eax_52
var_4.b = 0x10
int32_t* edx_32 = *(arg3 + 4)
int32_t xmm0_3

if (edx_32 != 0)
    if (ecx_47[5] u>= 0x10)
        ecx_47 = *ecx_47
    
    eax_52 = (*(*edx_32 + 0x54))(ecx_47, 1)
    int32_t var_5c_4 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
    unimplemented  {fstp dword [esp+0x18], st0}
    xmm0_3 = var_5c_4
else
    xmm0_3 = (zx.o(0)).d

var_4.b = 0
*(arg1 + 0x4c) = xmm0_3

if (var_44 u>= 0x10)
    eax_52 = j__free(var_58)

int32_t* eax_55 = sub_410930(eax_52, &var_28, &var_58, 0x6e1178)
int32_t* ecx_50 = eax_55
var_4.b = 0x11
int32_t* edx_34 = *(arg3 + 4)
int32_t xmm0_4

if (edx_34 != 0)
    if (ecx_50[5] u>= 0x10)
        ecx_50 = *ecx_50
    
    eax_55 = (*(*edx_34 + 0x54))(ecx_50, 0)
    int32_t var_5c_5 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
    unimplemented  {fstp dword [esp+0x18], st0}
    xmm0_4 = var_5c_5
else
    xmm0_4 = (zx.o(0)).d

var_4.b = 0
*(arg1 + 0x50) = xmm0_4

if (var_44 u>= 0x10)
    eax_55 = j__free(var_58)

int32_t* eax_58 = sub_410930(eax_55, &var_28, &var_58, 0x6e115c)
int32_t* ecx_53 = eax_58
var_4.b = 0x12
int32_t* edx_36 = *(arg3 + 4)
int32_t xmm0_5

if (edx_36 != 0)
    if (ecx_53[5] u>= 0x10)
        ecx_53 = *ecx_53
    
    eax_58 = (*(*edx_36 + 0x54))(ecx_53, 1)
    int32_t var_5c_6 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
    unimplemented  {fstp dword [esp+0x18], st0}
    xmm0_5 = var_5c_6
else
    xmm0_5 = (zx.o(0)).d

var_4.b = 0
*(arg1 + 0x54) = xmm0_5

if (var_44 u>= 0x10)
    eax_58 = j__free(var_58)

int32_t* eax_61 = sub_410930(eax_58, &var_28, &var_58, 0x6e1164)
int32_t* ecx_56 = eax_61
var_4.b = 0x13
int32_t* edx_38 = *(arg3 + 4)
int32_t xmm0_6

if (edx_38 != 0)
    if (ecx_56[5] u>= 0x10)
        ecx_56 = *ecx_56
    
    eax_61 = (*(*edx_38 + 0x54))(ecx_56, 2)
    int32_t var_5c_7 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
    unimplemented  {fstp dword [esp+0x18], st0}
    xmm0_6 = var_5c_7
else
    xmm0_6 = (zx.o(0)).d

var_4.b = 0
*(arg1 + 0x58) = xmm0_6

if (var_44 u>= 0x10)
    eax_61 = j__free(var_58)

int32_t* ecx_59 = sub_410930(eax_61, &var_28, &var_58, 0x6e10bc)
var_4.b = 0x14
int32_t* edx_40 = *(arg3 + 4)
int32_t eax_65

if (edx_40 != 0)
    if (ecx_59[5] u>= 0x10)
        ecx_59 = *ecx_59
    
    eax_65 = (*(*edx_40 + 0x50))(ecx_59, 0)
else
    eax_65 = 0

var_4.b = 0
*(arg1 + 0x5c) = eax_65

if (var_44 u>= 0x10)
    eax_65 = j__free(var_58)

int32_t* ecx_62 = sub_410930(eax_65, &var_28, &var_58, 0x6e10c8)
var_4.b = 0x15
int32_t* edx_42 = *(arg3 + 4)
int32_t eax_68

if (edx_42 != 0)
    if (ecx_62[5] u>= 0x10)
        ecx_62 = *ecx_62
    
    eax_68 = (*(*edx_42 + 0x50))(ecx_62, 1)
else
    eax_68 = 0

var_4.b = 0
*(arg1 + 0x60) = eax_68

if (var_44 u>= 0x10)
    eax_68 = j__free(var_58)

int32_t* ecx_65 = sub_410930(eax_68, &var_28, &var_58, 0x6e10a4)
var_4.b = 0x16
int32_t* edx_44 = *(arg3 + 4)
int32_t eax_71

if (edx_44 != 0)
    if (ecx_65[5] u>= 0x10)
        ecx_65 = *ecx_65
    
    eax_71 = (*(*edx_44 + 0x50))(ecx_65, 2)
else
    eax_71 = 0

var_4.b = 0
*(arg1 + 0x64) = eax_71

if (var_44 u>= 0x10)
    eax_71 = j__free(var_58)

int32_t* ecx_68 = sub_410930(eax_71, &var_28, &var_58, 0x6e10b0)
var_4.b = 0x17
int32_t* edx_46 = *(arg3 + 4)
int32_t eax_74

if (edx_46 != 0)
    if (ecx_68[5] u>= 0x10)
        ecx_68 = *ecx_68
    
    eax_74 = (*(*edx_46 + 0x50))(ecx_68, 3)
else
    eax_74 = 0

var_4.b = 0
*(arg1 + 0x68) = eax_74

if (var_44 u>= 0x10)
    eax_74 = j__free(var_58)

var_4.b = 0x18
int32_t var_40
sub_401c90(arg3, &var_58, sub_410930(eax_74, &var_28, &var_40, 0x6e1104))
var_4.b = 0x19
int32_t* ecx_72 = *(arg5 + 0x10)

if (ecx_72 == 0)
    sub_69a52d()
    noreturn

int32_t eax_78 = (*(*ecx_72 + 8))(&var_58)
int32_t ebx = eax_78

if (var_44 u>= 0x10)
    eax_78 = j__free(var_58)

var_4.b = 0
int32_t var_44_1 = 0xf
int32_t var_48 = 0
var_58.b = 0
*(arg1 + 0x6c) = ebx
int32_t var_2c

if (var_2c u>= 0x10)
    eax_78 = j__free(var_40)

var_4.b = 0x1a
sub_401c90(arg3, &var_58, sub_410930(eax_78, &var_28, &var_40, 0x6e1118))
var_4.b = 0x1b
int32_t* ecx_75 = *(arg5 + 0x10)

if (ecx_75 == 0)
    sub_69a52d()
    noreturn

int32_t eax_81 = (*(*ecx_75 + 8))(&var_58)
int32_t ebx_1 = eax_81

if (var_44_1 u>= 0x10)
    eax_81 = j__free(var_58)

var_4.b = 0
int32_t var_44_2 = 0xf
int32_t var_48_1 = 0
var_58.b = 0
*(arg1 + 0x70) = ebx_1

if (var_2c u>= 0x10)
    eax_81 = j__free(var_40)

var_4.b = 0x1c
sub_401c90(arg3, &var_58, sub_410930(eax_81, &var_28, &var_40, 0x6e10d4))
var_4.b = 0x1d
int32_t* ecx_78 = *(arg5 + 0x10)

if (ecx_78 == 0)
    sub_69a52d()
    noreturn

int32_t eax_84 = (*(*ecx_78 + 8))(&var_58)
int32_t ebx_2 = eax_84

if (var_44_2 u>= 0x10)
    eax_84 = j__free(var_58)

var_4.b = 0
int32_t var_44_3 = 0xf
int32_t var_48_2 = 0
var_58.b = 0
*(arg1 + 0x74) = ebx_2

if (var_2c u>= 0x10)
    eax_84 = j__free(var_40)

var_4.b = 0x1e
sub_401c90(arg3, &var_58, sub_410930(eax_84, &var_28, &var_40, 0x6e10ec))
var_4.b = 0x1f
int32_t* ecx_81 = *(arg5 + 0x10)

if (ecx_81 == 0)
    sub_69a52d()
    noreturn

int32_t eax_87 = (*(*ecx_81 + 8))(&var_58)
int32_t ebx_3 = eax_87

if (var_44_3 u>= 0x10)
    eax_87 = j__free(var_58)

var_4.b = 0
int32_t var_44_4 = 0xf
int32_t var_48_3 = 0
var_58.b = 0
*(arg1 + 0x78) = ebx_3

if (var_2c u>= 0x10)
    eax_87 = j__free(var_40)

var_4.b = 0x20
sub_401c90(arg3, &var_58, sub_410930(eax_87, &var_28, &var_40, 0x6e1250))
var_4.b = 0x21
int32_t* ecx_84 = *(arg5 + 0x10)

if (ecx_84 == 0)
    sub_69a52d()
    noreturn

int32_t eax_90 = (*(*ecx_84 + 8))(&var_58)
int32_t ebx_4 = eax_90

if (var_44_4 u>= 0x10)
    eax_90 = j__free(var_58)

var_4.b = 0
int32_t var_44_5 = 0xf
int32_t var_48_4 = 0
var_58.b = 0
*(arg1 + 0x7c) = ebx_4

if (var_2c u>= 0x10)
    eax_90 = j__free(var_40)

var_4.b = 0x22
sub_401c90(arg3, &var_58, sub_410930(eax_90, &var_28, &var_40, 0x6e1268))
var_4.b = 0x23
int32_t* ecx_87 = *(arg5 + 0x10)

if (ecx_87 == 0)
    sub_69a52d()
    noreturn

int32_t eax_93 = (*(*ecx_87 + 8))(&var_58)
int32_t ebx_5 = eax_93

if (var_44_5 u>= 0x10)
    eax_93 = j__free(var_58)

var_4.b = 0
int32_t var_44_6 = 0xf
int32_t var_48_5 = 0
var_58.b = 0
*(arg1 + 0x80) = ebx_5

if (var_2c u>= 0x10)
    eax_93 = j__free(var_40)

int32_t* ecx_89 = sub_410930(eax_93, &var_28, &var_40, 0x6e1224)
var_4.b = 0x24
int32_t* edx_54 = *(arg3 + 4)
int32_t eax_95

if (edx_54 != 0)
    if (ecx_89[5] u>= 0x10)
        ecx_89 = *ecx_89
    
    eax_95 = (*(*edx_54 + 0x44))(ecx_89)
else
    eax_95 = 0

var_4.b = 0
*(arg1 + 0x84) = eax_95

if (var_2c u>= 0x10)
    eax_95 = j__free(var_40)

int32_t* ecx_92 = sub_410930(eax_95, &var_28, &var_40, 0x6e1240)
var_4.b = 0x25
int32_t* edx_56 = *(arg3 + 4)
int32_t eax_98

if (edx_56 != 0)
    if (ecx_92[5] u>= 0x10)
        ecx_92 = *ecx_92
    
    eax_98 = (*(*edx_56 + 0x44))(ecx_92)
else
    eax_98 = 0

var_4.b = 0
eax_98.b = eax_98 == 1
*(arg1 + 0x88) = eax_98.b

if (var_2c u>= 0x10)
    eax_98 = j__free(var_40)

int32_t* ecx_95 = sub_410930(eax_98, &var_28, &var_40, 0x6e12a4)
var_4.b = 0x26
int32_t* edx_58 = *(arg3 + 4)
int32_t eax_101

if (edx_58 != 0)
    if (ecx_95[5] u>= 0x10)
        ecx_95 = *ecx_95
    
    eax_101 = (*(*edx_58 + 0x44))(ecx_95)
else
    eax_101 = 0

var_4.b = 0
*(arg1 + 0x8c) = eax_101

if (var_2c u>= 0x10)
    eax_101 = j__free(var_40)

int32_t* ecx_98 = sub_410930(eax_101, &var_28, &var_40, 0x6e12b4)
var_4.b = 0x27
int32_t* edx_60 = *(arg3 + 4)
int32_t eax_104

if (edx_60 != 0)
    if (ecx_98[5] u>= 0x10)
        ecx_98 = *ecx_98
    
    eax_104 = (*(*edx_60 + 0x44))(ecx_98)
else
    eax_104 = 0

var_4.b = 0
eax_104.b = eax_104 == 1
*(arg1 + 0x410) = eax_104.b

if (var_2c u>= 0x10)
    eax_104 = j__free(var_40)

int32_t* ecx_101 = sub_410930(eax_104, &var_28, &var_40, 0x6e1284)
var_4.b = 0x28
int32_t* edx_62 = *(arg3 + 4)
int32_t eax_107

if (edx_62 != 0)
    if (ecx_101[5] u>= 0x10)
        ecx_101 = *ecx_101
    
    eax_107 = (*(*edx_62 + 0x44))(ecx_101)
else
    eax_107 = 0

var_4.b = 0
eax_107.b = eax_107 == 1
*(arg1 + 0x411) = eax_107.b

if (var_2c u>= 0x10)
    eax_107 = j__free(var_40)

int32_t* ecx_104 = sub_410930(eax_107, &var_28, &var_40, 0x6e1298)
var_4.b = 0x29
int32_t* edx_64 = *(arg3 + 4)
int32_t eax_110

if (edx_64 != 0)
    if (ecx_104[5] u>= 0x10)
        ecx_104 = *ecx_104
    
    eax_110 = (*(*edx_64 + 0x44))(ecx_104)
else
    eax_110 = 0

var_4.b = 0
eax_110.b = eax_110 == 1
*(arg1 + 0x412) = eax_110.b

if (var_2c u>= 0x10)
    eax_110 = j__free(var_40)

int32_t* ecx_107 = sub_410930(eax_110, &var_28, &var_40, 0x6e11a4)
var_4.b = 0x2a
int32_t* edx_66 = *(arg3 + 4)
int32_t eax_113

if (edx_66 != 0)
    if (ecx_107[5] u>= 0x10)
        ecx_107 = *ecx_107
    
    eax_113 = (*(*edx_66 + 0x44))(ecx_107)
else
    eax_113 = 0

var_4.b = 0
eax_113.b = eax_113 == 1
*(arg1 + 0x413) = eax_113.b

if (var_2c u>= 0x10)
    eax_113 = j__free(var_40)

int32_t* ecx_110 = sub_410930(eax_113, &var_28, &var_40, 0x6e11c0)
var_4.b = 0x2b
int32_t* edx_68 = *(arg3 + 4)
int32_t eax_116

if (edx_68 != 0)
    if (ecx_110[5] u>= 0x10)
        ecx_110 = *ecx_110
    
    eax_116 = (*(*edx_68 + 0x44))(ecx_110)
else
    eax_116 = 0

var_4.b = 0
eax_116.b = eax_116 == 1
*(arg1 + 0x42c) = eax_116.b

if (var_2c u>= 0x10)
    eax_116 = j__free(var_40)

var_4.b = 0x2c
char* eax_119 = sub_401c90(arg3, &var_58, sub_410930(eax_116, &var_28, &var_40, 0x6e1180))
int32_t* eax_120 = sub_408340(*(arg1 + 0x414) + 0x30, eax_119)

if (var_44_6 u>= 0x10)
    eax_120 = j__free(var_58)

var_4.b = 0
int32_t var_44_7 = 0xf
int32_t var_48_6 = 0
var_58.b = 0

if (var_2c u>= 0x10)
    eax_120 = j__free(var_40)

var_4.b = 0x2d
char* eax_122 = sub_401c90(arg3, &var_58, sub_410930(eax_120, &var_28, &var_40, 0x6e1194))
int32_t* eax_123 = sub_408340(*(arg1 + 0x414) + 0x48, eax_122)

if (var_44_7 u>= 0x10)
    eax_123 = j__free(var_58)

var_4.b = 0
int32_t var_44_8 = 0xf
int32_t var_48_7 = 0
var_58.b = 0

if (var_2c u>= 0x10)
    eax_123 = j__free(var_40)

int32_t* ecx_121 = sub_410930(eax_123, &var_28, &var_40, 0x6e11f4)
var_4.b = 0x2e
int32_t* edx_72 = *(arg3 + 4)
int32_t eax_125

if (edx_72 != 0)
    if (ecx_121[5] u>= 0x10)
        ecx_121 = *ecx_121
    
    eax_125 = (*(*edx_72 + 0x44))(ecx_121)
else
    eax_125 = 0

var_4.b = 0
*(*(arg1 + 0x420) + 4) = eax_125

if (var_2c u>= 0x10)
    eax_125 = j__free(var_40)

int32_t* ecx_125 = sub_410930(eax_125, &var_28, &var_40, 0x6e120c)
var_4.b = 0x2f
int32_t* edx_74 = *(arg3 + 4)
int32_t eax_128

if (edx_74 != 0)
    if (ecx_125[5] u>= 0x10)
        ecx_125 = *ecx_125
    
    eax_128 = (*(*edx_74 + 0x44))(ecx_125)
else
    eax_128 = 0

var_4.b = 0
*(*(arg1 + 0x420) + 8) = eax_128

if (var_2c u>= 0x10)
    eax_128 = j__free(var_40)

int32_t* ecx_129 = sub_410930(eax_128, &var_28, &var_40, 0x6e11dc)
var_4.b = 0x30
int32_t* edx_76 = *(arg3 + 4)
int32_t result

if (edx_76 != 0)
    if (ecx_129[5] u>= 0x10)
        ecx_129 = *ecx_129
    
    result = (*(*edx_76 + 0x44))(ecx_129)
else
    result = 0

*(*(arg1 + 0x420) + 0xc) = result

if (var_2c u>= 0x10)
    j__free(var_40)

*(arg1 + 4) = 1
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
