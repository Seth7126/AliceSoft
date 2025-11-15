// 函数: sub_4c4260
// 地址: 0x4c4260
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_7c = 0xffffffff
int32_t (* var_80)(void* arg1) = sub_7333ce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_78
int32_t eax_2 = __security_cookie ^ &var_78
int32_t var_c8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
sub_403490(&var_20, 0x762680, 6)
int32_t var_7c_1 = 0
int32_t* ecx_1 = *(arg3 + 4)
int32_t* ebx

if (ecx_1 != 0)
    char* edx_1 = &var_20
    
    if (var_c u>= 0x10)
        edx_1 = var_20.d
    
    ebx = (*(*ecx_1 + 0x2c))(edx_1)
else
    ebx = nullptr

struct common::CEXArrayReader::VTable* const var_90 = &common::CEXArrayReader::`vftable'
int32_t* var_8c = ebx
var_7c_1.b = 2

if (var_c u>= 0x10)
    sub_403160(var_20.d, var_c + 1, 1)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
sub_403490(&var_38, 0x7627d4, 6)
var_7c_1.b = 3
int32_t* ecx_3 = *(arg3 + 4)
int32_t* edi_1

if (ecx_3 != 0)
    char* edx_2 = &var_38
    
    if (var_24 u>= 0x10)
        edx_2 = var_38.d
    
    edi_1 = (*(*ecx_3 + 0x2c))(edx_2)
else
    edi_1 = nullptr

struct common::CEXArrayReader::VTable* const var_98 = &common::CEXArrayReader::`vftable'
int32_t* var_94 = edi_1
var_7c_1.b = 5

if (var_24 u>= 0x10)
    sub_403160(var_38.d, var_24 + 1, 1)

int32_t var_24_1 = 0xf
int32_t var_28_1 = 0
var_38 = 0
int32_t var_c_2 = 0xf
int32_t var_10_2 = 0
var_20 = 0
sub_403490(&var_20, 0x7627cc, 4)
var_7c_1.b = 6
int32_t* ecx_5 = *(arg3 + 4)
int32_t* eax_12

if (ecx_5 != 0)
    char* edx_3 = &var_20
    
    if (var_c_2 u>= 0x10)
        edx_3 = var_20.d
    
    eax_12 = (*(*ecx_5 + 0x2c))(edx_3)
else
    eax_12 = nullptr

struct common::CEXArrayReader::VTable* const var_a0 = &common::CEXArrayReader::`vftable'
int32_t* var_9c = eax_12
var_7c_1.b = 8

if (var_c_2 u>= 0x10)
    sub_403160(var_20.d, var_c_2 + 1, 1)

int32_t var_c_3 = 0xf
int32_t var_10_3 = 0
var_20 = 0
int32_t var_24_2 = 0xf
int32_t var_28_2 = 0
var_38 = 0
sub_403490(&var_38, 0x7627c4, 4)
var_7c_1.b = 9
int32_t* ecx_7 = *(arg3 + 4)
int32_t* eax_17

if (ecx_7 != 0)
    char* edx_4 = &var_38
    
    if (var_24_2 u>= 0x10)
        edx_4 = var_38.d
    
    eax_17 = (*(*ecx_7 + 0x2c))(edx_4)
else
    eax_17 = nullptr

struct common::CEXArrayReader::VTable* const var_a8 = &common::CEXArrayReader::`vftable'
int32_t* var_a4 = eax_17
var_7c_1.b = 0xb

if (var_24_2 u>= 0x10)
    sub_403160(var_38.d, var_24_2 + 1, 1)

int32_t var_24_3 = 0xf
int32_t var_28_3 = 0
var_38 = 0
int32_t var_c_4 = 0xf
int32_t var_10_4 = 0
var_20 = 0
sub_403490(&var_20, 0x7627b8, 0xa)
var_7c_1.b = 0xc
int32_t* ecx_9 = *(arg3 + 4)
int32_t* eax_22

if (ecx_9 != 0)
    char* edx_5 = &var_20
    
    if (var_c_4 u>= 0x10)
        edx_5 = var_20.d
    
    eax_22 = (*(*ecx_9 + 0x2c))(edx_5)
else
    eax_22 = nullptr

struct common::CEXArrayReader::VTable* const var_b0 = &common::CEXArrayReader::`vftable'
int32_t* var_ac = eax_22
var_7c_1.b = 0xe

if (var_c_4 u>= 0x10)
    sub_403160(var_20.d, var_c_4 + 1, 1)

int32_t var_c_5 = 0xf
int32_t var_10_5 = 0
var_20 = 0
int32_t var_24_4 = 0xf
int32_t var_28_4 = 0
var_38 = 0
sub_403490(&var_38, 0x762800, 0x10)
var_7c_1.b = 0xf
int32_t* ecx_11 = *(arg3 + 4)
int32_t* eax_27

if (ecx_11 != 0)
    char* edx_6 = &var_38
    
    if (var_24_4 u>= 0x10)
        edx_6 = var_38.d
    
    eax_27 = (*(*ecx_11 + 0x2c))(edx_6)
else
    eax_27 = nullptr

var_78 = eax_27
struct common::CEXArrayReader::VTable* const var_b8 = &common::CEXArrayReader::`vftable'
int32_t* var_b4 = eax_27
var_7c_1.b = 0x11

if (var_24_4 u>= 0x10)
    sub_403160(var_38.d, var_24_4 + 1, 1)

int32_t var_24_5 = 0xf
int32_t var_28_5 = 0
var_38 = 0
int32_t var_c_6 = 0xf
int32_t var_10_6 = 0
var_20 = 0
sub_403490(&var_20, 0x7627f4, 8)
var_7c_1.b = 0x12
int32_t* ecx_13 = *(arg3 + 4)
int32_t eax_32

if (ecx_13 != 0)
    char* edx_7 = &var_20
    
    if (var_c_6 u>= 0x10)
        edx_7 = var_20.d
    
    eax_32 = (*(*ecx_13 + 8))(edx_7, 0)
else
    eax_32 = 0

*(arg1 + 4) = eax_32
var_7c_1.b = 0x11

if (var_c_6 u>= 0x10)
    sub_403160(var_20.d, var_c_6 + 1, 1)

int32_t var_c_7 = 0xf
int32_t var_10_7 = 0
var_20 = 0
sub_403490(&var_20, 0x7627e8, 0xa)
var_7c_1.b = 0x13
int32_t* ecx_15 = *(arg3 + 4)
int32_t eax_37

if (ecx_15 != 0)
    char* edx_8 = &var_20
    
    if (var_c_7 u>= 0x10)
        edx_8 = var_20.d
    
    eax_37 = (*(*ecx_15 + 8))(edx_8, 0)
else
    eax_37 = 0

*(arg1 + 8) = eax_37
var_7c_1.b = 0x11

if (var_c_7 u>= 0x10)
    sub_403160(var_20.d, var_c_7 + 1, 1)

int32_t eax_41

if (ebx != 0)
    eax_41 = (*(*ebx + 0xc))(0, 0)
else
    eax_41 = 0

*(arg1 + 0xc) = eax_41
int32_t eax_43

if (ebx != 0)
    eax_43 = (*(*ebx + 0xc))(1, 0)
else
    eax_43 = 0

*(arg1 + 0x10) = eax_43
int32_t eax_45

if (ebx != 0)
    eax_45 = (*(*ebx + 0xc))(2, 0)
else
    eax_45 = 0

*(arg1 + 0x14) = eax_45
int32_t eax_47

if (ebx != 0)
    eax_47 = (*(*ebx + 0xc))(3, 0)
else
    eax_47 = 0

*(arg1 + 0x18) = eax_47
int32_t eax_49

if (edi_1 != 0)
    eax_49 = (*(*edi_1 + 0xc))(0, 0)
else
    eax_49 = 0

*(arg1 + 0x1c) = eax_49
int32_t eax_51

if (edi_1 != 0)
    eax_51 = (*(*edi_1 + 0xc))(1, 0)
else
    eax_51 = 0

*(arg1 + 0x20) = eax_51
int32_t eax_53

if (edi_1 != 0)
    eax_53 = (*(*edi_1 + 0xc))(2, 0)
else
    eax_53 = 0

*(arg1 + 0x24) = eax_53
int32_t eax_55

if (edi_1 != 0)
    eax_55 = (*(*edi_1 + 0xc))(3, 0)
else
    eax_55 = 0

*(arg1 + 0x28) = eax_55
int32_t eax_57

if (edi_1 != 0)
    eax_57 = (*(*edi_1 + 0xc))(4, 0)
else
    eax_57 = 0

*(arg1 + 0x2c) = eax_57
int32_t eax_59

if (edi_1 != 0)
    eax_59 = (*(*edi_1 + 0xc))(5, 0)
else
    eax_59 = 0

*(arg1 + 0x30) = eax_59
int32_t eax_61

if (eax_12 != 0)
    eax_61 = (*(*eax_12 + 0xc))(0, 0)
else
    eax_61 = 0

*(arg1 + 0x34) = eax_61
int32_t eax_63

if (eax_12 != 0)
    eax_63 = (*(*eax_12 + 0xc))(1, 0)
else
    eax_63 = 0

*(arg1 + 0x38) = eax_63
int32_t eax_65

if (eax_12 != 0)
    eax_65 = (*(*eax_12 + 0xc))(2, 0)
else
    eax_65 = 0

*(arg1 + 0x3c) = eax_65
int32_t eax_67

if (eax_12 != 0)
    eax_67 = (*(*eax_12 + 0xc))(3, 0)
else
    eax_67 = 0

*(arg1 + 0x40) = eax_67
int32_t eax_69

if (eax_17 != 0)
    eax_69 = (*(*eax_17 + 0xc))(0, 0)
else
    eax_69 = 0

*(arg1 + 0x44) = eax_69
int32_t eax_71

if (eax_17 != 0)
    eax_71 = (*(*eax_17 + 0xc))(1, 0)
else
    eax_71 = 0

*(arg1 + 0x48) = eax_71
int32_t eax_73

if (eax_17 != 0)
    eax_73 = (*(*eax_17 + 0xc))(2, 0)
else
    eax_73 = 0

*(arg1 + 0x4c) = eax_73
int32_t eax_75

if (eax_17 != 0)
    eax_75 = (*(*eax_17 + 0xc))(3, 0)
else
    eax_75 = 0

*(arg1 + 0x50) = eax_75
int32_t var_c_8 = 0xf
int32_t var_10_8 = 0
var_20 = 0
sub_403490(&var_20, 0x7627dc, 8)
var_7c_1.b = 0x14
int32_t* ecx_35 = *(arg3 + 4)
int32_t eax_77

if (ecx_35 != 0)
    char* edx_9 = &var_20
    
    if (var_c_8 u>= 0x10)
        edx_9 = var_20.d
    
    eax_77 = (*(*ecx_35 + 8))(edx_9, 0)
else
    eax_77 = 0

*(arg1 + 0x58) = eax_77
var_7c_1.b = 0x11

if (var_c_8 u>= 0x10)
    sub_403160(var_20.d, var_c_8 + 1, 1)

int32_t var_c_9 = 0xf
int32_t var_10_9 = 0
var_20 = 0
sub_403490(&var_20, 0x762794, 6)
var_7c_1.b = 0x15
int32_t* ecx_37 = *(arg3 + 4)
int32_t eax_81

if (ecx_37 != 0)
    char* edx_10 = &var_20
    
    if (var_c_9 u>= 0x10)
        edx_10 = var_20.d
    
    eax_81 = (*(*ecx_37 + 8))(edx_10, 0)
else
    eax_81 = 0

*(arg1 + 0x5c) = eax_81
var_7c_1.b = 0x11

if (var_c_9 u>= 0x10)
    sub_403160(var_20.d, var_c_9 + 1, 1)

int32_t var_c_10 = 0xf
int32_t var_10_10 = 0
var_20 = 0
sub_403490(&var_20, 0x762784, 0xe)
var_7c_1.b = 0x16
int32_t* ecx_39 = *(arg3 + 4)
int32_t eax_85

if (ecx_39 != 0)
    char* edx_11 = &var_20
    
    if (var_c_10 u>= 0x10)
        edx_11 = var_20.d
    
    eax_85 = (*(*ecx_39 + 8))(edx_11, 0)
else
    eax_85 = 0

*(arg1 + 0x64) = eax_85
var_7c_1.b = 0x11

if (var_c_10 u>= 0x10)
    sub_403160(var_20.d, var_c_10 + 1, 1)

int32_t var_c_11 = 0xf
int32_t var_10_11 = 0
var_20 = 0
sub_403490(&var_20, 0x762774, 0xe)
var_7c_1.b = 0x17
int32_t* ecx_41 = *(arg3 + 4)
int32_t eax_89

if (ecx_41 != 0)
    char* edx_12 = &var_20
    
    if (var_c_11 u>= 0x10)
        edx_12 = var_20.d
    
    eax_89 = (*(*ecx_41 + 8))(edx_12, 0)
else
    eax_89 = 0

*(arg1 + 0x68) = eax_89
var_7c_1.b = 0x11

if (var_c_11 u>= 0x10)
    sub_403160(var_20.d, var_c_11 + 1, 1)

int32_t var_70_1
int32_t var_6c_1
int32_t edx_13

if (eax_22 != 0)
    var_70_1 = (*(*eax_22 + 0xc))(2, 0)
    var_6c_1 = (*(*eax_22 + 0xc))(1, 0)
    edx_13 = (*(*eax_22 + 0xc))(0, 0)
else
    edx_13 = 0
    var_70_1 = 0
    var_6c_1 = 0

int32_t edi_3 = 0xff

if (edx_13 != zx.d(edx_13.b))
    int32_t eax_97 = 0xff
    
    if (edx_13 s< 0)
        eax_97 = 0
    
    edx_13 = eax_97

int32_t ecx_46 = var_6c_1

if (ecx_46 != zx.d(ecx_46.b))
    int32_t eax_99 = 0xff
    
    if (ecx_46 s< 0)
        eax_99 = 0
    
    ecx_46 = eax_99

int32_t var_14 = ecx_46
int32_t ecx_47 = var_70_1

if (ecx_47 != zx.d(ecx_47.b))
    int32_t eax_101 = 0xff
    
    if (ecx_47 s< 0)
        eax_101 = 0
    
    ecx_47 = eax_101

int32_t var_10_12 = ecx_47
int32_t var_c_12 = 0xff
*(arg1 + 0x6c) = edx_13.o
int32_t var_c_13 = 0xf
int32_t var_10_13 = 0
var_20 = 0
sub_403490(&var_20, 0x762764, 0xc)
var_7c_1.b = 0x18
int32_t* ecx_49 = *(arg3 + 4)
int32_t xmm0_1

if (ecx_49 != 0)
    char* edx_16 = &var_20
    
    if (var_c_13 u>= 0x10)
        edx_16 = var_20.d
    
    int32_t* var_cc_7 = ecx_49
    (*(*ecx_49 + 0xc))(edx_16, 0)
    xmm0_1 = fconvert.s(arg2)
else
    xmm0_1 = (zx.o(0)).d

var_7c_1.b = 0x11
*(arg1 + 0x7c) = xmm0_1

if (var_c_13 u>= 0x10)
    sub_403160(var_20.d, var_c_13 + 1, 1)

int32_t var_c_14 = 0xf
int32_t var_10_14 = 0
var_20 = 0
sub_403490(&var_20, 0x7627a8, 0xe)
var_7c_1.b = 0x19
int32_t* ecx_51 = *(arg3 + 4)
int32_t xmm0_2

if (ecx_51 != 0)
    char* edx_17 = &var_20
    
    if (var_c_14 u>= 0x10)
        edx_17 = var_20.d
    
    int32_t* var_cc_8 = ecx_51
    (*(*ecx_51 + 0xc))(edx_17, 0)
    int32_t var_6c_3 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
    unimplemented  {fstp dword [ebp+0xc], st0}
    xmm0_2 = var_6c_3
else
    xmm0_2 = (zx.o(0)).d

var_7c_1.b = 0x11
*(arg1 + 0x80) = xmm0_2

if (var_c_14 u>= 0x10)
    sub_403160(var_20.d, var_c_14 + 1, 1)

int32_t* ecx_52 = var_78
int32_t var_70_2
int32_t var_6c_4
int32_t edx_18

if (ecx_52 != 0)
    var_70_2 = (*(*ecx_52 + 0xc))(2, 0)
    var_6c_4 = (*(*var_78 + 0xc))(1, 0)
    edx_18 = (*(*var_78 + 0xc))(0, 0)
else
    edx_18 = 0
    var_70_2 = 0
    var_6c_4 = 0

if (edx_18 != zx.d(edx_18.b))
    int32_t eax_115 = 0xff
    
    if (edx_18 s< 0)
        eax_115 = 0
    
    edx_18 = eax_115

int32_t ecx_56 = var_6c_4

if (ecx_56 != zx.d(ecx_56.b))
    int32_t eax_117 = 0xff
    
    if (ecx_56 s< 0)
        eax_117 = 0
    
    ecx_56 = eax_117

int32_t var_14_1 = ecx_56
int32_t ecx_57 = var_70_2

if (ecx_57 != zx.d(ecx_57.b))
    if (ecx_57 s< 0)
        edi_3 = 0
    
    ecx_57 = edi_3

int32_t var_10_15 = ecx_57
int32_t var_c_15 = 0xff
*(arg1 + 0x84) = edx_18.o
int32_t var_3c = 0xf
int32_t var_40 = 0
char var_50 = 0
sub_403490(&var_50, 0x75d037, nullptr)
var_7c_1.b = 0x1a
int32_t var_c_16 = 0xf
int32_t var_10_16 = 0
var_20 = 0
sub_403490(&var_20, 0x76279c, 8)
var_7c_1.b = 0x1b
char var_68[0x10]
int32_t* ecx_61 = sub_403cd0(arg3, &var_68, &var_20, &var_50)

if (arg1 + 0x94 != ecx_61)
    if (*(arg1 + 0xa8) u>= 0x10)
        sub_403160(*(arg1 + 0x94), *(arg1 + 0xa8) + 1, 1)
    
    *(arg1 + 0xa8) = 0xf
    bool cond:14_1 = *(arg1 + 0xa8) u< 0x10
    *(arg1 + 0xa4) = 0
    void* eax_122
    
    if (cond:14_1)
        eax_122 = arg1 + 0x94
    else
        eax_122 = *(arg1 + 0x94)
    
    *eax_122 = 0
    sub_4056a0(arg1 + 0x94, ecx_61)

int32_t var_54

if (var_54 u>= 0x10)
    sub_403160(var_68[0].d, var_54 + 1, 1)

int32_t var_54_1 = 0xf
int32_t var_58 = 0
var_68[0] = 0

if (var_c_16 u>= 0x10)
    sub_403160(var_20.d, var_c_16 + 1, 1)

var_7c_1.b = 0x11
int32_t var_c_17 = 0xf
int32_t var_10_17 = 0
var_20 = 0

if (var_3c u>= 0x10)
    sub_403160(var_50.d, var_3c + 1, 1)

int32_t var_3c_1 = 0xf
int32_t var_40_1 = 0
var_50 = 0
sub_403490(&var_50, 0x75d036, nullptr)
var_7c_1.b = 0x1d
int32_t var_c_18 = 0xf
int32_t var_10_18 = 0
var_20 = 0
sub_403490(&var_20, 0x762824, 6)
var_7c_1.b = 0x1e
char* eax_129 = sub_403cd0(arg3, &var_68, &var_20, &var_50)
var_7c_1.b = 0x1f

if (arg1 + 0xac != eax_129)
    sub_403590(arg1 + 0xac, eax_129, 0, 0xffffffff)

if (var_54_1 u>= 0x10)
    sub_403160(var_68[0].d, var_54_1 + 1, 1)

int32_t var_54_2 = 0xf
int32_t var_58_1 = 0
var_68[0] = 0

if (var_c_18 u>= 0x10)
    sub_403160(var_20.d, var_c_18 + 1, 1)

var_7c_1.b = 0x11
int32_t var_c_19 = 0xf
int32_t var_10_19 = 0
var_20 = 0

if (var_3c_1 u>= 0x10)
    sub_403160(var_50.d, var_3c_1 + 1, 1)

int32_t var_c_20 = 0xf
int32_t var_10_20 = 0
var_20 = 0
sub_403490(&var_20, 0x76281c, 4)
var_7c_1.b = 0x20
int32_t* ecx_68 = *(arg3 + 4)
int32_t eax_136

if (ecx_68 != 0)
    char* edx_21 = &var_20
    
    if (var_c_20 u>= 0x10)
        edx_21 = var_20.d
    
    eax_136 = (*(*ecx_68 + 8))(edx_21, 0)
else
    eax_136 = 0

var_7c_1.b = 0x11
eax_136.b = eax_136 == 1
*(arg1 + 0xc4) = eax_136.b

if (var_c_20 u>= 0x10)
    sub_403160(var_20.d, var_c_20 + 1, 1)

int32_t result_1 = 0xf
int32_t var_40_2 = 0
var_50 = 0
sub_403490(&var_50, 0x762814, 6)
var_7c_1.b = 0x21
int32_t* ecx_70 = *(arg3 + 4)
int32_t eax_140

if (ecx_70 != 0)
    char* edx_22 = &var_50
    
    if (result_1 u>= 0x10)
        edx_22 = var_50.d
    
    eax_140 = (*(*ecx_70 + 8))(edx_22, 0)
else
    eax_140 = 0

*(arg1 + 0x54) = eax_140
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_50.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_78)
return result
