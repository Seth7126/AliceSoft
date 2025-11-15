// 函数: sub_62dd70
// 地址: 0x62dd70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_wcstombs_l_helper@@YAIPADPB_WIPAU__crt_locale_pointers@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_4e2870(&var_2c, 3, 0)
int32_t var_8_1 = 0

if (arg2 s<= 0xff)
    char* eax_6 = &var_2c
    
    if (result_1 u>= 0x10)
        eax_6 = var_2c.d
    
    *eax_6 = arg2.b
else
    char* ecx_1 = &var_2c
    
    if (result_1 u>= 0x10)
        ecx_1 = var_2c.d
    
    *ecx_1 = (arg2 s>> 8).b
    char* eax_5 = &var_2c
    
    if (result_1 u>= 0x10)
        eax_5 = var_2c.d
    
    eax_5[1] = arg2.b

char* eax_8 = (**arg1)(&var_2c, eax_2)
void* var_44
int32_t* ecx_4 = sub_419600(eax_8, eax_8, &var_44)
var_8_1.b = 1

if (ecx_4[5] u>= 0x10)
    ecx_4 = *ecx_4

(*(*arg1 + 4))(ecx_4)
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44, var_30 + 1, 1)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
