// 函数: sub_576d30
// 地址: 0x576d30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c67c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t* var_3c = arg1
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
char eax_5 = sub_468d00(arg2, &var_2c)
char* ecx_1

if (eax_5 != 0)
    ecx_1 = *(arg2 + 4)

struct sealengine::CPOLMaterial::VTable** result

if (eax_5 == 0 || &ecx_1[4] u> *(arg2 + 8))
    result = nullptr
else
    uint32_t esi_2 = zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])
    int32_t var_38 = 0
    int32_t var_34_1 = 0
    uint32_t esi_6 = (esi_2 << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
    *(arg2 + 4) = &ecx_1[4]
    int32_t var_30_1 = 0
    var_4.b = 1
    
    if (sub_576f30(arg1, arg2, &var_38) == 0)
    label_576ee0:
        result = nullptr
        var_4.b = 0
        sub_435c20(&var_38)
    else
        uint32_t var_40
        
        if (sub_468b20(arg2, &var_40) == 0)
            goto label_576ee0
        
        uint32_t ebp_1 = var_40
        struct sealengine::CPOLMaterial::VTable** eax_11 = sub_69adc6(0x38)
        
        if (ebp_1 != 0)
            var_40 = eax_11
            var_4.b = 3
            
            if (eax_11 == 0)
                result = nullptr
            else
                result = sub_57a8f0(eax_11, &var_2c, esi_6 != 0, &var_38)
            
            int32_t edi_1 = 0
            var_4.b = 1
            
            if (ebp_1 s> 0)
                while (true)
                    uint32_t eax_18 = sub_576d30(arg2)
                    
                    if (eax_18 == 0)
                        if (result != 0)
                            (*result)->vFunc_0(1)
                        
                        break
                    
                    var_40 = eax_18
                    sub_412de0(&result[0xb], &var_40)
                    edi_1 += 1
                    
                    if (edi_1 s>= ebp_1)
                        var_4.b = 0
                        sub_435c20(&var_38)
                        goto label_576ef4
                
                goto label_576ee0
            
            var_4.b = 0
            sub_435c20(&var_38)
        else
            struct sealengine::CPOLMaterial::VTable** var_3c_1 = eax_11
            var_4.b = 2
            
            if (eax_11 == 0)
                goto label_576ee0
            
            var_4.b = 0
            result = sub_57a8f0(eax_11, &var_2c, esi_6 != 0, &var_38)
            sub_435c20(&var_38)

label_576ef4:

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
