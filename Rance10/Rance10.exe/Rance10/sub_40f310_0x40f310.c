// 函数: sub_40f310
// 地址: 0x40f310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_Endwrite@?$basic_filebuf@_WU?$char_traits@_W@std@@@std@@IAE_NXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != 0)
    void var_a8
    (*(*ecx + 0xc))(&var_a8, arg3)
    int32_t var_8_1 = 0
    char var_30
    int32_t ebx
    
    if (var_30 != 0)
        void* var_2c
        sub_409670(arg2, sub_41aaa0(&var_a8, &var_2c))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        ebx.b = 1
    else
        ebx.b = 0
    
    sub_40ad50(&var_a8)
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
