// 函数: sub_4503e0
// 地址: 0x4503e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b74d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_78 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_450ae0(*(*(arg1 + 0x1c) + 4))
void* eax_6 = *(arg1 + 0x1c)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg1 + 0x1c)
*eax_7 = eax_7
void* eax_8 = *(arg1 + 0x1c)
*(eax_8 + 8) = eax_8
*(arg1 + 0x20) = 0
char* ecx_1 = *arg2
uint32_t* result = arg2[1]

if (ecx_1 != result)
    struct fileimage::CFileImageAnalyser::VTable* const var_60 =
        &fileimage::CFileImageAnalyser::`vftable'
    result = result
    char* var_5c_1 = ecx_1
    int32_t var_4 = 0
    
    if (&ecx_1[4] u> result)
        result.b = 0
    else
        int32_t ebx_1 = 0
        void* var_5c_2 = &ecx_1[4]
        int32_t var_54_1 = 0
        int32_t edi_7 =
            ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
        
        if (edi_7 s<= 0)
            result.b = 1
        else
            while (true)
                int32_t var_30_1 = 0xf
                int32_t var_34_1 = 0
                char var_44 = 0
                var_4.b = 1
                
                if (sub_468d00(&var_60, &var_44).b != 0)
                    void* edx_2 = var_5c_2
                    
                    if (edx_2 + 4 u<= result)
                        var_5c_2 = edx_2 + 4
                        uint32_t var_50
                        uint32_t var_4c
                        uint32_t var_48
                        
                        switch ((((zx.d(*(edx_2 + 3)) << 8 | zx.d(*(edx_2 + 2))) << 8
                                | zx.d(*(edx_2 + 1))) << 8 | zx.d(*edx_2)) - 1)
                            case 0
                                if (sub_468b20(&var_60, &var_48).b != 0)
                                    void* eax_15 = sub_450a70(arg1 + 0x1c, &var_44)
                                    uint32_t ecx_13 = var_48
                                    *(eax_15 + 4) = 1
                                    *(eax_15 + 8) = ecx_13
                                label_450619:
                                    var_4.b = 0
                                    sub_401fb0(&var_44)
                                    ebx_1 += 1
                                    var_54_1 = ebx_1
                                    
                                    if (ebx_1 s< edi_7)
                                        continue
                                    
                                    result.b = 1
                                    goto label_450656
                            case 1
                                if (sub_468bc0(&var_60, &var_4c).b != 0)
                                    void* eax_16 = sub_450a70(arg1 + 0x1c, &var_44)
                                    uint32_t xmm0_1 = var_4c
                                    *(eax_16 + 4) = 2
                                    *(eax_16 + 0xc) = xmm0_1
                                    goto label_450619
                            case 2
                                int32_t var_18_1 = 0xf
                                int32_t var_1c_1 = 0
                                char var_2c = 0
                                var_4.b = 2
                                
                                if (sub_468d00(&var_60, &var_2c) != 0)
                                    sub_451d30(sub_450a70(arg1 + 0x1c, &var_44), &var_2c)
                                    sub_401fb0(&var_2c)
                                    goto label_450619
                                
                                sub_401fb0(&var_2c)
                            case 3
                                if (sub_468b20(&var_60, &var_50).b != 0)
                                    ebx_1.b = var_50 != 0
                                    void* eax_19 = sub_450a70(arg1 + 0x1c, &var_44)
                                    *(eax_19 + 0x28) = ebx_1.b
                                    ebx_1 = var_54_1
                                    *(eax_19 + 4) = 4
                                    goto label_450619
                
                if (var_30_1 u< 0x10)
                    break
                
                j__free(var_44.d)
                break
            
            result.b = 0
else
    result.b = 1

label_450656:
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
