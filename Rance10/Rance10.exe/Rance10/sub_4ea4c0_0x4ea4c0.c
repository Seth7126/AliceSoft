// 函数: sub_4ea4c0
// 地址: 0x4ea4c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?SetTaskExecutionResources@ResourceManager@details@Concurrency@@SAXGPAU_GROUP_AFFINITY@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_f4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_60 = 0xf
int32_t var_64 = 0
char var_74 = 0
sub_403490(&var_74, 0x765188, 6)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg3 + 4)
int32_t* ebx

if (ecx_1 != 0)
    char* edx_1 = &var_74
    
    if (var_60 u>= 0x10)
        edx_1 = var_74.d
    
    ebx = (*(*ecx_1 + 0x2c))(edx_1)
else
    ebx = nullptr

struct common::CEXArrayReader::VTable* const var_c4 = &common::CEXArrayReader::`vftable'
int32_t* var_c0 = ebx
var_8_1.b = 2

if (var_60 u>= 0x10)
    sub_403160(var_74.d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64_1 = 0
var_74 = 0
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x765114, 8)
var_8_1.b = 3
int32_t* ecx_3 = *(arg3 + 4)
int32_t* eax_7

if (ecx_3 != 0)
    char* edx_2 = &var_5c
    
    if (var_48 u>= 0x10)
        edx_2 = var_5c.d
    
    eax_7 = (*(*ecx_3 + 0x2c))(edx_2)
else
    eax_7 = nullptr

struct common::CEXArrayReader::VTable* const var_cc = &common::CEXArrayReader::`vftable'
int32_t* var_c8 = eax_7
var_8_1.b = 5

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0
int32_t var_60_2 = 0xf
int32_t var_64_2 = 0
var_74 = 0
sub_403490(&var_74, 0x765120, 0x16)
var_8_1.b = 6
int32_t* ecx_5 = *(arg3 + 4)
int32_t* eax_11

if (ecx_5 != 0)
    char* edx_3 = &var_74
    
    if (var_60_2 u>= 0x10)
        edx_3 = var_74.d
    
    eax_11 = (*(*ecx_5 + 0x2c))(edx_3)
else
    eax_11 = nullptr

struct common::CEXArrayReader::VTable* const var_d4 = &common::CEXArrayReader::`vftable'
int32_t* var_d0 = eax_11
var_8_1.b = 8

if (var_60_2 u>= 0x10)
    sub_403160(var_74.d, var_60_2 + 1, 1)

int32_t var_60_3 = 0xf
int32_t var_64_3 = 0
var_74 = 0
int32_t var_48_2 = 0xf
int32_t var_4c_2 = 0
var_5c = 0
sub_403490(&var_5c, 0x765138, 0xa)
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

struct common::CEXArrayReader::VTable* const var_dc = &common::CEXArrayReader::`vftable'
int32_t* var_d8 = eax_15
var_8_1.b = 0xb

if (var_48_2 u>= 0x10)
    sub_403160(var_5c.d, var_48_2 + 1, 1)

int32_t var_48_3 = 0xf
int32_t var_4c_3 = 0
var_5c = 0
int32_t var_60_4 = 0xf
int32_t var_64_4 = 0
var_74 = 0
sub_403490(&var_74, 0x765144, 0x18)
var_8_1.b = 0xc
int32_t* ecx_9 = *(arg3 + 4)
int32_t eax_19

if (ecx_9 != 0)
    char* edx_5 = &var_74
    
    if (var_60_4 u>= 0x10)
        edx_5 = var_74.d
    
    eax_19 = (*(*ecx_9 + 0x2c))(edx_5)
else
    eax_19 = 0

struct common::CEXArrayReader::VTable* const var_b0 = &common::CEXArrayReader::`vftable'
int32_t var_ac = eax_19
var_8_1.b = 0xe

if (var_60_4 u>= 0x10)
    sub_403160(var_74.d, var_60_4 + 1, 1)

int32_t var_60_5 = 0xf
int32_t var_64_5 = 0
var_74 = 0
int32_t var_48_4 = 0xf
int32_t var_4c_4 = 0
var_5c = 0
sub_403490(&var_5c, 0x7650d8, 0x10)
var_8_1.b = 0xf
int32_t* ecx_11 = *(arg3 + 4)
int32_t* eax_23

if (ecx_11 != 0)
    char* edx_6 = &var_5c
    
    if (var_48_4 u>= 0x10)
        edx_6 = var_5c.d
    
    eax_23 = (*(*ecx_11 + 0x2c))(edx_6)
else
    eax_23 = nullptr

struct common::CEXArrayReader::VTable* const var_e4 = &common::CEXArrayReader::`vftable'
int32_t* var_e0 = eax_23
var_8_1.b = 0x11

if (var_48_4 u>= 0x10)
    sub_403160(var_5c.d, var_48_4 + 1, 1)

int32_t var_48_5 = 0xf
int32_t var_4c_5 = 0
var_5c = 0
int32_t var_60_6 = 0xf
int32_t var_64_6 = 0
var_74 = 0
sub_403490(&var_74, 0x7650ec, 0x1e)
var_8_1.b = 0x12
int32_t* ecx_13 = *(arg3 + 4)
int32_t eax_27

if (ecx_13 != 0)
    char* edx_7 = &var_74
    
    if (var_60_6 u>= 0x10)
        edx_7 = var_74.d
    
    eax_27 = (*(*ecx_13 + 0x2c))(edx_7)
else
    eax_27 = 0

struct common::CEXArrayReader::VTable* const var_b8 = &common::CEXArrayReader::`vftable'
int32_t var_b4 = eax_27
var_8_1.b = 0x14

if (var_60_6 u>= 0x10)
    sub_403160(var_74.d, var_60_6 + 1, 1)

int32_t var_60_7 = 0xf
int32_t var_64_7 = 0
var_74 = 0
int32_t eax_31

if (ebx != 0)
    eax_31 = (*(*ebx + 0xc))(0, 0)
else
    eax_31 = 0

*(arg1 + 0x50) = eax_31
int32_t eax_33

if (ebx != 0)
    eax_33 = (*(*ebx + 0xc))(1, 0)
else
    eax_33 = 0

*(arg1 + 0x54) = eax_33
int32_t eax_35

if (eax_7 != 0)
    eax_35 = (*(*eax_7 + 0xc))(0, 0)
else
    eax_35 = 0

*(arg1 + 0x58) = eax_35
int32_t eax_37

if (eax_7 != 0)
    eax_37 = (*(*eax_7 + 0xc))(1, 0)
else
    eax_37 = 0

*(arg1 + 0x5c) = eax_37
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x75d14a, nullptr)
var_8_1.b = 0x15
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x76510c, 6)
var_8_1.b = 0x16
int32_t* ecx_21 = sub_403cd0(arg3, &var_5c, &var_44, &var_2c)

if (arg1 + 0x60 != ecx_21)
    if (*(arg1 + 0x74) u>= 0x10)
        sub_403160(*(arg1 + 0x60), *(arg1 + 0x74) + 1, 1)
    
    *(arg1 + 0x74) = 0xf
    bool cond:7_1 = *(arg1 + 0x74) u< 0x10
    *(arg1 + 0x70) = 0
    void* eax_42
    
    if (cond:7_1)
        eax_42 = arg1 + 0x60
    else
        eax_42 = *(arg1 + 0x60)
    
    *eax_42 = 0
    sub_4056a0(arg1 + 0x60, ecx_21)

if (var_48_5 u>= 0x10)
    sub_403160(var_5c.d, var_48_5 + 1, 1)

int32_t var_48_6 = 0xf
int32_t var_4c_6 = 0
var_5c = 0

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

var_8_1.b = 0x14
int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_403490(&var_2c, 0x75d127, nullptr)
var_8_1.b = 0x18
int32_t var_30_2 = 0xf
int32_t var_34_2 = 0
var_44 = 0
sub_403490(&var_44, 0x7650ac, 8)
var_8_1.b = 0x19
char* ecx_26 = sub_403cd0(arg3, &var_5c, &var_44, &var_2c)

if (arg1 + 0x78 != ecx_26)
    if (*(arg1 + 0x8c) u>= 0x10)
        sub_403160(*(arg1 + 0x78), *(arg1 + 0x8c) + 1, 1)
    
    *(arg1 + 0x8c) = 0xf
    bool cond:8_1 = *(arg1 + 0x8c) u< 0x10
    *(arg1 + 0x88) = 0
    char* eax_52
    
    if (cond:8_1)
        eax_52 = arg1 + 0x78
    else
        eax_52 = *(arg1 + 0x78)
    
    *eax_52 = 0
    sub_4056a0(arg1 + 0x78, ecx_26)

if (var_48_6 u>= 0x10)
    sub_403160(var_5c.d, var_48_6 + 1, 1)

int32_t var_48_7 = 0xf
int32_t var_4c_7 = 0
var_5c = 0

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

var_8_1.b = 0x14
int32_t var_30_3 = 0xf
int32_t var_34_3 = 0
var_44 = 0

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

int32_t var_30_4 = 0xf
int32_t var_34_4 = 0
var_44 = 0
sub_403490(&var_44, 0x7650b8, 0xe)
var_8_1.b = 0x1b
int32_t* ecx_29 = *(arg3 + 4)
int32_t eax_59

if (ecx_29 != 0)
    char* edx_8 = &var_44
    
    if (var_30_4 u>= 0x10)
        edx_8 = var_44.d
    
    eax_59 = (*(*ecx_29 + 8))(edx_8, 0)
else
    eax_59 = 0

*(arg1 + 0x94) = eax_59
var_8_1.b = 0x14

if (var_30_4 u>= 0x10)
    sub_403160(var_44.d, var_30_4 + 1, 1)

int32_t var_30_5 = 0xf
int32_t var_34_5 = 0
var_44 = 0
sub_403490(&var_44, 0x7650c8, 0xe)
var_8_1.b = 0x1c
int32_t* ecx_31 = *(arg3 + 4)
int32_t eax_63

if (ecx_31 != 0)
    char* edx_9 = &var_44
    
    if (var_30_5 u>= 0x10)
        edx_9 = var_44.d
    
    eax_63 = (*(*ecx_31 + 8))(edx_9, 0)
else
    eax_63 = 0

*(arg1 + 0x98) = eax_63
var_8_1.b = 0x14

if (var_30_5 u>= 0x10)
    sub_403160(var_44.d, var_30_5 + 1, 1)

int32_t var_98_3
int32_t var_90_1
int32_t edx_10

if (eax_15 != 0)
    var_98_3 = (*(*eax_15 + 0xc))(2, 0)
    var_90_1 = (*(*eax_15 + 0xc))(1, 0)
    edx_10 = (*(*eax_15 + 0xc))(0, 0)
else
    edx_10 = 0
    var_98_3 = 0
    var_90_1 = 0

int32_t ebx_5 = 0xff

if (edx_10 != zx.d(edx_10.b))
    int32_t eax_71 = 0xff
    
    if (edx_10 s< 0)
        eax_71 = 0
    
    edx_10 = eax_71

int32_t ecx_36 = var_90_1

if (ecx_36 != zx.d(ecx_36.b))
    int32_t eax_73 = 0xff
    
    if (ecx_36 s< 0)
        eax_73 = 0
    
    ecx_36 = eax_73

int32_t var_50 = ecx_36
int32_t ecx_37 = var_98_3

if (ecx_37 != zx.d(ecx_37.b))
    int32_t eax_75 = 0xff
    
    if (ecx_37 s< 0)
        eax_75 = 0
    
    ecx_37 = eax_75

int32_t var_4c_8 = ecx_37
int32_t var_48_8 = 0xff
*(arg1 + 0x9c) = edx_10.o
int32_t var_30_6 = 0xf
int32_t var_34_6 = 0
var_44 = 0
sub_403490(&var_44, 0x7652ec, 0xc)
var_8_1.b = 0x1d
int32_t* ecx_39 = *(arg3 + 4)
int32_t xmm0_1

if (ecx_39 != 0)
    char* edx_13 = &var_44
    
    if (var_30_6 u>= 0x10)
        edx_13 = var_44.d
    
    int32_t* var_f8_12 = ecx_39
    (*(*ecx_39 + 0xc))(edx_13, 0)
    xmm0_1 = fconvert.s(arg2)
else
    xmm0_1 = (zx.o(0)).d

var_8_1.b = 0x14
*(arg1 + 0xac) = xmm0_1

if (var_30_6 u>= 0x10)
    sub_403160(var_44.d, var_30_6 + 1, 1)

int32_t var_30_7 = 0xf
int32_t var_34_7 = 0
var_44 = 0
sub_403490(&var_44, 0x7652fc, 0xe)
var_8_1.b = 0x1e
int32_t* ecx_41 = *(arg3 + 4)
int32_t xmm0_2

if (ecx_41 != 0)
    char* edx_14 = &var_44
    
    if (var_30_7 u>= 0x10)
        edx_14 = var_44.d
    
    int32_t* var_f8_13 = ecx_41
    (*(*ecx_41 + 0xc))(edx_14, 0)
    int32_t var_90_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x8c], st0})
    unimplemented  {fstp dword [ebp-0x8c], st0}
    xmm0_2 = var_90_3
else
    xmm0_2 = (zx.o(0)).d

var_8_1.b = 0x14
*(arg1 + 0xb0) = xmm0_2

if (var_30_7 u>= 0x10)
    sub_403160(var_44.d, var_30_7 + 1, 1)

int32_t var_98_4
int32_t var_90_4
int32_t edx_15

if (eax_23 != 0)
    var_98_4 = (*(*eax_23 + 0xc))(2, 0)
    var_90_4 = (*(*eax_23 + 0xc))(1, 0)
    edx_15 = (*(*eax_23 + 0xc))(0, 0)
else
    edx_15 = 0
    var_98_4 = 0
    var_90_4 = 0

if (edx_15 != zx.d(edx_15.b))
    int32_t eax_89 = 0xff
    
    if (edx_15 s< 0)
        eax_89 = 0
    
    edx_15 = eax_89

int32_t ecx_46 = var_90_4

if (ecx_46 != zx.d(ecx_46.b))
    int32_t eax_91 = 0xff
    
    if (ecx_46 s< 0)
        eax_91 = 0
    
    ecx_46 = eax_91

int32_t var_50_1 = ecx_46
int32_t ecx_47 = var_98_4

if (ecx_47 != zx.d(ecx_47.b))
    if (ecx_47 s< 0)
        ebx_5 = 0
    
    ecx_47 = ebx_5

int32_t var_4c_9 = ecx_47
int32_t var_48_9 = 0xff
*(arg1 + 0xb4) = edx_15.o
int32_t var_30_8 = 0xf
int32_t var_34_8 = 0
var_44 = 0
sub_403490(&var_44, 0x76530c, 8)
var_8_1.b = 0x1f
int32_t* ecx_49 = *(arg3 + 4)
int32_t eax_93

if (ecx_49 != 0)
    char* edx_18 = &var_44
    
    if (var_30_8 u>= 0x10)
        edx_18 = var_44.d
    
    eax_93 = (*(*ecx_49 + 8))(edx_18, 0)
else
    eax_93 = 0

*(arg1 + 0xc4) = eax_93
var_8_1.b = 0x14

if (var_30_8 u>= 0x10)
    sub_403160(var_44.d, var_30_8 + 1, 1)

int32_t var_48_10 = 0xf
int32_t var_4c_10 = 0
var_5c = 0
sub_403490(&var_5c, 0x765318, 0x16)
var_8_1.b = 0x20
int32_t* ecx_51 = *(arg3 + 4)
int32_t eax_97

if (ecx_51 != 0)
    char* edx_19 = &var_5c
    
    if (var_48_10 u>= 0x10)
        edx_19 = var_5c.d
    
    eax_97 = (*(*ecx_51 + 0x2c))(edx_19)
else
    eax_97 = 0

struct common::CEXArrayReader::VTable* const var_9c = &common::CEXArrayReader::`vftable'
int32_t var_98_5 = eax_97
var_8_1.b = 0x22

if (var_48_10 u>= 0x10)
    sub_403160(var_5c.d, var_48_10 + 1, 1)

int32_t var_48_11 = 0xf
int32_t var_4c_11 = 0
var_5c = 0
int32_t var_60_8 = 0xf
int32_t var_64_8 = 0
var_74 = 0
sub_403490(&var_74, 0x76527c, 0x18)
var_8_1.b = 0x23
int32_t* ecx_53 = *(arg3 + 4)
int32_t eax_101

if (ecx_53 != 0)
    char* edx_20 = &var_74
    
    if (var_60_8 u>= 0x10)
        edx_20 = var_74.d
    
    eax_101 = (*(*ecx_53 + 0x2c))(edx_20)
else
    eax_101 = 0

struct common::CEXArrayReader::VTable* const var_a8 = &common::CEXArrayReader::`vftable'
int32_t var_a4_1 = eax_101
var_8_1.b = 0x25

if (var_60_8 u>= 0x10)
    sub_403160(var_74.d, var_60_8 + 1, 1)

int32_t var_60_9 = 0xf
int32_t var_64_9 = 0
var_74 = 0
int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x765298, 0x1e)
var_8_1.b = 0x26
int32_t* ecx_55 = *(arg3 + 4)
int32_t eax_105

if (ecx_55 != 0)
    char* edx_21 = &var_2c
    
    if (var_18_2 u>= 0x10)
        edx_21 = var_2c.d
    
    eax_105 = (*(*ecx_55 + 0x2c))(edx_21)
else
    eax_105 = 0

struct common::CEXArrayReader::VTable* const var_4c_12 = &common::CEXArrayReader::`vftable'
int32_t var_48_12 = eax_105
var_8_1.b = 0x28

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
int32_t var_30_9 = 0xf
int32_t var_34_9 = 0
var_44 = 0
sub_403490(&var_44, 0x7652b8, 0x18)
var_8_1.b = 0x29
int32_t* ecx_57 = *(arg3 + 4)
int32_t eax_109

if (ecx_57 != 0)
    char* edx_22 = &var_44
    
    if (var_30_9 u>= 0x10)
        edx_22 = var_44.d
    
    eax_109 = (*(*ecx_57 + 0x2c))(edx_22)
else
    eax_109 = 0

struct common::CEXArrayReader::VTable* const var_94 = &common::CEXArrayReader::`vftable'
int32_t var_90_5 = eax_109
var_8_1.b = 0x2b

if (var_30_9 u>= 0x10)
    sub_403160(var_44.d, var_30_9 + 1, 1)

int32_t var_30_10 = 0xf
int32_t var_34_10 = 0
var_44 = 0
int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_403490(&var_2c, 0x7652d4, 0x14)
var_8_1.b = 0x2c
int32_t* ecx_59 = *(arg3 + 4)
int32_t eax_113

if (ecx_59 != 0)
    char* edx_23 = &var_2c
    
    if (var_18_4 u>= 0x10)
        edx_23 = var_2c.d
    
    eax_113 = (*(*ecx_59 + 8))(edx_23, 0)
else
    eax_113 = 0

*(arg1 + 0xcc) = eax_113
var_8_1.b = 0x2b

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
sub_403490(&var_2c, 0x765204, 0x16)
var_8_1.b = 0x2d
int32_t* ecx_61 = *(arg3 + 4)
int32_t eax_117

if (ecx_61 != 0)
    char* edx_24 = &var_2c
    
    if (var_18_5 u>= 0x10)
        edx_24 = var_2c.d
    
    eax_117 = (*(*ecx_61 + 8))(edx_24, 0)
else
    eax_117 = 0

*(arg1 + 0xc8) = eax_117
var_8_1.b = 0x2b

if (var_18_5 u>= 0x10)
    sub_403160(var_2c.d, var_18_5 + 1, 1)

int32_t eax_121

if (eax_11 != 0)
    eax_121 = (*(*eax_11 + 0xc))(0, 0)
else
    eax_121 = 0

*(arg1 + 0xd0) = eax_121
int32_t eax_123

if (eax_11 != 0)
    eax_123 = (*(*eax_11 + 0xc))(1, 0)
else
    eax_123 = 0

*(arg1 + 0xd4) = eax_123
int32_t var_18_6 = 0xf
int32_t var_1c_6 = 0
var_2c = 0
sub_403490(&var_2c, 0x76521c, 0x1c)
var_8_1.b = 0x2e
int32_t* ecx_65 = *(arg3 + 4)
int32_t eax_125

if (ecx_65 != 0)
    char* edx_25 = &var_2c
    
    if (var_18_6 u>= 0x10)
        edx_25 = var_2c.d
    
    eax_125 = (*(*ecx_65 + 8))(edx_25, 0)
else
    eax_125 = 0

*(arg1 + 0xd8) = eax_125
var_8_1.b = 0x2b

if (var_18_6 u>= 0x10)
    sub_403160(var_2c.d, var_18_6 + 1, 1)

int32_t var_18_7 = 0xf
int32_t var_1c_7 = 0
var_2c = 0
sub_403490(&var_2c, 0x76523c, 0x1c)
var_8_1.b = 0x2f
int32_t* ecx_67 = *(arg3 + 4)
int32_t eax_129

if (ecx_67 != 0)
    char* edx_26 = &var_2c
    
    if (var_18_7 u>= 0x10)
        edx_26 = var_2c.d
    
    eax_129 = (*(*ecx_67 + 8))(edx_26, 0)
else
    eax_129 = 0

*(arg1 + 0xe0) = eax_129
var_8_1.b = 0x2b

if (var_18_7 u>= 0x10)
    sub_403160(var_2c.d, var_18_7 + 1, 1)

int32_t var_18_8 = 0xf
int32_t var_1c_8 = 0
var_2c = 0
sub_403490(&var_2c, 0x76525c, 0x1c)
var_8_1.b = 0x30
int32_t* ecx_69 = *(arg3 + 4)
int32_t eax_133

if (ecx_69 != 0)
    char* edx_27 = &var_2c
    
    if (var_18_8 u>= 0x10)
        edx_27 = var_2c.d
    
    eax_133 = (*(*ecx_69 + 8))(edx_27, 0)
else
    eax_133 = 0

*(arg1 + 0xe4) = eax_133
var_8_1.b = 0x2b

if (var_18_8 u>= 0x10)
    sub_403160(var_2c.d, var_18_8 + 1, 1)

int32_t eax_137 = sub_403210(&var_b0, 2, 0)
int32_t eax_138 = sub_403210(&var_b0, 1, 0)
void var_6c
*(arg1 + 0xe8) = *sub_402f50(&var_6c, sub_403210(&var_b0, 0, 0), eax_138, eax_137, 0xff)
sub_403360(&var_2c, 0x765190)
var_8_1.b = 0x31
*(arg1 + 0xf8) = sub_403c90(arg3, &var_2c)
var_8_1.b = 0x2b
sub_403320(&var_2c)
sub_403360(&var_2c, 0x7651ac)
var_8_1.b = 0x32
*(arg1 + 0xfc) = sub_403c90(arg3, &var_2c)
var_8_1.b = 0x2b
sub_403320(&var_2c)
int32_t eax_141 = sub_403210(&var_b8, 2, 0)
int32_t eax_142 = sub_403210(&var_b8, 1, 0)
*(arg1 + 0x100) = *sub_402f50(&var_6c, sub_403210(&var_b8, 0, 0), eax_142, eax_141, 0xff)
sub_403360(&var_2c, 0x7651cc)
var_8_1.b = 0x33
*(arg1 + 0x11c) = sub_403c60(arg3, &var_2c, 0)
var_8_1.b = 0x2b
sub_403320(&var_2c)
sub_403360(&var_2c, 0x7651ec)
var_8_1.b = 0x34
*(arg1 + 0x120) = sub_403c60(arg3, &var_2c, 0)
var_8_1.b = 0x2b
sub_403320(&var_2c)
int32_t eax_147 = sub_403200(&var_94)
sub_416ab0(arg1 + 0x110, eax_147)
int32_t esi_1 = 0

if (eax_147 s> 0)
    do
        sub_403360(&var_2c, 0x75d14b)
        var_8_1.b = 0x35
        void var_8c
        char* eax_149 = sub_403230(&var_94, &var_8c, esi_1, &var_2c)
        sub_409670(sub_416aa0(arg1 + 0x110, esi_1), eax_149)
        sub_403320(&var_8c)
        var_8_1.b = 0x2b
        sub_403320(&var_2c)
        esi_1 += 1
    while (esi_1 s< eax_147)

int32_t result
result.b = 1
*(arg1 + 0x124) = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
