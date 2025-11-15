// 函数: sub_60a9d0
// 地址: 0x60a9d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a7d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2
char* edi = *(esi + 4)
int32_t ecx = *(esi + 8)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edi[4] u<= ecx)
    uint32_t ebx_7 = ((zx.d(edi[3]) << 8 | zx.d(edi[2])) << 8 | zx.d(edi[1])) << 8 | zx.d(*edi)
    *(esi + 4) = &edi[4]
    
    if (&edi[8] u<= ecx)
        uint32_t ecx_7 =
            ((zx.d(edi[7]) << 8 | zx.d(edi[6])) << 8 | zx.d(edi[5])) << 8 | zx.d(edi[4])
        *(esi + 4) = &edi[8]
        
        if (ecx_7 == 0)
            if (ebx_7 != 0)
                void* var_38_1 = arg2
                uint32_t var_3c_1 = ecx_7
                sub_60d8c0(*(arg1 + 0x10), *(arg1 + 0x14))
                *(arg1 + 0x14) = *(arg1 + 0x10)
                sub_61efb0(arg1 + 0x10, ebx_7)
                arg2 = nullptr
                
                if (ebx_7 != 0)
                    int32_t var_18_1 = 0
                    void* ecx_19
                    
                    do
                        if (*(esi + 4) + 4 u> *(esi + 8))
                            goto label_60ab6a
                        
                        char* ecx_12 = *(esi + 4)
                        uint32_t edx_8 =
                            ((zx.d(ecx_12[3]) << 8 | zx.d(ecx_12[2])) << 8 | zx.d(ecx_12[1])) << 8
                            | zx.d(*ecx_12)
                        *(esi + 4) = &ecx_12[4]
                        char* var_24
                        sub_431b80(&var_24, edx_8)
                        int32_t var_8_1 = 0
                        char* edx_9 = var_24
                        int32_t var_20
                        
                        if (edx_9 != var_20)
                            char* ecx_14 = *(esi + 4)
                            void* edi_3 = var_20 - edx_9
                            
                            if (ecx_14 + edi_3 u> *(esi + 8))
                                sub_4059a0(&var_24)
                                goto label_60ab6a
                            
                            sub_700660(edx_9, ecx_14, edi_3)
                            *(esi + 4) += edi_3
                        
                        sub_5a44a0(*(arg1 + 0x10) + var_18_1, &var_24)
                        int32_t var_8_2 = 0xffffffff
                        sub_4059a0(&var_24)
                        ecx_19 = arg2 + 1
                        var_18_1 += 0xc
                        arg2 = ecx_19
                    while (ecx_19 u< ebx_7)
            
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result

label_60ab6a:
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
