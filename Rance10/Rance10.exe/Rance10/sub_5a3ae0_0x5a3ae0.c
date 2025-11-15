// 函数: sub_5a3ae0
// 地址: 0x5a3ae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ead0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_60 = arg2
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_403490(&var_2c, 0x769d60, 0x17)
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
var_60 = *(var_60 + 0x124)
int32_t var_1c_1 = 0
var_2c = 0
sub_403490(&var_2c, "\t\t%d", 4)
int32_t var_8_3 = 1
char var_5c
char* ecx_4 = sub_409350(&var_60, &var_2c, &var_5c, &var_60)
var_8_3.b = 2
int32_t edx_2 = *(ecx_4 + 0x14)
int32_t esi_1 = *(ecx_4 + 0x10)
char* eax_11

if (edx_2 u< 0x10)
    eax_11 = ecx_4
else
    eax_11 = *ecx_4

if (edx_2 u>= 0x10)
    ecx_4 = *ecx_4

int32_t var_78_2 = 0.d
sub_6ca200(arg1 + 4, *(arg1 + 8), ecx_4, &eax_11[esi_1])
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

var_60.b = 0
void* var_78_3 = var_60
sub_6ca200(arg1 + 4, *(arg1 + 8), edx_3, var_34 + esi_2)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
