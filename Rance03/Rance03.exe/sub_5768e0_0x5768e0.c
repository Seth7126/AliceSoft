// 函数: sub_5768e0
// 地址: 0x5768e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6771
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t var_88 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t* ebp = arg1
uint32_t* var_64 = ebp
char* edx = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u> *(arg2 + 8))
    result.b = 0
else
    result = zx.d(*edx)
    uint32_t ecx_5 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8
    *(arg2 + 4) = &edx[4]
    int32_t ecx_6 = ecx_5 | result
    int32_t esi_1 = 0
    int32_t var_70 = 0
    
    if (ecx_6 s<= 0)
    label_576bea:
        result.b = 1
    else
        while (true)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_4 = 0
            
            if (sub_468d00(arg2, &var_2c).b != 0)
                int32_t* var_60 = nullptr
                int32_t var_5c_1 = 0
                int32_t var_58_1 = 0
                var_4.b = 1
                
                if (sub_576f30(ebp, arg2, &var_60).b != 0)
                    char* ecx_9 = *(arg2 + 4)
                    
                    if (&ecx_9[4] u<= *(arg2 + 8))
                        uint32_t edi_7 =
                            ((zx.d(ecx_9[3]) << 8 | zx.d(ecx_9[2])) << 8 | zx.d(ecx_9[1])) << 8
                            | zx.d(*ecx_9)
                        *(arg2 + 4) = &ecx_9[4]
                        int32_t var_6c
                        
                        if (edi_7 == 0)
                            int32_t eax_10 = sub_69adc6(0x38)
                            var_6c = eax_10
                            var_4.b = 2
                            struct sealengine::CPOLMaterial::VTable** eax_11
                            
                            if (eax_10 == 0)
                                eax_11 = nullptr
                            else
                                eax_11 = sub_57a8f0(eax_10, &var_2c, 0, &var_60)
                            
                            var_4.b = 1
                            var_70 = eax_11
                            sub_412de0(&ebp[3], &var_70)
                            goto label_576bb0
                        
                        int32_t eax_12 = sub_69adc6(0x38)
                        var_6c = eax_12
                        var_4.b = 3
                        struct sealengine::CPOLMaterial::VTable** ebp_1
                        
                        if (eax_12 == 0)
                            ebp_1 = nullptr
                        else
                            ebp_1 = sub_57a8f0(eax_12, &var_2c, 1, &var_60)
                        
                        int32_t esi_2 = 0
                        var_4.b = 1
                        var_6c = ebp_1
                        
                        if (edi_7 s<= 0)
                        label_576b97:
                            ebp = var_64
                            sub_412de0(&ebp[3], &var_6c)
                            esi_1 = var_70
                        label_576bb0:
                            var_4.b = 0
                            sub_435c20(&var_60)
                            int32_t var_4_1 = 0xffffffff
                            
                            if (var_18_1 u>= 0x10)
                                j__free(var_2c.d)
                            
                            esi_1 += 1
                            var_70 = esi_1
                            
                            if (esi_1 s>= ecx_6)
                                goto label_576bea
                            
                            continue
                        else
                            while (true)
                                int32_t var_30_1 = 0xf
                                int32_t var_34_1 = 0
                                char var_44 = 0
                                var_4.b = 4
                                
                                if (sub_468d00(arg2, &var_44).b != 0)
                                    int32_t var_54 = 0
                                    int32_t var_50_1 = 0
                                    int32_t var_4c_1 = 0
                                    var_4.b = 5
                                    
                                    if (sub_576f30(var_64, arg2, &var_54) == 0)
                                        if (ebp_1 != 0)
                                            (*ebp_1)->vFunc_0(1)
                                        
                                        var_4.b = 4
                                        sub_435c20(&var_54)
                                    else
                                        int32_t eax_15 = sub_69adc6(0x38)
                                        int32_t var_68 = eax_15
                                        var_4.b = 6
                                        struct sealengine::CPOLMaterial::VTable** eax_16
                                        
                                        if (eax_15 == 0)
                                            eax_16 = nullptr
                                        else
                                            eax_16 = sub_57a8f0(eax_15, &var_44, 0, &var_54)
                                        
                                        var_4.b = 5
                                        var_68 = eax_16
                                        sub_412de0(&ebp_1[0xb], &var_68)
                                        var_4.b = 4
                                        sub_435c20(&var_54)
                                        var_4.b = 1
                                        
                                        if (var_30_1 u>= 0x10)
                                            j__free(var_44.d)
                                        
                                        esi_2 += 1
                                        
                                        if (esi_2 s>= edi_7)
                                            goto label_576b97
                                        
                                        continue
                                else if (ebp_1 != 0)
                                    (*ebp_1)->vFunc_0(1)
                                
                                if (var_30_1 u>= 0x10)
                                    j__free(var_44.d)
                                
                                int32_t var_30_2 = 0xf
                                int32_t var_34_2 = 0
                                var_44 = 0
                                break
                
                var_4.b = 0
                int32_t* ebx_1 = var_60
                
                if (ebx_1 != 0)
                    int32_t* esi_3 = ebx_1
                    
                    if (ebx_1 != var_5c_1)
                        do
                            (**esi_3)(0)
                            esi_3 = &esi_3[0xa]
                        while (esi_3 != var_5c_1)
                    
                    j__free(ebx_1)
            
            if (var_18_1 u< 0x10)
                break
            
            j__free(var_2c.d)
            break
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return result
