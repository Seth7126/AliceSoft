// 函数: sub_4b6540
// 地址: 0x4b6540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AAVios_base@2@AAHAA_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_dc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x761bec, 6)
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
sub_403490(&var_2c, 0x761bf4, 0xa)
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
sub_403490(&var_44, 0x761c3c, 0x10)
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
sub_403490(&var_2c, 0x761c50, 6)
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
sub_403490(&var_44, 0x761c20, 0x12)
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
sub_403490(&var_2c, 0x761c34, 4)
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
sub_403490(&var_5c, 0x761d64, 6)
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
sub_403490(&var_2c, 0x761d6c, 0xe)
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
sub_403490(&var_2c, 0x761d44, 0xe)
var_8_1.b = 0x16
int32_t* ecx_19 = *(arg3 + 4)
void* eax_39

if (ecx_19 != 0)
    char* edx_9 = &var_2c
    
    if (var_18_7 u>= 0x10)
        edx_9 = var_2c.d
    
    eax_39 = (*(*ecx_19 + 8))(edx_9, 0x10)
else
    eax_39 = &ecx_19[4]

*(arg1 + 0x14) = eax_39
var_8_1.b = 0x14

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

int32_t ebx_2 = 0xff

if (edx_10 != zx.d(edx_10.b))
    int32_t eax_47 = 0xff
    
    if (edx_10 s< 0)
        eax_47 = 0
    
    edx_10 = eax_47

int32_t ecx_24 = var_7c_1

if (ecx_24 != zx.d(ecx_24.b))
    int32_t eax_49 = 0xff
    
    if (ecx_24 s< 0)
        eax_49 = 0
    
    ecx_24 = eax_49

int32_t var_38 = ecx_24
int32_t ecx_25 = var_78

if (ecx_25 != zx.d(ecx_25.b))
    int32_t eax_51 = 0xff
    
    if (ecx_25 s< 0)
        eax_51 = 0
    
    ecx_25 = eax_51

int32_t var_34_6 = ecx_25
int32_t var_30_6 = 0xff
*(arg1 + 0x18) = edx_10.o
int32_t var_18_8 = 0xf
int32_t var_1c_8 = 0
var_2c = 0
sub_403490(&var_2c, 0x761d54, 0xc)
var_8_1.b = 0x17
int32_t* ecx_27 = *(arg3 + 4)
int32_t xmm0_1

if (ecx_27 != 0)
    char* edx_13 = &var_2c
    
    if (var_18_8 u>= 0x10)
        edx_13 = var_2c.d
    
    int32_t* var_e0_8 = ecx_27
    (*(*ecx_27 + 0xc))(edx_13, 0)
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
sub_403490(&var_2c, 0x761d90, 0xe)
var_8_1.b = 0x18
int32_t* ecx_29 = *(arg3 + 4)
int32_t xmm0_2

if (ecx_29 != 0)
    char* edx_14 = &var_2c
    
    if (var_18_9 u>= 0x10)
        edx_14 = var_2c.d
    
    int32_t* var_e0_9 = ecx_29
    (*(*ecx_29 + 0xc))(edx_14, 0)
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

int32_t ecx_34 = var_78_3

if (ecx_34 != zx.d(ecx_34.b))
    int32_t eax_67 = 0xff
    
    if (ecx_34 s< 0)
        eax_67 = 0
    
    ecx_34 = eax_67

int32_t var_38_1 = ecx_34
int32_t ecx_35 = var_7c_2

if (ecx_35 != zx.d(ecx_35.b))
    if (ecx_35 s< 0)
        ebx_2 = 0
    
    ecx_35 = ebx_2

int32_t var_34_7 = ecx_35
int32_t var_30_7 = 0xff
*(arg1 + 0x30) = edx_15.o
int32_t var_18_10 = 0xf
int32_t var_1c_10 = 0
var_2c = 0
sub_403490(&var_2c, 0x761da0, 0xc)
var_8_1.b = 0x19
int32_t* ecx_37 = *(arg3 + 4)
int32_t eax_69

if (ecx_37 != 0)
    char* edx_18 = &var_2c
    
    if (var_18_10 u>= 0x10)
        edx_18 = var_2c.d
    
    eax_69 = (*(*ecx_37 + 8))(edx_18, 0)
else
    eax_69 = 0

var_8_1.b = 0x14
eax_69.b = eax_69 == 1
*(arg1 + 0x40) = eax_69.b

if (var_18_10 u>= 0x10)
    sub_403160(var_2c.d, var_18_10 + 1, 1)

int32_t var_18_11 = 0xf
int32_t var_1c_11 = 0
var_2c = 0
sub_403490(&var_2c, 0x761d7c, 2)
var_8_1.b = 0x1a
int32_t* ecx_39 = *(arg3 + 4)
int32_t xmm0_4

if (ecx_39 != 0)
    char* edx_19 = &var_2c
    
    if (var_18_11 u>= 0x10)
        edx_19 = var_2c.d
    
    int32_t* var_e0_10 = ecx_39
    (*(*ecx_39 + 0xc))(edx_19, 0)
    int32_t var_78_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
    unimplemented  {fstp dword [ebp-0x74], st0}
    xmm0_4 = var_78_4
else
    xmm0_4 = (zx.o(0)).d

var_8_1.b = 0x14
*(arg1 + 0x44) = xmm0_4

if (var_18_11 u>= 0x10)
    sub_403160(var_2c.d, var_18_11 + 1, 1)

int32_t var_18_12 = 0xf
int32_t var_1c_12 = 0
var_2c = 0
sub_403490(&var_2c, 0x761d80, 0xc)
var_8_1.b = 0x1b
int32_t* ecx_41 = *(arg3 + 4)
int32_t xmm0_5

if (ecx_41 != 0)
    char* edx_20 = &var_2c
    
    if (var_18_12 u>= 0x10)
        edx_20 = var_2c.d
    
    int32_t* var_e0_11 = ecx_41
    (*(*ecx_41 + 0xc))(edx_20, 0)
    int32_t var_78_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
    unimplemented  {fstp dword [ebp-0x74], st0}
    xmm0_5 = var_78_5
else
    xmm0_5 = (zx.o(0)).d

var_8_1.b = 0x14
*(arg1 + 0x48) = xmm0_5

if (var_18_12 u>= 0x10)
    sub_403160(var_2c.d, var_18_12 + 1, 1)

int32_t var_18_13 = 0xf
int32_t var_1c_13 = 0
var_2c = 0
sub_403490(&var_2c, 0x761d20, 6)
var_8_1.b = 0x1c
int32_t* ecx_43 = *(arg3 + 4)
float xmm0_6

if (ecx_43 != 0)
    char* edx_21 = &var_2c
    
    if (var_18_13 u>= 0x10)
        edx_21 = var_2c.d
    
    int32_t* var_e0_12 = ecx_43
    (*(*ecx_43 + 0xc))(edx_21, 0x7f7fffff)
    float var_78_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
    unimplemented  {fstp dword [ebp-0x74], st0}
    xmm0_6 = var_78_6
else
    xmm0_6 = 3.40282347e+38f

var_8_1.b = 0x14
*(arg1 + 0x4c) = xmm0_6

if (var_18_13 u>= 0x10)
    sub_403160(var_2c.d, var_18_13 + 1, 1)

int32_t var_18_14 = 0xf
int32_t var_1c_14 = 0
var_2c = 0
sub_403490(&var_2c, 0x761d28, 6)
var_8_1.b = 0x1d
int32_t* ecx_45 = *(arg3 + 4)
float xmm0_7

if (ecx_45 != 0)
    char* edx_22 = &var_2c
    
    if (var_18_14 u>= 0x10)
        edx_22 = var_2c.d
    
    int32_t* var_e0_13 = ecx_45
    (*(*ecx_45 + 0xc))(edx_22, 0xff7fffff)
    float var_78_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
    unimplemented  {fstp dword [ebp-0x74], st0}
    xmm0_7 = var_78_7
else
    xmm0_7 = -3.40282347e+38f

var_8_1.b = 0x14
*(arg1 + 0x50) = xmm0_7

if (var_18_14 u>= 0x10)
    sub_403160(var_2c.d, var_18_14 + 1, 1)

int32_t var_18_15 = 0xf
int32_t var_1c_15 = 0
var_2c = 0
sub_403490(&var_2c, 0x761d00, 6)
var_8_1.b = 0x1e
int32_t* ecx_47 = *(arg3 + 4)
float xmm0_8

if (ecx_47 != 0)
    char* edx_23 = &var_2c
    
    if (var_18_15 u>= 0x10)
        edx_23 = var_2c.d
    
    int32_t* var_e0_14 = ecx_47
    (*(*ecx_47 + 0xc))(edx_23, 0x3f800000)
    float var_78_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
    unimplemented  {fstp dword [ebp-0x74], st0}
    xmm0_8 = var_78_8
else
    xmm0_8 = 1f

var_8_1.b = 0x14
*(arg1 + 0x54) = xmm0_8

if (var_18_15 u>= 0x10)
    sub_403160(var_2c.d, var_18_15 + 1, 1)

int32_t var_18_16 = 0xf
int32_t var_1c_16 = 0
var_2c = 0
sub_403490(&var_2c, 0x761d08, 0x14)
var_8_1.b = 0x1f
int32_t* ecx_49 = *(arg3 + 4)
int32_t eax_93

if (ecx_49 != 0)
    char* edx_24 = &var_2c
    
    if (var_18_16 u>= 0x10)
        edx_24 = var_2c.d
    
    eax_93 = (*(*ecx_49 + 8))(edx_24, 0)
else
    eax_93 = 0

*(arg1 + 0x58) = eax_93
var_8_1.b = 0x14

if (var_18_16 u>= 0x10)
    sub_403160(var_2c.d, var_18_16 + 1, 1)

int32_t eax_97

if (eax_15 != 0)
    eax_97 = (*(*eax_15 + 0xc))(0, 0xff)
else
    eax_97 = 0xff

*(arg1 + 0x5c) = eax_97
int32_t eax_99

if (eax_15 != 0)
    eax_99 = (*(*eax_15 + 0xc))(1, 0xff)
else
    eax_99 = 0xff

*(arg1 + 0x60) = eax_99
int32_t eax_101

if (eax_15 != 0)
    eax_101 = (*(*eax_15 + 0xc))(2, 0xff)
else
    eax_101 = 0xff

*(arg1 + 0x64) = eax_101
int32_t eax_103

if (eax_19 != 0)
    eax_103 = (*(*eax_19 + 0xc))(0, 0x96)
else
    eax_103 = 0x96

*(arg1 + 0x68) = eax_103
int32_t eax_105

if (eax_19 != 0)
    eax_105 = (*(*eax_19 + 0xc))(1, 0x96)
else
    eax_105 = 0x96

*(arg1 + 0x6c) = eax_105
int32_t eax_107

if (eax_19 != 0)
    eax_107 = (*(*eax_19 + 0xc))(2, 0x96)
else
    eax_107 = 0x96

*(arg1 + 0x70) = eax_107
void* eax_109

if (eax_23 != 0)
    eax_109 = (*(*eax_23 + 0xc))(0, 0x64)
else
    eax_109 = &eax_23[0x19]

*(arg1 + 0x74) = eax_109
void* eax_111

if (eax_23 != 0)
    eax_111 = (*(*eax_23 + 0xc))(1, 0x64)
else
    eax_111 = &eax_23[0x19]

*(arg1 + 0x78) = eax_111
void* eax_113

if (eax_23 != 0)
    eax_113 = (*(*eax_23 + 0xc))(2, 0x64)
else
    eax_113 = &eax_23[0x19]

*(arg1 + 0x7c) = eax_113
int32_t eax_115

if (eax_27 != 0)
    eax_115 = (*(*eax_27 + 0xc))(0, 0xc8)
else
    eax_115 = 0xc8

*(arg1 + 0x80) = eax_115
int32_t eax_117

if (eax_27 != 0)
    eax_117 = (*(*eax_27 + 0xc))(1, 0xc8)
else
    eax_117 = 0xc8

*(arg1 + 0x84) = eax_117
int32_t eax_119

if (eax_27 != 0)
    eax_119 = (*(*eax_27 + 0xc))(2, 0xc8)
else
    eax_119 = 0xc8

*(arg1 + 0x88) = eax_119
int32_t var_30_8 = 0xf
int32_t var_34_8 = 0
var_44 = 0
sub_403490(&var_44, 0x75cfeb, nullptr)
var_8_1.b = 0x20
int32_t var_18_17 = 0xf
int32_t var_1c_17 = 0
var_2c = 0
sub_403490(&var_2c, 0x761d30, 6)
var_8_1.b = 0x21
var_8_1.b = 0x22
char var_74[0x10]
sub_4b50f0(arg1, sub_403cd0(arg3, &var_74, &var_2c, &var_44))
int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74[0].d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74[0] = 0

if (var_18_17 u>= 0x10)
    sub_403160(var_2c.d, var_18_17 + 1, 1)

var_8_1.b = 0x14
int32_t var_18_18 = 0xf
int32_t var_1c_18 = 0
var_2c = 0

if (var_30_8 u>= 0x10)
    sub_403160(var_44.d, var_30_8 + 1, 1)

int32_t var_18_19 = 0xf
int32_t var_1c_19 = 0
var_2c = 0
sub_403490(&var_2c, 0x761d38, 8)
var_8_1.b = 0x23
int32_t* ecx_67 = *(arg3 + 4)
int32_t eax_128

if (ecx_67 != 0)
    char* edx_25 = &var_2c
    
    if (var_18_19 u>= 0x10)
        edx_25 = var_2c.d
    
    eax_128 = (*(*ecx_67 + 8))(edx_25, 0)
else
    eax_128 = 0

*(arg1 + 0xa4) = eax_128

if (var_18_19 u>= 0x10)
    sub_403160(var_2c.d, var_18_19 + 1, 1)

int32_t xmm1 = *(arg1 + 0x44)
int32_t xmm0_9 = *(arg1 + 0x50)

if (not(xmm0_9 f> xmm1))
    xmm0_9 = __minss_xmmss_memss(xmm1, *(arg1 + 0x4c))

*(arg1 + 0x44) = xmm0_9
int32_t result
result.b = 1
*(arg1 + 0xa8) = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
