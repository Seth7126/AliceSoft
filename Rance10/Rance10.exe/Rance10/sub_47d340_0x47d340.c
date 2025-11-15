// 函数: sub_47d340
// 地址: 0x47d340
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_wcstombs_l_helper@@YAIPADPB_WIPAU__crt_locale_pointers@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = (**arg1)(eax_2)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (*edx != 0)
    char* ecx_1 = edx
    char* eax_4
    
    do
        eax_4.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_4.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_2c, edx, ecx)
int32_t var_8_1 = 0
char var_44
char* ecx_4 = sub_47c9a0(&var_44, &var_2c)
var_8_1.b = 1

if (*(ecx_4 + 0x14) u>= 0x10)
    ecx_4 = *ecx_4

(*(*arg1 + 4))(ecx_4)
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
