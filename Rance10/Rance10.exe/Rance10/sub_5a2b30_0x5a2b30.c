// 函数: sub_5a2b30
// 地址: 0x5a2b30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a090
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t xmm2
int32_t var_48 = xmm2

if (arg2[5] u>= 0x10)
    arg2 = *arg2

void** var_4c = arg2
int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "\t%s = %f\r\n\r\n", 0xc)
int32_t var_8_1 = 0
char var_44
char* ecx_2 = sub_5a64f0(&var_4c, &var_2c, &var_44, &var_4c)
var_8_1.b = 1
int32_t edx_1 = *(ecx_2 + 0x14)
int32_t edi = *(ecx_2 + 0x10)
char* eax_5

if (edx_1 u< 0x10)
    eax_5 = ecx_2
else
    eax_5 = *ecx_2

if (edx_1 u>= 0x10)
    ecx_2 = *ecx_2

var_48.b = 0
int32_t var_5c_1 = var_48
sub_6ca200(arg1 + 4, *(arg1 + 8), ecx_2, &eax_5[edi])
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
