// 函数: sub_5d4d60
// 地址: 0x5d4d60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741322
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_64 = esi
int32_t* i_1
sub_67f950(&i_1, esi + 0xc)
int32_t var_8_1 = 0
int32_t var_7c

for (int32_t* i = i_1; i != var_7c; i = &i[6])
    void* var_44
    sub_404d80(&var_44, i)
    var_8_1.b = 1
    char eax_3 = sub_407560(&var_44, "txtex")
    char eax_4
    
    if (eax_3 == 0)
        eax_4 = sub_407560(&var_44, 0x76a7dc)
    
    int32_t var_30
    
    if (eax_3 != 0 || eax_4 != 0)
        char var_5c
        sub_405480(i, &var_5c, *(esi + 0x1c), 0xffffffff)
        var_8_1.b = 2
        char var_2c
        sub_404ea0(&var_2c)
        var_8_1.b = 4
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c.d, var_48 + 1, 1)
        
        var_48 = 0xf
        int32_t var_4c_1 = 0
        int32_t esi_1 = *(esi + 0x24)
        var_5c = 0
        void** var_84
        
        if (*sub_5d4880(esi + 0x24, &var_84, &var_2c) == esi_1)
            int32_t* i_2
            
            if (i[5] u< 0x10)
                i_2 = i
            else
                i_2 = *i
            
            int32_t* var_74
            int32_t* eax_13 = sub_432270(&var_74, sub_46d500(i_2))
            int32_t* var_6c = nullptr
            SRWLOCK var_68
            __builtin_memset(&var_68, 0, 4)
            sub_4323a0(&var_6c, eax_13)
            SRWLOCK var_70
            __seterrormode(&var_70)
            var_8_1.b = 6
            int32_t* ecx_9 = var_74
            
            if (ecx_9 != 0)
                var_74 = nullptr
                (*(*ecx_9 + 4))(eax_2)
            
            var_8_1.b = 5
            ___crtSetUnhandledExceptionFilter(&var_70)
            __Smtx_lock_shared(&var_68)
            bool var_5d_1 = var_6c != 0
            __Smtx_unlock_shared(&var_68)
            char temp0_1 = var_5d_1 ^ 1
            char var_5d_2 = temp0_1
            
            if (temp0_1 == 0)
                var_8_1.b = 8
                int32_t* eax_16
                void* ecx_12
                eax_16, ecx_12 = sub_5d5d20(sub_4051e0(&var_5c, &var_2c), &var_6c)
                int32_t* var_a0_9 = eax_16
                void* var_a4_6 = &eax_16[4]
                void** var_8c
                sub_5d2aa0(var_64 + 0x24, &var_8c, ecx_12)
                
                if (var_48 u>= 0x10)
                    sub_403160(var_5c.d, var_48 + 1, 1)
                
                __seterrormode(&var_68)
                var_8_1.b = 9
            else
                __seterrormode(&var_68)
                var_8_1.b = 7
            
            int32_t* ecx_14 = var_6c
            
            if (ecx_14 != 0)
                var_6c = nullptr
                (*(*ecx_14 + 4))(eax_2)
            
            ___crtSetUnhandledExceptionFilter(&var_68)
        
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        var_8_1.b = 0
        var_2c = 0
        int32_t var_1c_1 = 0
        var_18 = 0xf
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        esi = var_64
    else
        var_8_1.b = eax_4
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)

int32_t result = sub_417070(&i_1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
