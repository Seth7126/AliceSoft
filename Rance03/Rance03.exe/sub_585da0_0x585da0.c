// 函数: sub_585da0
// 地址: 0x585da0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7587
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_c0
int32_t eax_2 = __security_cookie ^ &var_c0
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_bc = ebp
int32_t result

if (sub_59d180(arg2, 0x6e567c) == 0)
    struct sealengine::CPRPValue::VTable* var_50 = &sealengine::CPRPValue::`vftable'
    int32_t var_4c_1 = 0
    int32_t var_48_1 = 0
    int32_t var_44_1 = 0
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    char var_40_1 = 0
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    char var_28_1 = 0
    int32_t var_4_1 = 5
    char* eax_16
    int32_t ecx_11
    int32_t edx_2
    eax_16, ecx_11, edx_2 = sub_586200(&var_50, arg2)
    
    if (eax_16.b != 0)
        sub_586990(ebp + 0x1c, &var_50)
        sub_586bb0(&var_50)
        result.b = 1
    else
        sub_59f4e0(eax_16, edx_2, ecx_11, 0x6e55fc, eax_4)
        sub_586bb0(&var_50)
        result.b = 0
else
    struct sealengine::CPRPValue::VTable* var_90
    
    while (true)
        var_90 = &sealengine::CPRPValue::`vftable'
        int32_t var_8c_1 = 0
        int32_t var_88_1 = 0
        int32_t var_84_1 = 0
        int32_t var_6c_1 = 0xf
        int32_t var_70_1 = 0
        char var_80_1 = 0
        int32_t var_54_1 = 0xf
        int32_t var_58_1 = 0
        char var_68_1 = 0
        int32_t var_4 = 0
        char* eax_6
        int32_t ecx_1
        int32_t edx_1
        eax_6, ecx_1, edx_1 = sub_586200(&var_90, arg2)
        int32_t var_d8_14
        
        if (eax_6.b == 0)
            var_d8_14 = 0x6e5654
        else
            int32_t eax_7 = *(ebp + 0x20)
            struct sealengine::CPRPValue::VTable** ecx_2 = &var_90
            
            if (&var_90 u< eax_7)
                ecx_2 = *(ebp + 0x1c)
            
            struct sealengine::CPRPValue::VTable** ecx_4
            
            if (&var_90 u>= eax_7 || ecx_2 u> &var_90)
                if (eax_7 == *(ebp + 0x24))
                    struct sealengine::CPRPValue::VTable** var_d8_4 = ecx_2
                    sub_586a40(ebp + 0x1c)
                
                ecx_4 = *(ebp + 0x20)
                struct sealengine::CPRPValue::VTable** var_b4_2 = ecx_4
                struct sealengine::CPRPValue::VTable** var_b8_2 = ecx_4
                var_4.b = 2
                
                if (ecx_4 != 0)
                    sub_586880(ecx_4, &var_90)
            else
                if (eax_7 == *(ebp + 0x24))
                    struct sealengine::CPRPValue::VTable** var_d8_2 = ecx_2
                    sub_586a40(ebp + 0x1c)
                
                ecx_4 = *(ebp + 0x20)
                struct sealengine::CPRPValue::VTable** var_b8_1 = ecx_4
                struct sealengine::CPRPValue::VTable** var_b4_1 = ecx_4
                var_4.b = 1
                
                if (ecx_4 != 0)
                    sub_586880(ecx_4, ((&var_90 - ecx_2) & 0xffffffc0) + *(ebp + 0x1c))
            *(ebp + 0x20) += 0x40
            int32_t var_94_1 = 0xf
            int32_t var_98_1 = 0
            char var_a8 = 0
            var_4.b = 3
            void var_b0
            
            if (sub_59ce30(&var_a8, &var_b0) != 0)
                char* ecx_7 = &var_a8
                char* edi_4 = var_a8.d
                int32_t eax_10 = 1
                
                if (var_94_1 u>= 0x10)
                    ecx_7 = edi_4
                
                if (var_98_1 u< 1)
                    eax_10 = var_98_1
                
                int32_t eax_11 = sub_405190(eax_10, 0x6e5650, ecx_7, eax_10)
                bool cond:2_1 = eax_11 == 0
                
                if (eax_11 == 0)
                    if (var_98_1 u>= 1)
                        eax_11.b = var_98_1 != 1
                    else
                        eax_11 = 0xffffffff
                    
                    cond:2_1 = eax_11 == 0
                
                eax_11.b = cond:2_1
                eax_11.b = eax_11.b == 0
                
                if (eax_11.b == 0)
                    if (var_94_1 u>= 0x10)
                        j__free(edi_4)
                    
                    break
                
                *(arg2 + 4) = *(arg2 + 8)
                
                if (var_94_1 u>= 0x10)
                    j__free(edi_4)
            else
                *(arg2 + 4) = *(arg2 + 8)
                
                if (var_94_1 u>= 0x10)
                    j__free(var_a8.d)
            
            int32_t var_94_2 = 0xf
            int32_t var_98_2 = 0
            var_a8 = 0
            var_4.b = 4
            void var_ac
            char eax_13
            eax_13, ecx_1, edx_1 = sub_59ce30(&var_a8, &var_ac)
            
            if (eax_13 == 0)
                eax_6 = *(arg2 + 8)
                var_4.b = 0
                *(arg2 + 4) = eax_6
                
                if (var_94_2 u>= 0x10)
                    eax_6, ecx_1, edx_1 = j__free(var_a8.d)
                
                var_d8_14 = 0x6e5618
            else
                char* ecx_9 = &var_a8
                char* edi_5 = var_a8.d
                int32_t eax_14 = 1
                
                if (var_94_2 u>= 0x10)
                    ecx_9 = edi_5
                
                if (var_98_2 u< 1)
                    eax_14 = var_98_2
                
                int32_t eax_15
                eax_15, ecx_1, edx_1 = sub_405190(eax_14, 0x6e564c, ecx_9, eax_14)
                bool cond:5_1 = eax_15 == 0
                
                if (eax_15 == 0)
                    if (var_98_2 u>= 1)
                        eax_15.b = var_98_2 != 1
                    else
                        eax_15 = 0xffffffff
                    
                    cond:5_1 = eax_15 == 0
                
                eax_15.b = cond:5_1
                eax_15.b = eax_15.b == 0
                
                if (eax_15.b != 0)
                    eax_6 = *(arg2 + 8)
                    *(arg2 + 4) = eax_6
                    var_4.b = 0
                    
                    if (var_94_2 u< 0x10)
                        var_d8_14 = 0x6e5618
                    else
                        eax_6, ecx_1, edx_1 = j__free(edi_5)
                        var_d8_14 = 0x6e5618
                else
                    if (var_94_2 u>= 0x10)
                        j__free(edi_5)
                    
                    var_90 = &sealengine::CPRPValue::`vftable'
                    
                    if (var_54_1 u>= 0x10)
                        j__free(var_68_1.d)
                    
                    ebp = var_bc
                    int32_t var_54_2 = 0xf
                    int32_t var_58_2 = 0
                    char var_68_2 = 0
                    
                    if (var_6c_1 u< 0x10)
                        continue
                    else
                        j__free(var_80_1.d)
                        continue
        
        sub_59f4e0(eax_6, edx_1, ecx_1, var_d8_14, eax_4)
        sub_586bb0(&var_90)
        result.b = 0
        goto label_5861d7
    
    sub_586bb0(&var_90)
    result.b = 1

label_5861d7:
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_c0)
return result
