// 函数: sub_46df20
// 地址: 0x46df20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d536
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_2c
char* eax_3 = sub_462db0(&var_2c, arg2)

if (arg1 + 0x44 != eax_3)
    int32_t eax_4 = *(arg1 + 0x58)
    
    if (eax_4 u>= 0x10)
        sub_403160(*(arg1 + 0x44), eax_4 + 1, 1)
    
    *(arg1 + 0x58) = 0xf
    bool cond:0_1 = *(arg1 + 0x58) u< 0x10
    *(arg1 + 0x54) = 0
    char* eax_6
    
    if (cond:0_1)
        eax_6 = arg1 + 0x44
    else
        eax_6 = *(arg1 + 0x44)
    
    *eax_6 = 0
    sub_4056a0(arg1 + 0x44, eax_3)

int32_t result_1
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
