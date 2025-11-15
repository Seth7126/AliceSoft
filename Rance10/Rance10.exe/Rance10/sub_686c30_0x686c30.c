// 函数: sub_686c30
// 地址: 0x686c30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7470bc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char result = (*(*arg1 + 0x6c))(eax_2)

if (result != 0)
    int32_t* var_40
    int32_t* eax_8 = sub_432270(&var_40, (*(*arg1 + 0x50))())
    int32_t* var_34 = nullptr
    SRWLOCK var_30
    __builtin_memset(&var_30, 0, 4)
    sub_4323a0(&var_34, eax_8)
    int32_t var_8_1 = 0
    SRWLOCK var_3c
    __seterrormode(&var_3c)
    var_8_1.b = 1
    int32_t* ecx_3 = var_40
    
    if (ecx_3 != 0)
        var_40 = nullptr
        (*(*ecx_3 + 4))()
    
    var_8_1.b = 0
    ___crtSetUnhandledExceptionFilter(&var_3c)
    __Smtx_lock_shared(&var_30)
    int32_t* ebx
    ebx.b = var_34 != 0
    __Smtx_unlock_shared(&var_30)
    
    if (ebx.b == 0)
        ebx.b = 0
    else
        __Smtx_lock_shared(&var_30)
        int32_t* edi_1 = var_34
        __Smtx_unlock_shared(&var_30)
        
        if ((*(*edi_1 + 0x30))((*(*arg2 + 0x10))((*(*arg2 + 0x14))(1, 1, (*(*arg1 + 0x88))(1))))
                != 0)
            SRWLOCK* var_58_8 = &var_30
            
            if ((*(*arg1 + 0x70))() != 0)
                __Smtx_lock_shared(var_58_8)
                int32_t* esi_3 = var_34
                __Smtx_unlock_shared(&var_30)
                char eax_24
                int32_t ecx_14
                eax_24, ecx_14 = (*(*esi_3 + 0x34))()
                
                if (eax_24 == 0)
                    ebx.b = 0
                else
                    int32_t var_58_9 = ecx_14
                    
                    if ((*(*arg1 + 0x68))(0, 0x3f800000) == 0)
                        ebx.b = 0
                    else
                        int32_t** ecx_17 = &var_34
                        
                        if ((*(*arg1 + 0x74))() == 0)
                            (*(*sub_431af0(ecx_17) + 0x38))()
                            ebx.b = 0
                        else if ((*(*sub_431af0(ecx_17) + 0x38))() == 0)
                            ebx.b = 0
                        else
                            ecx_17 = &var_34
                            
                            if ((*(*arg1 + 0x78))() == 0)
                                (*(*sub_431af0(ecx_17) + 0x38))()
                                ebx.b = 0
                            else if ((*(*sub_431af0(ecx_17) + 0x40))(arg2) == 0)
                                ebx.b = 0
                            else
                                ebx.b = 1
            else
                __Smtx_lock_shared(var_58_8)
                int32_t* esi_2 = var_34
                __Smtx_unlock_shared(&var_30)
                (*(*esi_2 + 0x38))()
                ebx.b = 0
        else
            void var_2c
            sub_403360(&var_2c, 0x76ef28)
            var_8_1.b = 2
            sub_6c52e0(&var_2c)
            sub_403320(&var_2c)
            ebx.b = 0
    
    __seterrormode(&var_30)
    int32_t var_8_2 = 3
    int32_t* ecx_23 = var_34
    
    if (ecx_23 != 0)
        var_34 = nullptr
        (*(*ecx_23 + 4))()
    
    ___crtSetUnhandledExceptionFilter(&var_30)
    result = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
