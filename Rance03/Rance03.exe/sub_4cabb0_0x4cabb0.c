// 函数: sub_4cabb0
// 地址: 0x4cabb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bead8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&ecx[4] u> *(arg1 + 8))
    result.b = 0
else
    int32_t esi_1 = 0
    int32_t var_68_1 = 0
    int32_t ebx_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *(arg1 + 4) = &ecx[4]
    
    if (ebx_7 s<= 0)
    label_4cadc9:
        result.b = 1
    else
        while (true)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_4 = 0
            
            if (sub_468d00(arg1, &var_2c).b != 0)
                char* ecx_2 = *(arg1 + 4)
                
                if (&ecx_2[4] u<= *(arg1 + 8))
                    int32_t ebp_1 = 0
                    int32_t ebx_14 =
                        ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8
                        | zx.d(*ecx_2)
                    *(arg1 + 4) = &ecx_2[4]
                    
                    if (ebx_14 s<= 0)
                    label_4cad9f:
                        int32_t var_4_1 = 0xffffffff
                        
                        if (var_18_1 u>= 0x10)
                            j__free(var_2c.d)
                        
                        esi_1 += 1
                        var_68_1 = esi_1
                        
                        if (esi_1 s>= ebx_7)
                            goto label_4cadc9
                        
                        continue
                    else
                        while (true)
                            result = *(arg1 + 8)
                            char* ecx_4 = *(arg1 + 4) + 4
                            
                            if (ecx_4 u> result)
                                break
                            
                            *(arg1 + 4) = ecx_4
                            
                            if (&ecx_4[4] u> result)
                                break
                            
                            int32_t esi_2 = 0
                            int32_t ebx_21 =
                                ((zx.d(ecx_4[3]) << 8 | zx.d(ecx_4[2])) << 8 | zx.d(ecx_4[1])) << 8
                                | zx.d(*ecx_4)
                            *(arg1 + 4) = &ecx_4[4]
                            
                            if (ebx_21 s> 0)
                                while (true)
                                    int32_t var_30_1 = 0xf
                                    int32_t var_34_1 = 0
                                    char var_44 = 0
                                    int32_t var_48_1 = 0xf
                                    int32_t var_4c_1 = 0
                                    char var_5c = 0
                                    var_4.b = 2
                                    
                                    if (sub_468d00(arg1, &var_44).b != 0
                                            && sub_468d00(arg1, &var_5c).b != 0)
                                        if (var_48_1 u>= 0x10)
                                            j__free(var_5c.d)
                                        
                                        var_4.b = 0
                                        int32_t var_48_2 = 0xf
                                        int32_t var_4c_2 = 0
                                        var_5c = 0
                                        
                                        if (var_30_1 u>= 0x10)
                                            j__free(var_44.d)
                                        
                                        esi_2 += 1
                                        
                                        if (esi_2 s>= ebx_21)
                                            goto label_4cad90
                                        
                                        continue
                                    
                                    if (var_48_1 u>= 0x10)
                                        j__free(var_5c.d)
                                    
                                    int32_t var_48_3 = 0xf
                                    int32_t var_4c_3 = 0
                                    var_5c = 0
                                    
                                    if (var_30_1 u>= 0x10)
                                        j__free(var_44.d)
                                    
                                    int32_t var_30_2 = 0xf
                                    int32_t var_34_2 = 0
                                    var_44 = 0
                                    break
                                
                                break
                            
                        label_4cad90:
                            ebp_1 += 1
                            
                            if (ebp_1 s>= ebx_14)
                                esi_1 = var_68_1
                                goto label_4cad9f
            
            if (var_18_1 u< 0x10)
                break
            
            j__free(var_2c.d)
            break
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
