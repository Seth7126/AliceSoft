// 函数: sub_46db40
// 地址: 0x46db40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_58 = &fileimage::CFileImageMaker::`vftable'
int32_t result_1 = 0
int32_t var_50 = 0
int32_t var_4c = 0
int32_t var_4 = 0
int32_t var_30 = 0xf
void* var_34 = nullptr
char var_44 = 0
sub_402110(&var_44, 0x6dd378, 3)
var_4.b = 1
char* esi = &var_44
char* edx = &var_44
int32_t var_48
int32_t var_74 = var_48

if (var_30 u>= 0x10)
    esi = var_44.d

if (var_30 u>= 0x10)
    edx = var_44.d

sub_468ff0(&result_1, nullptr, edx, var_34 + esi)
uint8_t var_59 = 0
sub_414b60(&result_1, &var_59)
var_4.b = 0

if (var_30 u>= 0x10)
    j__free(var_44.d)

var_59 = 2
sub_414b60(&result_1, &var_59)
var_59 = 0
sub_414b60(&result_1, &var_59)
var_59 = 0
sub_414b60(&result_1, &var_59)
var_59 = 0
sub_414b60(&result_1, &var_59)
int32_t ebx
ebx.b = *(arg1 + 4) != 0
var_59 = ebx.b
sub_414b60(&result_1, &var_59)
var_59 = (ebx u>> 8).b
sub_414b60(&result_1, &var_59)
var_59 = (ebx u>> 0x10).b
sub_414b60(&result_1, &var_59)
var_59 = (ebx u>> 0x18).b
sub_414b60(&result_1, &var_59)
int32_t ebx_2
ebx_2.b = *(arg1 + 5) != 0
var_59 = ebx_2.b
sub_414b60(&result_1, &var_59)
var_59 = (ebx_2 u>> 8).b
sub_414b60(&result_1, &var_59)
var_59 = (ebx_2 u>> 0x10).b
sub_414b60(&result_1, &var_59)
var_59 = (ebx_2 u>> 0x18).b
sub_414b60(&result_1, &var_59)
int32_t ebx_4
ebx_4.b = *(arg1 + 6) != 0
var_59 = ebx_4.b
sub_414b60(&result_1, &var_59)
var_59 = (ebx_4 u>> 8).b
sub_414b60(&result_1, &var_59)
var_59 = (ebx_4 u>> 0x10).b
sub_414b60(&result_1, &var_59)
var_59 = (ebx_4 u>> 0x18).b
sub_414b60(&result_1, &var_59)
int32_t* var_2c
sub_40d1c0(arg1 + 8, arg2, &var_2c, arg1 + 8)
var_4.b = 2
int32_t var_18
uint8_t ebx_5

if (sub_604d10(&var_2c, &result_1) != 0)
    ebx_5 = 1
else
    int32_t* eax_21 = &var_2c
    
    if (var_18 u>= 0x10)
        eax_21 = var_2c
    
    int32_t* var_74_21 = eax_21
    sub_64b530(0x6dd37c)
    ebx_5 = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t result = result_1
int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c.b = 0

if (result != 0)
    j__free(result)

result.b = ebx_5
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
