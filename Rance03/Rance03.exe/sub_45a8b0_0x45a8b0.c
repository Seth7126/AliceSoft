// 函数: sub_45a8b0
// 地址: 0x45a8b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8138
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg2
void* var_2c = ebp
char* edx = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u> *(arg1 + 8))
label_45aab2:
    result.b = 0
else
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    int32_t ecx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg1 + 4) = &edx[4]
    
    if (ecx_7 s> 0)
        while (true)
            char* ecx_8 = *(arg1 + 4)
            
            if (&ecx_8[4] u> *(arg1 + 8))
                goto label_45aab2
            
            uint32_t edi_7 =
                ((zx.d(ecx_8[3]) << 8 | zx.d(ecx_8[2])) << 8 | zx.d(ecx_8[1])) << 8 | zx.d(*ecx_8)
            *(arg1 + 4) = &ecx_8[4]
            int32_t var_14_1 = 0xf
            int32_t var_18_1 = 0
            char var_28 = 0
            sub_402110(&var_28, 0x6da163, nullptr)
            int32_t var_4 = 0
            char* edx_2 = *(arg1 + 4)
            
            if (&edx_2[4] u<= *(arg1 + 8))
                uint32_t ecx_16 =
                    ((zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])) << 8 | zx.d(edx_2[1])) << 8
                    | zx.d(*edx_2)
                *(arg1 + 4) = &edx_2[4]
                
                if (sub_468c20(arg1, &var_28, ecx_16).b != 0)
                    char* ecx_18 = *(arg1 + 4)
                    
                    if (&ecx_18[4] u<= *(arg1 + 8))
                        uint32_t ebx_4 = zx.d(ecx_18[3]) << 8 | zx.d(ecx_18[2])
                        var_38 = 0
                        uint32_t ebx_8 = (ebx_4 << 8 | zx.d(ecx_18[1])) << 8 | zx.d(*ecx_18)
                        *(arg1 + 4) = &ecx_18[4]
                        
                        if (sub_468b20(arg1, &var_38).b != 0)
                            result = sub_45ed50(ebp, &var_28)
                            
                            if (result.b == 0)
                                if (var_38 != 1)
                                label_45aa4c:
                                    struct _EXCEPTION_REGISTRATION_RECORD** ebp_1 =
                                        sub_45eb40(ebp, &var_28)
                                    
                                    if (ebx_8 == 1)
                                        result = sub_45a800(edi_7, arg1, ebp_1)
                                    
                                    if (ebx_8 != 1 || result.b != 0)
                                        ebp_1[2] = edi_7
                                        result.b = ebx_8 == 1
                                        ebp_1[1].b = result.b
                                        result.b = var_38 == 1
                                        int32_t var_4_1 = 0xffffffff
                                        *(ebp_1 + 5) = result.b
                                        sub_401fb0(&var_28)
                                        result = result_1 + 1
                                        result_1 = result
                                        
                                        if (result s>= ecx_7)
                                            break
                                        
                                        ebp = var_2c
                                        continue
                                else
                                    result = sub_45ee70(ebp)
                                    
                                    if (result.b == 0)
                                        goto label_45aa4c
            
            if (var_14_1 u< 0x10)
                goto label_45aab2
            
            j__free(var_28.d)
            goto label_45aab2
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
