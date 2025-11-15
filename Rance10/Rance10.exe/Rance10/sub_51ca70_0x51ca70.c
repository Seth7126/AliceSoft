// 函数: sub_51ca70
// 地址: 0x51ca70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738f53
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_dc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x766ac8, 6)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg3 + 4)
int32_t* ebx

if (ecx_1 != 0)
    char* edx_1 = &var_44
    
    if (var_30 u>= 0x10)
        edx_1 = var_44.d
    
    ebx = (*(*ecx_1 + 0x2c))(edx_1)
else
    ebx = nullptr

struct common::CEXArrayReader::VTable* const var_98 = &common::CEXArrayReader::`vftable'
int32_t* var_94 = ebx
var_8_1.b = 2

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x766a98, 0xa)
var_8_1.b = 3
int32_t* ecx_3 = *(arg3 + 4)
int32_t* eax_7

if (ecx_3 != 0)
    char* edx_2 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_2 = var_2c.d
    
    eax_7 = (*(*ecx_3 + 0x2c))(edx_2)
else
    eax_7 = nullptr

struct common::CEXArrayReader::VTable* const var_a0 = &common::CEXArrayReader::`vftable'
int32_t* var_9c = eax_7
var_8_1.b = 5

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_30_2 = 0xf
int32_t var_34_2 = 0
var_44 = 0
sub_403490(&var_44, 0x766aa4, 0x10)
var_8_1.b = 6
int32_t* ecx_5 = *(arg3 + 4)
int32_t* eax_11

if (ecx_5 != 0)
    char* edx_3 = &var_44
    
    if (var_30_2 u>= 0x10)
        edx_3 = var_44.d
    
    eax_11 = (*(*ecx_5 + 0x2c))(edx_3)
else
    eax_11 = nullptr

struct common::CEXArrayReader::VTable* const var_a8 = &common::CEXArrayReader::`vftable'
int32_t* var_a4 = eax_11
var_8_1.b = 8

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

int32_t var_30_3 = 0xf
int32_t var_34_3 = 0
var_44 = 0
int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x766a7c, 6)
var_8_1.b = 9
int32_t* ecx_7 = *(arg3 + 4)
int32_t* eax_15

if (ecx_7 != 0)
    char* edx_4 = &var_2c
    
    if (var_18_2 u>= 0x10)
        edx_4 = var_2c.d
    
    eax_15 = (*(*ecx_7 + 0x2c))(edx_4)
else
    eax_15 = nullptr

struct common::CEXArrayReader::VTable* const var_b0 = &common::CEXArrayReader::`vftable'
int32_t* var_ac = eax_15
var_8_1.b = 0xb

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
int32_t var_30_4 = 0xf
int32_t var_34_4 = 0
var_44 = 0
sub_403490(&var_44, 0x766a84, 0x12)
var_8_1.b = 0xc
int32_t* ecx_9 = *(arg3 + 4)
int32_t* eax_19

if (ecx_9 != 0)
    char* edx_5 = &var_44
    
    if (var_30_4 u>= 0x10)
        edx_5 = var_44.d
    
    eax_19 = (*(*ecx_9 + 0x2c))(edx_5)
else
    eax_19 = nullptr

struct common::CEXArrayReader::VTable* const var_b8 = &common::CEXArrayReader::`vftable'
int32_t* var_b4 = eax_19
var_8_1.b = 0xe

if (var_30_4 u>= 0x10)
    sub_403160(var_44.d, var_30_4 + 1, 1)

int32_t var_30_5 = 0xf
int32_t var_34_5 = 0
var_44 = 0
int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_403490(&var_2c, 0x766a6c, 4)
var_8_1.b = 0xf
int32_t* ecx_11 = *(arg3 + 4)
int32_t* eax_23

if (ecx_11 != 0)
    char* edx_6 = &var_2c
    
    if (var_18_4 u>= 0x10)
        edx_6 = var_2c.d
    
    eax_23 = (*(*ecx_11 + 0x2c))(edx_6)
else
    eax_23 = nullptr

struct common::CEXArrayReader::VTable* const var_c0 = &common::CEXArrayReader::`vftable'
int32_t* var_bc = eax_23
var_8_1.b = 0x11

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x766a74, 6)
var_8_1.b = 0x12
int32_t* ecx_13 = *(arg3 + 4)
int32_t* eax_27

if (ecx_13 != 0)
    char* edx_7 = &var_5c
    
    if (var_48 u>= 0x10)
        edx_7 = var_5c.d
    
    eax_27 = (*(*ecx_13 + 0x2c))(edx_7)
else
    eax_27 = nullptr

struct common::CEXArrayReader::VTable* const var_c8 = &common::CEXArrayReader::`vftable'
int32_t* var_c4 = eax_27
var_8_1.b = 0x14

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0
int32_t eax_31

if (ebx != 0)
    eax_31 = (*(*ebx + 0xc))(0, 0xc8)
else
    eax_31 = 0xc8

*(arg1 + 4) = eax_31
void* eax_33

if (ebx != 0)
    eax_33 = (*(*ebx + 0xc))(1, 0x1e)
else
    eax_33 = ebx + 0x1e

*(arg1 + 8) = eax_33
int32_t var_18_6 = 0xf
int32_t var_1c_6 = 0
var_2c = 0
sub_403490(&var_2c, 0x766be0, 0xe)
var_8_1.b = 0x15
int32_t* ecx_17 = *(arg3 + 4)
int32_t eax_35

if (ecx_17 != 0)
    char* edx_8 = &var_2c
    
    if (var_18_6 u>= 0x10)
        edx_8 = var_2c.d
    
    eax_35 = (*(*ecx_17 + 8))(edx_8, 0)
else
    eax_35 = 0

*(arg1 + 0x10) = eax_35
var_8_1.b = 0x14

if (var_18_6 u>= 0x10)
    sub_403160(var_2c.d, var_18_6 + 1, 1)

int32_t var_18_7 = 0xf
int32_t var_1c_7 = 0
var_2c = 0
sub_403490(&var_2c, 0x766bf0, 0xe)
var_8_1.b = 0x16
int32_t* ebx_1 = *(arg3 + 4)
int32_t ecx_20 = *(arg1 + 8) - 6

if (ebx_1 != 0)
    char* edx_9 = &var_2c
    
    if (var_18_7 u>= 0x10)
        edx_9 = var_2c.d
    
    ecx_20 = (*(*ebx_1 + 8))(edx_9, ecx_20)

var_8_1.b = 0x14
*(arg1 + 0x14) = ecx_20

if (var_18_7 u>= 0x10)
    sub_403160(var_2c.d, var_18_7 + 1, 1)

int32_t var_7c_1
int32_t var_78
int32_t edx_10

if (eax_7 != 0)
    var_78 = (*(*eax_7 + 0xc))(2, 0)
    var_7c_1 = (*(*eax_7 + 0xc))(1, 0)
    edx_10 = (*(*eax_7 + 0xc))(0, 0)
else
    edx_10 = 0
    var_78 = 0
    var_7c_1 = 0

int32_t ebx_3 = 0xff

if (edx_10 != zx.d(edx_10.b))
    int32_t eax_47 = 0xff
    
    if (edx_10 s< 0)
        eax_47 = 0
    
    edx_10 = eax_47

int32_t ecx_26 = var_7c_1

if (ecx_26 != zx.d(ecx_26.b))
    int32_t eax_49 = 0xff
    
    if (ecx_26 s< 0)
        eax_49 = 0
    
    ecx_26 = eax_49

int32_t var_38 = ecx_26
int32_t ecx_27 = var_78

if (ecx_27 != zx.d(ecx_27.b))
    int32_t eax_51 = 0xff
    
    if (ecx_27 s< 0)
        eax_51 = 0
    
    ecx_27 = eax_51

int32_t var_34_6 = ecx_27
int32_t var_30_6 = 0xff
*(arg1 + 0x18) = edx_10.o
int32_t var_18_8 = 0xf
int32_t var_1c_8 = 0
var_2c = 0
sub_403490(&var_2c, 0x766bc0, 0xc)
var_8_1.b = 0x17
int32_t* ecx_29 = *(arg3 + 4)
int32_t xmm0_1

if (ecx_29 != 0)
    char* edx_13 = &var_2c
    
    if (var_18_8 u>= 0x10)
        edx_13 = var_2c.d
    
    int32_t* var_e0_9 = ecx_29
    (*(*ecx_29 + 0xc))(edx_13, 0)
    xmm0_1 = fconvert.s(arg2)
else
    xmm0_1 = (zx.o(0)).d

var_8_1.b = 0x14
*(arg1 + 0x28) = xmm0_1

if (var_18_8 u>= 0x10)
    sub_403160(var_2c.d, var_18_8 + 1, 1)

int32_t var_18_9 = 0xf
int32_t var_1c_9 = 0
var_2c = 0
sub_403490(&var_2c, 0x766bd0, 0xe)
var_8_1.b = 0x18
int32_t* ecx_31 = *(arg3 + 4)
int32_t xmm0_2

if (ecx_31 != 0)
    char* edx_14 = &var_2c
    
    if (var_18_9 u>= 0x10)
        edx_14 = var_2c.d
    
    int32_t* var_e0_10 = ecx_31
    (*(*ecx_31 + 0xc))(edx_14, 0)
    int32_t var_78_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
    unimplemented  {fstp dword [ebp-0x74], st0}
    xmm0_2 = var_78_2
else
    xmm0_2 = (zx.o(0)).d

var_8_1.b = 0x14
*(arg1 + 0x2c) = xmm0_2

if (var_18_9 u>= 0x10)
    sub_403160(var_2c.d, var_18_9 + 1, 1)

int32_t var_7c_2
int32_t var_78_3
int32_t edx_15

if (eax_11 != 0)
    var_7c_2 = (*(*eax_11 + 0xc))(2, 0)
    var_78_3 = (*(*eax_11 + 0xc))(1, 0)
    edx_15 = (*(*eax_11 + 0xc))(0, 0)
else
    edx_15 = 0
    var_7c_2 = 0
    var_78_3 = 0

if (edx_15 != zx.d(edx_15.b))
    int32_t eax_65 = 0xff
    
    if (edx_15 s< 0)
        eax_65 = 0
    
    edx_15 = eax_65

int32_t ecx_36 = var_78_3

if (ecx_36 != zx.d(ecx_36.b))
    int32_t eax_67 = 0xff
    
    if (ecx_36 s< 0)
        eax_67 = 0
    
    ecx_36 = eax_67

int32_t var_38_1 = ecx_36
int32_t ecx_37 = var_7c_2

if (ecx_37 != zx.d(ecx_37.b))
    if (ecx_37 s< 0)
        ebx_3 = 0
    
    ecx_37 = ebx_3

int32_t var_34_7 = ecx_37
int32_t var_30_7 = 0xff
*(arg1 + 0x30) = edx_15.o
int32_t var_18_10 = 0xf
int32_t var_1c_10 = 0
var_2c = 0
sub_403490(&var_2c, 0x766ba4, 0xc)
var_8_1.b = 0x19
int32_t* ecx_39 = *(arg3 + 4)
int32_t eax_69

if (ecx_39 != 0)
    char* edx_18 = &var_2c
    
    if (var_18_10 u>= 0x10)
        edx_18 = var_2c.d
    
    eax_69 = (*(*ecx_39 + 8))(edx_18, 0)
else
    eax_69 = 0

var_8_1.b = 0x14
eax_69.b = eax_69 == 1
*(arg1 + 0x40) = eax_69.b

if (var_18_10 u>= 0x10)
    sub_403160(var_2c.d, var_18_10 + 1, 1)

int32_t var_30_8 = 0xf
int32_t var_34_8 = 0
var_44 = 0
sub_403490(&var_44, 0x75d33d, nullptr)
var_8_1.b = 0x1a
int32_t var_18_11 = 0xf
int32_t var_1c_11 = 0
var_2c = 0
sub_403490(&var_2c, 0x766bb4, 8)
var_8_1.b = 0x1b
char var_74[0x10]
int32_t* ecx_43 = sub_403cd0(arg3, &var_74, &var_2c, &var_44)

if (arg1 + 0x44 != ecx_43)
    if (*(arg1 + 0x58) u>= 0x10)
        sub_403160(*(arg1 + 0x44), *(arg1 + 0x58) + 1, 1)
    
    *(arg1 + 0x58) = 0xf
    bool cond:13_1 = *(arg1 + 0x58) u< 0x10
    *(arg1 + 0x54) = 0
    void* eax_76
    
    if (cond:13_1)
        eax_76 = arg1 + 0x44
    else
        eax_76 = *(arg1 + 0x44)
    
    *eax_76 = 0
    sub_4056a0(arg1 + 0x44, ecx_43)

int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74[0].d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74[0] = 0

if (var_18_11 u>= 0x10)
    sub_403160(var_2c.d, var_18_11 + 1, 1)

var_8_1.b = 0x14
int32_t var_18_12 = 0xf
int32_t var_1c_12 = 0
var_2c = 0

if (var_30_8 u>= 0x10)
    sub_403160(var_44.d, var_30_8 + 1, 1)

int32_t var_18_13 = 0xf
int32_t var_1c_13 = 0
var_2c = 0
sub_403490(&var_2c, 0x766b90, 0xa)
var_8_1.b = 0x1d
int32_t* ecx_46 = *(arg3 + 4)
int32_t eax_83

if (ecx_46 != 0)
    char* edx_19 = &var_2c
    
    if (var_18_13 u>= 0x10)
        edx_19 = var_2c.d
    
    eax_83 = (*(*ecx_46 + 8))(edx_19, 0x7d0)
else
    eax_83 = 0x7d0

*(arg1 + 0x5c) = eax_83
var_8_1.b = 0x14

if (var_18_13 u>= 0x10)
    sub_403160(var_2c.d, var_18_13 + 1, 1)

int32_t* ecx_47 = eax_15
int32_t eax_87

if (ecx_47 != 0)
    eax_87 = (*(*ecx_47 + 0xc))(0, 0xff)
    ecx_47 = eax_15
else
    eax_87 = 0xff

*(arg1 + 0x60) = eax_87
int32_t eax_89

if (ecx_47 != 0)
    eax_89 = (*(*ecx_47 + 0xc))(1, 0xff)
    ecx_47 = eax_15
else
    eax_89 = 0xff

*(arg1 + 0x64) = eax_89
int32_t eax_91

if (ecx_47 != 0)
    eax_91 = (*(*ecx_47 + 0xc))(2, 0xff)
else
    eax_91 = 0xff

int32_t* ecx_48 = eax_19
*(arg1 + 0x68) = eax_91
int32_t eax_93

if (ecx_48 != 0)
    eax_93 = (*(*ecx_48 + 0xc))(0, 0x96)
    ecx_48 = eax_19
else
    eax_93 = 0x96

*(arg1 + 0x6c) = eax_93
int32_t eax_95

if (ecx_48 != 0)
    eax_95 = (*(*ecx_48 + 0xc))(1, 0x96)
    ecx_48 = eax_19
else
    eax_95 = 0x96

*(arg1 + 0x70) = eax_95
int32_t eax_97

if (ecx_48 != 0)
    eax_97 = (*(*ecx_48 + 0xc))(2, 0x96)
else
    eax_97 = 0x96

int32_t* ecx_49 = eax_23
*(arg1 + 0x74) = eax_97
void* eax_99

if (ecx_49 != 0)
    eax_99 = (*(*ecx_49 + 0xc))(0, 0x64)
    ecx_49 = eax_23
else
    eax_99 = &ecx_49[0x19]

*(arg1 + 0x78) = eax_99
void* eax_101

if (ecx_49 != 0)
    eax_101 = (*(*ecx_49 + 0xc))(1, 0x64)
    ecx_49 = eax_23
else
    eax_101 = &ecx_49[0x19]

*(arg1 + 0x7c) = eax_101
void* eax_103

if (ecx_49 != 0)
    eax_103 = (*(*ecx_49 + 0xc))(2, 0x64)
else
    eax_103 = &ecx_49[0x19]

int32_t* ecx_50 = eax_27
*(arg1 + 0x80) = eax_103
int32_t eax_105

if (ecx_50 != 0)
    eax_105 = (*(*ecx_50 + 0xc))(0, 0xc8)
    ecx_50 = eax_27
else
    eax_105 = 0xc8

*(arg1 + 0x84) = eax_105
int32_t eax_107

if (ecx_50 != 0)
    eax_107 = (*(*ecx_50 + 0xc))(1, 0xc8)
    ecx_50 = eax_27
else
    eax_107 = 0xc8

*(arg1 + 0x88) = eax_107
int32_t eax_109

if (ecx_50 != 0)
    eax_109 = (*(*ecx_50 + 0xc))(2, 0xc8)
else
    eax_109 = 0xc8

*(arg1 + 0x8c) = eax_109
int32_t var_30_9 = 0xf
int32_t var_34_9 = 0
var_44 = 0
sub_403490(&var_44, 0x75d33e, nullptr)
var_8_1.b = 0x1e
int32_t var_18_14 = 0xf
int32_t var_1c_14 = 0
var_2c = 0
sub_403490(&var_2c, 0x766b9c, 6)
var_8_1.b = 0x1f
var_8_1.b = 0x20
sub_51ba00(arg1, sub_403cd0(arg3, &var_74, &var_2c, &var_44))

if (var_60_1 u>= 0x10)
    sub_403160(var_74[0].d, var_60_1 + 1, 1)

int32_t var_60_2 = 0xf
int32_t var_64_1 = 0
var_74[0] = 0

if (var_18_14 u>= 0x10)
    sub_403160(var_2c.d, var_18_14 + 1, 1)

var_8_1.b = 0x14
int32_t var_18_15 = 0xf
int32_t var_1c_15 = 0
var_2c = 0

if (var_30_9 u>= 0x10)
    sub_403160(var_44.d, var_30_9 + 1, 1)

int32_t var_18_16 = 0xf
int32_t var_1c_16 = 0
var_2c = 0
sub_403490(&var_2c, 0x766b78, 8)
var_8_1.b = 0x21
int32_t* ecx_56 = *(arg3 + 4)
int32_t eax_118

if (ecx_56 != 0)
    char* edx_20 = &var_2c
    
    if (var_18_16 u>= 0x10)
        edx_20 = var_2c.d
    
    eax_118 = (*(*ecx_56 + 8))(edx_20, 0)
else
    eax_118 = 0

*(arg1 + 0xa8) = eax_118
var_8_1.b = 0x14

if (var_18_16 u>= 0x10)
    sub_403160(var_2c.d, var_18_16 + 1, 1)

int32_t var_18_17 = 0xf
int32_t var_1c_17 = 0
var_2c = 0
sub_403490(&var_2c, 0x766b84, 8)
var_8_1.b = 0x22
int32_t* ecx_58 = *(arg3 + 4)
void* eax_122

if (ecx_58 != 0)
    char* edx_21 = &var_2c
    
    if (var_18_17 u>= 0x10)
        edx_21 = var_2c.d
    
    eax_122 = (*(*ecx_58 + 8))(edx_21, 1)
else
    eax_122 = ecx_58 + 1

var_8_1.b = 0x14
eax_122.b = eax_122 == 1
*(arg1 + 0xac) = eax_122.b

if (var_18_17 u>= 0x10)
    sub_403160(var_2c.d, var_18_17 + 1, 1)

sub_508fe0(arg1 + 0x44, *(arg1 + 0x5c))
*(arg1 + 0xad) = 1
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
