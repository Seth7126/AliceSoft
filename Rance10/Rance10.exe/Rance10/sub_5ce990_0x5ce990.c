// 函数: sub_5ce990
// 地址: 0x5ce990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740d1c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_3 = sub_5d0530(arg1, arg2)
char result

if (eax_3.b == 0)
    struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** var_34 = nullptr
    SRWLOCK var_30 = 0
    int32_t var_8_2 = 1
    __Smtx_lock_shared(&var_30)
    __Smtx_unlock_shared(&var_30)
    
    if (sub_5cf030(arg1, arg2, &var_34) != 0)
        sub_4323a0(arg3, &var_34)
        __seterrormode(&var_30)
        int32_t var_8_4 = 3
        struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** ecx_7 = var_34
        
        if (ecx_7 != 0)
            var_34 = nullptr
            (*ecx_7)->vFunc_1(eax_2)
        
        ___crtSetUnhandledExceptionFilter(&var_30)
        result = 1
    else
        __seterrormode(&var_30)
        int32_t var_8_3 = 2
        struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** ecx_5 = var_34
        
        if (ecx_5 != 0)
            var_34 = nullptr
            (*ecx_5)->vFunc_1(eax_2)
        
        ___crtSetUnhandledExceptionFilter(&var_30)
        result = 0
else
    int32_t var_8_1 = 0
    void* var_2c
    int32_t* ebx
    ebx.b = sub_67edf0(sub_4079d0(eax_3, arg1 + 4, &var_2c, arg2), &arg3[2])
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result = ebx.b != 0 ? 1 : 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
