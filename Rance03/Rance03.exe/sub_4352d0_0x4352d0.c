// 函数: sub_4352d0
// 地址: 0x4352d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b59ce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct advengine::CValueSyntax::VTable* var_100
int32_t eax_2 = __security_cookie ^ &var_100
int32_t __saved_edi
int32_t var_114 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *(arg1 + 0x2c)
int32_t edx = *(arg1 + 0x34)

if (ecx != edx)
    *(arg1 + 0x2c) = ecx + 0x28
else
    ecx = arg1 + 4

struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(ecx + 4) == 6)
    void* ecx_1 = *(arg1 + 0x2c)
    
    if (ecx_1 != edx)
        *(arg1 + 0x2c) = ecx_1 + 0x28
    else
        ecx_1 = arg1 + 4
    
    if (*(ecx_1 + 4) != 7)
        int32_t eax_5 = *(arg1 + 0x2c)
        
        if (eax_5 != *(arg1 + 0x30))
            *(arg1 + 0x2c) = eax_5 - 0x28
        
        struct advengine::CValueSyntax::VTable* var_b0 = &advengine::CValueSyntax::`vftable'
        struct advengine::CToken::VTable* var_ac
        sub_438820(&var_ac)
        int32_t var_84_1 = 0
        int32_t var_80_1 = 0
        int32_t var_7c_1 = 0
        int32_t var_64_1 = 0xf
        int32_t var_68_1 = 0
        char var_78_1 = 0
        int32_t var_4 = 0
        void* ebx
        
        if (sub_439ae0(&var_b0, arg1) == 0)
        label_43554b:
            ebx.b = 0
        else
            sub_4356c0(arg2, &var_b0)
            
            while (*(arg1 + 0x2c) != *(arg1 + 0x34))
                void* ecx_5 = *(arg1 + 0x2c)
                
                if (ecx_5 != *(arg1 + 0x34))
                    *(arg1 + 0x2c) = ecx_5 + 0x28
                else
                    ecx_5 = arg1 + 4
                
                int32_t eax_10 = *(ecx_5 + 4)
                
                if (eax_10 == 7)
                    break
                
                if (eax_10 != 8)
                    goto label_43554b
                
                var_100 = &advengine::CValueSyntax::`vftable'
                struct advengine::CToken::VTable* var_fc
                sub_438820(&var_fc)
                int32_t var_d4_1 = 0
                int32_t var_d0_1 = 0
                int32_t var_cc_1 = 0
                int32_t var_b4_1 = 0xf
                int32_t var_b8_1 = 0
                char var_c8_1 = 0
                var_4.b = 1
                sub_412de0(arg1 + 0x38, arg1 + 0x2c)
                int32_t* eax_12
                
                if (sub_439b40(&var_100, arg1) != 0)
                    *(arg1 + 0x3c) -= 4
                    sub_439d70(&var_100)
                    eax_12.b = 1
                else
                    eax_12 = *(arg1 + 0x38)
                    
                    if (eax_12 != *(arg1 + 0x3c))
                        *(arg1 + 0x2c) = eax_12[((*(arg1 + 0x3c) - eax_12) s>> 2) - 1]
                        *(arg1 + 0x3c) -= 4
                    
                    eax_12.b = 0
                
                if (eax_12.b != 0)
                    sub_4356c0(arg2, &var_100)
                else
                    struct advengine::CValueSyntax::VTable* var_60 =
                        &advengine::CValueSyntax::`vftable'
                    struct advengine::CToken::VTable* var_5c
                    sub_438820(&var_5c)
                    int32_t var_34_1 = 0
                    int32_t var_30_1 = 0
                    int32_t var_2c_1 = 0
                    int32_t var_14_1 = 0xf
                    int32_t var_18_1 = 0
                    char var_28_1 = 0
                    var_4.b = 2
                    sub_4356c0(arg2, &var_60)
                    sub_439a80(&var_60)
                
                var_4.b = 0
                sub_439a80(&var_100)
            
            ebx.b = 1
        
        sub_439a80(&var_b0)
        result.b = ebx.b
    else
        result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_100)
return result
