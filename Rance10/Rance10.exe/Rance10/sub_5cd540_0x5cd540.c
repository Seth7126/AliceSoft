// 函数: sub_5cd540
// 地址: 0x5cd540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740ab7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_58 = arg1
void** edi = arg4
SRWLOCK var_5c = arg3
int32_t var_80 = 0

if (sub_5d0530(arg1, edi) != 0)
    int32_t* var_60
    int32_t* eax_9 = sub_5cd140(arg1, &var_60, var_5c)
    int32_t* var_4c = nullptr
    SRWLOCK var_48
    __builtin_memset(&var_48, 0, 4)
    sub_4323a0(&var_4c, eax_9)
    int32_t var_8_2 = 2
    __seterrormode(&var_5c)
    var_8_2.b = 3
    int32_t* ecx_7 = var_60
    
    if (ecx_7 != 0)
        var_60 = nullptr
        (*(*ecx_7 + 4))(eax_2)
    
    var_8_2.b = 2
    ___crtSetUnhandledExceptionFilter(&var_5c)
    __Smtx_lock_shared(&var_48)
    void** ebx
    ebx.b = var_4c != 0
    __Smtx_unlock_shared(&var_48)
    
    if (ebx.b != 0)
        int32_t* var_68
        int32_t* eax_12 = sub_5cd140(var_58, &var_68, edi)
        int32_t* var_54 = nullptr
        SRWLOCK var_50
        __builtin_memset(&var_50, 0, 4)
        sub_4323a0(&var_54, eax_12)
        SRWLOCK var_64
        __seterrormode(&var_64)
        var_8_2.b = 6
        int32_t* ecx_11 = var_68
        
        if (ecx_11 != 0)
            var_68 = nullptr
            (*(*ecx_11 + 4))(eax_2)
        
        var_8_2.b = 5
        ___crtSetUnhandledExceptionFilter(&var_64)
        __Smtx_lock_shared(&var_50)
        ebx.b = var_54 != 0
        __Smtx_unlock_shared(&var_50)
        
        if (ebx.b != 0)
            __Smtx_lock_shared(&var_50)
            int32_t* edi_1 = var_54
            __Smtx_unlock_shared(&var_50)
            __Smtx_lock_shared(&var_48)
            int32_t* esi_1 = var_4c
            __Smtx_unlock_shared(&var_48)
            void** ecx_12 = var_58
            void var_90
            void var_88
            int32_t var_78
            int32_t var_70
            int32_t* eax_15
            int32_t ebx_1
            
            if (arg5 == 0)
                int32_t* eax_16 = sub_5cf540(ecx_12, &var_88, esi_1, edi_1)
                var_70 = 0
                int32_t var_6c_1 = 0
                sub_4323a0(&var_70, eax_16)
                eax_15 = &var_70
                ebx_1 = 0x18
            else
                int32_t* eax_14 = sub_5cf7c0(ecx_12, &var_90, esi_1, edi_1)
                var_78 = 0
                int32_t var_74_1 = 0
                sub_4323a0(&var_78, eax_14)
                eax_15 = &var_78
                ebx_1 = 6
            
            *arg2 = 0
            arg2[1] = 0
            sub_4323a0(arg2, eax_15)
            int32_t ebx_2 = ebx_1 | 1
            
            if ((ebx_2.b & 0x10) != 0)
                ebx_2 &= 0xffffffef
                sub_431b10(&var_70)
            
            if ((ebx_2.b & 8) != 0)
                ebx_2 &= 0xfffffff7
                sub_431b10(&var_88)
            
            if ((ebx_2.b & 4) != 0)
                ebx_2 &= 0xfffffffb
                sub_431b10(&var_78)
            
            if ((ebx_2.b & 2) != 0)
                sub_431b10(&var_90)
        else
            *arg2 = 0
            arg2[1] = 0
        
        sub_431b10(&var_54)
        sub_431b10(&var_4c)
    else
        *arg2 = 0
        arg2[1] = 0
        __seterrormode(&var_48)
        int32_t var_8_3 = 4
        int32_t* ecx_8 = var_4c
        
        if (ecx_8 != 0)
            var_4c = nullptr
            (*(*ecx_8 + 4))(eax_2)
        
        ___crtSetUnhandledExceptionFilter(&var_48)
else
    if (edi[5] u>= 0x10)
        edi = *edi
    
    var_58 = edi
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x76a78c, 0x32)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_44
    sub_5e01e0(sub_409240(&var_58, &var_2c, &var_44, &var_58))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    *arg2 = 0
    arg2[1] = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
