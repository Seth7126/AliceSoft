// 函数: sub_407000
// 地址: 0x407000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@D@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *(arg1 + 0x80) u< 0x10
*(arg1 + 0x7c) = 0
char* eax_3

if (cond:0)
    eax_3 = arg1 + 0x6c
else
    eax_3 = *(arg1 + 0x6c)

*eax_3 = 0

if (*(arg1 + 0x28) == 0)
    int32_t var_58_1 = 2
    sub_407430(arg1 + 0x6c, &data_75ccf4, 2)
else if (*(arg1 + 0x2c) == 0 || *(arg1 + 0x40) == 0)
    int32_t var_58_2 = 2
    sub_407430(arg1 + 0x6c, &data_75cd00, 2)
else if (*(arg1 + 0x64) == 0 || *(arg1 + 0x68) != 0)
    sub_4073f0(0x75ccfc)
else
    sub_4073f0(0x75ccf8)

void* eax_4 = arg1 + 8

if (*(arg1 + 0x1c) u>= 0x10)
    eax_4 = *eax_4

void* var_48 = eax_4
int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, " %s(%d)", 7)
int32_t var_8_1 = 0
var_8_1.b = 1
char var_44
sub_4055a0(arg1 + 0x6c, sub_4075c0(&var_48, &var_2c, &var_44, &var_48, *(arg1 + 0x20) + 1), 0, 
    0xffffffff)
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t result = result_1
int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
