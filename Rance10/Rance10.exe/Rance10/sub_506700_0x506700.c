// 函数: sub_506700
// 地址: 0x506700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73761f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_148 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14c = 4
char* var_150 = &data_7660f4
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, var_150, var_14c)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg3 + 4)
int32_t* eax_4

if (ecx_1 != 0)
    char* edx_1 = &var_30
    
    if (var_1c u>= 0x10)
        edx_1 = var_30.d
    
    eax_4 = (*(*ecx_1 + 0x2c))(edx_1)
else
    eax_4 = nullptr

struct common::CEXArrayReader::VTable* const var_f8 = &common::CEXArrayReader::`vftable'
int32_t* var_f4 = eax_4
var_8_1.b = 2

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

void* var_14c_3 = 8
void* const var_150_2 = &data_7660e8
int32_t var_1c_1 = 0xf
int32_t var_20_1 = 0
var_30 = 0
int32_t var_4c = 0xf
int32_t var_50 = 0
char var_60 = 0
sub_403490(&var_60, var_150_2, var_14c_3)
var_8_1.b = 3
int32_t* ecx_3 = *(arg3 + 4)
int32_t* eax_8

if (ecx_3 != 0)
    char* edx_2 = &var_60
    
    if (var_4c u>= 0x10)
        edx_2 = var_60.d
    
    eax_8 = (*(*ecx_3 + 0x2c))(edx_2)
else
    eax_8 = nullptr

struct common::CEXArrayReader::VTable* const var_100 = &common::CEXArrayReader::`vftable'
int32_t* var_fc = eax_8
var_8_1.b = 5

if (var_4c u>= 0x10)
    sub_403160(var_60.d, var_4c + 1, 1)

void* var_14c_6 = 6
void* const var_150_4 = &data_766098
int32_t var_4c_1 = 0xf
int32_t var_50_1 = 0
var_60 = 0
int32_t var_1c_2 = 0xf
int32_t var_20_2 = 0
var_30 = 0
sub_403490(&var_30, var_150_4, var_14c_6)
var_8_1.b = 6
int32_t* ecx_5 = *(arg3 + 4)
int32_t* eax_12

if (ecx_5 != 0)
    char* edx_3 = &var_30
    
    if (var_1c_2 u>= 0x10)
        edx_3 = var_30.d
    
    eax_12 = (*(*ecx_5 + 0x2c))(edx_3)
else
    eax_12 = nullptr

struct common::CEXArrayReader::VTable* const var_108 = &common::CEXArrayReader::`vftable'
int32_t* var_104 = eax_12
var_8_1.b = 8

if (var_1c_2 u>= 0x10)
    sub_403160(var_30.d, var_1c_2 + 1, 1)

void* var_14c_9 = 6
void* const var_150_6 = &data_766090
int32_t var_1c_3 = 0xf
int32_t var_20_3 = 0
var_30 = 0
int32_t var_4c_2 = 0xf
int32_t var_50_2 = 0
var_60 = 0
sub_403490(&var_60, var_150_6, var_14c_9)
var_8_1.b = 9
int32_t* ecx_7 = *(arg3 + 4)
int32_t* eax_16

if (ecx_7 != 0)
    char* edx_4 = &var_60
    
    if (var_4c_2 u>= 0x10)
        edx_4 = var_60.d
    
    eax_16 = (*(*ecx_7 + 0x2c))(edx_4)
else
    eax_16 = nullptr

struct common::CEXArrayReader::VTable* const var_110 = &common::CEXArrayReader::`vftable'
int32_t* var_10c = eax_16
var_8_1.b = 0xb

if (var_4c_2 u>= 0x10)
    sub_403160(var_60.d, var_4c_2 + 1, 1)

void* var_14c_12 = 8
void* const var_150_8 = &data_7660a8
int32_t var_4c_3 = 0xf
int32_t var_50_3 = 0
var_60 = 0
int32_t var_1c_4 = 0xf
int32_t var_20_4 = 0
var_30 = 0
sub_403490(&var_30, var_150_8, var_14c_12)
var_8_1.b = 0xc
int32_t* ecx_9 = *(arg3 + 4)
int32_t* eax_20

if (ecx_9 != 0)
    char* edx_5 = &var_30
    
    if (var_1c_4 u>= 0x10)
        edx_5 = var_30.d
    
    eax_20 = (*(*ecx_9 + 0x2c))(edx_5)
else
    eax_20 = nullptr

struct common::CEXArrayReader::VTable* const var_118 = &common::CEXArrayReader::`vftable'
int32_t* var_114 = eax_20
var_8_1.b = 0xe

if (var_1c_4 u>= 0x10)
    sub_403160(var_30.d, var_1c_4 + 1, 1)

void* var_14c_15 = 4
void* const var_150_10 = &data_7660a0
int32_t var_1c_5 = 0xf
int32_t var_20_5 = 0
var_30 = 0
int32_t var_4c_4 = 0xf
int32_t var_50_4 = 0
var_60 = 0
sub_403490(&var_60, var_150_10, var_14c_15)
var_8_1.b = 0xf
int32_t* ecx_11 = *(arg3 + 4)
int32_t* eax_24

if (ecx_11 != 0)
    char* edx_6 = &var_60
    
    if (var_4c_4 u>= 0x10)
        edx_6 = var_60.d
    
    eax_24 = (*(*ecx_11 + 0x2c))(edx_6)
else
    eax_24 = nullptr

struct common::CEXArrayReader::VTable* const var_120 = &common::CEXArrayReader::`vftable'
int32_t* var_11c = eax_24
var_8_1.b = 0x11

if (var_4c_4 u>= 0x10)
    sub_403160(var_60.d, var_4c_4 + 1, 1)

void* var_14c_18 = 8
void* const var_150_12 = &data_76606c
int32_t var_4c_5 = 0xf
int32_t var_50_5 = 0
var_60 = 0
int32_t var_1c_6 = 0xf
int32_t var_20_6 = 0
var_30 = 0
sub_403490(&var_30, var_150_12, var_14c_18)
var_8_1.b = 0x12
int32_t* ecx_13 = *(arg3 + 4)
int32_t* eax_28

if (ecx_13 != 0)
    char* edx_7 = &var_30
    
    if (var_1c_6 u>= 0x10)
        edx_7 = var_30.d
    
    eax_28 = (*(*ecx_13 + 0x2c))(edx_7)
else
    eax_28 = nullptr

struct common::CEXArrayReader::VTable* const var_128 = &common::CEXArrayReader::`vftable'
int32_t* var_124 = eax_28
var_8_1.b = 0x14

if (var_1c_6 u>= 0x10)
    sub_403160(var_30.d, var_1c_6 + 1, 1)

void* var_14c_21 = 0xc
void* const var_150_14 = &data_76605c
int32_t var_1c_7 = 0xf
int32_t var_20_7 = 0
var_30 = 0
int32_t var_4c_6 = 0xf
int32_t var_50_6 = 0
var_60 = 0
sub_403490(&var_60, var_150_14, var_14c_21)
var_8_1.b = 0x15
int32_t* ecx_15 = *(arg3 + 4)
int32_t* esi

if (ecx_15 != 0)
    char* edx_8 = &var_60
    
    if (var_4c_6 u>= 0x10)
        edx_8 = var_60.d
    
    esi = (*(*ecx_15 + 0x2c))(edx_8)
else
    esi = nullptr

struct common::CEXArrayReader::VTable* const var_130 = &common::CEXArrayReader::`vftable'
int32_t* var_12c = esi
var_8_1.b = 0x17

if (var_4c_6 u>= 0x10)
    sub_403160(var_60.d, var_4c_6 + 1, 1)

void* var_14c_24 = 8
void* const var_150_16 = &data_766084
int32_t var_4c_7 = 0xf
int32_t var_50_7 = 0
var_60 = 0
int32_t var_1c_8 = 0xf
int32_t var_20_8 = 0
var_30 = 0
sub_403490(&var_30, var_150_16, var_14c_24)
var_8_1.b = 0x18
int32_t* ecx_17 = *(arg3 + 4)
int32_t* eax_36

if (ecx_17 != 0)
    char* edx_9 = &var_30
    
    if (var_1c_8 u>= 0x10)
        edx_9 = var_30.d
    
    eax_36 = (*(*ecx_17 + 0x2c))(edx_9)
else
    eax_36 = nullptr

struct common::CEXArrayReader::VTable* const var_138 = &common::CEXArrayReader::`vftable'
int32_t* var_134 = eax_36
var_8_1.b = 0x1a

if (var_1c_8 u>= 0x10)
    sub_403160(var_30.d, var_1c_8 + 1, 1)

void* var_14c_27 = 8
void* const var_150_18 = &data_766078
int32_t var_1c_9 = 0xf
int32_t var_20_9 = 0
var_30 = 0
int32_t var_4c_8 = 0xf
int32_t var_50_8 = 0
var_60 = 0
sub_403490(&var_60, var_150_18, var_14c_27)
var_8_1.b = 0x1b
int32_t* ecx_19 = *(arg3 + 4)
int32_t eax_40

if (ecx_19 != 0)
    char* edx_10 = &var_60
    
    if (var_4c_8 u>= 0x10)
        edx_10 = var_60.d
    
    eax_40 = (*(*ecx_19 + 0x2c))(edx_10)
else
    eax_40 = 0

struct common::CEXArrayReader::VTable* const var_f0 = &common::CEXArrayReader::`vftable'
int32_t var_ec = eax_40
var_8_1.b = 0x1d

if (var_4c_8 u>= 0x10)
    sub_403160(var_60.d, var_4c_8 + 1, 1)

int32_t* ecx_20 = eax_4
int32_t var_4c_9 = 0xf
int32_t var_50_9 = 0
var_60 = 0
int32_t xmm0
int32_t xmm1

if (ecx_20 != 0)
    int32_t* var_14c_30 = ecx_20
    (*(*ecx_20 + 0x10))(0, 0)
    ecx_20 = eax_4
    xmm0 = (zx.o(0)).d
    xmm1 = fconvert.s(arg2)
else
    xmm0 = (zx.o(0)).d
    xmm1 = (zx.o(0)).d

*(arg1 + 0xc) = xmm1

if (ecx_20 != 0)
    int32_t* var_14c_32 = ecx_20
    (*(*ecx_20 + 0x10))(1, 0)
    ecx_20 = eax_4
    float var_c4_2 = fconvert.s(unimplemented  {fstp dword [ebp-0xc0], st0})
    unimplemented  {fstp dword [ebp-0xc0], st0}
    xmm0 = var_c4_2

*(arg1 + 0x10) = xmm0
int32_t eax_48

if (ecx_20 != 0)
    eax_48 = (*(*ecx_20 + 0xc))(2, 0)
else
    eax_48 = 0

int32_t* ecx_21 = eax_8
*(arg1 + 0x14) = eax_48
int32_t eax_50

if (ecx_21 != 0)
    eax_50 = (*(*ecx_21 + 0xc))(0, 0)
    ecx_21 = eax_8
else
    eax_50 = 0

*(arg1 + 0x18) = eax_50
int32_t eax_52

if (ecx_21 != 0)
    eax_52 = (*(*ecx_21 + 0xc))(1, 0)
else
    eax_52 = 0

void* var_14c_37 = 0xe
void* const var_150_25 = &data_766214
*(arg1 + 0x1c) = eax_52
int32_t var_1c_10 = 0xf
int32_t var_20_10 = 0
var_30 = 0
sub_403490(&var_30, var_150_25, var_14c_37)
var_8_1.b = 0x1e
int32_t* ecx_23 = *(arg3 + 4)
int32_t eax_54

if (ecx_23 != 0)
    char* edx_11 = &var_30
    
    if (var_1c_10 u>= 0x10)
        edx_11 = var_30.d
    
    eax_54 = (*(*ecx_23 + 8))(edx_11, 0)
else
    eax_54 = 0

*(arg1 + 0x20) = eax_54
var_8_1.b = 0x1d

if (var_1c_10 u>= 0x10)
    sub_403160(var_30.d, var_1c_10 + 1, 1)

void* var_14c_40 = 8
void* const var_150_28 = &data_766208
int32_t var_1c_11 = 0xf
int32_t var_20_11 = 0
var_30 = 0
sub_403490(&var_30, var_150_28, var_14c_40)
var_8_1.b = 0x1f
int32_t* ecx_25 = *(arg3 + 4)
int32_t eax_58

if (ecx_25 != 0)
    char* edx_12 = &var_30
    
    if (var_1c_11 u>= 0x10)
        edx_12 = var_30.d
    
    eax_58 = (*(*ecx_25 + 8))(edx_12, 0)
else
    eax_58 = 0

var_8_1.b = 0x1d
eax_58.b = eax_58 == 1
*(arg1 + 0x24) = eax_58.b

if (var_1c_11 u>= 0x10)
    sub_403160(var_30.d, var_1c_11 + 1, 1)

void* var_14c_43 = 8
void* const var_150_31 = &data_76622c
int32_t var_1c_12 = 0xf
int32_t var_20_12 = 0
var_30 = 0
sub_403490(&var_30, var_150_31, var_14c_43)
var_8_1.b = 0x20
int32_t* ecx_27 = *(arg3 + 4)
int32_t eax_62

if (ecx_27 != 0)
    char* edx_13 = &var_30
    
    if (var_1c_12 u>= 0x10)
        edx_13 = var_30.d
    
    eax_62 = (*(*ecx_27 + 8))(edx_13, 0)
else
    eax_62 = 0

var_8_1.b = 0x1d
eax_62.b = eax_62 == 1
*(arg1 + 0x25) = eax_62.b

if (var_1c_12 u>= 0x10)
    sub_403160(var_30.d, var_1c_12 + 1, 1)

void* var_14c_46 = 4
void* const var_150_34 = &data_766224
int32_t var_1c_13 = 0xf
int32_t var_20_13 = 0
var_30 = 0
sub_403490(&var_30, var_150_34, var_14c_46)
var_8_1.b = 0x21
int32_t* ecx_29 = *(arg3 + 4)
int32_t eax_66

if (ecx_29 != 0)
    char* edx_14 = &var_30
    
    if (var_1c_13 u>= 0x10)
        edx_14 = var_30.d
    
    eax_66 = (*(*ecx_29 + 8))(edx_14, 0)
else
    eax_66 = 0

var_8_1.b = 0x1d
eax_66.b = eax_66 == 1
*(arg1 + 0x26) = eax_66.b

if (var_1c_13 u>= 0x10)
    sub_403160(var_30.d, var_1c_13 + 1, 1)

void* var_14c_49 = 0xe
void* const var_150_37 = &data_7661c8
int32_t var_1c_14 = 0xf
int32_t var_20_14 = 0
var_30 = 0
sub_403490(&var_30, var_150_37, var_14c_49)
var_8_1.b = 0x22
int32_t* ecx_31 = *(arg3 + 4)
void* eax_70

if (ecx_31 != 0)
    char* edx_15 = &var_30
    
    if (var_1c_14 u>= 0x10)
        edx_15 = var_30.d
    
    eax_70 = (*(*ecx_31 + 8))(edx_15, 1)
else
    eax_70 = ecx_31 + 1

var_8_1.b = 0x1d
eax_70.b = eax_70 == 1
*(arg1 + 0x27) = eax_70.b

if (var_1c_14 u>= 0x10)
    sub_403160(var_30.d, var_1c_14 + 1, 1)

void* var_14c_52 = 0x1c
void* const var_150_40 = &data_7661a8
int32_t var_1c_15 = 0xf
int32_t var_20_15 = 0
var_30 = 0
sub_403490(&var_30, var_150_40, var_14c_52)
var_8_1.b = 0x23
int32_t* ecx_33 = *(arg3 + 4)
int32_t eax_74

if (ecx_33 != 0)
    char* edx_16 = &var_30
    
    if (var_1c_15 u>= 0x10)
        edx_16 = var_30.d
    
    eax_74 = (*(*ecx_33 + 8))(edx_16, 0)
else
    eax_74 = 0

var_8_1.b = 0x1d
eax_74.b = eax_74 == 1
*(arg1 + 0x28) = eax_74.b

if (var_1c_15 u>= 0x10)
    sub_403160(var_30.d, var_1c_15 + 1, 1)

void* var_14c_55 = 0x20
void* const var_150_43 = &data_7661e4
int32_t var_1c_16 = 0xf
int32_t var_20_16 = 0
var_30 = 0
sub_403490(&var_30, var_150_43, var_14c_55)
var_8_1.b = 0x24
int32_t* ecx_35 = *(arg3 + 4)
int32_t eax_78

if (ecx_35 != 0)
    char* edx_17 = &var_30
    
    if (var_1c_16 u>= 0x10)
        edx_17 = var_30.d
    
    eax_78 = (*(*ecx_35 + 8))(edx_17, 0)
else
    eax_78 = 0

var_8_1.b = 0x1d
eax_78.b = eax_78 == 1
*(arg1 + 0x29) = eax_78.b

if (var_1c_16 u>= 0x10)
    sub_403160(var_30.d, var_1c_16 + 1, 1)

void* var_14c_58 = 8
void* const var_150_46 = &data_7661d8
int32_t var_1c_17 = 0xf
int32_t var_20_17 = 0
var_30 = 0
sub_403490(&var_30, var_150_46, var_14c_58)
var_8_1.b = 0x25
int32_t* ecx_37 = *(arg3 + 4)
int32_t eax_82

if (ecx_37 != 0)
    char* edx_18 = &var_30
    
    if (var_1c_17 u>= 0x10)
        edx_18 = var_30.d
    
    eax_82 = (*(*ecx_37 + 8))(edx_18, 0)
else
    eax_82 = 0

*(arg1 + 0x2c) = eax_82
var_8_1.b = 0x1d

if (var_1c_17 u>= 0x10)
    sub_403160(var_30.d, var_1c_17 + 1, 1)

int32_t* ecx_38 = eax_12
int32_t eax_86

if (ecx_38 != 0)
    eax_86 = (*(*ecx_38 + 0xc))(0, 0)
    ecx_38 = eax_12
else
    eax_86 = 0

*(arg1 + 0x34) = eax_86
int32_t eax_88

if (ecx_38 != 0)
    eax_88 = (*(*ecx_38 + 0xc))(1, 0)
    ecx_38 = eax_12
else
    eax_88 = 0

*(arg1 + 0x38) = eax_88
int32_t eax_90

if (ecx_38 != 0)
    eax_90 = (*(*ecx_38 + 0xc))(2, 0)
else
    eax_90 = 0

int32_t* ecx_39 = eax_16
*(arg1 + 0x3c) = eax_90
int32_t eax_92

if (ecx_39 != 0)
    eax_92 = (*(*ecx_39 + 0xc))(0, 0)
    ecx_39 = eax_16
else
    eax_92 = 0

*(arg1 + 0x40) = eax_92
int32_t eax_94

if (ecx_39 != 0)
    eax_94 = (*(*ecx_39 + 0xc))(1, 0)
    ecx_39 = eax_16
else
    eax_94 = 0

*(arg1 + 0x44) = eax_94
int32_t eax_96

if (ecx_39 != 0)
    eax_96 = (*(*ecx_39 + 0xc))(2, 0)
else
    eax_96 = 0

void* var_14c_67 = 0xc
void* const var_150_55 = &data_766184
*(arg1 + 0x48) = eax_96
int32_t var_1c_18 = 0xf
int32_t var_20_18 = 0
var_30 = 0
sub_403490(&var_30, var_150_55, var_14c_67)
var_8_1.b = 0x26
int32_t* ecx_41 = *(arg3 + 4)
int32_t eax_98

if (ecx_41 != 0)
    char* edx_19 = &var_30
    
    if (var_1c_18 u>= 0x10)
        edx_19 = var_30.d
    
    eax_98 = (*(*ecx_41 + 8))(edx_19, 0)
else
    eax_98 = 0

*(arg1 + 0x4c) = eax_98
var_8_1.b = 0x1d

if (var_1c_18 u>= 0x10)
    sub_403160(var_30.d, var_1c_18 + 1, 1)

int32_t* ecx_42 = eax_20
int32_t xmm0_1
int32_t xmm1_1

if (ecx_42 != 0)
    int32_t* var_14c_70 = ecx_42
    (*(*ecx_42 + 0x10))(0, 0)
    ecx_42 = eax_20
    xmm0_1 = (zx.o(0)).d
    int32_t var_c4_3 = fconvert.s(unimplemented  {fstp dword [ebp-0xc0], st0})
    unimplemented  {fstp dword [ebp-0xc0], st0}
    xmm1_1 = var_c4_3
else
    xmm0_1 = (zx.o(0)).d
    xmm1_1 = (zx.o(0)).d

*(arg1 + 0x50) = xmm1_1
int32_t xmm1_2

if (ecx_42 != 0)
    int32_t* var_14c_72 = ecx_42
    (*(*ecx_42 + 0x10))(1, 0)
    int32_t var_c4_4 = fconvert.s(unimplemented  {fstp dword [ebp-0xc0], st0})
    unimplemented  {fstp dword [ebp-0xc0], st0}
    xmm1_2 = var_c4_4
    xmm0_1 = (zx.o(0)).d
else
    xmm1_2 = (zx.o(0)).d

int32_t* ecx_43 = eax_24
*(arg1 + 0x54) = xmm1_2
int32_t xmm1_3

if (ecx_43 != 0)
    int32_t* var_14c_74 = ecx_43
    (*(*ecx_43 + 0x10))(0, 0)
    ecx_43 = eax_24
    xmm0_1 = (zx.o(0)).d
    int32_t var_c4_5 = fconvert.s(unimplemented  {fstp dword [ebp-0xc0], st0})
    unimplemented  {fstp dword [ebp-0xc0], st0}
    xmm1_3 = var_c4_5
else
    xmm1_3 = (zx.o(0)).d

*(arg1 + 0x58) = xmm1_3
int32_t xmm1_4

if (ecx_43 != 0)
    int32_t* var_14c_76 = ecx_43
    (*(*ecx_43 + 0x10))(1, 0)
    ecx_43 = eax_24
    xmm0_1 = (zx.o(0)).d
    int32_t var_c4_6 = fconvert.s(unimplemented  {fstp dword [ebp-0xc0], st0})
    unimplemented  {fstp dword [ebp-0xc0], st0}
    xmm1_4 = var_c4_6
else
    xmm1_4 = (zx.o(0)).d

*(arg1 + 0x5c) = xmm1_4

if (ecx_43 != 0)
    int32_t* var_14c_78 = ecx_43
    (*(*ecx_43 + 0x10))(2, 0)
    int32_t var_c4_7 = fconvert.s(unimplemented  {fstp dword [ebp-0xc0], st0})
    unimplemented  {fstp dword [ebp-0xc0], st0}
    xmm0_1 = var_c4_7

int32_t* ecx_44 = eax_28
*(arg1 + 0x60) = xmm0_1
int32_t eax_112

if (ecx_44 != 0)
    eax_112 = (*(*ecx_44 + 0xc))(0, 0)
    ecx_44 = eax_28
else
    eax_112 = 0

*(arg1 + 0x64) = eax_112
int32_t eax_114

if (ecx_44 != 0)
    eax_114 = (*(*ecx_44 + 0xc))(1, 0)
    ecx_44 = eax_28
else
    eax_114 = 0

*(arg1 + 0x68) = eax_114
int32_t eax_116

if (ecx_44 != 0)
    eax_116 = (*(*ecx_44 + 0xc))(2, 0)
    ecx_44 = eax_28
else
    eax_116 = 0

*(arg1 + 0x6c) = eax_116
int32_t eax_118

if (ecx_44 != 0)
    eax_118 = (*(*ecx_44 + 0xc))(3, 0)
else
    eax_118 = 0

*(arg1 + 0x70) = eax_118
int32_t eax_120

if (esi != 0)
    eax_120 = (*(*esi + 0xc))(0, 0)
else
    eax_120 = 0

eax_120.b = eax_120 != 0
*(arg1 + 0x74) = eax_120.b
int32_t eax_122

if (esi != 0)
    eax_122 = (*(*esi + 0xc))(1, 0)
else
    eax_122 = 0

*(arg1 + 0x78) = eax_122
int32_t eax_124

if (esi != 0)
    eax_124 = (*(*esi + 0xc))(2, 0)
else
    eax_124 = 0

*(arg1 + 0x7c) = eax_124
int32_t eax_126

if (esi != 0)
    eax_126 = (*(*esi + 0xc))(3, 0)
else
    eax_126 = 0

*(arg1 + 0x80) = eax_126
int32_t eax_128

if (esi != 0)
    eax_128 = (*(*esi + 0xc))(4, 0)
else
    eax_128 = 0

*(arg1 + 0x84) = eax_128
int32_t eax_130

if (eax_36 != 0)
    eax_130 = (*(*eax_36 + 0xc))(0, 0)
else
    eax_130 = 0

*(arg1 + 0x88) = eax_130
int32_t eax_132

if (eax_36 != 0)
    eax_132 = (*(*eax_36 + 0xc))(1, 0)
else
    eax_132 = 0

*(arg1 + 0x8c) = eax_132
int32_t eax_134

if (eax_36 != 0)
    eax_134 = (*(*eax_36 + 0xc))(2, 0)
else
    eax_134 = 0

*(arg1 + 0x90) = eax_134
int32_t eax_136

if (eax_36 != 0)
    eax_136 = (*(*eax_36 + 0xc))(3, 0)
else
    eax_136 = 0

void* var_14c_93 = nullptr
char* var_150_76 = &data_75d23e
*(arg1 + 0x94) = eax_136
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_403490(&var_48, var_150_76, var_14c_93)
var_8_1.b = 0x27
void* var_14c_94 = 0x12
char* var_150_77 = &data_766194
int32_t var_1c_19 = 0xf
int32_t var_20_19 = 0
var_30 = 0
sub_403490(&var_30, var_150_77, var_14c_94)
var_8_1.b = 0x28
char var_78
sub_403cd0(arg3, &var_78, &var_30, &var_48)
var_8_1.b = 0x29
int32_t* ecx_57 = *(arg4 + 0x24)

if (ecx_57 == 0)
    sub_6d090a()
    noreturn

int32_t eax_139 = (*(*ecx_57 + 8))(&var_78)
int32_t var_64

if (var_64 u>= 0x10)
    sub_403160(var_78.d, var_64 + 1, 1)

*(arg1 + 0x98) = eax_139
int32_t var_64_1 = 0xf
int32_t var_68 = 0
var_78 = 0

if (var_1c_19 u>= 0x10)
    sub_403160(var_30.d, var_1c_19 + 1, 1)

var_8_1.b = 0x1d
int32_t var_1c_20 = 0xf
int32_t var_20_20 = 0
var_30 = 0

if (var_34 u>= 0x10)
    sub_403160(var_48.d, var_34 + 1, 1)

void* var_14c_100 = nullptr
char* var_150_82 = &data_75d23f
int32_t var_64_2 = 0xf
int32_t var_68_1 = 0
var_78 = 0
sub_403490(&var_78, var_150_82, var_14c_100)
var_8_1.b = 0x2a
void* var_14c_101 = 0x14
char* var_150_83 = &data_766154
int32_t var_1c_21 = 0xf
int32_t var_20_21 = 0
var_30 = 0
sub_403490(&var_30, var_150_83, var_14c_101)
var_8_1.b = 0x2b
sub_403cd0(arg3, &var_48, &var_30, &var_78)
var_8_1.b = 0x2c
int32_t* ecx_63 = *(arg4 + 0x24)

if (ecx_63 == 0)
    sub_6d090a()
    noreturn

int32_t eax_145 = (*(*ecx_63 + 8))(&var_48)

if (var_34 u>= 0x10)
    sub_403160(var_48.d, var_34 + 1, 1)

*(arg1 + 0x9c) = eax_145
int32_t var_34_1 = 0xf
int32_t var_38_1 = 0
var_48 = 0

if (var_1c_21 u>= 0x10)
    sub_403160(var_30.d, var_1c_21 + 1, 1)

var_8_1.b = 0x1d
int32_t var_1c_22 = 0xf
int32_t var_20_22 = 0
var_30 = 0

if (var_64_2 u>= 0x10)
    sub_403160(var_78.d, var_64_2 + 1, 1)

void* var_14c_107 = nullptr
char* var_150_88 = &data_75d237
int32_t var_64_3 = 0xf
int32_t var_68_2 = 0
var_78 = 0
sub_403490(&var_78, var_150_88, var_14c_107)
var_8_1.b = 0x2d
void* var_14c_108 = 0x14
char* var_150_89 = &data_76616c
int32_t var_1c_23 = 0xf
int32_t var_20_23 = 0
var_30 = 0
sub_403490(&var_30, var_150_89, var_14c_108)
var_8_1.b = 0x2e
sub_403cd0(arg3, &var_48, &var_30, &var_78)
var_8_1.b = 0x2f
int32_t* ecx_69 = *(arg4 + 0x24)

if (ecx_69 == 0)
    sub_6d090a()
    noreturn

int32_t eax_151 = (*(*ecx_69 + 8))(&var_48)

if (var_34_1 u>= 0x10)
    sub_403160(var_48.d, var_34_1 + 1, 1)

*(arg1 + 0xa0) = eax_151
int32_t var_34_2 = 0xf
int32_t var_38_2 = 0
var_48 = 0

if (var_1c_23 u>= 0x10)
    sub_403160(var_30.d, var_1c_23 + 1, 1)

var_8_1.b = 0x1d
int32_t var_1c_24 = 0xf
int32_t var_20_24 = 0
var_30 = 0

if (var_64_3 u>= 0x10)
    sub_403160(var_78.d, var_64_3 + 1, 1)

void* var_14c_114 = nullptr
char* var_150_94 = &data_75d23d
int32_t var_64_4 = 0xf
int32_t var_68_3 = 0
var_78 = 0
sub_403490(&var_78, var_150_94, var_14c_114)
var_8_1.b = 0x30
int32_t var_38_3 = 0
int32_t var_34_3 = 0
sub_4033f0(&var_48, 0, nullptr)
sub_403450(&data_76632c)
var_8_1.b = 0x31
char var_160
sub_403cd0(arg3, &var_160, &var_48, &var_78)
*(arg1 + 0xa4) = sub_4fae90(arg4, var_160)
sub_403320(&var_48)
var_8_1.b = 0x1d
sub_403320(&var_78)
sub_403360(&var_78, &data_75d252)
var_8_1.b = 0x32
sub_403360(&var_48, &data_766344)
var_8_1.b = 0x33
sub_403cd0(arg3, &var_160, &var_48, &var_78)
*(arg1 + 0xa8) = sub_4fae90(arg4)
sub_403320(&var_48)
var_8_1.b = 0x1d
sub_403320(&var_78)
sub_403360(&var_78, &data_75d253)
var_8_1.b = 0x34
sub_403360(&var_48, &data_7662e4)
var_8_1.b = 0x35
sub_403cd0(arg3, &var_160, &var_48, &var_78)
*(arg1 + 0xac) = sub_4fae90(arg4)
sub_403320(&var_48)
var_8_1.b = 0x1d
sub_403320(&var_78)
sub_403360(&var_48, &data_7662c8)
var_8_1.b = 0x36
*(arg1 + 0xb0) = sub_403c60(arg3, &var_48, 0)
var_8_1.b = 0x1d
sub_403320(&var_48)
sub_403360(&var_48, &data_766310)
var_8_1.b = 0x37
*(arg1 + 0xb4) = sub_403c60(arg3, &var_48, 0)
var_8_1.b = 0x1d
sub_403320(&var_48)
sub_403360(&var_48, &data_766300)
var_8_1.b = 0x38
var_8_1.b = 0x1d
int32_t eax_161
eax_161.b = sub_403c60(arg3, &var_48, 0) == 1
*(arg1 + 0xb8) = eax_161.b
sub_403320(&var_48)
sub_403360(&var_48, &data_7662a0)
var_8_1.b = 0x39
var_8_1.b = 0x1d
int32_t eax_162
eax_162.b = sub_403c60(arg3, &var_48, 0) == 1
*(arg1 + 0x124) = eax_162.b
sub_403320(&var_48)
sub_403360(&var_48, &data_76628c)
var_8_1.b = 0x3a
int32_t eax_163
eax_163.b = sub_403c60(arg3, &var_48, 0) == 1
var_8_1.b = 0x1d
*(arg1 + 0x125) = eax_163.b
sub_403320(&var_48)
sub_403360(&var_48, &data_7662bc)
var_8_1.b = 0x3b
var_8_1.b = 0x1d
int32_t eax_164
eax_164.b = sub_403c60(arg3, &var_48, 0) == 1
*(arg1 + 0x126) = eax_164.b
sub_403320(&var_48)
sub_403360(&var_48, &data_7662b0)
var_8_1.b = 0x3c
*(arg1 + 0x128) = sub_403c60(arg3, &var_48, 0)
var_8_1.b = 0x1d
sub_403320(&var_48)
sub_403360(&var_48, &data_766254)
var_8_1.b = 0x3d
var_8_1.b = 0x1d
int32_t eax_166
eax_166.b = sub_403c60(arg3, &var_48, 0) == 1
*(arg1 + 0x12c) = eax_166.b
sub_403320(&var_48)
int32_t var_14c_138 = 0
int32_t eax_167
eax_167.b = sub_403210(&var_f0, 0, 0) == 1
int32_t var_150_105 = 1
*(arg1 + 0x12d) = eax_167.b
int32_t var_14c_139 = 0
int32_t eax_168
eax_168.b = sub_403210(&var_f0, var_150_105, var_14c_138) == 1
int32_t var_150_106 = 2
*(arg1 + 0x12e) = eax_168.b
int32_t var_14c_140 = 0
int32_t eax_169
eax_169.b = sub_403210(&var_f0, var_150_106, var_14c_139) == 1
int32_t var_150_107 = 3
*(arg1 + 0x12f) = eax_169.b
char* var_14c_141 = &data_766238
int32_t eax_170
eax_170.b = sub_403210(&var_f0, var_150_107, var_14c_140) == 1
*(arg1 + 0x130) = eax_170.b
sub_403360(&var_48, var_14c_141)
var_8_1.b = 0x3e
var_8_1.b = 0x1d
int32_t eax_171
eax_171.b = sub_403c60(arg3, &var_48, 0) == 1
*(arg1 + 0x131) = eax_171.b
sub_403320(&var_48)
sub_403360(&var_48, &data_766270)
var_8_1.b = 0x3f
var_8_1.b = 0x1d
int32_t eax_172
eax_172.b = sub_403c60(arg3, &var_48, 0) == 1
*(arg1 + 0x194) = eax_172.b
sub_403320(&var_48)
sub_403360(&var_48, &data_766260)
var_8_1.b = 0x40
*(arg1 + 0x198) = sub_403c60(arg3, &var_48, 0)
var_8_1.b = 0x1d
sub_403320(&var_48)
sub_403360(&var_48, &data_7663a4)
var_8_1.b = 0x41
var_8_1.b = 0x1d
int32_t eax_174
eax_174.b = sub_403c60(arg3, &var_48, 0) == 1
*(arg1 + 0x19c) = eax_174.b
sub_403320(&var_48)
sub_403360(&var_78, &data_75d267)
var_8_1.b = 0x42
sub_403360(&var_48, &data_7663b4)
var_8_1.b = 0x43
void var_90
char* eax_175 = sub_403cd0(arg3, &var_90, &var_48, &var_78)
sub_409670(sub_507c60(arg1 + 0x134, 2), eax_175)
sub_403320(&var_90)
sub_403320(&var_48)
var_8_1.b = 0x1d
sub_403320(&var_78)
sub_403360(&var_78, &data_75d26b)
var_8_1.b = 0x44
sub_403360(&var_48, &data_766370)
var_8_1.b = 0x45
char* eax_177 = sub_403cd0(arg3, &var_90, &var_48, &var_78)
sub_409670(sub_507c60(arg1 + 0x134, 3), eax_177)
sub_403320(&var_90)
sub_403320(&var_48)
var_8_1.b = 0x1d
sub_403320(&var_78)
sub_403360(&var_30, &data_75d266)
var_8_1.b = 0x46
sub_403360(&var_48, &data_766398)
var_8_1.b = 0x47
var_8_1.b = 0x48
sub_504330(arg1, sub_403cd0(arg3, &var_90, &var_48, &var_30))
sub_403320(&var_90)
sub_403320(&var_48)
var_8_1.b = 0x1d
sub_403320(&var_30)
void var_a8
sub_403360(&var_a8, &data_766380)
var_8_1.b = 0x49
var_8_1.b = 0x1d
int32_t eax_180
eax_180.b = sub_403c60(arg3, &var_a8, 0) == 1
*(arg1 + 0x1b8) = eax_180.b
sub_403320(&var_a8)
void var_c0
sub_403360(&var_c0, &data_76635c)
var_8_1.b = 0x4a
int32_t eax_181
eax_181.b = sub_403c60(arg3, &var_c0, 1) == 1
*(arg1 + 0x1b9) = eax_181.b
sub_403320(&var_c0)
char* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
