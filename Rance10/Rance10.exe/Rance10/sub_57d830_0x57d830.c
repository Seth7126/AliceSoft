// 函数: sub_57d830
// 地址: 0x57d830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ce96
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
bool cond:0 = ebx[0xd] != 0
int32_t* var_48 = arg2
char result

if (cond:0)
    sub_57de70(arg1)
    int32_t* var_50
    sub_4323a0(ebx, sub_5ce100(ebx[0xd], &var_50, arg2))
    SRWLOCK var_4c
    __seterrormode(&var_4c)
    int32_t var_8_1 = 0
    int32_t* ecx_2 = var_50
    
    if (ecx_2 != 0)
        var_50 = nullptr
        (*(*ecx_2 + 4))(eax_2)
    
    int32_t var_8_2 = 0xffffffff
    ___crtSetUnhandledExceptionFilter(&var_4c)
    __Smtx_lock_shared(&ebx[1])
    int32_t esi_1 = *ebx
    __Smtx_unlock_shared(&ebx[1])
    
    if (esi_1 == 0)
        result = 0
    else if (sub_57daf0(ebx) == 0)
        result = 0
    else
        char eax_5 = sub_57dd80(ebx)
        int32_t* esi_2 = var_48
        
        if (eax_5 == 0)
            int32_t* eax_6
            
            if (esi_2[5] u< 0x10)
                eax_6 = esi_2
            else
                eax_6 = *esi_2
            
            var_48 = eax_6
            void var_2c
            sub_403360(&var_2c, 0x767ef8)
            int32_t var_8_3 = 1
            var_8_3.b = 2
            void var_44
            sub_5e01e0(sub_409240(&var_48, &var_2c, &var_44, &var_48))
            sub_403320(&var_44)
            int32_t var_8_4 = 0xffffffff
            sub_403320(&var_2c)
        
        if (&ebx[4] != esi_2)
            sub_403590(&ebx[4], esi_2, 0, 0xffffffff)
        
        sub_57df00(ebx)
        result = 1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
