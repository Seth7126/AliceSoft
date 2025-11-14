// 函数: sub_5cd560
// 地址: 0x5cd560
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca069
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_a8
int32_t eax_2 = __security_cookie ^ &var_a8
int32_t __saved_edi
int32_t var_bc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_40 = 0xf
int32_t var_44 = 0
int32_t var_54[0x4]
var_54[0].b = 0
int32_t var_4 = 0
int32_t var_58 = 0xf
int32_t var_5c = 0
char var_6c = 0
var_4.b = 1
*(arg1 + 0x234) -= 4
int32_t ebx = **(arg1 + 0x234)
char result = sub_5cea10(arg1, &var_6c, "system.ResumeReadComment")

if (result != 0)
    result = sub_5cea10(arg1, &var_54, "system.ResumeReadComment")
    
    if (result != 0)
        int32_t* var_84
        sub_5c0db0(arg1, &var_84)
        var_4.b = 2
        char eax_7
        int32_t ecx_3
        int32_t edx_1
        eax_7, ecx_3, edx_1 = sub_605570(&var_84)
        int32_t* var_9c
        int32_t var_70
        
        if (eax_7 == 0)
            int32_t* eax_8 = &var_84
            
            if (var_70 u>= 0x10)
                eax_8 = var_84
            
            sub_401f60(&var_9c, eax_8)
            var_4.b = 3
            ecx_3, edx_1 = sub_607ce0(&var_9c)
            var_4.b = 2
            int32_t var_88
            
            if (var_88 u>= 0x10)
                ecx_3, edx_1 = j__free(var_9c)
        
        int32_t eax_11 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
        int32_t var_c0_16
        
        if (ebx u>= eax_11)
            var_c0_16 = 0x6e9414
            result = sub_5c2400(eax_11, edx_1, ecx_3, arg1, "system.ResumeReadComment")
        else
            eax_11 = *(arg1 + 0x174)
            void* ebx_1 = *(eax_11 + (ebx << 2))
            
            if (ebx_1 == 0)
                var_c0_16 = 0x6e9414
                result = sub_5c2400(eax_11, edx_1, ecx_3, arg1, "system.ResumeReadComment")
            else
                var_9c = nullptr
                int32_t var_98_1 = 0
                int32_t var_94_1 = 0
                struct sys43vm::CResume::VTable* var_3c
                sub_5d7b40(&var_3c)
                var_4.b = 5
                char eax_13 = sub_5da0f0(&var_84, &var_6c, &var_54, &var_9c, arg1 + 0x1e0)
                int32_t* ebp_1 = var_9c
                
                if (eax_13 != 0)
                    int32_t eax_15
                    int32_t ecx_10
                    int32_t edx_3
                    eax_15, ecx_10, edx_3 = sub_5d4a90(ebx_1)
                    
                    if (eax_15.b == 0)
                        int32_t var_c0_7 = 0x6e948c
                        sub_5c2400(eax_15, edx_3, ecx_10, arg1, "system.ResumeWriteComment")
                    else if (ebp_1 == var_98_1)
                    label_5cd7eb:
                        sub_5ddf10(arg1 + 0x220, 1)
                    else
                        int32_t var_a4 = (var_98_1 - ebp_1) s/ 0x18
                        uint32_t eax_20
                        int32_t ecx_14
                        int32_t edx_6
                        eax_20, ecx_14, edx_6 = sub_5d4340(ebx_1, 1, &var_a4, 1)
                        
                        if (eax_20.b != 0)
                            int32_t edi_2 = 0
                            
                            if (sub_5d4330(ebx_1) s> 0)
                                uint32_t eax_24
                                
                                do
                                    uint32_t eax_22
                                    int32_t ecx_17
                                    int32_t edx_7
                                    eax_22, ecx_17, edx_7 = sub_5d3550(ebx_1, edi_2, &var_a8)
                                    
                                    if (eax_22.b == 0)
                                        int32_t var_c0_15 = 0x6e9504
                                        sub_5c2400(eax_22, edx_7, ecx_17, arg1, 
                                            "system.ResumeWriteComment")
                                        goto label_5cd7fd
                                    
                                    void* eax_23
                                    int32_t edx_8
                                    eax_23, edx_8 = sub_5d6060(arg1 + 0x16c, var_a8)
                                    
                                    if (eax_23 == 0)
                                        int32_t var_c0_14 = 0x6e9548
                                        sub_5c2400(eax_23, edx_8, arg1 + 0x16c, arg1, 
                                            "system.ResumeWriteComment")
                                        goto label_5cd7fd
                                    
                                    sub_5d3d20(eax_23, ebp_1)
                                    edi_2 += 1
                                    ebp_1 = &ebp_1[6]
                                    eax_24 = sub_5d4330(ebx_1)
                                while (edi_2 s< eax_24)
                            
                            goto label_5cd7eb
                        
                        int32_t var_c0_8 = 0x6e94c8
                        sub_5c2400(eax_20, edx_6, ecx_14, arg1, "system.ResumeWriteComment")
                else
                    int32_t eax_14
                    int32_t ecx_8
                    int32_t edx_2
                    eax_14, ecx_8, edx_2 = sub_5d4a90(ebx_1)
                    
                    if (eax_14.b != 0)
                        sub_5ddf10(arg1 + 0x220, 0)
                    else
                        int32_t var_c0_5 = 0x6e9450
                        sub_5c2400(eax_14, edx_2, ecx_8, arg1, "system.ResumeWriteComment")
                
            label_5cd7fd:
                result = sub_5d7ba0(&var_3c)
                int32_t* esi_1 = var_9c
                
                if (esi_1 != 0)
                    sub_4107c0(esi_1, var_98_1)
                    result = j__free(esi_1)
        
        if (var_70 u>= 0x10)
            result = j__free(var_84)
        
        int32_t var_70_1 = 0xf
        int32_t var_74_1 = 0
        var_84.b = 0

if (var_58 u>= 0x10)
    result = j__free(var_6c.d)

int32_t var_58_1 = 0xf
int32_t var_5c_1 = 0
var_6c = 0

if (var_40 u>= 0x10)
    result = j__free(var_54[0])

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a8)
return result
