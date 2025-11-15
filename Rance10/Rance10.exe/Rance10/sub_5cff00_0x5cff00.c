// 函数: sub_5cff00
// 地址: 0x5cff00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740f47
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_98 = arg2
int32_t var_80 = 0
void* var_2c
sub_5cfe00(&var_2c, arg3)
int32_t var_8_1 = 1
int32_t* var_7c = nullptr
SRWLOCK var_78 = 0
var_8_1.b = 2
__Smtx_lock_shared(&var_78)
__Smtx_unlock_shared(&var_78)
int32_t var_18

if (sub_5cef80(arg1, &var_2c, &var_7c) != 0)
    __Smtx_lock_shared(&var_78)
    int32_t ebx
    ebx.b = var_7c != 0
    __Smtx_unlock_shared(&var_78)
    
    if (ebx.b != 0)
        char var_44
        void** eax_10 = sub_4079d0(&var_2c, &arg1[1], &var_44, &var_2c)
        var_8_1.b = 5
        int32_t* var_88
        sub_5d25f0(eax_10, arg3, &var_88, eax_10)
        var_8_1.b = 7
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        __Smtx_lock_shared(&var_78)
        int32_t* ebx_1 = var_7c
        __Smtx_unlock_shared(&var_78)
        __Smtx_lock_shared(&var_78)
        int32_t* edi_1 = var_7c
        __Smtx_unlock_shared(&var_78)
        int32_t* var_84
        
        if (sub_599af0(var_88, (*(*edi_1 + 0x18))((*(*ebx_1 + 0x14))(eax_2))) != 0)
            void var_74
            char* eax_18 = sub_405070(&var_74, &var_2c)
            var_8_1.b = 9
            void var_5c
            sub_4176f0(eax_18.b, eax_18, &var_5c, ".wav")
            var_8_1.b = 0xb
            sub_403320(&var_74)
            sub_5a40e0(var_88, sub_5d0240(arg1, &var_5c))
            int32_t* eax_20 = var_88
            var_88 = nullptr
            int32_t var_80_4 = 1
            *arg2 = eax_20
            arg2[1] = var_84
            var_84 = nullptr
            sub_403320(&var_5c)
            var_8_1.b = 0xc
        else
            int32_t var_80_3 = 1
            *arg2 = 0
            arg2[1] = 0
            var_8_1.b = 8
        
        if (var_84 != 0)
            bool cond:0_1 = var_84[1] != 1
            var_84[1]
            var_84[1] -= 1
            
            if (not(cond:0_1))
                (**var_84)()
                int32_t edi_2 = var_84[2]
                var_84[2] -= 1
                
                if (edi_2 == 1)
                    (*(*var_84 + 4))()
        
        sub_431b10(&var_7c)
        sub_403320(&var_2c)
    else
        *arg2 = 0
        arg2[1] = 0
        int32_t var_80_2 = 1
        __seterrormode(&var_78)
        var_8_1.b = 4
        int32_t* ecx_5 = var_7c
        
        if (ecx_5 != 0)
            var_7c = nullptr
            (*(*ecx_5 + 4))(eax_2)
        
        ___crtSetUnhandledExceptionFilter(&var_78)
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
else
    *arg2 = 0
    arg2[1] = 0
    int32_t var_80_1 = 1
    __seterrormode(&var_78)
    var_8_1.b = 3
    int32_t* ecx_2 = var_7c
    
    if (ecx_2 != 0)
        var_7c = nullptr
        (*(*ecx_2 + 4))(eax_2)
    
    ___crtSetUnhandledExceptionFilter(&var_78)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
