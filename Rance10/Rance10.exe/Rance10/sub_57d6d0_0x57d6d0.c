// 函数: sub_57d6d0
// 地址: 0x57d6d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ced6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
bool cond:0 = ebx[0xd] != 0
int32_t* var_4c = arg2
char result

if (cond:0)
    sub_57de70(arg1)
    int32_t* var_54
    sub_4323a0(ebx, sub_5cdbe0(ebx[0xd], &var_54, arg2, arg3, 0))
    SRWLOCK var_50
    __seterrormode(&var_50)
    int32_t var_8_1 = 0
    int32_t* ecx_2 = var_54
    
    if (ecx_2 != 0)
        var_54 = nullptr
        (*(*ecx_2 + 4))(eax_2)
    
    int32_t var_8_2 = 0xffffffff
    ___crtSetUnhandledExceptionFilter(&var_50)
    __Smtx_lock_shared(&ebx[1])
    int32_t esi_1 = *ebx
    __Smtx_unlock_shared(&ebx[1])
    
    if (esi_1 == 0)
        result = 0
    else if (sub_57daf0(ebx) == 0)
        result = 0
    else
        char eax_5 = sub_57dd80(ebx)
        int32_t* esi_2 = var_4c
        
        if (eax_5 == 0)
            int32_t* eax_6
            
            if (esi_2[5] u< 0x10)
                eax_6 = esi_2
            else
                eax_6 = *esi_2
            
            var_4c = eax_6
            void var_30
            sub_403360(&var_30, 0x767f38)
            int32_t var_8_3 = 1
            var_8_3.b = 2
            void var_48
            sub_5e01e0(sub_409240(&var_4c, &var_30, &var_48, &var_4c))
            sub_403320(&var_48)
            int32_t var_8_4 = 0xffffffff
            sub_403320(&var_30)
        
        if (&ebx[4] != esi_2)
            sub_403590(&ebx[4], esi_2, 0, 0xffffffff)
        
        sub_57df00(ebx)
        result = 1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
