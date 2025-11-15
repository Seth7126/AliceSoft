// 函数: sub_4a50c0
// 地址: 0x4a50c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731444
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x64) == 0)
    char var_14
    bool eax_13
    
    if (*(arg1 + 0x50) == 0)
    label_4a511f:
        
        if (*(arg1 + 0x78) == *(arg1 + 0x6c) && *(arg1 + 0x7c) == *(arg1 + 0x70))
        label_4a5135:
            var_14.d = 0
            eax_13 = (*(*(arg1 + 0x54) + 4))(1, &var_14)
            
            if (eax_13 == 0 || var_14.d == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return true
    else if ((*(**(arg1 + 0x50) + 0x10))(eax_2) == 0)
        if (*(arg1 + 0x50) == 0)
            goto label_4a511f
        
        if ((*(**(arg1 + 0x50) + 0x40))() == 0 && *(arg1 + 0x78) == *(arg1 + 0x6c)
                && *(arg1 + 0x7c) == *(arg1 + 0x70))
            goto label_4a5135
    
    if (*(arg1 + 0x50) == 0)
        var_14 = 0
    else if ((*(**(arg1 + 0x50) + 0x10))(eax_2) == 0 || *(arg1 + 0x50) == 0)
        var_14 = 0
    else if ((*(**(arg1 + 0x50) + 0x40))() == 0)
        var_14 = 0
    else
        char eax_20 = sub_4a5570(arg1)
        var_14 = 1
        
        if (eax_20 == 0)
            var_14 = 0
    
    if (*(arg1 + 4) != 0)
        eax_13 = sub_4a5cc0(arg1, (var_14.d).b, arg4)
    
    if (*(arg1 + 4) != 0 && eax_13 != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return true
    
    int32_t* var_24
    int32_t* eax_23 = sub_432270(&var_24, 
        std::locale::_Locimp::_Locimp_dtor(arg1 + 0x4c, arg2, arg3, *(arg1 + 0x6c), *(arg1 + 0x70), 
            *(arg1 + 0x78), *(arg1 + 0x7c), arg5, arg1 + 0x54))
    int32_t* var_1c = nullptr
    SRWLOCK var_18
    __builtin_memset(&var_18, 0, 4)
    sub_4323a0(&var_1c, eax_23)
    int32_t var_8_1 = 0
    SRWLOCK var_20
    __seterrormode(&var_20)
    var_8_1.b = 1
    int32_t* ecx_10 = var_24
    
    if (ecx_10 != 0)
        var_24 = nullptr
        (*(*ecx_10 + 4))(eax_2)
    
    var_8_1.b = 0
    ___crtSetUnhandledExceptionFilter(&var_20)
    __Smtx_lock_shared(&var_18)
    int32_t ebx
    ebx.b = var_1c != 0
    __Smtx_unlock_shared(&var_18)
    
    if (ebx.b != 0)
        __Smtx_lock_shared(&var_18)
        int32_t* esi_1 = var_1c
        __Smtx_unlock_shared(&var_18)
        
        if ((*(*esi_1 + 0xc))(eax_2) != 0)
            __Smtx_lock_shared(&var_18)
            int32_t* esi_2 = var_1c
            __Smtx_unlock_shared(&var_18)
            
            if (sub_4a5a70(arg1, (var_14.d).b, esi_2, arg4) != 0)
                sub_431b10(&var_1c)
                fsbase->NtTib.ExceptionList = ExceptionList
                return true
            
            *(arg1 + 0x64) = 1
    
    __seterrormode(&var_18)
    int32_t var_8_2 = 2
    int32_t* ecx_13 = var_1c
    
    if (ecx_13 != 0)
        var_1c = nullptr
        (*(*ecx_13 + 4))(eax_2)
    
    ___crtSetUnhandledExceptionFilter(&var_18)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
