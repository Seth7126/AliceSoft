// 函数: sub_590350
// 地址: 0x590350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c827c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char ebx = 0
void** var_80 = nullptr
void* var_2c
sub_590240(&var_2c, arg2)
int32_t var_4 = 0
var_80 = nullptr
struct sealengine::CParticleEffect::VTable** result

if (sub_58f6d0(arg1, &var_2c, &var_80) == 0)
    result = nullptr
else
    void** edi_1 = var_80
    
    if (edi_1 == 0)
        result = nullptr
    else
        struct sealengine::CParticleEffect::VTable** eax_7 = sub_69adc6(0x5c)
        struct sealengine::CParticleEffect::VTable** var_78_1 = eax_7
        var_4.b = 1
        char var_44
        
        if (eax_7 == 0)
            result = nullptr
        else
            int32_t* eax_9 = sub_40d1c0(&var_2c, arg1 + 8, &var_44, &var_2c)
            var_4.b = 2
            ebx = 1
            var_80 = 1
            result = sub_55a9e0(eax_7, arg2, eax_9)
        
        int32_t var_4_1 = 0
        
        if ((ebx & 1) != 0)
            int32_t var_30
            
            if (var_30 u>= 0x10)
                j__free(var_44.d)
            
            int32_t var_30_1 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
        
        if (sub_55abc0(result, (*(*edi_1 + 0x18))((*(*edi_1 + 0x14))(arg1, eax_4))) != 0)
            (*(*edi_1 + 4))()
            char var_5c
            char* eax_19 = sub_402a20(&var_5c, &var_2c)
            var_4_1.b = 4
            char var_74
            sub_410a80(eax_19.b, eax_19, &var_74, ".wav")
            var_4_1.b = 6
            int32_t var_48
            
            if (var_48 u>= 0x10)
                j__free(var_5c.d)
            
            int32_t var_48_1 = 0xf
            int32_t var_4c_1 = 0
            var_5c = 0
            void** eax_20 = sub_590590(arg1, &var_74)
            int32_t* ecx_16 = result[0xa]
            
            if (ecx_16 != 0)
                (*(*ecx_16 + 4))()
                result[0xa] = 0
            
            result[0xa] = eax_20
            
            if (eax_20 != 0)
                (**eax_20)()
            
            int32_t var_60
            
            if (var_60 u>= 0x10)
                j__free(var_74.d)
            
            int32_t var_60_1 = 0xf
            int32_t var_64_1 = 0
            var_74 = 0
        else
            sub_53a360(result)
            (*(*edi_1 + 4))()
            result = nullptr

int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_84)
return result
