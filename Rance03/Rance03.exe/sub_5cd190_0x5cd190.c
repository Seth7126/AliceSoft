// 函数: sub_5cd190
// 地址: 0x5cd190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9ff6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_90
int32_t eax_2 = __security_cookie ^ &var_90
int32_t __saved_edi
int32_t var_a4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
int32_t var_28[0x4]
__builtin_memset(&var_28, 0, 1)
int32_t var_4 = 0
int32_t var_70 = 0xf
int32_t var_74 = 0
char var_84 = 0
var_4.b = 1
*(arg1 + 0x234) -= 4
int32_t ebx = **(arg1 + 0x234)
char result = sub_5cea10(arg1, &var_84, "system.ResumeWriteComment")

if (result != 0)
    result = sub_5cea10(arg1, &var_28, "system.ResumeWriteComment")
    
    if (result != 0)
        char var_6c
        sub_5c0db0(arg1, &var_6c)
        var_4.b = 2
        char eax_6
        int32_t ecx_3
        int32_t edx_1
        eax_6, ecx_3, edx_1 = sub_605570(&var_6c)
        
        if (eax_6 == 0)
            ecx_3, edx_1 = sub_607ce0(&var_6c)
        
        int32_t eax_9 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
        int32_t var_a8_13
        
        if (ebx u>= eax_9)
            var_a8_13 = 0x6e9784
            result = sub_5c2400(eax_9, edx_1, ecx_3, arg1, "system.ResumeWriteComment")
        else
            eax_9 = *(arg1 + 0x174)
            void* ebx_1 = *(eax_9 + (ebx << 2))
            
            if (ebx_1 == 0)
                var_a8_13 = 0x6e9784
                result = sub_5c2400(eax_9, edx_1, ecx_3, arg1, "system.ResumeWriteComment")
            else
                uint32_t ebp_1
                
                if (*(ebx_1 + 0x48) != 0)
                    ebp_1 = *(ebx_1 + 0xc) u>> 2
                else
                    ebp_1 = 0
                
                var_90 = nullptr
                int32_t var_8c_1 = 0
                int32_t var_88_1 = 0
                var_4.b = 3
                int32_t ecx_6
                int32_t edx_2
                ecx_6, edx_2 = sub_5179a0(&var_90, ebp_1)
                int32_t edi_1 = 0
                struct sys43vm::CResume::VTable* const var_54
                
                if (ebp_1 s<= 0)
                label_5cd37f:
                    var_54 = &sys43vm::CResume::`vftable'
                    int32_t var_50
                    __builtin_memset(&var_50, 0, 0x11)
                    int32_t var_2c_1 = 0xf
                    int32_t var_30_1 = 0
                    var_4.b = 5
                    char eax_19 = sub_5da360(&var_6c, &var_84, &var_28, &var_90, arg1 + 0x1e0)
                    int32_t ecx_10 = *(arg1 + 0x22c)
                    int32_t edi_4 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
                    
                    if (eax_19 != 0)
                        if (edi_4 + 1 u>= ecx_10)
                            sub_64ad90(arg1 + 0x224, ecx_10 * 2)
                            *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_4 << 2)
                        
                        **(arg1 + 0x234) = 1
                    else
                        if (edi_4 + 1 u>= ecx_10)
                            sub_64ad90(arg1 + 0x224, ecx_10 * 2)
                            *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_4 << 2)
                        
                        **(arg1 + 0x234) = 0
                    
                    *(arg1 + 0x234) += 4
                    result = sub_5d7ba0(&var_54)
                else
                    while (true)
                        uint32_t eax_11 = *(ebx_1 + 0xc) u>> 2
                        
                        if (edi_1 u>= eax_11)
                            int32_t var_a8_9 = 0x6e97c0
                            result =
                                sub_5c2400(eax_11, edx_2, ecx_6, arg1, "system.ResumeWriteComment")
                            break
                        
                        int32_t eax_12
                        
                        if (*(ebx_1 + 0xc) != 0)
                            eax_12 = *(ebx_1 + 8)
                        else
                            eax_12 = 0
                        
                        int32_t ecx_7 = *(eax_12 + (edi_1 << 2))
                        int32_t eax_15 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
                        
                        if (ecx_7 u< eax_15)
                            eax_15 = *(*(arg1 + 0x174) + (ecx_7 << 2))
                            
                            if (eax_15 != 0)
                                char* eax_17
                                
                                if (*(eax_15 + 0xc) != 0)
                                    eax_17 = *(eax_15 + 8)
                                else
                                    eax_17 = nullptr
                                
                                sub_401f60(&var_54, eax_17)
                                var_4.b = 4
                                ecx_6, edx_2 = sub_412d60(&var_90, &var_54)
                                var_4.b = 3
                                char var_40
                                
                                if (var_40.d u>= 0x10)
                                    ecx_6, edx_2 = j__free(var_54)
                                
                                edi_1 += 1
                                
                                if (edi_1 s>= ebp_1)
                                    goto label_5cd37f
                                
                                continue
                        
                        int32_t var_a8_8 = 0x6e97fc
                        result = sub_5c2400(eax_15, edx_2, ecx_7, arg1, "system.ResumeWriteComment")
                        break
                int32_t* esi_1 = var_90
                
                if (esi_1 != 0)
                    sub_4107c0(esi_1, var_8c_1)
                    result = j__free(esi_1)
        int32_t var_58
        
        if (var_58 u>= 0x10)
            result = j__free(var_6c.d)
        
        int32_t var_58_1 = 0xf
        int32_t var_5c_1 = 0
        var_6c = 0

if (var_70 u>= 0x10)
    result = j__free(var_84.d)

int32_t var_70_1 = 0xf
int32_t var_74_1 = 0
var_84 = 0

if (var_14 u>= 0x10)
    result = j__free(var_28[0])

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_90)
return result
