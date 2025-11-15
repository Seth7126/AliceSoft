// 函数: sub_552240
// 地址: 0x552240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AAVios_base@2@DPBDIIII@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x61) = arg3
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x76717c, 0x12)
int32_t var_8_1 = 0
int32_t* edx = *(arg2 + 4)
int32_t* edi

if (edx != 0)
    char* ecx_1 = &var_2c
    
    if (var_18 u>= 0x10)
        ecx_1 = var_2c.d
    
    edi = (*(*edx + 0x2c))(ecx_1)
else
    edi = nullptr

struct common::CEXArrayReader::VTable* const var_d0 = &common::CEXArrayReader::`vftable'
int32_t* var_cc = edi
var_8_1.b = 2

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t eax_8
int32_t ecx_3
int32_t edx_1

if (edi != 0)
    int32_t eax_10 = (*(*edi + 0xc))(3, 0)
    int32_t eax_11 = (*(*edi + 0xc))(2, 0)
    ecx_3 = (*(*edi + 0xc))(1, 0)
    edi = (*(*edi + 0xc))(0, 0)
    eax_8 = eax_10
    edx_1 = eax_11
else
    eax_8 = 0
    edx_1 = 0
    ecx_3 = 0

if (*(arg1 + 0x4c) != edi || *(arg1 + 0x50) != ecx_3 || *(arg1 + 0x58) != edx_1
        || *(arg1 + 0x5c) != eax_8)
    *(arg1 + 0x4c) = edi
    *(arg1 + 0x50) = ecx_3
    *(arg1 + 0x58) = edx_1
    *(arg1 + 0x5c) = eax_8
    *(arg1 + 0x60) = 1

int32_t var_90 = 0xf
int32_t var_94 = 0
char var_a4 = 0
sub_403490(&var_a4, 0x767170, 0xa)
var_8_1.b = 3
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x767168, 4)
var_8_1.b = 4
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x76715c, 8)
var_8_1.b = 5
int32_t var_78 = 0xf
int32_t var_7c = 0
char var_8c = 0
sub_403490(&var_8c, 0x75d3f9, nullptr)
var_8_1.b = 6
int32_t var_60 = 0xf
int32_t var_64 = 0
char var_74 = 0
sub_403490(&var_74, 0x767210, 6)
var_8_1.b = 7
char var_bc[0x10]
int32_t* eax_14 = sub_403cd0(arg2, &var_bc, &var_74, &var_8c)
var_8_1.b = 8
int32_t* edx_5 = *(arg2 + 4)
int32_t* var_c0_2

if (edx_5 != 0)
    char* ecx_14 = &var_a4
    
    if (var_90 u>= 0x10)
        ecx_14 = var_a4.d
    
    var_c0_2 = (*(*edx_5 + 8))(ecx_14, 0)
else
    var_c0_2 = edx_5

int32_t* edx_6 = *(arg2 + 4)
int32_t edi_1

if (edx_6 != 0)
    char* ecx_16 = &var_5c
    
    if (var_48 u>= 0x10)
        ecx_16 = var_5c.d
    
    edi_1 = (*(*edx_6 + 8))(ecx_16, 0)
else
    edi_1 = 0

int32_t* edx_7 = *(arg2 + 4)
int32_t eax_19

if (edx_7 != 0)
    char* ecx_18 = &var_44
    
    if (var_30 u>= 0x10)
        ecx_18 = var_44.d
    
    eax_19 = (*(*edx_7 + 8))(ecx_18, 0)
else
    eax_19 = 0

sub_551a00(arg1, eax_14, eax_19, edi_1, var_c0_2)
int32_t var_a8

if (var_a8 u>= 0x10)
    sub_403160(var_bc[0].d, var_a8 + 1, 1)

int32_t var_a8_1 = 0xf
int32_t var_ac = 0
var_bc[0] = 0

if (var_60 u>= 0x10)
    sub_403160(var_74.d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64_1 = 0
var_74 = 0

if (var_78 u>= 0x10)
    sub_403160(var_8c.d, var_78 + 1, 1)

int32_t var_78_1 = 0xf
int32_t var_7c_1 = 0
var_8c = 0

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0

if (var_90 u>= 0x10)
    sub_403160(var_a4.d, var_90 + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
