// 函数: sub_436220
// 地址: 0x436220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5bf4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_e8
int32_t eax_2 = __security_cookie ^ &var_e8
int32_t ebx
int32_t var_ec = ebx
int32_t __saved_edi
int32_t var_fc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct advengine::CToken::VTable* var_38
sub_438a40(arg1, &var_38)
int32_t var_4 = 0
int32_t var_34

if (var_34 == 6)
    struct advengine::CToken::VTable* var_d8
    sub_438a40(arg1, &var_d8)
    var_4.b = 1
    struct advengine::CToken::VTable** var_d4
    char var_d0
    
    if (var_d4 == 7)
        ebx.b = 1
    else if (var_d4 == 1)
        struct advengine::CToken::VTable** ecx_4
        struct advengine::CToken::VTable* var_60
        
        if (sub_40c250(&var_d0, "void") == 0)
            struct advengine::CToken::VTable* var_88
            sub_438a40(arg1, &var_88)
            var_4.b = 2
            int32_t var_84
            
            if (var_84 == 1)
                struct _EXCEPTION_REGISTRATION_RECORD** var_e4 = nullptr
                int32_t var_e0_1 = 0
                int32_t var_dc_1 = 0
                var_4.b = 3
                sub_437860(&var_e4, &var_d8)
                sub_437860(&var_e4, &var_88)
                
                while (true)
                    struct advengine::CToken::VTable* var_b0
                    sub_438a40(arg1, &var_b0)
                    int32_t var_ac
                    ebx.b = var_ac == 0xfffffffd
                    *(arg1 + 8) = *(arg1 + 4)
                    var_b0 = &advengine::CToken::`vftable'
                    int32_t var_a8
                    int32_t var_94
                    
                    if (var_94 u>= 0x10)
                        j__free(var_a8)
                    
                    if (ebx.b == 0)
                        sub_438a40(arg1, &var_b0)
                        var_4.b = 4
                        
                        if (var_ac != 7)
                            if (var_ac == 8)
                                struct advengine::CToken::VTable** eax_8 = sub_438a40(arg1, &var_60)
                                var_4.b = 5
                                int32_t eax_9 = eax_8[1]
                                
                                if (&var_d0 != &eax_8[2])
                                    sub_401ff0(&var_d0, &eax_8[2], 0, 0xffffffff)
                                
                                int32_t var_b8_1 = eax_8[8]
                                var_4.b = 4
                                int32_t var_b4_1 = eax_8[9]
                                var_60 = &advengine::CToken::`vftable'
                                int32_t var_58
                                int32_t var_44
                                
                                if (var_44 u>= 0x10)
                                    j__free(var_58)
                                
                                if (eax_9 == 1)
                                    struct advengine::CToken::VTable** eax_13 =
                                        sub_438a40(arg1, &var_60)
                                    var_4.b = 6
                                    int32_t eax_14 = eax_13[1]
                                    void var_80
                                    
                                    if (&var_80 != &eax_13[2])
                                        sub_401ff0(&var_80, &eax_13[2], 0, 0xffffffff)
                                    
                                    int32_t var_68_1 = eax_13[8]
                                    var_4.b = 4
                                    int32_t var_64_1 = eax_13[9]
                                    var_60 = &advengine::CToken::`vftable'
                                    
                                    if (var_44 u>= 0x10)
                                        j__free(var_58)
                                    
                                    if (eax_14 == 1)
                                        sub_437860(&var_e4, &var_d8)
                                        sub_437860(&var_e4, &var_88)
                                        var_4.b = 3
                                        var_b0 = &advengine::CToken::`vftable'
                                        
                                        if (var_94 u< 0x10)
                                            continue
                                        else
                                            j__free(var_a8)
                                            continue
                            
                            sub_4387f0(&var_b0)
                            ebx.b = 0
                            break
                        
                        var_4.b = 3
                        sub_4387f0(&var_b0)
                    
                    sub_437950(arg2, &var_e4)
                    ebx.b = 1
                    break
                
                var_4.b = 2
                sub_435c20(&var_e4)
            else
                ebx.b = 0
            
            ecx_4 = &var_88
        else
            sub_438a40(arg1, &var_60)
            ecx_4 = &var_60
            int32_t var_5c
            ebx.b = var_5c == 7
        sub_4387f0(ecx_4)
    else
        ebx.b = 0
    
    var_d8 = &advengine::CToken::`vftable'
    int32_t var_bc
    
    if (var_bc u>= 0x10)
        j__free(var_d0.d)
    
    int32_t var_bc_1 = 0xf
    int32_t var_c0_1 = 0
    var_d0 = 0
else
    ebx.b = 0

var_38 = &advengine::CToken::`vftable'
int32_t var_1c
int32_t var_30

if (var_1c u>= 0x10)
    j__free(var_30)
struct advengine::CToken::VTable** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_e8)
return result
