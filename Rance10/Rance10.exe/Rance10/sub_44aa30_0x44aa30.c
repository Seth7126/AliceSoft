// 函数: sub_44aa30
// 地址: 0x44aa30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a9a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_2c = ebx
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = *arg3
void* eax_4 = arg3[1] - esi
struct fileimage::CFileImageAnalyser::VTable* const var_28 =
    &fileimage::CFileImageAnalyser::`vftable'
uint32_t* result = eax_4 + esi
char* var_24 = esi
int32_t var_8_1 = 0

if (&esi[4] u<= result)
    int32_t ecx_6 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi)
    *arg2 = ecx_6
    uint32_t var_14
    
    if (ecx_6 == 1 && sub_61ec90(&var_28, arg4).b != 0 && sub_61ec90(&var_28, arg5).b != 0
            && sub_61ec90(&var_28, arg6).b != 0 && sub_61ec90(&var_28, &var_14).b != 0)
        uint32_t edi_1 = var_14
        
        if (edi_1 s> 0)
            int32_t ecx_13 = edi_1 s/ 7
            sub_404d20(arg7)
            char* ecx_18 = &esi[4]
            
            if (&ecx_18[edi_1] u<= result)
                uint32_t edx_4 = 0
                var_14 = 0
                
                if (edi_1 s> 0)
                    while (true)
                        result.b = *ecx_18
                        void* var_24_2 = &ecx_18[1]
                        ebx.b = result.b
                        void* ecx_19
                        ecx_19.b = 8 - (edi_1.b - ((ecx_13 << 3).b - ecx_13.b) + 1)
                        ebx.b u>>= ecx_19.b
                        result.b <<= edi_1.b - ((ecx_13 << 3).b - ecx_13.b) + 1
                        int32_t ecx_21 = arg7[5]
                        ebx.b |= result.b
                        int32_t eax_11 = arg7[4]
                        
                        if (eax_11 == ecx_21)
                            if (eax_11 + 1 u> 0xfffffffe)
                                sub_6d0927("string too long")
                                noreturn
                            
                            if (ecx_21 u< eax_11 + 1)
                                sub_403830(arg7, eax_11 + 1, arg7[4])
                                edx_4 = var_14
                            else if (eax_11 == 0xffffffff)
                                arg7[4] = eax_11 + 1
                                int32_t* eax_13
                                
                                if (ecx_21 u< 0x10)
                                    eax_13 = arg7
                                else
                                    eax_13 = *arg7
                                
                                *eax_13 = 0
                        
                        char* ecx_23
                        
                        if (arg7[5] u< 0x10)
                            ecx_23 = arg7
                        else
                            ecx_23 = *arg7
                        
                        int32_t eax_14 = arg7[4]
                        edx_4 += 1
                        var_14 = edx_4
                        ecx_23[eax_14] = ebx.b
                        arg7[4] += 1
                        ecx_23[arg7[4]] = 0
                        
                        if (edx_4 s>= edi_1)
                            break
                        
                        ecx_18 = var_24_2
                
                result.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
