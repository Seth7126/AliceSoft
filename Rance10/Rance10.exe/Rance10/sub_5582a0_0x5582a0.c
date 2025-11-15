// 函数: sub_5582a0
// 地址: 0x5582a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73af78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x76767c, 0xa)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg2 + 4)
int32_t eax_3

if (ecx_1 != 0)
    char* edx_1 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_1 = var_2c.d
    
    eax_3 = (*(*ecx_1 + 8))(edx_1, 0)
else
    eax_3 = 0

int32_t var_8_2 = 0xffffffff
eax_3.b = eax_3 == 1
*(arg1 + 0x44) = eax_3.b

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

void* var_4c = arg2
void* var_48 = arg1
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_403490(&var_2c, 0x767688, 4)
int32_t var_8_3 = 1
long double x87_r0
_com_util::ConvertBSTRToString(&var_4c, x87_r0, &var_2c, 0)
int32_t var_8_4 = 0xffffffff

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x767690, 4)
int32_t var_8_5 = 2
long double x87_r1
_com_util::ConvertBSTRToString(&var_4c, x87_r1, &var_2c, 1)
int32_t var_8_6 = 0xffffffff

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
sub_403490(&var_2c, 0x767698, 4)
int32_t var_8_7 = 3
long double x87_r2
_com_util::ConvertBSTRToString(&var_4c, x87_r2, &var_2c, 2)
int32_t var_8_8 = 0xffffffff

if (var_18_3 u>= 0x10)
    sub_403160(var_2c.d, var_18_3 + 1, 1)

int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_403490(&var_2c, 0x7675dc, 4)
int32_t var_8_9 = 4
long double x87_r3
_com_util::ConvertBSTRToString(&var_4c, x87_r3, &var_2c, 3)
int32_t var_8_10 = 0xffffffff

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x7675e4, 0x12)
int32_t var_8_11 = 5
int32_t* ecx_11 = *(arg2 + 4)
int32_t* esi_1

if (ecx_11 != 0)
    char* edx_2 = &var_44
    
    if (var_30 u>= 0x10)
        edx_2 = var_44.d
    
    esi_1 = (*(*ecx_11 + 0x2c))(edx_2)
else
    esi_1 = nullptr

struct common::CEXArrayReader::VTable* const var_58 = &common::CEXArrayReader::`vftable'
int32_t* var_54 = esi_1
var_8_11.b = 7

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
int32_t result
int32_t ecx_12
int32_t edx_3
int32_t ebx

if (esi_1 != 0)
    ebx = (*(*esi_1 + 0xc))(3, 0)
    int32_t result_1 = (*(*esi_1 + 0xc))(2, 0)
    ecx_12 = (*(*esi_1 + 0xc))(1, 0)
    edx_3 = (*(*esi_1 + 0xc))(0, 0)
    result = result_1
else
    ebx = 0
    result = 0
    ecx_12 = 0
    edx_3 = 0

*(arg1 + 0x30) = edx_3
*(arg1 + 0x34) = ecx_12
*(arg1 + 0x3c) = result
result.b = 1
*(arg1 + 0x40) = ebx
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
