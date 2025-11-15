// 函数: sub_54d1d0
// 地址: 0x54d1d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a633
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg1

if (arg4 == 0)
    (*(eax_3 + 0x34))(eax_2)
else
    (*(eax_3 + 0x30))(eax_2)

int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x7670a4, 0x12)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg3 + 4)
int32_t* edi

if (ecx_1 != 0)
    char* edx_1 = &var_5c
    
    if (var_48 u>= 0x10)
        edx_1 = var_5c.d
    
    edi = (*(*ecx_1 + 0x2c))(edx_1)
else
    edi = nullptr

struct common::CEXArrayReader::VTable* const var_88 = &common::CEXArrayReader::`vftable'
int32_t* var_84 = edi
var_8_1.b = 2

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0
int32_t eax_8
int32_t ecx_2
int32_t edx_2

if (edi != 0)
    int32_t eax_10 = (*(*edi + 0xc))(3, 0)
    int32_t eax_11 = (*(*edi + 0xc))(2, 0)
    ecx_2 = (*(*edi + 0xc))(1, 0)
    edi = (*(*edi + 0xc))(0, 0)
    eax_8 = eax_10
    edx_2 = eax_11
else
    eax_8 = 0
    edx_2 = 0
    ecx_2 = 0

if (arg1[0x28] != edi || arg1[0x29] != ecx_2 || arg1[0x2b] != edx_2 || arg1[0x2c] != eax_8)
    arg1[0x28] = edi
    arg1[0x29] = ecx_2
    arg1[0x2b] = edx_2
    arg1[0x2c] = eax_8
    arg1[0x2d].b = 1

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x75d3e6, nullptr)
var_8_1.b = 3
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x76709c, 6)
var_8_1.b = 4
var_8_1.b = 5
char var_74[0x10]
sub_54c6d0(arg1, sub_403cd0(arg3, &var_74, &var_44, &var_2c))
int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74[0].d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74[0] = 0

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

var_8_1.b = 2
int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_403490(&var_2c, 0x767094, 4)
var_8_1.b = 6
int32_t var_30_2 = 0xf
int32_t var_34_2 = 0
var_44 = 0
sub_403490(&var_44, 0x76708c, 4)
var_8_1.b = 7
int32_t* ecx_13 = *(arg3 + 4)
float var_78_2
int32_t xmm1

if (ecx_13 != 0)
    char* edx_6 = &var_2c
    
    if (var_18_1 u>= 0x10)
        edx_6 = var_2c.d
    
    int32_t* var_9c_4 = ecx_13
    (*(*ecx_13 + 0xc))(edx_6, 0)
    xmm1 = (zx.o(0)).d
    var_78_2 = fconvert.s(arg2)
else
    xmm1 = (zx.o(0)).d
    var_78_2 = 0f

int32_t* ecx_14 = *(arg3 + 4)

if (ecx_14 != 0)
    char* edx_7 = &var_44
    
    if (var_30_2 u>= 0x10)
        edx_7 = var_44.d
    
    int32_t* var_9c_5 = ecx_14
    (*(*ecx_14 + 0xc))(edx_7, 0)
    int32_t var_7c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x78], st0})
    unimplemented  {fstp dword [ebp-0x78], st0}
    xmm1 = var_7c_3

float xmm0_2 = arg1[8]
xmm0_2 f- xmm1
int32_t* eax_21
eax_21:1.b = (xmm0_2 f== xmm1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, xmm1) ? 1 : 0) << 2
    | (xmm0_2 f< xmm1 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
bool p_3

if (not(p_1))
    float xmm0_3 = arg1[9]
    xmm0_3 - var_78_2
    eax_21:1.b = (xmm0_3 == var_78_2 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, var_78_2) ? 1 : 0) << 2
        | (xmm0_3 < var_78_2 ? 1 : 0)
    p_3 = unimplemented  {test ah, 0x44}

if (p_1 || p_3)
    arg1[8] = xmm1
    arg1[9] = var_78_2
    arg1[0x2d].b = 1

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

var_8_1.b = 2
int32_t var_30_3 = 0xf
int32_t var_34_3 = 0
var_44 = 0

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x767084, 4)
var_8_1.b = 8
int32_t* ecx_16 = *(arg3 + 4)
int32_t eax_30

if (ecx_16 != 0)
    char* edx_8 = &var_2c
    
    if (var_18_2 u>= 0x10)
        edx_8 = var_2c.d
    
    eax_30 = (*(*ecx_16 + 8))(edx_8, 0)
else
    eax_30 = 0

eax_30.b = eax_30 != 0
arg1[0xa].b = eax_30.b

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
