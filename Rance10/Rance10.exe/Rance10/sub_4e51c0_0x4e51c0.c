// 函数: sub_4e51c0
// 地址: 0x4e51c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7352f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x764bb8, 6)
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

struct common::CEXArrayReader::VTable* const var_8c = &common::CEXArrayReader::`vftable'
int32_t* var_88 = eax_3
var_8_1.b = 2

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_60 = 0xf
int32_t var_64 = 0
char var_74 = 0
sub_403490(&var_74, 0x764d9c, 0xa)
var_8_1.b = 3
int32_t* ecx_3 = *(arg3 + 4)
int32_t* ebx

if (ecx_3 != 0)
    char* edx_2 = &var_74
    
    if (var_60 u>= 0x10)
        edx_2 = var_74.d
    
    ebx = (*(*ecx_3 + 0x2c))(edx_2)
else
    ebx = nullptr

struct common::CEXArrayReader::VTable* const var_94 = &common::CEXArrayReader::`vftable'
int32_t* var_90 = ebx
var_8_1.b = 5

if (var_60 u>= 0x10)
    sub_403160(var_74.d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64_1 = 0
var_74 = 0
int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x764da8, 0xa)
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

struct common::CEXArrayReader::VTable* const var_9c = &common::CEXArrayReader::`vftable'
int32_t* var_98 = eax_11
var_8_1.b = 8

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
int32_t var_60_2 = 0xf
int32_t var_64_2 = 0
var_74 = 0
sub_403490(&var_74, 0x764db4, 0x10)
var_8_1.b = 9
int32_t* ecx_7 = *(arg3 + 4)
int32_t* eax_15

if (ecx_7 != 0)
    char* edx_4 = &var_74
    
    if (var_60_2 u>= 0x10)
        edx_4 = var_74.d
    
    eax_15 = (*(*ecx_7 + 0x2c))(edx_4)
else
    eax_15 = nullptr

struct common::CEXArrayReader::VTable* const var_a4 = &common::CEXArrayReader::`vftable'
int32_t* var_a0 = eax_15
var_8_1.b = 0xb

if (var_60_2 u>= 0x10)
    sub_403160(var_74.d, var_60_2 + 1, 1)

int32_t* ecx_8 = eax_3
int32_t var_60_3 = 0xf
int32_t var_64_3 = 0
var_74 = 0
void* eax_19

if (ecx_8 != 0)
    eax_19 = (*(*ecx_8 + 0xc))(0, 0x10)
    ecx_8 = eax_3
else
    eax_19 = &ecx_8[4]

*(arg1 + 4) = eax_19
void* eax_21

if (ecx_8 != 0)
    eax_21 = (*(*ecx_8 + 0xc))(1, 0x10)
else
    eax_21 = &ecx_8[4]

*(arg1 + 8) = eax_21
int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_403490(&var_2c, 0x764dc8, 8)
var_8_1.b = 0xc
int32_t* ecx_10 = *(arg3 + 4)
void* eax_23

if (ecx_10 != 0)
    char* edx_5 = &var_2c
    
    if (var_18_4 u>= 0x10)
        edx_5 = var_2c.d
    
    eax_23 = (*(*ecx_10 + 8))(edx_5, 1)
else
    eax_23 = ecx_10 + 1

var_8_1.b = 0xb
eax_23.b = eax_23 == 1
*(arg1 + 0xc) = eax_23.b

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
sub_403490(&var_2c, 0x764d5c, 0xc)
var_8_1.b = 0xd
int32_t* ecx_12 = *(arg3 + 4)
int32_t eax_27

if (ecx_12 != 0)
    char* edx_6 = &var_2c
    
    if (var_18_5 u>= 0x10)
        edx_6 = var_2c.d
    
    eax_27 = (*(*ecx_12 + 8))(edx_6, 0)
else
    eax_27 = 0

var_8_1.b = 0xb
eax_27.b = eax_27 == 1
*(arg1 + 0xd) = eax_27.b

if (var_18_5 u>= 0x10)
    sub_403160(var_2c.d, var_18_5 + 1, 1)

int32_t eax_31

if (ebx != 0)
    eax_31 = (*(*ebx + 0xc))(0, 0xc8)
else
    eax_31 = 0xc8

*(arg1 + 0x10) = eax_31
int32_t eax_33

if (ebx != 0)
    eax_33 = (*(*ebx + 0xc))(1, 0xc8)
else
    eax_33 = 0xc8

*(arg1 + 0x14) = eax_33
int32_t eax_35

if (ebx != 0)
    eax_35 = (*(*ebx + 0xc))(2, 0xc8)
else
    eax_35 = 0xc8

*(arg1 + 0x18) = eax_35
int32_t var_18_6 = 0xf
int32_t var_1c_6 = 0
var_2c = 0
sub_403490(&var_2c, 0x764d6c, 0xe)
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

*(arg1 + 0x20) = eax_37
var_8_1.b = 0xb

if (var_18_6 u>= 0x10)
    sub_403160(var_2c.d, var_18_6 + 1, 1)

int32_t var_18_7 = 0xf
int32_t var_1c_7 = 0
var_2c = 0
sub_403490(&var_2c, 0x764d7c, 0xe)
var_8_1.b = 0xf
int32_t* ecx_19 = *(arg3 + 4)
void* eax_41

if (ecx_19 != 0)
    char* edx_8 = &var_2c
    
    if (var_18_7 u>= 0x10)
        edx_8 = var_2c.d
    
    eax_41 = (*(*ecx_19 + 8))(edx_8, 0x10)
else
    eax_41 = &ecx_19[4]

*(arg1 + 0x24) = eax_41
var_8_1.b = 0xb

if (var_18_7 u>= 0x10)
    sub_403160(var_2c.d, var_18_7 + 1, 1)

int32_t var_80_1
int32_t var_7c_1
int32_t eax_45

if (eax_11 != 0)
    var_80_1 = (*(*eax_11 + 0xc))(2, 0xff)
    var_7c_1 = (*(*eax_11 + 0xc))(1, 0xff)
    eax_45 = (*(*eax_11 + 0xc))(0, 0xff)
else
    eax_45 = 0xff
    var_80_1 = 0xff
    var_7c_1 = 0xff

int32_t edx_11 = eax_45
int32_t ebx_2 = 0xff

if (edx_11 != zx.d(edx_11.b))
    int32_t eax_49 = 0xff
    
    if (edx_11 s< 0)
        eax_49 = 0
    
    edx_11 = eax_49

int32_t ecx_24 = var_7c_1

if (ecx_24 != zx.d(ecx_24.b))
    int32_t eax_51 = 0xff
    
    if (ecx_24 s< 0)
        eax_51 = 0
    
    ecx_24 = eax_51

int32_t var_20 = ecx_24
int32_t ecx_25 = var_80_1

if (ecx_25 != zx.d(ecx_25.b))
    int32_t eax_53 = 0xff
    
    if (ecx_25 s< 0)
        eax_53 = 0
    
    ecx_25 = eax_53

int32_t var_1c_8 = ecx_25
int32_t var_18_8 = 0xff
*(arg1 + 0x28) = edx_11.o
int32_t var_18_9 = 0xf
int32_t var_1c_9 = 0
var_2c = 0
sub_403490(&var_2c, 0x764d8c, 0xc)
var_8_1.b = 0x10
int32_t* ecx_27 = *(arg3 + 4)
int32_t xmm0_1

if (ecx_27 != 0)
    char* edx_12 = &var_2c
    
    if (var_18_9 u>= 0x10)
        edx_12 = var_2c.d
    
    int32_t* var_b8_5 = ecx_27
    (*(*ecx_27 + 0xc))(edx_12, 0)
    xmm0_1 = fconvert.s(arg2)
else
    xmm0_1 = (zx.o(0)).d

var_8_1.b = 0xb
*(arg1 + 0x38) = xmm0_1

if (var_18_9 u>= 0x10)
    sub_403160(var_2c.d, var_18_9 + 1, 1)

int32_t var_18_10 = 0xf
int32_t var_1c_10 = 0
var_2c = 0
sub_403490(&var_2c, 0x764d1c, 0xe)
var_8_1.b = 0x11
int32_t* ecx_29 = *(arg3 + 4)
int32_t xmm0_2

if (ecx_29 != 0)
    char* edx_13 = &var_2c
    
    if (var_18_10 u>= 0x10)
        edx_13 = var_2c.d
    
    int32_t* var_b8_6 = ecx_29
    (*(*ecx_29 + 0xc))(edx_13, 0)
    int32_t var_7c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x78], st0})
    unimplemented  {fstp dword [ebp-0x78], st0}
    xmm0_2 = var_7c_3
else
    xmm0_2 = (zx.o(0)).d

var_8_1.b = 0xb
*(arg1 + 0x3c) = xmm0_2

if (var_18_10 u>= 0x10)
    sub_403160(var_2c.d, var_18_10 + 1, 1)

int32_t var_80_2
int32_t eax_62
int32_t edx_14

if (eax_15 != 0)
    var_80_2 = (*(*eax_15 + 0xc))(2, 0)
    int32_t eax_65 = (*(*eax_15 + 0xc))(1, 0)
    eax_62 = (*(*eax_15 + 0xc))(0, 0)
    edx_14 = eax_65
else
    eax_62 = 0
    edx_14 = 0
    var_80_2 = 0

int32_t var_7c_4 = eax_62

if (eax_62 != zx.d(eax_62.b))
    eax_62 = 0xff
    
    if (var_7c_4 s< 0)
        eax_62 = 0

if (edx_14 != zx.d(edx_14.b))
    int32_t eax_68 = 0xff
    
    if (edx_14 s< 0)
        eax_68 = 0
    
    edx_14 = eax_68

int32_t ecx_34 = var_80_2
int32_t var_20_1 = edx_14

if (ecx_34 != zx.d(ecx_34.b))
    if (ecx_34 s< 0)
        ebx_2 = 0
    
    ecx_34 = ebx_2

int32_t var_1c_11 = ecx_34
int32_t var_18_11 = 0xff
*(arg1 + 0x40) = eax_62.o
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x75d0e3, nullptr)
var_8_1.b = 0x12
int32_t var_18_12 = 0xf
int32_t var_1c_12 = 0
var_2c = 0
sub_403490(&var_2c, 0x764d2c, 6)
var_8_1.b = 0x13
char var_44
char* ecx_38 = sub_403cd0(arg3, &var_44, &var_2c, &var_5c)

if (arg1 + 0x50 != ecx_38)
    if (*(arg1 + 0x64) u>= 0x10)
        sub_403160(*(arg1 + 0x50), *(arg1 + 0x64) + 1, 1)
    
    *(arg1 + 0x64) = 0xf
    bool cond:12_1 = *(arg1 + 0x64) u< 0x10
    *(arg1 + 0x60) = 0
    char* eax_73
    
    if (cond:12_1)
        eax_73 = arg1 + 0x50
    else
        eax_73 = *(arg1 + 0x50)
    
    *eax_73 = 0
    sub_4056a0(arg1 + 0x50, ecx_38)

int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (var_18_12 u>= 0x10)
    sub_403160(var_2c.d, var_18_12 + 1, 1)

var_8_1.b = 0xb
int32_t var_18_13 = 0xf
int32_t var_1c_13 = 0
var_2c = 0

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0
sub_403490(&var_5c, 0x75d0e3, nullptr)
var_8_1.b = 0x15
int32_t var_18_14 = 0xf
int32_t var_1c_14 = 0
var_2c = 0
sub_403490(&var_2c, 0x764d34, 0xc)
var_8_1.b = 0x16
char* ecx_43 = sub_403cd0(arg3, &var_44, &var_2c, &var_5c)

if (arg1 + 0x68 != ecx_43)
    if (*(arg1 + 0x7c) u>= 0x10)
        sub_403160(*(arg1 + 0x68), *(arg1 + 0x7c) + 1, 1)
    
    *(arg1 + 0x7c) = 0xf
    bool cond:13_1 = *(arg1 + 0x7c) u< 0x10
    *(arg1 + 0x78) = 0
    char* eax_83
    
    if (cond:13_1)
        eax_83 = arg1 + 0x68
    else
        eax_83 = *(arg1 + 0x68)
    
    *eax_83 = 0
    sub_4056a0(arg1 + 0x68, ecx_43)

if (var_30_1 u>= 0x10)
    sub_403160(var_44.d, var_30_1 + 1, 1)

int32_t var_30_2 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_18_14 u>= 0x10)
    sub_403160(var_2c.d, var_18_14 + 1, 1)

var_8_1.b = 0xb
int32_t var_18_15 = 0xf
int32_t var_1c_15 = 0
var_2c = 0

if (var_48_1 u>= 0x10)
    sub_403160(var_5c.d, var_48_1 + 1, 1)

int32_t var_48_2 = 0xf
int32_t var_4c_2 = 0
var_5c = 0
sub_403490(&var_5c, 0x75d0e3, nullptr)
var_8_1.b = 0x18
int32_t var_18_16 = 0xf
int32_t var_1c_16 = 0
var_2c = 0
sub_403490(&var_2c, 0x764d44, 0x14)
var_8_1.b = 0x19
char* ecx_48 = sub_403cd0(arg3, &var_44, &var_2c, &var_5c)

if (arg1 + 0x80 != ecx_48)
    if (*(arg1 + 0x94) u>= 0x10)
        sub_403160(*(arg1 + 0x80), *(arg1 + 0x94) + 1, 1)
    
    *(arg1 + 0x94) = 0xf
    bool cond:14_1 = *(arg1 + 0x94) u< 0x10
    *(arg1 + 0x90) = 0
    char* eax_93
    
    if (cond:14_1)
        eax_93 = arg1 + 0x80
    else
        eax_93 = *(arg1 + 0x80)
    
    *eax_93 = 0
    sub_4056a0(arg1 + 0x80, ecx_48)

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

int32_t var_30_3 = 0xf
int32_t var_34_2 = 0
var_44 = 0

if (var_18_16 u>= 0x10)
    sub_403160(var_2c.d, var_18_16 + 1, 1)

var_8_1.b = 0xb
int32_t var_18_17 = 0xf
int32_t var_1c_17 = 0
var_2c = 0

if (var_48_2 u>= 0x10)
    sub_403160(var_5c.d, var_48_2 + 1, 1)

int32_t var_48_3 = 0xf
int32_t var_4c_3 = 0
var_5c = 0
sub_403490(&var_5c, 0x75d0f3, nullptr)
var_8_1.b = 0x1b
int32_t var_18_18 = 0xf
int32_t var_1c_18 = 0
var_2c = 0
sub_403490(&var_2c, 0x764cd4, 0xa)
var_8_1.b = 0x1c
char* ecx_53 = sub_403cd0(arg3, &var_44, &var_2c, &var_5c)

if (arg1 + 0x98 != ecx_53)
    if (*(arg1 + 0xac) u>= 0x10)
        sub_403160(*(arg1 + 0x98), *(arg1 + 0xac) + 1, 1)
    
    *(arg1 + 0xac) = 0xf
    bool cond:15_1 = *(arg1 + 0xac) u< 0x10
    *(arg1 + 0xa8) = 0
    char* eax_103
    
    if (cond:15_1)
        eax_103 = arg1 + 0x98
    else
        eax_103 = *(arg1 + 0x98)
    
    *eax_103 = 0
    sub_4056a0(arg1 + 0x98, ecx_53)

if (var_30_3 u>= 0x10)
    sub_403160(var_44.d, var_30_3 + 1, 1)

int32_t var_30_4 = 0xf
int32_t var_34_3 = 0
var_44 = 0

if (var_18_18 u>= 0x10)
    sub_403160(var_2c.d, var_18_18 + 1, 1)

var_8_1.b = 0xb
int32_t var_18_19 = 0xf
int32_t var_1c_19 = 0
var_2c = 0

if (var_48_3 u>= 0x10)
    sub_403160(var_5c.d, var_48_3 + 1, 1)

int32_t var_48_4 = 0xf
int32_t var_4c_4 = 0
var_5c = 0
sub_403490(&var_5c, 0x75d0f3, nullptr)
var_8_1.b = 0x1e
int32_t var_18_20 = 0xf
int32_t var_1c_20 = 0
var_2c = 0
sub_403490(&var_2c, 0x764ce0, 0x10)
var_8_1.b = 0x1f
char* ecx_58 = sub_403cd0(arg3, &var_44, &var_2c, &var_5c)

if (arg1 + 0xb0 != ecx_58)
    if (*(arg1 + 0xc4) u>= 0x10)
        sub_403160(*(arg1 + 0xb0), *(arg1 + 0xc4) + 1, 1)
    
    *(arg1 + 0xc4) = 0xf
    bool cond:16_1 = *(arg1 + 0xc4) u< 0x10
    *(arg1 + 0xc0) = 0
    char* eax_113
    
    if (cond:16_1)
        eax_113 = arg1 + 0xb0
    else
        eax_113 = *(arg1 + 0xb0)
    
    *eax_113 = 0
    sub_4056a0(arg1 + 0xb0, ecx_58)

if (var_30_4 u>= 0x10)
    sub_403160(var_44.d, var_30_4 + 1, 1)

int32_t var_30_5 = 0xf
int32_t var_34_4 = 0
var_44 = 0

if (var_18_20 u>= 0x10)
    sub_403160(var_2c.d, var_18_20 + 1, 1)

var_8_1.b = 0xb
int32_t var_18_21 = 0xf
int32_t var_1c_21 = 0
var_2c = 0

if (var_48_4 u>= 0x10)
    sub_403160(var_5c.d, var_48_4 + 1, 1)

int32_t var_48_5 = 0xf
int32_t var_4c_5 = 0
var_5c = 0
sub_403490(&var_5c, 0x75d0f3, nullptr)
var_8_1.b = 0x21
int32_t var_30_6 = 0xf
int32_t var_34_5 = 0
var_44 = 0
sub_403490(&var_44, 0x764cf4, 0x18)
var_8_1.b = 0x22
int32_t* ecx_63 = sub_403cd0(arg3, &var_2c, &var_44, &var_5c)

if (arg1 + 0xc8 != ecx_63)
    if (*(arg1 + 0xdc) u>= 0x10)
        sub_403160(*(arg1 + 0xc8), *(arg1 + 0xdc) + 1, 1)
    
    *(arg1 + 0xdc) = 0xf
    bool cond:18_1 = *(arg1 + 0xdc) u< 0x10
    *(arg1 + 0xd8) = 0
    void* eax_123
    
    if (cond:18_1)
        eax_123 = arg1 + 0xc8
    else
        eax_123 = *(arg1 + 0xc8)
    
    *eax_123 = 0
    sub_4056a0(arg1 + 0xc8, ecx_63)

sub_403320(&var_2c)
sub_403320(&var_44)
var_8_1.b = 0xb
sub_403320(&var_5c)
sub_403360(&var_5c, 0x75d0f6)
var_8_1.b = 0x24
sub_403360(&var_44, 0x764d10)
var_8_1.b = 0x25
sub_409670(arg1 + 0xe0, sub_403cd0(arg3, &var_2c, &var_44, &var_5c))
sub_403320(&var_2c)
sub_403320(&var_44)
var_8_1.b = 0xb
sub_403320(&var_5c)
sub_403360(&var_44, 0x764dd4)
var_8_1.b = 0x26
*(arg1 + 0xf8) = sub_403c60(arg3, &var_44, 4)
var_8_1.b = 0xb
sub_403320(&var_44)
sub_403360(&var_44, 0x764de4)
var_8_1.b = 0x27
var_8_1.b = 0xb
int32_t eax_126
eax_126.b = sub_403c60(arg3, &var_44, 0) == 1
*(arg1 + 0xfc) = eax_126.b
sub_403320(&var_44)
sub_403360(&var_44, 0x764df4)
var_8_1.b = 0x28
*(arg1 + 0x100) = sub_403c60(arg3, &var_44, 0)
var_8_1.b = 0xb
sub_403320(&var_44)
sub_403360(&var_44, 0x764e00)
var_8_1.b = 0x29
*(arg1 + 0x104) = sub_403c60(arg3, &var_44, 0)
sub_403320(&var_44)
*(arg1 + 0x108) = 1
char* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
