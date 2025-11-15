// 函数: sub_4c02e0
// 地址: 0x4c02e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_732ff8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_104 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x762380, 0x1a)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg3 + 4)
int32_t* edi

if (ecx_1 != 0)
    char* edx_1 = &var_44
    
    if (var_30 u>= 0x10)
        edx_1 = var_44.d
    
    edi = (*(*ecx_1 + 0x2c))(edx_1)
else
    edi = nullptr

struct common::CEXArrayReader::VTable* const var_e0 = &common::CEXArrayReader::`vftable'
int32_t* var_dc = edi
var_8_1.b = 2

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x762374, 0xa)
var_8_1.b = 3
int32_t* ecx_3 = *(arg3 + 4)
int32_t eax_7

if (ecx_3 != 0)
    char* edx_2 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_2 = var_2c.d
    
    eax_7 = (*(*ecx_3 + 8))(edx_2, 0)
else
    eax_7 = 0

var_8_1.b = 2
eax_7.b = eax_7 == 1
*(arg1 + 4) = eax_7.b

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t eax_11

if (edi != 0)
    eax_11 = (*(*edi + 0xc))(0, 0)
else
    eax_11 = 0

*(arg1 + 8) = eax_11
int32_t eax_13

if (edi != 0)
    eax_13 = (*(*edi + 0xc))(1, 0)
else
    eax_13 = 0

*(arg1 + 0xc) = eax_13
int32_t eax_15

if (edi != 0)
    eax_15 = (*(*edi + 0xc))(2, 0)
else
    eax_15 = 0

*(arg1 + 0x10) = eax_15
int32_t var_60 = 0xf
int32_t var_64 = 0
char var_74 = 0
sub_403490(&var_74, 0x75d023, nullptr)
var_8_1.b = 4
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_403490(&var_2c, 0x762500, 6)
var_8_1.b = 5
var_8_1.b = 6
char var_5c
sub_4be9a0(arg1, sub_403cd0(arg3, &var_5c, &var_2c, &var_74))
int32_t var_48

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c = 0

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

var_8_1.b = 2
int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0

if (var_60 u>= 0x10)
    sub_403160(var_74.d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64_1 = 0
var_74 = 0
sub_403490(&var_74, 0x75d022, nullptr)
var_8_1.b = 7
int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
sub_403490(&var_2c, 0x7624f4, 0xa)
var_8_1.b = 8
var_8_1.b = 9
sub_4bea10(arg1, sub_403cd0(arg3, &var_5c, &var_2c, &var_74))

if (var_48_1 u>= 0x10)
    sub_403160(var_5c.d, var_48_1 + 1, 1)

int32_t var_48_2 = 0xf
int32_t var_4c_1 = 0
var_5c = 0

if (var_18_3 u>= 0x10)
    sub_403160(var_2c.d, var_18_3 + 1, 1)

var_8_1.b = 2
int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0

if (var_60_1 u>= 0x10)
    sub_403160(var_74.d, var_60_1 + 1, 1)

int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
sub_403490(&var_2c, 0x762510, 0xe)
var_8_1.b = 0xa
int32_t* ecx_16 = *(arg3 + 4)
int32_t* edi_1

if (ecx_16 != 0)
    char* edx_3 = &var_2c
    
    if (var_18_5 u>= 0x10)
        edx_3 = var_2c.d
    
    edi_1 = (*(*ecx_16 + 0x24))(edx_3)
else
    edi_1 = nullptr

var_8_1.b = 2

if (var_18_5 u>= 0x10)
    sub_403160(var_2c.d, var_18_5 + 1, 1)

struct common::CEXArrayReader::VTable* const var_d8

if (edi_1 != 0)
    struct common::CEXTreeReader::VTable* const var_cc = &common::CEXTreeReader::`vftable'
    var_8_1.b = 0xb
    int32_t var_60_2 = 0xf
    int32_t var_64_2 = 0
    var_74 = 0
    sub_403490(&var_74, 0x75d027, nullptr)
    var_8_1.b = 0xc
    int32_t var_18_6 = 0xf
    int32_t var_1c_6 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x762508, 6)
    var_8_1.b = 0xd
    sub_409670(arg1 + 0x48, sub_403cd0(&var_cc, &var_5c, &var_2c, &var_74))
    
    if (var_48_2 u>= 0x10)
        sub_403160(var_5c.d, var_48_2 + 1, 1)
    
    int32_t var_48_3 = 0xf
    int32_t var_4c_2 = 0
    var_5c = 0
    
    if (var_18_6 u>= 0x10)
        sub_403160(var_2c.d, var_18_6 + 1, 1)
    
    var_8_1.b = 0xb
    int32_t var_18_7 = 0xf
    int32_t var_1c_7 = 0
    var_2c = 0
    
    if (var_60_2 u>= 0x10)
        sub_403160(var_74.d, var_60_2 + 1, 1)
    
    int32_t var_60_3 = 0xf
    int32_t var_64_3 = 0
    var_74 = 0
    sub_403490(&var_74, 0x75d026, nullptr)
    var_8_1.b = 0xe
    int32_t var_18_8 = 0xf
    int32_t var_1c_8 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x7624b0, 0xa)
    var_8_1.b = 0xf
    sub_409670(arg1 + 0x60, sub_403cd0(&var_cc, &var_5c, &var_2c, &var_74))
    
    if (var_48_3 u>= 0x10)
        sub_403160(var_5c.d, var_48_3 + 1, 1)
    
    var_48_2 = 0xf
    int32_t var_4c_3 = 0
    var_5c = 0
    
    if (var_18_8 u>= 0x10)
        sub_403160(var_2c.d, var_18_8 + 1, 1)
    
    var_8_1.b = 0xb
    int32_t var_18_9 = 0xf
    int32_t var_1c_9 = 0
    var_2c = 0
    
    if (var_60_3 u>= 0x10)
        sub_403160(var_74.d, var_60_3 + 1, 1)
    
    int32_t var_18_10 = 0xf
    int32_t var_1c_10 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x76249c, 0x12)
    var_8_1.b = 0x10
    int32_t* edi_2 = edi_1
    int32_t eax_47
    
    if (edi_2 != 0)
        char* ecx_31 = &var_2c
        
        if (var_18_10 u>= 0x10)
            ecx_31 = var_2c.d
        
        eax_47 = (*(*edi_2 + 8))(ecx_31, 0)
    else
        eax_47 = 0
    
    *(arg1 + 0x78) = eax_47
    var_8_1.b = 0xb
    
    if (var_18_10 u>= 0x10)
        sub_403160(var_2c.d, var_18_10 + 1, 1)
    
    int32_t var_18_11 = 0xf
    int32_t var_1c_11 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x76248c, 0xe)
    var_8_1.b = 0x11
    int32_t eax_51
    
    if (edi_2 != 0)
        char* ecx_34 = &var_2c
        
        if (var_18_11 u>= 0x10)
            ecx_34 = var_2c.d
        
        eax_51 = (*(*edi_2 + 8))(ecx_34, 0)
    else
        eax_51 = 0
    
    *(arg1 + 0x7c) = eax_51
    var_8_1.b = 0xb
    
    if (var_18_11 u>= 0x10)
        sub_403160(var_2c.d, var_18_11 + 1, 1)
    
    int32_t var_18_12 = 0xf
    int32_t var_1c_12 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x762474, 0x16)
    var_8_1.b = 0x12
    int32_t eax_55
    
    if (edi_2 != 0)
        char* ecx_37 = &var_2c
        
        if (var_18_12 u>= 0x10)
            ecx_37 = var_2c.d
        
        eax_55 = (*(*edi_2 + 8))(ecx_37, 0)
    else
        eax_55 = 0
    
    *(arg1 + 0x80) = eax_55
    var_8_1.b = 0xb
    
    if (var_18_12 u>= 0x10)
        sub_403160(var_2c.d, var_18_12 + 1, 1)
    
    int32_t var_18_13 = 0xf
    int32_t var_1c_13 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x7624ec, 4)
    var_8_1.b = 0x13
    
    if (edi_2 != 0)
        char* edx_4 = &var_2c
        
        if (var_18_13 u>= 0x10)
            edx_4 = var_2c.d
        
        edi_2 = (*(*edi_2 + 0x2c))(edx_4)
    
    var_d8 = &common::CEXArrayReader::`vftable'
    int32_t* var_d4_1 = edi_2
    var_8_1.b = 0x15
    
    if (var_18_13 u>= 0x10)
        sub_403160(var_2c.d, var_18_13 + 1, 1)
    
    int32_t var_18_14 = 0xf
    int32_t var_1c_14 = 0
    var_2c = 0
    int32_t eax_63
    
    if (edi_2 != 0)
        eax_63 = (*(*edi_2 + 0xc))(0, 0)
    else
        eax_63 = 0
    
    *(arg1 + 0x84) = eax_63
    int32_t eax_65
    
    if (edi_2 != 0)
        eax_65 = (*(*edi_2 + 0xc))(1, 0)
    else
        eax_65 = 0
    
    *(arg1 + 0x88) = eax_65
    int32_t eax_67
    
    if (edi_2 != 0)
        eax_67 = (*(*edi_2 + 0xc))(2, 0)
    else
        eax_67 = 0
    
    *(arg1 + 0x8c) = eax_67
    *(arg1 + 0x90) = 0
    var_8_1.b = 2
else
    void var_c4
    sub_4be650(&var_c4)
    sub_4c1170(arg1 + 0x48, &var_c4)
    sub_408940(&var_c4)

int32_t var_18_15 = 0xf
int32_t var_1c_15 = 0
var_2c = 0
sub_403490(&var_2c, 0x7624dc, 0xe)
var_8_1.b = 0x16
int32_t* ecx_45 = *(arg3 + 4)
int32_t* edi_3

if (ecx_45 != 0)
    char* edx_5 = &var_2c
    
    if (var_18_15 u>= 0x10)
        edx_5 = var_2c.d
    
    edi_3 = (*(*ecx_45 + 0x2c))(edx_5)
else
    edi_3 = nullptr

struct common::CEXArrayReader::VTable* const var_e8 = &common::CEXArrayReader::`vftable'
int32_t* var_e4 = edi_3
var_8_1.b = 0x18

if (var_18_15 u>= 0x10)
    sub_403160(var_2c.d, var_18_15 + 1, 1)

int32_t var_18_16 = 0xf
int32_t var_1c_16 = 0
var_2c = 0
int32_t var_30_2 = 0xf
int32_t var_34_2 = 0
var_44 = 0
sub_403490(&var_44, 0x7624d0, 0xa)
var_8_1.b = 0x19
int32_t* ecx_47 = *(arg3 + 4)
int32_t* eax_73

if (ecx_47 != 0)
    char* edx_6 = &var_44
    
    if (var_30_2 u>= 0x10)
        edx_6 = var_44.d
    
    eax_73 = (*(*ecx_47 + 0x2c))(edx_6)
else
    eax_73 = nullptr

struct common::CEXArrayReader::VTable* const var_f0 = &common::CEXArrayReader::`vftable'
int32_t* var_ec = eax_73
var_8_1.b = 0x1b

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

int32_t var_30_3 = 0xf
int32_t var_34_3 = 0
var_44 = 0
int32_t var_18_17 = 0xf
int32_t var_1c_17 = 0
var_2c = 0
sub_403490(&var_2c, 0x7624bc, 0x10)
var_8_1.b = 0x1c
int32_t* ecx_49 = *(arg3 + 4)
int32_t eax_77

if (ecx_49 != 0)
    char* edx_7 = &var_2c
    
    if (var_18_17 u>= 0x10)
        edx_7 = var_2c.d
    
    eax_77 = (*(*ecx_49 + 0x2c))(edx_7)
else
    eax_77 = 0

var_d8 = &common::CEXArrayReader::`vftable'
int32_t var_d4_2 = eax_77
var_8_1.b = 0x1e

if (var_18_17 u>= 0x10)
    sub_403160(var_2c.d, var_18_17 + 1, 1)

int32_t var_18_18 = 0xf
int32_t var_1c_18 = 0
var_2c = 0
int32_t var_60_4 = 0xf
int32_t var_64_4 = 0
var_74 = 0
sub_403490(&var_74, 0x75d02f, nullptr)
var_8_1.b = 0x1f
int32_t var_30_4 = 0xf
int32_t var_34_4 = 0
var_44 = 0
sub_403490(&var_44, 0x762570, 8)
var_8_1.b = 0x20
char* edx_8 = sub_403cd0(arg3, &var_5c, &var_44, &var_74)
char* ecx_53 = arg1 + 0x94

if (ecx_53 != edx_8)
    if (*(ecx_53 + 0x14) u>= 0x10)
        sub_403160(*ecx_53, *(ecx_53 + 0x14) + 1, 1)
        ecx_53 = arg1 + 0x94
    
    *(ecx_53 + 0x14) = 0xf
    bool cond:9_1 = *(ecx_53 + 0x14) u< 0x10
    *(ecx_53 + 0x10) = 0
    char* eax_84
    
    if (cond:9_1)
        eax_84 = ecx_53
    else
        eax_84 = *ecx_53
    
    *eax_84 = 0
    sub_4056a0(ecx_53, edx_8)

if (var_48_2 u>= 0x10)
    sub_403160(var_5c.d, var_48_2 + 1, 1)

int32_t var_48_4 = 0xf
int32_t var_4c_4 = 0
var_5c = 0

if (var_30_4 u>= 0x10)
    sub_403160(var_44.d, var_30_4 + 1, 1)

var_8_1.b = 0x1e
int32_t var_30_5 = 0xf
int32_t var_34_5 = 0
var_44 = 0

if (var_60_4 u>= 0x10)
    sub_403160(var_74.d, var_60_4 + 1, 1)

int32_t eax_91

if (edi_3 != 0)
    eax_91 = (*(*edi_3 + 0xc))(0, 0)
else
    eax_91 = 0

*(arg1 + 0xb4) = eax_91
int32_t eax_93

if (edi_3 != 0)
    eax_93 = (*(*edi_3 + 0xc))(1, 0)
else
    eax_93 = 0

*(arg1 + 0xb8) = eax_93
int32_t eax_95

if (edi_3 != 0)
    eax_95 = (*(*edi_3 + 0xc))(2, 0)
else
    eax_95 = 0

*(arg1 + 0xc0) = eax_95
int32_t eax_97

if (edi_3 != 0)
    eax_97 = (*(*edi_3 + 0xc))(3, 0)
else
    eax_97 = 0

*(arg1 + 0xc4) = eax_97
int32_t var_30_6 = 0xf
int32_t var_34_6 = 0
var_44 = 0
sub_403490(&var_44, 0x762560, 0xc)
var_8_1.b = 0x22
int32_t* ecx_59 = *(arg3 + 4)
int32_t eax_99

if (ecx_59 != 0)
    char* edx_9 = &var_44
    
    if (var_30_6 u>= 0x10)
        edx_9 = var_44.d
    
    eax_99 = (*(*ecx_59 + 8))(edx_9, 0)
else
    eax_99 = 0

*(arg1 + 0xc8) = eax_99
var_8_1.b = 0x1e

if (var_30_6 u>= 0x10)
    sub_403160(var_44.d, var_30_6 + 1, 1)

int32_t var_30_7 = 0xf
int32_t var_34_7 = 0
var_44 = 0
sub_403490(&var_44, 0x762550, 0xe)
var_8_1.b = 0x23
int32_t* ecx_61 = *(arg3 + 4)
int32_t eax_103

if (ecx_61 != 0)
    char* edx_10 = &var_44
    
    if (var_30_7 u>= 0x10)
        edx_10 = var_44.d
    
    eax_103 = (*(*ecx_61 + 8))(edx_10, 0)
else
    eax_103 = 0

*(arg1 + 0xd0) = eax_103
var_8_1.b = 0x1e

if (var_30_7 u>= 0x10)
    sub_403160(var_44.d, var_30_7 + 1, 1)

int32_t var_30_8 = 0xf
int32_t var_34_8 = 0
var_44 = 0
sub_403490(&var_44, 0x7625a4, 0xe)
var_8_1.b = 0x24
int32_t* ecx_63 = *(arg3 + 4)
int32_t eax_107

if (ecx_63 != 0)
    char* edx_11 = &var_44
    
    if (var_30_8 u>= 0x10)
        edx_11 = var_44.d
    
    eax_107 = (*(*ecx_63 + 8))(edx_11, 0)
else
    eax_107 = 0

*(arg1 + 0xd4) = eax_107
var_8_1.b = 0x1e

if (var_30_8 u>= 0x10)
    sub_403160(var_44.d, var_30_8 + 1, 1)

int32_t var_d0_1
int32_t var_c8_3
int32_t edx_12

if (eax_73 != 0)
    var_c8_3 = (*(*eax_73 + 0xc))(2, 0)
    var_d0_1 = (*(*eax_73 + 0xc))(1, 0)
    edx_12 = (*(*eax_73 + 0xc))(0, 0)
else
    edx_12 = 0
    var_c8_3 = 0
    var_d0_1 = 0

int32_t edi_5 = 0xff

if (edx_12 != zx.d(edx_12.b))
    int32_t eax_115 = 0xff
    
    if (edx_12 s< 0)
        eax_115 = 0
    
    edx_12 = eax_115

int32_t ecx_68 = var_d0_1
int32_t var_3c = edx_12

if (ecx_68 != zx.d(ecx_68.b))
    int32_t eax_117 = 0xff
    
    if (ecx_68 s< 0)
        eax_117 = 0
    
    ecx_68 = eax_117

int32_t var_38 = ecx_68
int32_t ecx_69 = var_c8_3

if (ecx_69 != zx.d(ecx_69.b))
    if (ecx_69 s< 0)
        edi_5 = 0
    
    ecx_69 = edi_5

int32_t var_34_9 = ecx_69
int32_t var_30_9 = 0xff
*(arg1 + 0xd8) = var_3c.o
int32_t var_30_10 = 0xf
int32_t var_34_10 = 0
var_44 = 0
sub_403490(&var_44, 0x762594, 0xc)
var_8_1.b = 0x25
int32_t* ecx_71 = *(arg3 + 4)
int32_t xmm0_1

if (ecx_71 != 0)
    char* edx_15 = &var_44
    
    if (var_30_10 u>= 0x10)
        edx_15 = var_44.d
    
    int32_t* var_108_18 = ecx_71
    (*(*ecx_71 + 0xc))(edx_15, 0)
    xmm0_1 = fconvert.s(arg2)
else
    xmm0_1 = (zx.o(0)).d

var_8_1.b = 0x1e
*(arg1 + 0xe8) = xmm0_1

if (var_30_10 u>= 0x10)
    sub_403160(var_44.d, var_30_10 + 1, 1)

int32_t var_30_11 = 0xf
int32_t var_34_11 = 0
var_44 = 0
sub_403490(&var_44, 0x762584, 0xe)
var_8_1.b = 0x26
int32_t* ecx_73 = *(arg3 + 4)
int32_t xmm0_2

if (ecx_73 != 0)
    char* edx_16 = &var_44
    
    if (var_30_11 u>= 0x10)
        edx_16 = var_44.d
    
    int32_t* var_108_19 = ecx_73
    (*(*ecx_73 + 0xc))(edx_16, 0)
    int32_t var_c8_5 = fconvert.s(unimplemented  {fstp dword [ebp-0xc4], st0})
    unimplemented  {fstp dword [ebp-0xc4], st0}
    xmm0_2 = var_c8_5
else
    xmm0_2 = (zx.o(0)).d

var_8_1.b = 0x1e
*(arg1 + 0xec) = xmm0_2

if (var_30_11 u>= 0x10)
    sub_403160(var_44.d, var_30_11 + 1, 1)

int32_t eax_127 = sub_403210(&var_d8, 2, 0)
int32_t eax_128 = sub_403210(&var_d8, 1, 0)
*(arg1 + 0xf0) = *sub_402f50(&var_3c, sub_403210(&var_d8, 0, 0), eax_128, eax_127, 0xff)
sub_403360(&var_5c, 0x76257c)
var_8_1.b = 0x27
*(arg1 + 0x100) = sub_403c60(arg3, &var_5c, 0)
var_8_1.b = 0x1e
sub_403320(&var_5c)
sub_403360(&var_5c, 0x762544)
var_8_1.b = 0x28
*(arg1 + 0x104) = sub_403c60(arg3, &var_5c, 0)
var_8_1.b = 0x1e
sub_403320(&var_5c)
sub_403360(&var_5c, 0x76253c)
var_8_1.b = 0x29
*(arg1 + 0x108) = sub_403c60(arg3, &var_5c, 0)
var_8_1.b = 0x1e
sub_403320(&var_5c)
sub_403360(&var_5c, 0x762530)
var_8_1.b = 0x2a
var_8_1.b = 0x1e
int32_t eax_134
eax_134.b = sub_403c60(arg3, &var_5c, 0) == 1
*(arg1 + 0x10c) = eax_134.b
sub_403320(&var_5c)
sub_403360(&var_5c, 0x762520)
var_8_1.b = 0x2b
*(arg1 + 0x110) = sub_403c60(arg3, &var_5c, 0xffffffff)
sub_403320(&var_5c)
*(arg1 + 0x114) = 1
char* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
