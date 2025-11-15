// 函数: sub_4e0c20
// 地址: 0x4e0c20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734e12
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x7649cc, 6)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg3 + 4)
int32_t* eax_3

if (ecx_1 != 0)
    char* edx_1 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_1 = var_2c.d
    
    eax_3 = (*(*ecx_1 + 0x2c))(edx_1)
else
    eax_3 = nullptr

struct common::CEXArrayReader::VTable* const var_88 = &common::CEXArrayReader::`vftable'
int32_t* var_84 = eax_3
var_8_1.b = 2

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x7649d4, 0xa)
var_8_1.b = 3
int32_t* ecx_3 = *(arg3 + 4)
int32_t* edi

if (ecx_3 != 0)
    char* edx_2 = &var_5c
    
    if (var_48 u>= 0x10)
        edx_2 = var_5c.d
    
    edi = (*(*ecx_3 + 0x2c))(edx_2)
else
    edi = nullptr

struct common::CEXArrayReader::VTable* const var_90 = &common::CEXArrayReader::`vftable'
int32_t* var_8c = edi
var_8_1.b = 5

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0
int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x764978, 0xa)
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

struct common::CEXArrayReader::VTable* const var_98 = &common::CEXArrayReader::`vftable'
int32_t* var_94 = eax_11
var_8_1.b = 8

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
int32_t var_48_2 = 0xf
int32_t var_4c_2 = 0
var_5c = 0
sub_403490(&var_5c, 0x764984, 0x10)
var_8_1.b = 9
int32_t* ecx_7 = *(arg3 + 4)
int32_t* eax_15

if (ecx_7 != 0)
    char* edx_4 = &var_5c
    
    if (var_48_2 u>= 0x10)
        edx_4 = var_5c.d
    
    eax_15 = (*(*ecx_7 + 0x2c))(edx_4)
else
    eax_15 = nullptr

struct common::CEXArrayReader::VTable* const var_a0 = &common::CEXArrayReader::`vftable'
int32_t* var_9c = eax_15
var_8_1.b = 0xb

if (var_48_2 u>= 0x10)
    sub_403160(var_5c.d, var_48_2 + 1, 1)

int32_t* ecx_8 = eax_3
int32_t var_48_3 = 0xf
int32_t var_4c_3 = 0
var_5c = 0
int32_t eax_19

if (ecx_8 != 0)
    eax_19 = (*(*ecx_8 + 0xc))(0, 0)
    ecx_8 = eax_3
else
    eax_19 = 0

*(arg1 + 4) = eax_19
int32_t eax_21

if (ecx_8 != 0)
    eax_21 = (*(*ecx_8 + 0xc))(1, 0)
else
    eax_21 = 0

*(arg1 + 8) = eax_21
int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_403490(&var_2c, 0x764998, 4)
var_8_1.b = 0xc
int32_t* ecx_10 = *(arg3 + 4)
int32_t eax_23

if (ecx_10 != 0)
    char* edx_5 = &var_2c
    
    if (var_18_4 u>= 0x10)
        edx_5 = var_2c.d
    
    eax_23 = (*(*ecx_10 + 8))(edx_5, 0)
else
    eax_23 = 0

var_8_1.b = 0xb
eax_23.b = eax_23 == 1
*(arg1 + 0xc) = eax_23.b

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t eax_27

if (edi != 0)
    eax_27 = (*(*edi + 0xc))(0, 0)
else
    eax_27 = 0

*(arg1 + 0x10) = eax_27
int32_t eax_29

if (edi != 0)
    eax_29 = (*(*edi + 0xc))(1, 0)
else
    eax_29 = 0

*(arg1 + 0x14) = eax_29
int32_t eax_31

if (edi != 0)
    eax_31 = (*(*edi + 0xc))(2, 0)
else
    eax_31 = 0

*(arg1 + 0x18) = eax_31
int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
sub_403490(&var_2c, 0x7649a0, 0xe)
var_8_1.b = 0xd
int32_t* ecx_15 = *(arg3 + 4)
int32_t eax_33

if (ecx_15 != 0)
    char* edx_6 = &var_2c
    
    if (var_18_5 u>= 0x10)
        edx_6 = var_2c.d
    
    eax_33 = (*(*ecx_15 + 8))(edx_6, 0)
else
    eax_33 = 0

*(arg1 + 0x20) = eax_33
var_8_1.b = 0xb

if (var_18_5 u>= 0x10)
    sub_403160(var_2c.d, var_18_5 + 1, 1)

int32_t var_18_6 = 0xf
int32_t var_1c_6 = 0
var_2c = 0
sub_403490(&var_2c, 0x764948, 0xe)
var_8_1.b = 0xe
int32_t* ecx_17 = *(arg3 + 4)
int32_t eax_37

if (ecx_17 != 0)
    char* edx_7 = &var_2c
    
    if (var_18_6 u>= 0x10)
        edx_7 = var_2c.d
    
    eax_37 = (*(*ecx_17 + 8))(edx_7, 0)
else
    eax_37 = 0

*(arg1 + 0x24) = eax_37
var_8_1.b = 0xb

if (var_18_6 u>= 0x10)
    sub_403160(var_2c.d, var_18_6 + 1, 1)

int32_t var_7c_1
int32_t var_78_1
int32_t edx_8

if (eax_11 != 0)
    var_7c_1 = (*(*eax_11 + 0xc))(2, 0)
    var_78_1 = (*(*eax_11 + 0xc))(1, 0)
    edx_8 = (*(*eax_11 + 0xc))(0, 0)
else
    edx_8 = 0
    var_7c_1 = 0
    var_78_1 = 0

int32_t edi_2 = 0xff

if (edx_8 != zx.d(edx_8.b))
    int32_t eax_45 = 0xff
    
    if (edx_8 s< 0)
        eax_45 = 0
    
    edx_8 = eax_45

int32_t ecx_22 = var_78_1

if (ecx_22 != zx.d(ecx_22.b))
    int32_t eax_47 = 0xff
    
    if (ecx_22 s< 0)
        eax_47 = 0
    
    ecx_22 = eax_47

int32_t var_20 = ecx_22
int32_t ecx_23 = var_7c_1

if (ecx_23 != zx.d(ecx_23.b))
    int32_t eax_49 = 0xff
    
    if (ecx_23 s< 0)
        eax_49 = 0
    
    ecx_23 = eax_49

int32_t var_1c_7 = ecx_23
int32_t var_18_7 = 0xff
*(arg1 + 0x28) = edx_8.o
int32_t var_18_8 = 0xf
int32_t var_1c_8 = 0
var_2c = 0
sub_403490(&var_2c, 0x764958, 0xc)
var_8_1.b = 0xf
int32_t* ecx_25 = *(arg3 + 4)
int32_t xmm0_1

if (ecx_25 != 0)
    char* edx_11 = &var_2c
    
    if (var_18_8 u>= 0x10)
        edx_11 = var_2c.d
    
    int32_t* var_b8_5 = ecx_25
    (*(*ecx_25 + 0xc))(edx_11, 0)
    xmm0_1 = fconvert.s(arg2)
else
    xmm0_1 = (zx.o(0)).d

var_8_1.b = 0xb
*(arg1 + 0x38) = xmm0_1

if (var_18_8 u>= 0x10)
    sub_403160(var_2c.d, var_18_8 + 1, 1)

int32_t var_18_9 = 0xf
int32_t var_1c_9 = 0
var_2c = 0
sub_403490(&var_2c, 0x764968, 0xe)
var_8_1.b = 0x10
int32_t* ecx_27 = *(arg3 + 4)
int32_t xmm0_2

if (ecx_27 != 0)
    char* edx_12 = &var_2c
    
    if (var_18_9 u>= 0x10)
        edx_12 = var_2c.d
    
    int32_t* var_b8_6 = ecx_27
    (*(*ecx_27 + 0xc))(edx_12, 0)
    int32_t var_78_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
    unimplemented  {fstp dword [ebp-0x74], st0}
    xmm0_2 = var_78_3
else
    xmm0_2 = (zx.o(0)).d

var_8_1.b = 0xb
*(arg1 + 0x3c) = xmm0_2

if (var_18_9 u>= 0x10)
    sub_403160(var_2c.d, var_18_9 + 1, 1)

int32_t var_7c_2
int32_t var_78_4
int32_t edx_13

if (eax_15 != 0)
    var_7c_2 = (*(*eax_15 + 0xc))(2, 0)
    var_78_4 = (*(*eax_15 + 0xc))(1, 0)
    edx_13 = (*(*eax_15 + 0xc))(0, 0)
else
    edx_13 = 0
    var_7c_2 = 0
    var_78_4 = 0

if (edx_13 != zx.d(edx_13.b))
    int32_t eax_63 = 0xff
    
    if (edx_13 s< 0)
        eax_63 = 0
    
    edx_13 = eax_63

int32_t ecx_32 = var_78_4

if (ecx_32 != zx.d(ecx_32.b))
    int32_t eax_65 = 0xff
    
    if (ecx_32 s< 0)
        eax_65 = 0
    
    ecx_32 = eax_65

int32_t var_20_1 = ecx_32
int32_t ecx_33 = var_7c_2

if (ecx_33 != zx.d(ecx_33.b))
    if (ecx_33 s< 0)
        edi_2 = 0
    
    ecx_33 = edi_2

int32_t var_1c_10 = ecx_33
int32_t var_18_10 = 0xff
*(arg1 + 0x40) = edx_13.o
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x75d0e2, nullptr)
var_8_1.b = 0x11
int32_t var_18_11 = 0xf
int32_t var_1c_11 = 0
var_2c = 0
sub_403490(&var_2c, 0x764934, 6)
var_8_1.b = 0x12
var_8_1.b = 0x13
char var_74[0x10]
sub_4df830(arg1, sub_403cd0(arg3, &var_74, &var_2c, &var_44))
int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74[0].d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74[0] = 0

if (var_18_11 u>= 0x10)
    sub_403160(var_2c.d, var_18_11 + 1, 1)

var_8_1.b = 0xb
int32_t var_18_12 = 0xf
int32_t var_1c_12 = 0
var_2c = 0

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
sub_403490(&var_44, 0x75d0db, nullptr)
var_8_1.b = 0x14
int32_t var_18_13 = 0xf
int32_t var_1c_13 = 0
var_2c = 0
sub_403490(&var_2c, 0x76493c, 0xa)
var_8_1.b = 0x15
var_8_1.b = 0x16
sub_4dfb40(arg1, sub_403cd0(arg3, &var_74, &var_2c, &var_44))

if (var_60_1 u>= 0x10)
    sub_403160(var_74[0].d, var_60_1 + 1, 1)

int32_t var_60_2 = 0xf
int32_t var_64_1 = 0
var_74[0] = 0

if (var_18_13 u>= 0x10)
    sub_403160(var_2c.d, var_18_13 + 1, 1)

var_8_1.b = 0xb
int32_t var_18_14 = 0xf
int32_t var_1c_14 = 0
var_2c = 0

if (var_30_1 u>= 0x10)
    sub_403160(var_44.d, var_30_1 + 1, 1)

int32_t var_30_2 = 0xf
int32_t var_34_2 = 0
var_44 = 0
sub_403490(&var_44, 0x75d0e1, nullptr)
var_8_1.b = 0x17
int32_t var_18_15 = 0xf
int32_t var_1c_15 = 0
var_2c = 0
sub_403490(&var_2c, 0x7649e0, 8)
var_8_1.b = 0x18
char* ecx_45 = sub_403cd0(arg3, &var_74, &var_2c, &var_44)

if (arg1 + 0x140 != ecx_45)
    if (*(arg1 + 0x154) u>= 0x10)
        sub_403160(*(arg1 + 0x140), *(arg1 + 0x154) + 1, 1)
    
    *(arg1 + 0x154) = 0xf
    bool cond:10_1 = *(arg1 + 0x154) u< 0x10
    *(arg1 + 0x150) = 0
    char* eax_84
    
    if (cond:10_1)
        eax_84 = arg1 + 0x140
    else
        eax_84 = *(arg1 + 0x140)
    
    *eax_84 = 0
    sub_4056a0(arg1 + 0x140, ecx_45)

if (var_60_2 u>= 0x10)
    sub_403160(var_74[0].d, var_60_2 + 1, 1)

int32_t var_60_3 = 0xf
int32_t var_64_2 = 0
var_74[0] = 0

if (var_18_15 u>= 0x10)
    sub_403160(var_2c.d, var_18_15 + 1, 1)

var_8_1.b = 0xb
int32_t var_18_16 = 0xf
int32_t var_1c_16 = 0
var_2c = 0

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

int32_t var_18_17 = 0xf
int32_t var_1c_17 = 0
var_2c = 0
sub_403490(&var_2c, 0x7649ec, 0xc)
var_8_1.b = 0x1a
int32_t* ecx_48 = *(arg3 + 4)
int32_t eax_91

if (ecx_48 != 0)
    char* edx_16 = &var_2c
    
    if (var_18_17 u>= 0x10)
        edx_16 = var_2c.d
    
    eax_91 = (*(*ecx_48 + 8))(edx_16, 0)
else
    eax_91 = 0

*(arg1 + 0x158) = eax_91
var_8_1.b = 0xb

if (var_18_17 u>= 0x10)
    sub_403160(var_2c.d, var_18_17 + 1, 1)

int32_t var_18_18 = 0xf
int32_t var_1c_18 = 0
var_2c = 0
sub_403490(&var_2c, 0x7649fc, 8)
var_8_1.b = 0x1b
int32_t* ecx_50 = *(arg3 + 4)
int32_t eax_95

if (ecx_50 != 0)
    char* edx_17 = &var_2c
    
    if (var_18_18 u>= 0x10)
        edx_17 = var_2c.d
    
    eax_95 = (*(*ecx_50 + 8))(edx_17, 0)
else
    eax_95 = 0

*(arg1 + 0x15c) = eax_95
var_8_1.b = 0xb

if (var_18_18 u>= 0x10)
    sub_403160(var_2c.d, var_18_18 + 1, 1)

int32_t var_30_3 = 0xf
int32_t var_34_3 = 0
var_44 = 0
sub_403490(&var_44, 0x764a08, 6)
var_8_1.b = 0x1c
int32_t* ecx_52 = *(arg3 + 4)
int32_t eax_99

if (ecx_52 != 0)
    char* edx_18 = &var_44
    
    if (var_30_3 u>= 0x10)
        edx_18 = var_44.d
    
    eax_99 = (*(*ecx_52 + 8))(edx_18, 0)
else
    eax_99 = 0

*(arg1 + 0x160) = eax_99

if (var_30_3 u>= 0x10)
    sub_403160(var_44.d, var_30_3 + 1, 1)

int32_t result
result.b = 1
*(arg1 + 0x174) = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
