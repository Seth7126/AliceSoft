// 函数: sub_50a460
// 地址: 0x50a460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737a3c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_fc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x766600, 6)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg3 + 4)
int32_t* edi

if (ecx_1 != 0)
    char* edx_1 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_1 = var_2c.d
    
    edi = (*(*ecx_1 + 0x2c))(edx_1)
else
    edi = nullptr

struct common::CEXArrayReader::VTable* const var_a4 = &common::CEXArrayReader::`vftable'
int32_t* var_a0 = edi
var_8_1.b = 2

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x7665c0, 0xa)
var_8_1.b = 3
int32_t* ecx_3 = *(arg3 + 4)
int32_t* eax_7

if (ecx_3 != 0)
    char* edx_2 = &var_44
    
    if (var_30 u>= 0x10)
        edx_2 = var_44.d
    
    eax_7 = (*(*ecx_3 + 0x2c))(edx_2)
else
    eax_7 = nullptr

struct common::CEXArrayReader::VTable* const var_ac = &common::CEXArrayReader::`vftable'
int32_t* var_a8 = eax_7
var_8_1.b = 5

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x7665cc, 0x10)
var_8_1.b = 6
int32_t* ecx_5 = *(arg3 + 4)
int32_t* eax_11

if (ecx_5 != 0)
    char* edx_3 = &var_2c
    
    if (var_18_2 u>= 0x10)
        edx_3 = var_2c.d
    
    eax_11 = (*(*ecx_5 + 0x2c))(edx_3)
else
    eax_11 = nullptr

struct common::CEXArrayReader::VTable* const var_b4 = &common::CEXArrayReader::`vftable'
int32_t* var_b0 = eax_11
var_8_1.b = 8

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
int32_t var_30_2 = 0xf
int32_t var_34_2 = 0
var_44 = 0
sub_403490(&var_44, 0x7665a4, 6)
var_8_1.b = 9
int32_t* ecx_7 = *(arg3 + 4)
int32_t* eax_15

if (ecx_7 != 0)
    char* edx_4 = &var_44
    
    if (var_30_2 u>= 0x10)
        edx_4 = var_44.d
    
    eax_15 = (*(*ecx_7 + 0x2c))(edx_4)
else
    eax_15 = nullptr

struct common::CEXArrayReader::VTable* const var_bc = &common::CEXArrayReader::`vftable'
int32_t* var_b8 = eax_15
var_8_1.b = 0xb

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

int32_t var_30_3 = 0xf
int32_t var_34_3 = 0
var_44 = 0
int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_403490(&var_2c, 0x7665ac, 0x12)
var_8_1.b = 0xc
int32_t* ecx_9 = *(arg3 + 4)
int32_t* eax_19

if (ecx_9 != 0)
    char* edx_5 = &var_2c
    
    if (var_18_4 u>= 0x10)
        edx_5 = var_2c.d
    
    eax_19 = (*(*ecx_9 + 0x2c))(edx_5)
else
    eax_19 = nullptr

struct common::CEXArrayReader::VTable* const var_c4 = &common::CEXArrayReader::`vftable'
int32_t* var_c0 = eax_19
var_8_1.b = 0xe

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
int32_t var_30_4 = 0xf
int32_t var_34_4 = 0
var_44 = 0
sub_403490(&var_44, 0x766594, 4)
var_8_1.b = 0xf
int32_t* ecx_11 = *(arg3 + 4)
int32_t* eax_23

if (ecx_11 != 0)
    char* edx_6 = &var_44
    
    if (var_30_4 u>= 0x10)
        edx_6 = var_44.d
    
    eax_23 = (*(*ecx_11 + 0x2c))(edx_6)
else
    eax_23 = nullptr

struct common::CEXArrayReader::VTable* const var_cc = &common::CEXArrayReader::`vftable'
int32_t* var_c8 = eax_23
var_8_1.b = 0x11

if (var_30_4 u>= 0x10)
    sub_403160(var_44.d, var_30_4 + 1, 1)

int32_t var_30_5 = 0xf
int32_t var_34_5 = 0
var_44 = 0
int32_t var_18_6 = 0xf
int32_t var_1c_6 = 0
var_2c = 0
sub_403490(&var_2c, 0x76659c, 6)
var_8_1.b = 0x12
int32_t* ecx_13 = *(arg3 + 4)
int32_t* eax_27

if (ecx_13 != 0)
    char* edx_7 = &var_2c
    
    if (var_18_6 u>= 0x10)
        edx_7 = var_2c.d
    
    eax_27 = (*(*ecx_13 + 0x2c))(edx_7)
else
    eax_27 = nullptr

struct common::CEXArrayReader::VTable* const var_d4 = &common::CEXArrayReader::`vftable'
int32_t* var_d0 = eax_27
var_8_1.b = 0x14

if (var_18_6 u>= 0x10)
    sub_403160(var_2c.d, var_18_6 + 1, 1)

int32_t var_18_7 = 0xf
int32_t var_1c_7 = 0
var_2c = 0
int32_t var_30_6 = 0xf
int32_t var_34_6 = 0
var_44 = 0
sub_403490(&var_44, 0x766570, 0xe)
var_8_1.b = 0x15
int32_t* ecx_15 = *(arg3 + 4)
int32_t* eax_31

if (ecx_15 != 0)
    char* edx_8 = &var_44
    
    if (var_30_6 u>= 0x10)
        edx_8 = var_44.d
    
    eax_31 = (*(*ecx_15 + 0x2c))(edx_8)
else
    eax_31 = nullptr

struct common::CEXArrayReader::VTable* const var_dc = &common::CEXArrayReader::`vftable'
int32_t* var_d8 = eax_31
var_8_1.b = 0x17

if (var_30_6 u>= 0x10)
    sub_403160(var_44.d, var_30_6 + 1, 1)

int32_t var_30_7 = 0xf
int32_t var_34_7 = 0
var_44 = 0
int32_t var_18_8 = 0xf
int32_t var_1c_8 = 0
var_2c = 0
sub_403490(&var_2c, 0x766580, 0x12)
var_8_1.b = 0x18
int32_t* ecx_17 = *(arg3 + 4)
int32_t* eax_35

if (ecx_17 != 0)
    char* edx_9 = &var_2c
    
    if (var_18_8 u>= 0x10)
        edx_9 = var_2c.d
    
    eax_35 = (*(*ecx_17 + 0x2c))(edx_9)
else
    eax_35 = nullptr

struct common::CEXArrayReader::VTable* const var_e4 = &common::CEXArrayReader::`vftable'
int32_t* var_e0 = eax_35
var_8_1.b = 0x1a

if (var_18_8 u>= 0x10)
    sub_403160(var_2c.d, var_18_8 + 1, 1)

int32_t var_18_9 = 0xf
int32_t var_1c_9 = 0
var_2c = 0
int32_t var_30_8 = 0xf
int32_t var_34_8 = 0
var_44 = 0
sub_403490(&var_44, 0x766554, 0xa)
var_8_1.b = 0x1b
int32_t* ecx_19 = *(arg3 + 4)
int32_t* eax_39

if (ecx_19 != 0)
    char* edx_10 = &var_44
    
    if (var_30_8 u>= 0x10)
        edx_10 = var_44.d
    
    eax_39 = (*(*ecx_19 + 0x2c))(edx_10)
else
    eax_39 = nullptr

struct common::CEXArrayReader::VTable* const var_ec = &common::CEXArrayReader::`vftable'
int32_t* var_e8 = eax_39
var_8_1.b = 0x1d

if (var_30_8 u>= 0x10)
    sub_403160(var_44.d, var_30_8 + 1, 1)

int32_t var_30_9 = 0xf
int32_t var_34_9 = 0
var_44 = 0
int32_t eax_43

if (edi != 0)
    eax_43 = (*(*edi + 0xc))(0, 0x100)
else
    eax_43 = 0x100

*(arg1 + 4) = eax_43
int32_t eax_45

if (edi != 0)
    eax_45 = (*(*edi + 0xc))(1, 0x100)
else
    eax_45 = 0x100

*(arg1 + 8) = eax_45
int32_t var_18_10 = 0xf
int32_t var_1c_10 = 0
var_2c = 0
sub_403490(&var_2c, 0x766560, 0xe)
var_8_1.b = 0x1e
int32_t* ecx_23 = *(arg3 + 4)
int32_t eax_47

if (ecx_23 != 0)
    char* edx_11 = &var_2c
    
    if (var_18_10 u>= 0x10)
        edx_11 = var_2c.d
    
    eax_47 = (*(*ecx_23 + 8))(edx_11, 0)
else
    eax_47 = 0

*(arg1 + 0x10) = eax_47
var_8_1.b = 0x1d

if (var_18_10 u>= 0x10)
    sub_403160(var_2c.d, var_18_10 + 1, 1)

int32_t var_18_11 = 0xf
int32_t var_1c_11 = 0
var_2c = 0
sub_403490(&var_2c, 0x7666a8, 0xe)
var_8_1.b = 0x1f
int32_t* ecx_25 = *(arg3 + 4)
void* eax_51

if (ecx_25 != 0)
    char* edx_12 = &var_2c
    
    if (var_18_11 u>= 0x10)
        edx_12 = var_2c.d
    
    eax_51 = (*(*ecx_25 + 8))(edx_12, 0x10)
else
    eax_51 = &ecx_25[4]

*(arg1 + 0x14) = eax_51
var_8_1.b = 0x1d

if (var_18_11 u>= 0x10)
    sub_403160(var_2c.d, var_18_11 + 1, 1)

int32_t var_7c_1
int32_t var_78
int32_t edx_13

if (eax_7 != 0)
    var_78 = (*(*eax_7 + 0xc))(2, 0)
    var_7c_1 = (*(*eax_7 + 0xc))(1, 0)
    edx_13 = (*(*eax_7 + 0xc))(0, 0)
else
    edx_13 = 0
    var_78 = 0
    var_7c_1 = 0

int32_t edi_2 = 0xff

if (edx_13 != zx.d(edx_13.b))
    int32_t eax_59 = 0xff
    
    if (edx_13 s< 0)
        eax_59 = 0
    
    edx_13 = eax_59

int32_t ecx_30 = var_7c_1

if (ecx_30 != zx.d(ecx_30.b))
    int32_t eax_61 = 0xff
    
    if (ecx_30 s< 0)
        eax_61 = 0
    
    ecx_30 = eax_61

int32_t var_20 = ecx_30
int32_t ecx_31 = var_78

if (ecx_31 != zx.d(ecx_31.b))
    int32_t eax_63 = 0xff
    
    if (ecx_31 s< 0)
        eax_63 = 0
    
    ecx_31 = eax_63

int32_t var_1c_12 = ecx_31
int32_t var_18_12 = 0xff
*(arg1 + 0x18) = edx_13.o
int32_t var_18_13 = 0xf
int32_t var_1c_13 = 0
var_2c = 0
sub_403490(&var_2c, 0x7666b8, 0xc)
var_8_1.b = 0x20
int32_t* ecx_33 = *(arg3 + 4)
int32_t xmm0_1

if (ecx_33 != 0)
    char* edx_16 = &var_2c
    
    if (var_18_13 u>= 0x10)
        edx_16 = var_2c.d
    
    int32_t* var_100_11 = ecx_33
    (*(*ecx_33 + 0xc))(edx_16, 0)
    xmm0_1 = fconvert.s(arg2)
else
    xmm0_1 = (zx.o(0)).d

var_8_1.b = 0x1d
*(arg1 + 0x28) = xmm0_1

if (var_18_13 u>= 0x10)
    sub_403160(var_2c.d, var_18_13 + 1, 1)

int32_t var_18_14 = 0xf
int32_t var_1c_14 = 0
var_2c = 0
sub_403490(&var_2c, 0x766688, 0xe)
var_8_1.b = 0x21
int32_t* ecx_35 = *(arg3 + 4)
int32_t xmm0_2

if (ecx_35 != 0)
    char* edx_17 = &var_2c
    
    if (var_18_14 u>= 0x10)
        edx_17 = var_2c.d
    
    int32_t* var_100_12 = ecx_35
    (*(*ecx_35 + 0xc))(edx_17, 0)
    int32_t var_78_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
    unimplemented  {fstp dword [ebp-0x74], st0}
    xmm0_2 = var_78_2
else
    xmm0_2 = (zx.o(0)).d

var_8_1.b = 0x1d
*(arg1 + 0x2c) = xmm0_2

if (var_18_14 u>= 0x10)
    sub_403160(var_2c.d, var_18_14 + 1, 1)

int32_t var_7c_2
int32_t var_78_3
int32_t edx_18

if (eax_11 != 0)
    var_7c_2 = (*(*eax_11 + 0xc))(2, 0)
    var_78_3 = (*(*eax_11 + 0xc))(1, 0)
    edx_18 = (*(*eax_11 + 0xc))(0, 0)
else
    edx_18 = 0
    var_7c_2 = 0
    var_78_3 = 0

if (edx_18 != zx.d(edx_18.b))
    int32_t eax_77 = 0xff
    
    if (edx_18 s< 0)
        eax_77 = 0
    
    edx_18 = eax_77

int32_t ecx_40 = var_78_3

if (ecx_40 != zx.d(ecx_40.b))
    int32_t eax_79 = 0xff
    
    if (ecx_40 s< 0)
        eax_79 = 0
    
    ecx_40 = eax_79

int32_t var_20_1 = ecx_40
int32_t ecx_41 = var_7c_2

if (ecx_41 != zx.d(ecx_41.b))
    if (ecx_41 s< 0)
        edi_2 = 0
    
    ecx_41 = edi_2

int32_t var_1c_15 = ecx_41
int32_t var_18_15 = 0xff
*(arg1 + 0x30) = edx_18.o
int32_t var_18_16 = 0xf
int32_t var_1c_16 = 0
var_2c = 0
sub_403490(&var_2c, 0x766698, 0xc)
var_8_1.b = 0x22
int32_t* ecx_43 = *(arg3 + 4)
int32_t eax_81

if (ecx_43 != 0)
    char* edx_21 = &var_2c
    
    if (var_18_16 u>= 0x10)
        edx_21 = var_2c.d
    
    eax_81 = (*(*ecx_43 + 8))(edx_21, 0)
else
    eax_81 = 0

var_8_1.b = 0x1d
eax_81.b = eax_81 == 1
*(arg1 + 0x40) = eax_81.b

if (var_18_16 u>= 0x10)
    sub_403160(var_2c.d, var_18_16 + 1, 1)

int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x75d27b, nullptr)
var_8_1.b = 0x23
int32_t var_18_17 = 0xf
int32_t var_1c_17 = 0
var_2c = 0
sub_403490(&var_2c, 0x766670, 8)
var_8_1.b = 0x24
char var_74[0x10]
int32_t* ecx_47 = sub_403cd0(arg3, &var_74, &var_2c, &var_5c)

if (arg1 + 0x44 != ecx_47)
    if (*(arg1 + 0x58) u>= 0x10)
        sub_403160(*(arg1 + 0x44), *(arg1 + 0x58) + 1, 1)
    
    *(arg1 + 0x58) = 0xf
    bool cond:16_1 = *(arg1 + 0x58) u< 0x10
    *(arg1 + 0x54) = 0
    void* eax_88
    
    if (cond:16_1)
        eax_88 = arg1 + 0x44
    else
        eax_88 = *(arg1 + 0x44)
    
    *eax_88 = 0
    sub_4056a0(arg1 + 0x44, ecx_47)

int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74[0].d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74[0] = 0

if (var_18_17 u>= 0x10)
    sub_403160(var_2c.d, var_18_17 + 1, 1)

var_8_1.b = 0x1d
int32_t var_18_18 = 0xf
int32_t var_1c_18 = 0
var_2c = 0

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_18_19 = 0xf
int32_t var_1c_19 = 0
var_2c = 0
sub_403490(&var_2c, 0x76667c, 0xa)
var_8_1.b = 0x26
int32_t* ecx_50 = *(arg3 + 4)
int32_t eax_95

if (ecx_50 != 0)
    char* edx_22 = &var_2c
    
    if (var_18_19 u>= 0x10)
        edx_22 = var_2c.d
    
    eax_95 = (*(*ecx_50 + 8))(edx_22, 0x7d0)
else
    eax_95 = 0x7d0

*(arg1 + 0x5c) = eax_95
var_8_1.b = 0x1d

if (var_18_19 u>= 0x10)
    sub_403160(var_2c.d, var_18_19 + 1, 1)

int32_t eax_99

if (eax_15 != 0)
    eax_99 = (*(*eax_15 + 0xc))(0, 0xff)
else
    eax_99 = 0xff

*(arg1 + 0x60) = eax_99
int32_t eax_101

if (eax_15 != 0)
    eax_101 = (*(*eax_15 + 0xc))(1, 0xff)
else
    eax_101 = 0xff

*(arg1 + 0x64) = eax_101
int32_t eax_103

if (eax_15 != 0)
    eax_103 = (*(*eax_15 + 0xc))(2, 0xff)
else
    eax_103 = 0xff

*(arg1 + 0x68) = eax_103
int32_t eax_105

if (eax_19 != 0)
    eax_105 = (*(*eax_19 + 0xc))(0, 0x96)
else
    eax_105 = 0x96

*(arg1 + 0x6c) = eax_105
int32_t eax_107

if (eax_19 != 0)
    eax_107 = (*(*eax_19 + 0xc))(1, 0x96)
else
    eax_107 = 0x96

*(arg1 + 0x70) = eax_107
int32_t eax_109

if (eax_19 != 0)
    eax_109 = (*(*eax_19 + 0xc))(2, 0x96)
else
    eax_109 = 0x96

*(arg1 + 0x74) = eax_109
void* eax_111

if (eax_23 != 0)
    eax_111 = (*(*eax_23 + 0xc))(0, 0x64)
else
    eax_111 = &eax_23[0x19]

*(arg1 + 0x78) = eax_111
void* eax_113

if (eax_23 != 0)
    eax_113 = (*(*eax_23 + 0xc))(1, 0x64)
else
    eax_113 = &eax_23[0x19]

*(arg1 + 0x7c) = eax_113
void* eax_115

if (eax_23 != 0)
    eax_115 = (*(*eax_23 + 0xc))(2, 0x64)
else
    eax_115 = &eax_23[0x19]

*(arg1 + 0x80) = eax_115
int32_t eax_117

if (eax_27 != 0)
    eax_117 = (*(*eax_27 + 0xc))(0, 0xc8)
else
    eax_117 = 0xc8

*(arg1 + 0x84) = eax_117
int32_t eax_119

if (eax_27 != 0)
    eax_119 = (*(*eax_27 + 0xc))(1, 0xc8)
else
    eax_119 = 0xc8

*(arg1 + 0x88) = eax_119
int32_t eax_121

if (eax_27 != 0)
    eax_121 = (*(*eax_27 + 0xc))(2, 0xc8)
else
    eax_121 = 0xc8

*(arg1 + 0x8c) = eax_121
int32_t eax_123

if (eax_31 != 0)
    eax_123 = (*(*eax_31 + 0xc))(0, 0)
else
    eax_123 = 0

*(arg1 + 0x90) = eax_123
int32_t eax_125

if (eax_31 != 0)
    eax_125 = (*(*eax_31 + 0xc))(1, 0)
else
    eax_125 = 0

*(arg1 + 0x94) = eax_125
void* eax_127

if (eax_35 != 0)
    eax_127 = (*(*eax_35 + 0xc))(0, 1)
else
    eax_127 = eax_35 + 1

eax_127.b = eax_127 == 1
*(arg1 + 0x98) = eax_127.b
void* eax_129

if (eax_35 != 0)
    eax_129 = (*(*eax_35 + 0xc))(1, 1)
else
    eax_129 = eax_35 + 1

int32_t var_48_1 = 0xf
eax_129.b = eax_129 == 1
int32_t var_4c_1 = 0
*(arg1 + 0x99) = eax_129.b
var_5c = 0
sub_403490(&var_5c, 0x75d27f, nullptr)
var_8_1.b = 0x27
int32_t var_18_20 = 0xf
int32_t var_1c_20 = 0
var_2c = 0
sub_403490(&var_2c, 0x76665c, 6)
var_8_1.b = 0x28
var_8_1.b = 0x29
sub_508d60(arg1, sub_403cd0(arg3, &var_74, &var_2c, &var_5c))

if (var_60_1 u>= 0x10)
    sub_403160(var_74[0].d, var_60_1 + 1, 1)

int32_t var_60_2 = 0xf
int32_t var_64_1 = 0
var_74[0] = 0

if (var_18_20 u>= 0x10)
    sub_403160(var_2c.d, var_18_20 + 1, 1)

var_8_1.b = 0x1d
int32_t var_18_21 = 0xf
int32_t var_1c_21 = 0
var_2c = 0

if (var_48_1 u>= 0x10)
    sub_403160(var_5c.d, var_48_1 + 1, 1)

int32_t var_18_22 = 0xf
int32_t var_1c_22 = 0
var_2c = 0
sub_403490(&var_2c, 0x766664, 8)
var_8_1.b = 0x2a
int32_t* ecx_72 = *(arg3 + 4)
int32_t eax_138

if (ecx_72 != 0)
    char* edx_23 = &var_2c
    
    if (var_18_22 u>= 0x10)
        edx_23 = var_2c.d
    
    eax_138 = (*(*ecx_72 + 8))(edx_23, 0)
else
    eax_138 = 0

*(arg1 + 0xfc) = eax_138
var_8_1.b = 0x1d

if (var_18_22 u>= 0x10)
    sub_403160(var_2c.d, var_18_22 + 1, 1)

int32_t var_48_2 = 0xf
int32_t var_4c_2 = 0
var_5c = 0
sub_403490(&var_5c, 0x766654, 6)
var_8_1.b = 0x2b
int32_t* ecx_74 = *(arg3 + 4)
int32_t eax_142

if (ecx_74 != 0)
    char* edx_24 = &var_5c
    
    if (var_48_2 u>= 0x10)
        edx_24 = var_5c.d
    
    eax_142 = (*(*ecx_74 + 8))(edx_24, 0)
else
    eax_142 = 0

*(arg1 + 0x100) = eax_142
var_8_1.b = 0x1d

if (var_48_2 u>= 0x10)
    sub_403160(var_5c.d, var_48_2 + 1, 1)

void* eax_146

if (eax_39 != 0)
    eax_146 = (*(*eax_39 + 0xc))(0, 3)
else
    eax_146 = eax_39 + 3

*(arg1 + 0x104) = eax_146
void* eax_148

if (eax_39 != 0)
    eax_148 = (*(*eax_39 + 0xc))(1, 3)
else
    eax_148 = eax_39 + 3

*(arg1 + 0x108) = eax_148
void* eax_150

if (eax_39 != 0)
    eax_150 = (*(*eax_39 + 0xc))(2, 3)
else
    eax_150 = eax_39 + 3

*(arg1 + 0x10c) = eax_150
void* result

if (eax_39 != 0)
    result = (*(*eax_39 + 0xc))(3, 3)
else
    result = eax_39 + 3

*(arg1 + 0x110) = result
result.b = 1
*(arg1 + 0x114) = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
