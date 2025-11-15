// 函数: sub_5cd140
// 地址: 0x5cd140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7409d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
void* var_3c = nullptr
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_8_1 = 0
var_8_1.b = 1
void* var_2c
char eax_5 = sub_67edf0(sub_4079d0(arg3, arg1 + 4, &var_2c, arg3), &var_3c)
var_8_1.b = 0
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

if (eax_5 != 0)
    void* ecx_4 = var_3c
    int32_t eax_6
    eax_6.b = ecx_4 == var_38
    
    if (eax_6.b == 0)
        __Smtx_lock_shared(arg1 + 0x2c)
        int32_t* edi_1 = *(arg1 + 0x28)
        __Smtx_unlock_shared(arg1 + 0x2c)
        void* esi_2 = var_3c
        int32_t* var_44
        int32_t* eax_13 = sub_432270(&var_44, (*(*edi_1 + 8))(esi_2, var_38 - esi_2))
        *arg2 = 0
        arg2[1] = 0
        sub_4323a0(arg2, eax_13)
        SRWLOCK var_40
        __seterrormode(&var_40)
        var_8_1.b = 2
        int32_t* ecx_10 = var_44
        
        if (ecx_10 != 0)
            var_44 = nullptr
            (*(*ecx_10 + 4))(eax_2)
        
        ___crtSetUnhandledExceptionFilter(&var_40)
        
        if (esi_2 != 0)
            int32_t var_60_9 = 1
            sub_403160(esi_2, var_34 - esi_2, 1)
    else
        *arg2 = 0
        arg2[1] = 0
        
        if (ecx_4 != 0)
            int32_t var_60_2 = 1
            sub_403160(ecx_4, var_34 - ecx_4, 1)
else
    void* eax_8 = var_3c
    *arg2 = 0
    arg2[1] = 0
    
    if (eax_8 != 0)
        int32_t var_60_1 = 1
        sub_403160(eax_8, var_34 - eax_8, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
