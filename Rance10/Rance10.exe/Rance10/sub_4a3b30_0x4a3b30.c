// 函数: sub_4a3b30
// 地址: 0x4a3b30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x2b8)
int32_t var_34 = 0
int32_t* eax_4

if (ecx != 0)
    eax_4 = (**ecx)(0x760e0c)

if (ecx == 0 || eax_4 == 0)
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
else
    void* var_30
    char* eax_5 = sub_4a3ad0(arg1, &var_30)
    int32_t var_8_1 = 0
    char* eax_6 = (*(*eax_4 + 0x18))(eax_2)
    sub_4176f0(eax_6.b, eax_5, arg2, eax_6)
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30, var_1c + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
