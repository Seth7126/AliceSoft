// 函数: sub_44ff30
// 地址: 0x44ff30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b1c4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_7fcb4c

if (arg1 != 0)
    int32_t* ecx_3 = data_7fcb88
    
    if (ecx_3 != 0)
        int32_t* var_24
        int32_t* eax_6 = sub_432270(&var_24, (**ecx_3)(0x75dd68))
        int32_t* var_1c = nullptr
        SRWLOCK var_18
        __builtin_memset(&var_18, 0, 4)
        sub_4323a0(&var_1c, eax_6)
        int32_t var_8_1 = 0
        SRWLOCK var_20
        __seterrormode(&var_20)
        var_8_1.b = 1
        int32_t* ecx_6 = var_24
        
        if (ecx_6 != 0)
            var_24 = nullptr
            (*(*ecx_6 + 4))(eax_2)
        
        var_8_1.b = 0
        ___crtSetUnhandledExceptionFilter(&var_20)
        __Smtx_lock_shared(&var_18)
        int32_t ebx
        ebx.b = var_1c != 0
        __Smtx_unlock_shared(&var_18)
        
        if (ebx.b == 0)
            ebx.b = 0
        else if (sub_44fb70(esi) == 0)
            ebx.b = 0
        else
            sub_44fd10(esi)
            __Smtx_lock_shared(&var_18)
            int32_t* esi_1 = var_1c
            __Smtx_unlock_shared(&var_18)
            
            if ((*(*esi_1 + 0x80))(arg1) == 0)
                ebx.b = 0
            else
                ebx.b = 1
        
        __seterrormode(&var_18)
        int32_t var_8_2 = 2
        int32_t* ecx_10 = var_1c
        
        if (ecx_10 != 0)
            var_1c = nullptr
            (*(*ecx_10 + 4))(eax_2)
        
        ___crtSetUnhandledExceptionFilter(&var_18)
        int32_t eax_12
        eax_12.b = ebx.b
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_12

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
