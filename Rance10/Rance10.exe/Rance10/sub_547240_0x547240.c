// 函数: sub_547240
// 地址: 0x547240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a19b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_98 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x766ee4, 0x12)
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

struct common::CEXArrayReader::VTable* const var_88 = &common::CEXArrayReader::`vftable'
int32_t* var_84 = edi
var_8_1.b = 2

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t eax_7
int32_t ecx_3
int32_t edx_1
int32_t ebx_1

if (edi != 0)
    ebx_1 = (*(*edi + 0xc))(3, 0)
    int32_t eax_10 = (*(*edi + 0xc))(2, 0)
    int32_t eax_11 = (*(*edi + 0xc))(1, 0)
    ecx_3 = eax_10
    edx_1 = (*(*edi + 0xc))(0, 0)
    eax_7 = eax_11
else
    ebx_1 = 0
    ecx_3 = 0
    eax_7 = 0
    edx_1 = 0

if (*(arg1 + 0x3c) != edx_1 || *(arg1 + 0x40) != eax_7 || *(arg1 + 0x48) != ecx_3
        || *(arg1 + 0x4c) != ebx_1)
    *(arg1 + 0x3c) = edx_1
    *(arg1 + 0x40) = eax_7
    *(arg1 + 0x48) = ecx_3
    *(arg1 + 0x4c) = ebx_1
    *(arg1 + 0x50) = 1

int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x75d3d5, nullptr)
var_8_1.b = 3
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x766edc, 6)
var_8_1.b = 4
var_8_1.b = 5
char var_74[0x10]
sub_546c80(arg1, sub_403cd0(arg2, &var_74, &var_44, &var_5c))
int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74[0].d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74[0] = 0

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
