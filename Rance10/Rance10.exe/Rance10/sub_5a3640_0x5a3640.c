// 函数: sub_5a3640
// 地址: 0x5a3640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ead0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_403490(&var_2c, 0x769b44, 9)
int32_t var_8_1 = 0
char* esi = &var_2c
char* edx = &var_2c

if (var_18 u>= 0x10)
    esi = var_2c.d

if (var_18 u>= 0x10)
    edx = var_2c.d

int32_t var_78 = 0.d
sub_6ca200(arg1 + 4, *(arg1 + 8), edx, var_1c + esi)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t ecx_3 = sub_403490(&var_2c, "\t\t%f, %f, %f", 0xc)
int32_t var_8_3 = 1
*(arg2 + 0xd8)
int32_t var_78_1 = ecx_3
char var_5c
char* ecx_5 = sub_507fa0(arg2 + 0xd4, &var_2c, &var_5c, arg2 + 0xd4, *(arg2 + 0xdc))
var_8_3.b = 2
int32_t edx_2 = *(ecx_5 + 0x14)
int32_t edi_1 = *(ecx_5 + 0x10)
char* eax_9

if (edx_2 u< 0x10)
    eax_9 = ecx_5
else
    eax_9 = *ecx_5

if (edx_2 u>= 0x10)
    ecx_5 = *ecx_5

int32_t var_78_3 = 0.d
sub_6ca200(arg1 + 4, *(arg1 + 8), ecx_5, &eax_9[edi_1])
int32_t var_48

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_8_4 = 0xffffffff
int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c = 0

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

int32_t result_1 = 0xf
void* const var_34 = nullptr
char var_44 = 0
sub_403490(&var_44, "\r\n", 2)
int32_t var_8_5 = 3
char* esi_2 = &var_44
char* edx_3 = &var_44

if (result_1 u>= 0x10)
    esi_2 = var_44.d

if (result_1 u>= 0x10)
    edx_3 = var_44.d

int32_t var_78_4 = 0.d
sub_6ca200(arg1 + 4, *(arg1 + 8), edx_3, var_34 + esi_2)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
