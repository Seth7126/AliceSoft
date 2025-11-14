// 函数: sub_4c3190
// 地址: 0x4c3190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_6be500
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b8
int32_t eax_2 = __security_cookie ^ &var_b8
int32_t __saved_edi
int32_t var_c4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14_1 = 0
int32_t var_6c
void* var_54
int32_t* ecx_2 =
    sub_410930(sub_410930(&ExceptionList, arg4, &var_54, ."), &var_54, &var_6c, 0x6e14c0)
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
int32_t var_58

if (var_58 u>= 0x10)
    eax_8 = j__free(var_6c)

int32_t* ecx_5 = sub_410930(eax_8, &var_54, &var_6c, 0x6e14a4)
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

if (var_58 u>= 0x10)
    eax_12 = j__free(var_6c)

int32_t* ecx_8 = sub_410930(eax_12, &var_54, &var_6c, 0x6e14ac)
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
*(arg1 + 0x10) = eax_16

if (var_58 u>= 0x10)
    eax_16 = j__free(var_6c)

int32_t* ecx_11 = sub_410930(eax_16, &var_54, &var_6c, 0x6e1568)
var_14_1.b = 4
int32_t* edx_8 = *(arg3 + 4)
int32_t eax_20

if (edx_8 != 0)
    if (ecx_11[5] u>= 0x10)
        ecx_11 = *ecx_11
    
    eax_20 = (*(*edx_8 + 0x44))(ecx_11)
else
    eax_20 = 0

var_14_1.b = 0
*(arg1 + 0x14) = eax_20

if (var_58 u>= 0x10)
    eax_20 = j__free(var_6c)

int32_t var_84
int32_t* eax_23 = sub_410930(eax_20, &var_54, &var_84, 0x6e1578)
var_14_1.b = 5
int32_t* eax_24 = sub_410930(eax_23, &var_54, &var_6c, 0x6e1550)
var_14_1.b = 6
char var_3c
int32_t* eax_25 = sub_410930(eax_24, &var_54, &var_3c, 0x6e155c)
var_14_1.b = 7
int32_t* edx_12 = *(arg3 + 4)
int32_t* var_b0_1

if (edx_12 != 0)
    int32_t* ecx_16 = eax_23
    
    if (ecx_16[5] u>= 0x10)
        ecx_16 = *ecx_16
    
    var_b0_1 = (*(*edx_12 + 0x50))(ecx_16, 2)
else
    var_b0_1 = edx_12

int32_t* edx_13 = *(arg3 + 4)
int32_t* var_a8_1

if (edx_13 != 0)
    int32_t* ecx_18 = eax_24
    
    if (ecx_18[5] u>= 0x10)
        ecx_18 = *ecx_18
    
    var_a8_1 = (*(*edx_13 + 0x50))(ecx_18, 1)
else
    var_a8_1 = edx_13

int32_t* edx_14 = *(arg3 + 4)
int32_t eax_32

if (edx_14 != 0)
    int32_t* ecx_20 = eax_25
    
    if (ecx_20[5] u>= 0x10)
        ecx_20 = *ecx_20
    
    eax_32 = (*(*edx_14 + 0x50))(ecx_20, 0)
else
    eax_32 = 0

int32_t ecx_22 = 0
int32_t var_94 = 0xff

if (eax_32 s> 0)
    ecx_22 = eax_32

if (ecx_22 s> 0xff)
    ecx_22 = 0xff

int32_t* eax_35 = nullptr

if (var_a8_1 s> 0)
    eax_35 = var_a8_1

if (eax_35 s> 0xff)
    eax_35 = 0xff

int32_t* var_9c = eax_35
int32_t* eax_36 = nullptr

if (var_b0_1 s> 0)
    eax_36 = var_b0_1

if (eax_36 s> 0xff)
    eax_36 = 0xff

int32_t* var_98 = eax_36
*(arg1 + 0x18) = ecx_22.o
int32_t var_28

if (var_28 u>= 0x10)
    eax_36 = j__free(var_3c.d)

int32_t var_28_1 = 0xf
int32_t var_2c = 0
var_3c = 0

if (var_58 u>= 0x10)
    eax_36 = j__free(var_6c)

var_14_1.b = 0
int32_t var_58_1 = 0xf
int32_t var_5c = 0
var_6c.b = 0
int32_t var_70

if (var_70 u>= 0x10)
    eax_36 = j__free(var_84)

int32_t* eax_37 = sub_410930(eax_36, &var_54, &var_84, 0x6e15ac)
int32_t* ecx_26 = eax_37
var_14_1.b = 8
int32_t* edx_16 = *(arg3 + 4)
int32_t xmm0_1

if (edx_16 != 0)
    if (ecx_26[5] u>= 0x10)
        ecx_26 = *ecx_26
    
    eax_37 = (*(*edx_16 + 0x48))(ecx_26)
    xmm0_1 = fconvert.s(arg2)
else
    xmm0_1 = (zx.o(0)).d

var_14_1.b = 0
*(arg1 + 0x28) = xmm0_1

if (var_70 u>= 0x10)
    eax_37 = j__free(var_84)

int32_t* eax_40 = sub_410930(eax_37, &var_54, &var_84, 0x6e15bc)
int32_t* ecx_29 = eax_40
var_14_1.b = 9
int32_t* edx_18 = *(arg3 + 4)
int32_t xmm0_2

if (edx_18 != 0)
    if (ecx_29[5] u>= 0x10)
        ecx_29 = *ecx_29
    
    eax_40 = (*(*edx_18 + 0x48))(ecx_29)
    int32_t var_ac_2 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
    unimplemented  {fstp dword [esp+0x18], st0}
    xmm0_2 = var_ac_2
else
    xmm0_2 = (zx.o(0)).d

var_14_1.b = 0
*(arg1 + 0x2c) = xmm0_2

if (var_70 u>= 0x10)
    eax_40 = j__free(var_84)

int32_t* eax_43 = sub_410930(eax_40, &var_54, &var_84, 0x6e1584)
var_14_1.b = 0xa
int32_t* eax_44 = sub_410930(eax_43, &var_54, &var_3c, 0x6e1598)
var_14_1.b = 0xb
int32_t* eax_45 = sub_410930(eax_44, &var_54, &var_6c, 0x6e1500)
var_14_1.b = 0xc
int32_t* edx_22 = *(arg3 + 4)
int32_t* var_a8_2

if (edx_22 != 0)
    int32_t* ecx_34 = eax_43
    
    if (ecx_34[5] u>= 0x10)
        ecx_34 = *ecx_34
    
    var_a8_2 = (*(*edx_22 + 0x50))(ecx_34, 2)
else
    var_a8_2 = edx_22

int32_t* edx_23 = *(arg3 + 4)
int32_t* var_b0_3

if (edx_23 != 0)
    int32_t* ecx_36 = eax_44
    
    if (ecx_36[5] u>= 0x10)
        ecx_36 = *ecx_36
    
    var_b0_3 = (*(*edx_23 + 0x50))(ecx_36, 1)
else
    var_b0_3 = edx_23

int32_t* edx_24 = *(arg3 + 4)
int32_t eax_52

if (edx_24 != 0)
    int32_t* ecx_38 = eax_45
    
    if (ecx_38[5] u>= 0x10)
        ecx_38 = *ecx_38
    
    eax_52 = (*(*edx_24 + 0x50))(ecx_38, 0)
else
    eax_52 = 0

int32_t ecx_40 = 0
int32_t var_94_1 = 0xff

if (eax_52 s> 0)
    ecx_40 = eax_52

if (ecx_40 s> 0xff)
    ecx_40 = 0xff

int32_t* eax_55 = nullptr

if (var_b0_3 s> 0)
    eax_55 = var_b0_3

if (eax_55 s> 0xff)
    eax_55 = 0xff

int32_t* var_9c_1 = eax_55
int32_t* eax_56 = nullptr

if (var_a8_2 s> 0)
    eax_56 = var_a8_2

if (eax_56 s> 0xff)
    eax_56 = 0xff

int32_t* var_98_1 = eax_56
*(arg1 + 0x30) = ecx_40.o

if (var_58_1 u>= 0x10)
    eax_56 = j__free(var_6c)

int32_t var_58_2 = 0xf
int32_t var_5c_1 = 0
var_6c.b = 0

if (var_28_1 u>= 0x10)
    eax_56 = j__free(var_3c.d)

var_14_1.b = 0
int32_t var_28_2 = 0xf
int32_t var_2c_1 = 0
var_3c = 0

if (var_70 u>= 0x10)
    eax_56 = j__free(var_84)

int32_t* ecx_44 = sub_410930(eax_56, &var_54, &var_84, 0x6e1514)
var_14_1.b = 0xd
int32_t* edx_26 = *(arg3 + 4)
int32_t eax_58

if (edx_26 != 0)
    if (ecx_44[5] u>= 0x10)
        ecx_44 = *ecx_44
    
    eax_58 = (*(*edx_26 + 0x44))(ecx_44)
else
    eax_58 = 0

var_14_1.b = 0
eax_58.b = eax_58 == 1
*(arg1 + 0x40) = eax_58.b

if (var_70 u>= 0x10)
    eax_58 = j__free(var_84)

var_14_1.b = 0xe
int32_t* ecx_48 = sub_401c90(arg3, &var_6c, sub_410930(eax_58, &var_54, &var_84, 0x6e14e8))
void* eax_63 = arg1 + 0x44

if (eax_63 != ecx_48)
    if (*(eax_63 + 0x14) u>= 0x10)
        j__free(*eax_63)
        eax_63 = arg1 + 0x44
    
    *(eax_63 + 0x14) = 0xf
    *(eax_63 + 0x10) = 0
    *eax_63 = 0
    eax_63 = sub_4030b0(eax_63, ecx_48)

if (var_58_2 u>= 0x10)
    eax_63 = j__free(var_6c)

var_14_1.b = 0
int32_t var_58_3 = 0xf
int32_t var_5c_2 = 0
var_6c.b = 0

if (var_70 u>= 0x10)
    eax_63 = j__free(var_84)

int32_t* ecx_51 = sub_410930(eax_63, &var_54, &var_84, 0x6e14f4)
var_14_1.b = 0xf
int32_t* edx_29 = *(arg3 + 4)
int32_t eax_65

if (edx_29 != 0)
    if (ecx_51[5] u>= 0x10)
        ecx_51 = *ecx_51
    
    eax_65 = (*(*edx_29 + 0x44))(ecx_51)
else
    eax_65 = 0

var_14_1.b = 0
*(arg1 + 0x5c) = eax_65

if (var_70 u>= 0x10)
    eax_65 = j__free(var_84)

int32_t* ecx_54 = sub_410930(eax_65, &var_54, &var_84, 0x6e1540)
var_14_1.b = 0x10
int32_t* edx_31 = *(arg3 + 4)
int32_t eax_69

if (edx_31 != 0)
    if (ecx_54[5] u>= 0x10)
        ecx_54 = *ecx_54
    
    eax_69 = (*(*edx_31 + 0x50))(ecx_54, 0)
else
    eax_69 = 0

var_14_1.b = 0
*(arg1 + 0x60) = eax_69

if (var_70 u>= 0x10)
    eax_69 = j__free(var_84)

int32_t* ecx_57 = sub_410930(eax_69, &var_54, &var_84, 0x6e1548)
var_14_1.b = 0x11
int32_t* edx_33 = *(arg3 + 4)
int32_t eax_73

if (edx_33 != 0)
    if (ecx_57[5] u>= 0x10)
        ecx_57 = *ecx_57
    
    eax_73 = (*(*edx_33 + 0x50))(ecx_57, 1)
else
    eax_73 = 0

var_14_1.b = 0
*(arg1 + 0x64) = eax_73

if (var_70 u>= 0x10)
    eax_73 = j__free(var_84)

int32_t* ecx_60 = sub_410930(eax_73, &var_54, &var_84, 0x6e1524)
var_14_1.b = 0x12
int32_t* edx_35 = *(arg3 + 4)
int32_t eax_77

if (edx_35 != 0)
    if (ecx_60[5] u>= 0x10)
        ecx_60 = *ecx_60
    
    eax_77 = (*(*edx_35 + 0x50))(ecx_60, 2)
else
    eax_77 = 0

var_14_1.b = 0
*(arg1 + 0x68) = eax_77

if (var_70 u>= 0x10)
    eax_77 = j__free(var_84)

int32_t* ecx_63 = sub_410930(eax_77, &var_54, &var_84, 0x6e152c)
var_14_1.b = 0x13
int32_t* edx_37 = *(arg3 + 4)
int32_t eax_81

if (edx_37 != 0)
    if (ecx_63[5] u>= 0x10)
        ecx_63 = *ecx_63
    
    eax_81 = (*(*edx_37 + 0x50))(ecx_63, 0)
else
    eax_81 = 0

var_14_1.b = 0
*(arg1 + 0x6c) = eax_81

if (var_70 u>= 0x10)
    eax_81 = j__free(var_84)

int32_t* ecx_66 = sub_410930(eax_81, &var_54, &var_84, 0x6e1618)
var_14_1.b = 0x14
int32_t* edx_39 = *(arg3 + 4)
int32_t eax_85

if (edx_39 != 0)
    if (ecx_66[5] u>= 0x10)
        ecx_66 = *ecx_66
    
    eax_85 = (*(*edx_39 + 0x50))(ecx_66, 1)
else
    eax_85 = 0

var_14_1.b = 0
*(arg1 + 0x70) = eax_85

if (var_70 u>= 0x10)
    eax_85 = j__free(var_84)

int32_t* ecx_69 = sub_410930(eax_85, &var_54, &var_84, 0x6e162c)
var_14_1.b = 0x15
int32_t* edx_41 = *(arg3 + 4)
int32_t eax_89

if (edx_41 != 0)
    if (ecx_69[5] u>= 0x10)
        ecx_69 = *ecx_69
    
    eax_89 = (*(*edx_41 + 0x50))(ecx_69, 2)
else
    eax_89 = 0

var_14_1.b = 0
*(arg1 + 0x74) = eax_89

if (var_70 u>= 0x10)
    eax_89 = j__free(var_84)

int32_t* ecx_72 = sub_410930(eax_89, &var_54, &var_84, 0x6e1608)
var_14_1.b = 0x16
int32_t* edx_43 = *(arg3 + 4)
int32_t eax_93

if (edx_43 != 0)
    if (ecx_72[5] u>= 0x10)
        ecx_72 = *ecx_72
    
    eax_93 = (*(*edx_43 + 0x50))(ecx_72, 0)
else
    eax_93 = 0

var_14_1.b = 0
*(arg1 + 0x78) = eax_93

if (var_70 u>= 0x10)
    eax_93 = j__free(var_84)

int32_t* ecx_75 = sub_410930(eax_93, &var_54, &var_84, 0x6e1610)
var_14_1.b = 0x17
int32_t* edx_45 = *(arg3 + 4)
int32_t eax_97

if (edx_45 != 0)
    if (ecx_75[5] u>= 0x10)
        ecx_75 = *ecx_75
    
    eax_97 = (*(*edx_45 + 0x50))(ecx_75, 1)
else
    eax_97 = 0

var_14_1.b = 0
*(arg1 + 0x7c) = eax_97

if (var_70 u>= 0x10)
    eax_97 = j__free(var_84)

int32_t* ecx_78 = sub_410930(eax_97, &var_54, &var_84, 0x6e1650)
var_14_1.b = 0x18
int32_t* edx_47 = *(arg3 + 4)
int32_t eax_101

if (edx_47 != 0)
    if (ecx_78[5] u>= 0x10)
        ecx_78 = *ecx_78
    
    eax_101 = (*(*edx_47 + 0x50))(ecx_78, 2)
else
    eax_101 = 0

var_14_1.b = 0
*(arg1 + 0x80) = eax_101

if (var_70 u>= 0x10)
    eax_101 = j__free(var_84)

int32_t* ecx_81 = sub_410930(eax_101, &var_54, &var_84, 0x6e1658)
var_14_1.b = 0x19
int32_t* edx_49 = *(arg3 + 4)
int32_t eax_105

if (edx_49 != 0)
    if (ecx_81[5] u>= 0x10)
        ecx_81 = *ecx_81
    
    eax_105 = (*(*edx_49 + 0x50))(ecx_81, 0)
else
    eax_105 = 0

var_14_1.b = 0
*(arg1 + 0x84) = eax_105

if (var_70 u>= 0x10)
    eax_105 = j__free(var_84)

int32_t* ecx_84 = sub_410930(eax_105, &var_54, &var_84, 0x6e1640)
var_14_1.b = 0x1a
int32_t* edx_51 = *(arg3 + 4)
int32_t eax_109

if (edx_51 != 0)
    if (ecx_84[5] u>= 0x10)
        ecx_84 = *ecx_84
    
    eax_109 = (*(*edx_51 + 0x50))(ecx_84, 1)
else
    eax_109 = 0

var_14_1.b = 0
*(arg1 + 0x88) = eax_109

if (var_70 u>= 0x10)
    eax_109 = j__free(var_84)

int32_t* ecx_87 = sub_410930(eax_109, &var_54, &var_84, 0x6e1648)
var_14_1.b = 0x1b
int32_t* edx_53 = *(arg3 + 4)
int32_t eax_113

if (edx_53 != 0)
    if (ecx_87[5] u>= 0x10)
        ecx_87 = *ecx_87
    
    eax_113 = (*(*edx_53 + 0x50))(ecx_87, 2)
else
    eax_113 = 0

var_14_1.b = 0
*(arg1 + 0x8c) = eax_113

if (var_70 u>= 0x10)
    eax_113 = j__free(var_84)

int32_t* ecx_90 = sub_410930(eax_113, &var_54, &var_84, 0x6e15e0)
var_14_1.b = 0x1c
int32_t* edx_55 = *(arg3 + 4)
int32_t eax_117

if (edx_55 != 0)
    if (ecx_90[5] u>= 0x10)
        ecx_90 = *ecx_90
    
    eax_117 = (*(*edx_55 + 0x50))(ecx_90, 0)
else
    eax_117 = 0

var_14_1.b = 0
*(arg1 + 0x90) = eax_117

if (var_70 u>= 0x10)
    eax_117 = j__free(var_84)

int32_t* ecx_93 = sub_410930(eax_117, &var_54, &var_84, 0x6e15f0)
var_14_1.b = 0x1d
int32_t* edx_57 = *(arg3 + 4)
int32_t eax_121

if (edx_57 != 0)
    if (ecx_93[5] u>= 0x10)
        ecx_93 = *ecx_93
    
    eax_121 = (*(*edx_57 + 0x50))(ecx_93, 1)
else
    eax_121 = 0

var_14_1.b = 0
*(arg1 + 0x94) = eax_121

if (var_70 u>= 0x10)
    eax_121 = j__free(var_84)

var_14_1.b = 0x1e
var_14_1.b = 0x1f
int32_t* eax_126 =
    sub_4c1f90(arg1, sub_401c90(arg3, &var_6c, sub_410930(eax_121, &var_54, &var_84, 0x6e15cc)))

if (var_58_3 u>= 0x10)
    eax_126 = j__free(var_6c)

var_14_1.b = 0
int32_t var_58_4 = 0xf
int32_t var_5c_3 = 0
var_6c.b = 0

if (var_70 u>= 0x10)
    eax_126 = j__free(var_84)

int32_t* ecx_99 = sub_410930(eax_126, &var_54, &var_84, 0x6e15d4)
var_14_1.b = 0x20
int32_t* edx_60 = *(arg3 + 4)
int32_t eax_128

if (edx_60 != 0)
    if (ecx_99[5] u>= 0x10)
        ecx_99 = *ecx_99
    
    eax_128 = (*(*edx_60 + 0x44))(ecx_99)
else
    eax_128 = 0

var_14_1.b = 0
*(arg1 + 0xf8) = eax_128

if (var_70 u>= 0x10)
    eax_128 = j__free(var_84)

int32_t* ecx_102 = sub_410930(eax_128, &var_54, &var_84, 0x6e1600)
var_14_1.b = 0x21
int32_t* edx_62 = *(arg3 + 4)
int32_t result

if (edx_62 != 0)
    if (ecx_102[5] u>= 0x10)
        ecx_102 = *ecx_102
    
    result = (*(*edx_62 + 0x44))(ecx_102)
else
    result = 0

*(arg1 + 0xfc) = result

if (var_70 u>= 0x10)
    j__free(var_84)

int32_t var_40

if (var_40 u>= 0x10)
    j__free(var_54)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b8)
return result
