// 函数: sub_44fc70
// 地址: 0x44fc70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b128
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_30 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = *(arg1 + 0x18)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (edx != 0)
    result = sub_450350(edx, *(*(arg1 + 0x14) + 0xc))

if (edx == 0 || result.b != 0)
    result.b = 1
else
    void* var_2c
    sub_403360(&var_2c, 0x75dd98)
    int32_t var_8_1 = 0
    sub_6c52e0(&var_2c)
    struct _EXCEPTION_REGISTRATION_RECORD** var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
