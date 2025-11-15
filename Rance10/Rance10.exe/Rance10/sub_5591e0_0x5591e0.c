// 函数: sub_5591e0
// 地址: 0x5591e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b100
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x7676b0, 0xa)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg3 + 4)
int32_t* esi

if (ecx_1 != 0)
    char* edx_1 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_1 = var_2c.d
    
    esi = (*(*ecx_1 + 0x2c))(edx_1)
else
    esi = nullptr

struct common::CEXArrayReader::VTable* const var_74 = &common::CEXArrayReader::`vftable'
int32_t* var_70 = esi
var_8_1.b = 2

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x7676bc, 0x10)
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

struct common::CEXArrayReader::VTable* const var_7c = &common::CEXArrayReader::`vftable'
int32_t* var_78 = eax_7
var_8_1.b = 5

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x7676d0, 0xe)
var_8_1.b = 6
int32_t* ecx_5 = *(arg3 + 4)
int32_t eax_11

if (ecx_5 != 0)
    char* edx_3 = &var_2c
    
    if (var_18_2 u>= 0x10)
        edx_3 = var_2c.d
    
    eax_11 = (*(*ecx_5 + 8))(edx_3, 0)
else
    eax_11 = 0

*(arg1 + 8) = eax_11
var_8_1.b = 5

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
sub_403490(&var_2c, 0x7676e0, 0xe)
var_8_1.b = 7
int32_t* ecx_7 = *(arg3 + 4)
int32_t eax_15

if (ecx_7 != 0)
    char* edx_4 = &var_2c
    
    if (var_18_3 u>= 0x10)
        edx_4 = var_2c.d
    
    eax_15 = (*(*ecx_7 + 8))(edx_4, 0)
else
    eax_15 = 0

*(arg1 + 0xc) = eax_15
var_8_1.b = 5

if (var_18_3 u>= 0x10)
    sub_403160(var_2c.d, var_18_3 + 1, 1)

int32_t var_64
int32_t var_60
int32_t edx_5

if (esi != 0)
    var_60 = (*(*esi + 0xc))(2, 0)
    var_64 = (*(*esi + 0xc))(1, 0)
    edx_5 = (*(*esi + 0xc))(0, 0)
else
    edx_5 = 0
    var_60 = 0
    var_64 = 0

int32_t esi_1 = 0xff

if (edx_5 != zx.d(edx_5.b))
    int32_t eax_23 = 0xff
    
    if (edx_5 s< 0)
        eax_23 = 0
    
    edx_5 = eax_23

int32_t ecx_12 = var_64

if (ecx_12 != zx.d(ecx_12.b))
    int32_t eax_25 = 0xff
    
    if (ecx_12 s< 0)
        eax_25 = 0
    
    ecx_12 = eax_25

int32_t var_20 = ecx_12
int32_t ecx_13 = var_60

if (ecx_13 != zx.d(ecx_13.b))
    int32_t eax_27 = 0xff
    
    if (ecx_13 s< 0)
        eax_27 = 0
    
    ecx_13 = eax_27

int32_t var_1c_4 = ecx_13
int32_t var_18_4 = 0xff
*(arg1 + 0x10) = edx_5.o
int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
sub_403490(&var_2c, 0x7676f0, 0xc)
var_8_1.b = 8
int32_t* ecx_15 = *(arg3 + 4)
int32_t xmm0_1

if (ecx_15 != 0)
    char* edx_8 = &var_2c
    
    if (var_18_5 u>= 0x10)
        edx_8 = var_2c.d
    
    int32_t* var_90_3 = ecx_15
    (*(*ecx_15 + 0xc))(edx_8, 0)
    xmm0_1 = fconvert.s(arg2)
else
    xmm0_1 = (zx.o(0)).d

var_8_1.b = 5
*(arg1 + 0x20) = xmm0_1

if (var_18_5 u>= 0x10)
    sub_403160(var_2c.d, var_18_5 + 1, 1)

int32_t var_18_6 = 0xf
int32_t var_1c_6 = 0
var_2c = 0
sub_403490(&var_2c, 0x767700, 0xe)
var_8_1.b = 9
int32_t* ecx_17 = *(arg3 + 4)
int32_t xmm0_2

if (ecx_17 != 0)
    char* edx_9 = &var_2c
    
    if (var_18_6 u>= 0x10)
        edx_9 = var_2c.d
    
    int32_t* var_90_4 = ecx_17
    (*(*ecx_17 + 0xc))(edx_9, 0)
    int32_t var_60_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x5c], st0})
    unimplemented  {fstp dword [ebp-0x5c], st0}
    xmm0_2 = var_60_2
else
    xmm0_2 = (zx.o(0)).d

var_8_1.b = 5
*(arg1 + 0x24) = xmm0_2

if (var_18_6 u>= 0x10)
    sub_403160(var_2c.d, var_18_6 + 1, 1)

int32_t var_64_1
int32_t eax_36
int32_t edx_10

if (eax_7 != 0)
    var_64_1 = (*(*eax_7 + 0xc))(2, 0)
    int32_t eax_39 = (*(*eax_7 + 0xc))(1, 0)
    eax_36 = (*(*eax_7 + 0xc))(0, 0)
    edx_10 = eax_39
else
    eax_36 = 0
    edx_10 = 0
    var_64_1 = 0

int32_t var_60_3 = eax_36

if (eax_36 != zx.d(eax_36.b))
    eax_36 = 0xff
    
    if (var_60_3 s< 0)
        eax_36 = 0

if (edx_10 != zx.d(edx_10.b))
    int32_t eax_42 = 0xff
    
    if (edx_10 s< 0)
        eax_42 = 0
    
    edx_10 = eax_42

int32_t ecx_22 = var_64_1
int32_t var_20_1 = edx_10

if (ecx_22 != zx.d(ecx_22.b))
    if (ecx_22 s< 0)
        esi_1 = 0
    
    ecx_22 = esi_1

int32_t var_1c_7 = ecx_22
int32_t var_18_7 = 0xff
*(arg1 + 0x28) = eax_36.o
int32_t var_18_8 = 0xf
int32_t var_1c_8 = 0
var_2c = 0
sub_403490(&var_2c, 0x767710, 6)
var_8_1.b = 0xa
int32_t* ecx_24 = *(arg3 + 4)
int32_t eax_44

if (ecx_24 != 0)
    char* edx_13 = &var_2c
    
    if (var_18_8 u>= 0x10)
        edx_13 = var_2c.d
    
    eax_44 = (*(*ecx_24 + 8))(edx_13, 0)
else
    eax_44 = 0

*(arg1 + 0x38) = eax_44
var_8_1.b = 5

if (var_18_8 u>= 0x10)
    sub_403160(var_2c.d, var_18_8 + 1, 1)

int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x767718, 6)
var_8_1.b = 0xb
int32_t* ecx_26 = *(arg3 + 4)
int32_t eax_48

if (ecx_26 != 0)
    char* edx_14 = &var_5c
    
    if (var_48 u>= 0x10)
        edx_14 = var_5c.d
    
    eax_48 = (*(*ecx_26 + 8))(edx_14, 0)
else
    eax_48 = 0

*(arg1 + 0x3c) = eax_48

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
