// 函数: sub_480380
// 地址: 0x480380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba5d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_88
int32_t eax_2 = __security_cookie ^ &var_88
int32_t __saved_edi
int32_t var_9c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t var_70
void* var_58
int32_t* ecx_2 =
    sub_410930(sub_410930(&ExceptionList, arg3, &var_58, ."), &var_58, &var_70, 0x6ddea0)
var_4.b = 1
int32_t* edx_2 = *(arg2 + 4)
int32_t eax_8

if (edx_2 != 0)
    if (ecx_2[5] u>= 0x10)
        ecx_2 = *ecx_2
    
    eax_8 = (*(*edx_2 + 0x44))(ecx_2)
else
    eax_8 = 0

var_4.b = 0
*(arg1 + 4) = eax_8
int32_t var_5c

if (var_5c u>= 0x10)
    eax_8 = j__free(var_70)

int32_t* ecx_5 = sub_410930(eax_8, &var_58, &var_70, 0x6ddeac)
var_4.b = 2
int32_t* edx_4 = *(arg2 + 4)
int32_t eax_11

if (edx_4 != 0)
    if (ecx_5[5] u>= 0x10)
        ecx_5 = *ecx_5
    
    eax_11 = (*(*edx_4 + 0x44))(ecx_5)
else
    eax_11 = 0

var_4.b = 0
*(arg1 + 8) = eax_11

if (var_5c u>= 0x10)
    eax_11 = j__free(var_70)

int32_t* ecx_8 = sub_410930(eax_11, &var_58, &var_70, 0x6dde48)
var_4.b = 3
int32_t* edx_6 = *(arg2 + 4)
int32_t eax_14

if (edx_6 != 0)
    if (ecx_8[5] u>= 0x10)
        ecx_8 = *ecx_8
    
    eax_14 = (*(*edx_6 + 0x50))(ecx_8, 0)
else
    eax_14 = 0

var_4.b = 0
*(arg1 + 0xc) = eax_14

if (var_5c u>= 0x10)
    eax_14 = j__free(var_70)

int32_t* ecx_11 = sub_410930(eax_14, &var_58, &var_70, 0x6dde50)
var_4.b = 4
int32_t* edx_8 = *(arg2 + 4)
int32_t eax_17

if (edx_8 != 0)
    if (ecx_11[5] u>= 0x10)
        ecx_11 = *ecx_11
    
    eax_17 = (*(*edx_8 + 0x50))(ecx_11, 1)
else
    eax_17 = 0

var_4.b = 0
*(arg1 + 0x10) = eax_17

if (var_5c u>= 0x10)
    eax_17 = j__free(var_70)

int32_t* ecx_14 = sub_410930(eax_17, &var_58, &var_70, 0x6dde58)
var_4.b = 5
int32_t* edx_10 = *(arg2 + 4)
int32_t eax_20

if (edx_10 != 0)
    if (ecx_14[5] u>= 0x10)
        ecx_14 = *ecx_14
    
    eax_20 = (*(*edx_10 + 0x50))(ecx_14, 2)
else
    eax_20 = 0

var_4.b = 0
*(arg1 + 0x14) = eax_20

if (var_5c u>= 0x10)
    eax_20 = j__free(var_70)

int32_t* ecx_17 = sub_410930(eax_20, &var_58, &var_70, 0x6dde60)
var_4.b = 6
int32_t* edx_12 = *(arg2 + 4)
int32_t eax_23

if (edx_12 != 0)
    if (ecx_17[5] u>= 0x10)
        ecx_17 = *ecx_17
    
    eax_23 = (*(*edx_12 + 0x50))(ecx_17, 3)
else
    eax_23 = 0

var_4.b = 0
*(arg1 + 0x18) = eax_23

if (var_5c u>= 0x10)
    eax_23 = j__free(var_70)

int32_t* ecx_20 = sub_410930(eax_23, &var_58, &var_70, 0x6dde68)
var_4.b = 7
int32_t* edx_14 = *(arg2 + 4)
int32_t eax_26

if (edx_14 != 0)
    if (ecx_20[5] u>= 0x10)
        ecx_20 = *ecx_20
    
    eax_26 = (*(*edx_14 + 0x50))(ecx_20, 0)
else
    eax_26 = 0

var_4.b = 0
*(arg1 + 0x1c) = eax_26

if (var_5c u>= 0x10)
    eax_26 = j__free(var_70)

int32_t* ecx_23 = sub_410930(eax_26, &var_58, &var_70, 0x6dde70)
var_4.b = 8
int32_t* edx_16 = *(arg2 + 4)
int32_t eax_29

if (edx_16 != 0)
    if (ecx_23[5] u>= 0x10)
        ecx_23 = *ecx_23
    
    eax_29 = (*(*edx_16 + 0x50))(ecx_23, 1)
else
    eax_29 = 0

var_4.b = 0
*(arg1 + 0x20) = eax_29

if (var_5c u>= 0x10)
    eax_29 = j__free(var_70)

int32_t* ecx_26 = sub_410930(eax_29, &var_58, &var_70, 0x6dde78)
var_4.b = 9
int32_t* edx_18 = *(arg2 + 4)
int32_t eax_32

if (edx_18 != 0)
    if (ecx_26[5] u>= 0x10)
        ecx_26 = *ecx_26
    
    eax_32 = (*(*edx_18 + 0x50))(ecx_26, 2)
else
    eax_32 = 0

var_4.b = 0
*(arg1 + 0x24) = eax_32

if (var_5c u>= 0x10)
    eax_32 = j__free(var_70)

int32_t* ecx_29 = sub_410930(eax_32, &var_58, &var_70, 0x6dde80)
var_4.b = 0xa
int32_t* edx_20 = *(arg2 + 4)
int32_t eax_35

if (edx_20 != 0)
    if (ecx_29[5] u>= 0x10)
        ecx_29 = *ecx_29
    
    eax_35 = (*(*edx_20 + 0x50))(ecx_29, 3)
else
    eax_35 = 0

var_4.b = 0
*(arg1 + 0x28) = eax_35

if (var_5c u>= 0x10)
    eax_35 = j__free(var_70)

int32_t* ecx_32 = sub_410930(eax_35, &var_58, &var_70, 0x6ddf18)
var_4.b = 0xb
int32_t* edx_22 = *(arg2 + 4)
int32_t eax_38

if (edx_22 != 0)
    if (ecx_32[5] u>= 0x10)
        ecx_32 = *ecx_32
    
    eax_38 = (*(*edx_22 + 0x50))(ecx_32, 4)
else
    eax_38 = 0

var_4.b = 0
*(arg1 + 0x2c) = eax_38

if (var_5c u>= 0x10)
    eax_38 = j__free(var_70)

int32_t* ecx_35 = sub_410930(eax_38, &var_58, &var_70, 0x6ddf20)
var_4.b = 0xc
int32_t* edx_24 = *(arg2 + 4)
int32_t eax_41

if (edx_24 != 0)
    if (ecx_35[5] u>= 0x10)
        ecx_35 = *ecx_35
    
    eax_41 = (*(*edx_24 + 0x50))(ecx_35, 5)
else
    eax_41 = 0

var_4.b = 0
*(arg1 + 0x30) = eax_41

if (var_5c u>= 0x10)
    eax_41 = j__free(var_70)

int32_t* ecx_38 = sub_410930(eax_41, &var_58, &var_70, 0x6ddf28)
var_4.b = 0xd
int32_t* edx_26 = *(arg2 + 4)
int32_t eax_44

if (edx_26 != 0)
    if (ecx_38[5] u>= 0x10)
        ecx_38 = *ecx_38
    
    eax_44 = (*(*edx_26 + 0x50))(ecx_38, 0)
else
    eax_44 = 0

var_4.b = 0
*(arg1 + 0x34) = eax_44

if (var_5c u>= 0x10)
    eax_44 = j__free(var_70)

int32_t* ecx_41 = sub_410930(eax_44, &var_58, &var_70, 0x6ddf30)
var_4.b = 0xe
int32_t* edx_28 = *(arg2 + 4)
int32_t eax_47

if (edx_28 != 0)
    if (ecx_41[5] u>= 0x10)
        ecx_41 = *ecx_41
    
    eax_47 = (*(*edx_28 + 0x50))(ecx_41, 1)
else
    eax_47 = 0

var_4.b = 0
*(arg1 + 0x38) = eax_47

if (var_5c u>= 0x10)
    eax_47 = j__free(var_70)

int32_t* ecx_44 = sub_410930(eax_47, &var_58, &var_70, 0x6ddf38)
var_4.b = 0xf
int32_t* edx_30 = *(arg2 + 4)
int32_t eax_50

if (edx_30 != 0)
    if (ecx_44[5] u>= 0x10)
        ecx_44 = *ecx_44
    
    eax_50 = (*(*edx_30 + 0x50))(ecx_44, 2)
else
    eax_50 = 0

var_4.b = 0
*(arg1 + 0x3c) = eax_50

if (var_5c u>= 0x10)
    eax_50 = j__free(var_70)

int32_t* ecx_47 = sub_410930(eax_50, &var_58, &var_70, 0x6ddf40)
var_4.b = 0x10
int32_t* edx_32 = *(arg2 + 4)
int32_t eax_53

if (edx_32 != 0)
    if (ecx_47[5] u>= 0x10)
        ecx_47 = *ecx_47
    
    eax_53 = (*(*edx_32 + 0x50))(ecx_47, 3)
else
    eax_53 = 0

var_4.b = 0
*(arg1 + 0x40) = eax_53

if (var_5c u>= 0x10)
    eax_53 = j__free(var_70)

int32_t* ecx_50 = sub_410930(eax_53, &var_58, &var_70, 0x6ddf48)
var_4.b = 0x11
int32_t* edx_34 = *(arg2 + 4)
int32_t eax_56

if (edx_34 != 0)
    if (ecx_50[5] u>= 0x10)
        ecx_50 = *ecx_50
    
    eax_56 = (*(*edx_34 + 0x50))(ecx_50, 0)
else
    eax_56 = 0

var_4.b = 0
*(arg1 + 0x44) = eax_56

if (var_5c u>= 0x10)
    eax_56 = j__free(var_70)

int32_t* ecx_53 = sub_410930(eax_56, &var_58, &var_70, 0x6ddf50)
var_4.b = 0x12
int32_t* edx_36 = *(arg2 + 4)
int32_t eax_59

if (edx_36 != 0)
    if (ecx_53[5] u>= 0x10)
        ecx_53 = *ecx_53
    
    eax_59 = (*(*edx_36 + 0x50))(ecx_53, 1)
else
    eax_59 = 0

var_4.b = 0
*(arg1 + 0x48) = eax_59

if (var_5c u>= 0x10)
    eax_59 = j__free(var_70)

int32_t* ecx_56 = sub_410930(eax_59, &var_58, &var_70, 0x6ddeb8)
var_4.b = 0x13
int32_t* edx_38 = *(arg2 + 4)
int32_t eax_62

if (edx_38 != 0)
    if (ecx_56[5] u>= 0x10)
        ecx_56 = *ecx_56
    
    eax_62 = (*(*edx_38 + 0x50))(ecx_56, 2)
else
    eax_62 = 0

var_4.b = 0
*(arg1 + 0x4c) = eax_62

if (var_5c u>= 0x10)
    eax_62 = j__free(var_70)

int32_t* ecx_59 = sub_410930(eax_62, &var_58, &var_70, 0x6ddec0)
var_4.b = 0x14
int32_t* edx_40 = *(arg2 + 4)
int32_t eax_65

if (edx_40 != 0)
    if (ecx_59[5] u>= 0x10)
        ecx_59 = *ecx_59
    
    eax_65 = (*(*edx_40 + 0x44))(ecx_59)
else
    eax_65 = 0

var_4.b = 0
*(arg1 + 0x50) = eax_65

if (var_5c u>= 0x10)
    eax_65 = j__free(var_70)

int32_t* ecx_62 = sub_410930(eax_65, &var_58, &var_70, 0x6ddecc)
var_4.b = 0x15
int32_t* edx_42 = *(arg2 + 4)
int32_t eax_68

if (edx_42 != 0)
    if (ecx_62[5] u>= 0x10)
        ecx_62 = *ecx_62
    
    eax_68 = (*(*edx_42 + 0x44))(ecx_62)
else
    eax_68 = 0

var_4.b = 0
*(arg1 + 0x54) = eax_68

if (var_5c u>= 0x10)
    eax_68 = j__free(var_70)

int32_t* ecx_65 = sub_410930(eax_68, &var_58, &var_70, 0x6dded4)
var_4.b = 0x16
int32_t* edx_44 = *(arg2 + 4)
int32_t eax_71

if (edx_44 != 0)
    if (ecx_65[5] u>= 0x10)
        ecx_65 = *ecx_65
    
    eax_71 = (*(*edx_44 + 0x44))(ecx_65)
else
    eax_71 = 0

var_4.b = 0
*(arg1 + 0x5c) = eax_71

if (var_5c u>= 0x10)
    eax_71 = j__free(var_70)

int32_t* ecx_68 = sub_410930(eax_71, &var_58, &var_70, 0x6ddee4)
var_4.b = 0x17
int32_t* edx_46 = *(arg2 + 4)
int32_t eax_74

if (edx_46 != 0)
    if (ecx_68[5] u>= 0x10)
        ecx_68 = *ecx_68
    
    eax_74 = (*(*edx_46 + 0x44))(ecx_68)
else
    eax_74 = 0

var_4.b = 0
*(arg1 + 0x60) = eax_74

if (var_5c u>= 0x10)
    eax_74 = j__free(var_70)

int32_t var_40
int32_t* eax_76 = sub_410930(eax_74, &var_58, &var_40, 0x6ddef4)
int32_t* ebx = eax_76
var_4.b = 0x18
int32_t* eax_77 = sub_410930(eax_76, &var_58, &var_70, 0x6ddf00)
int32_t* ebp = eax_77
var_4.b = 0x19
char var_28
var_88 = sub_410930(eax_77, &var_58, &var_28, 0x6ddf0c)
var_4.b = 0x1a
int32_t* ecx_73 = *(arg2 + 4)
int32_t* var_84

if (ecx_73 != 0)
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    var_84 = (*(*ecx_73 + 0x50))(ebx, 2)
else
    var_84 = ecx_73

int32_t* ecx_74 = *(arg2 + 4)
int32_t ebx_1

if (ecx_74 != 0)
    if (ebp[5] u>= 0x10)
        ebp = *ebp
    
    ebx_1 = (*(*ecx_74 + 0x50))(ebp, 1)
else
    ebx_1 = 0

int32_t* edx_50 = *(arg2 + 4)
int32_t eax_83

if (edx_50 != 0)
    int32_t* ecx_75 = var_88
    
    if (ecx_75[5] u>= 0x10)
        ecx_75 = *ecx_75
    
    eax_83 = (*(*edx_50 + 0x50))(ecx_75, 0)
else
    eax_83 = 0

int32_t ecx_77 = 0
int32_t var_74 = 0xff

if (eax_83 s> 0)
    ecx_77 = eax_83

if (ecx_77 s> 0xff)
    ecx_77 = 0xff

int32_t eax_85 = 0

if (ebx_1 s> 0)
    eax_85 = ebx_1

if (eax_85 s> 0xff)
    eax_85 = 0xff

int32_t var_7c = eax_85
int32_t* eax_86 = nullptr

if (var_84 s> 0)
    eax_86 = var_84

if (eax_86 s> 0xff)
    eax_86 = 0xff

int32_t* var_78 = eax_86
*(arg1 + 0x64) = ecx_77.o
int32_t var_14

if (var_14 u>= 0x10)
    eax_86 = j__free(var_28.d)

int32_t var_14_1 = 0xf
int32_t var_18 = 0
var_28 = 0

if (var_5c u>= 0x10)
    eax_86 = j__free(var_70)

var_4.b = 0
int32_t var_5c_1 = 0xf
int32_t var_60 = 0
var_70.b = 0
int32_t var_2c

if (var_2c u>= 0x10)
    eax_86 = j__free(var_40)

int32_t* eax_87 = sub_410930(eax_86, &var_58, &var_40, 0x6ddf58)
int32_t* ecx_80 = eax_87
var_4.b = 0x1b
int32_t* edx_52 = *(arg2 + 4)
int32_t* xmm0_1

if (edx_52 != 0)
    if (ecx_80[5] u>= 0x10)
        ecx_80 = *ecx_80
    
    eax_87 = (*(*edx_52 + 0x48))(ecx_80)
    long double x87_r0
    var_88 = fconvert.s(x87_r0)
    xmm0_1 = var_88
else
    xmm0_1 = (zx.o(0)).d

var_4.b = 0
*(arg1 + 0x74) = xmm0_1

if (var_2c u>= 0x10)
    eax_87 = j__free(var_40)

int32_t* eax_90 = sub_410930(eax_87, &var_58, &var_40, 0x6ddf68)
int32_t* ecx_83 = eax_90
var_4.b = 0x1c
int32_t* edx_54 = *(arg2 + 4)
int32_t* xmm0_2

if (edx_54 != 0)
    if (ecx_83[5] u>= 0x10)
        ecx_83 = *ecx_83
    
    eax_90 = (*(*edx_54 + 0x48))(ecx_83)
    var_88 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
    unimplemented  {fstp dword [esp+0x14], st0}
    xmm0_2 = var_88
else
    xmm0_2 = (zx.o(0)).d

var_4.b = 0
*(arg1 + 0x78) = xmm0_2

if (var_2c u>= 0x10)
    eax_90 = j__free(var_40)

int32_t* eax_93 = sub_410930(eax_90, &var_58, &var_40, 0x6ddf78)
int32_t* ebx_2 = eax_93
var_4.b = 0x1d
int32_t* eax_94 = sub_410930(eax_93, &var_58, &var_28, 0x6ddf8c)
int32_t* ebp_1 = eax_94
var_4.b = 0x1e
var_88 = sub_410930(eax_94, &var_58, &var_70, 0x6ddfa0)
var_4.b = 0x1f
int32_t* ecx_88 = *(arg2 + 4)
int32_t* var_84_1

if (ecx_88 != 0)
    if (ebx_2[5] u>= 0x10)
        ebx_2 = *ebx_2
    
    var_84_1 = (*(*ecx_88 + 0x50))(ebx_2, 2)
else
    var_84_1 = ecx_88

int32_t* ecx_89 = *(arg2 + 4)
int32_t ebx_3

if (ecx_89 != 0)
    if (ebp_1[5] u>= 0x10)
        ebp_1 = *ebp_1
    
    ebx_3 = (*(*ecx_89 + 0x50))(ebp_1, 1)
else
    ebx_3 = 0

int32_t* edx_58 = *(arg2 + 4)
int32_t eax_100

if (edx_58 != 0)
    int32_t* ecx_90 = var_88
    
    if (ecx_90[5] u>= 0x10)
        ecx_90 = *ecx_90
    
    eax_100 = (*(*edx_58 + 0x50))(ecx_90, 0)
else
    eax_100 = 0

int32_t ecx_92 = 0
int32_t var_74_1 = 0xff

if (eax_100 s> 0)
    ecx_92 = eax_100

if (ecx_92 s> 0xff)
    ecx_92 = 0xff

int32_t eax_102 = 0

if (ebx_3 s> 0)
    eax_102 = ebx_3

if (eax_102 s> 0xff)
    eax_102 = 0xff

int32_t var_7c_1 = eax_102
int32_t* eax_103 = nullptr

if (var_84_1 s> 0)
    eax_103 = var_84_1

if (eax_103 s> 0xff)
    eax_103 = 0xff

int32_t* var_78_1 = eax_103
*(arg1 + 0x7c) = ecx_92.o

if (var_5c_1 u>= 0x10)
    eax_103 = j__free(var_70)

int32_t var_5c_2 = 0xf
int32_t var_60_1 = 0
var_70.b = 0

if (var_14_1 u>= 0x10)
    eax_103 = j__free(var_28.d)

var_4.b = 0
int32_t var_14_2 = 0xf
int32_t var_18_1 = 0
var_28 = 0

if (var_2c u>= 0x10)
    eax_103 = j__free(var_40)

var_4.b = 0x20
int32_t* eax_105 = sub_401c90(arg2, &var_70, sub_410930(eax_103, &var_58, &var_40, 0x6ddfb4))

if (arg1 + 0x8c != eax_105)
    if (*(arg1 + 0xa0) u>= 0x10)
        j__free(*(arg1 + 0x8c))
    
    *(arg1 + 0xa0) = 0xf
    *(arg1 + 0x9c) = 0
    *(arg1 + 0x8c) = 0
    eax_105 = sub_4030b0(arg1 + 0x8c, eax_105)

if (var_5c_2 u>= 0x10)
    eax_105 = j__free(var_70)

var_4.b = 0
int32_t var_5c_3 = 0xf
int32_t var_60_2 = 0
var_70.b = 0

if (var_2c u>= 0x10)
    eax_105 = j__free(var_40)

var_4.b = 0x21
char* eax_107 = sub_401c90(arg2, &var_70, sub_410930(eax_105, &var_58, &var_40, 0x6ddfc0))
var_4.b = 0x22

if (arg1 + 0xa4 != eax_107)
    eax_107 = sub_401ff0(arg1 + 0xa4, eax_107, 0, 0xffffffff)

if (var_5c_3 u>= 0x10)
    eax_107 = j__free(var_70)

var_4.b = 0
int32_t var_5c_4 = 0xf
int32_t var_60_3 = 0
var_70.b = 0

if (var_2c u>= 0x10)
    eax_107 = j__free(var_40)

int32_t* ecx_101 = sub_410930(eax_107, &var_58, &var_40, 0x6ddfc8)
var_4.b = 0x23
int32_t* edx_62 = *(arg2 + 4)
int32_t result

if (edx_62 != 0)
    if (ecx_101[5] u>= 0x10)
        ecx_101 = *ecx_101
    
    result = (*(*edx_62 + 0x44))(ecx_101)
else
    result = 0

result.b = result == 1
*(arg1 + 0xbc) = result.b

if (var_2c u>= 0x10)
    j__free(var_40)

int32_t var_44

if (var_44 u>= 0x10)
    j__free(var_58)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_88)
return result
