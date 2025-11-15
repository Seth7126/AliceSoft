// 函数: sub_589390
// 地址: 0x589390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d8f4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x4c) == 0)
    struct sealengine::CDrawInstance::sealengine::CParticleEffectView::VTable** result_2
    sub_589c70(arg1 + 0x84, arg1 + 0x88, &result_2, arg1 + 0x84)
    int32_t var_8_1 = 0
    struct sealengine::CDrawInstance::sealengine::CParticleEffectView::VTable** result_1 = result_2
    struct _EXCEPTION_REGISTRATION_RECORD*** ebx
    
    if (sub_5a8660(result_1, *(arg1 + 0x54), *(arg1 + 0x8c)) != 0)
        if (arg1 + 0x4c != &result_2)
            struct _EXCEPTION_REGISTRATION_RECORD** ecx_5 = *(arg1 + 0x4c)
            result = result_1
            result_1 = nullptr
            *(arg1 + 0x4c) = result
            result_2 = nullptr
            
            if (ecx_5 != 0)
                var_8_1.b = 4
                (*ecx_5)->__offset(0x1c).d(1)
        
        result.b = 0
        char temp0_1 = *(arg1 + 0x50)
        *(arg1 + 0x50) = 0
        result.b = temp0_1
        ebx.b = 1
    else
        void** eax_6 = *(arg1 + 0x54) + 0x20
        
        if (eax_6[5] u>= 0x10)
            eax_6 = *eax_6
        
        void** var_4c = eax_6
        void* var_44
        sub_403360(&var_44, 0x7683b4)
        var_8_1.b = 1
        var_8_1.b = 2
        char var_2c
        sub_5e01e0(sub_409240(&var_4c, &var_44, &var_2c, &var_4c))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        struct _EXCEPTION_REGISTRATION_RECORD** var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        ebx.b = 0
    
    int32_t var_8_2 = 0xffffffff
    
    if (result_1 != 0)
        int32_t var_8_3 = 5
        (*result_1)->vFunc_7(1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
