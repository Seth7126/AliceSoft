// 函数: sub_465240
// 地址: 0x465240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8e43
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_9c
int32_t eax_2 = __security_cookie ^ &var_9c
int32_t __saved_edi
int32_t var_b0 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *(arg2 + 0x1c)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (esi != 0)
    int32_t ebx
    
    if (esi == 0xe || esi == 0xf || esi == 0x1c || esi == 1)
        ebx:1.b = 1
    else
        ebx:1.b = 0
    
    int32_t eax_5 = *(arg1 + 0x1c)
    *(arg1 + 0x1c) = esi
    void* var_b4_1 = 0xffffffff
    struct exfile::CToken::VTable* const var_8c = &exfile::CToken::`vftable'
    int32_t var_74_1 = 0xf
    int32_t var_b8_1 = 0
    int32_t var_78_1 = 0
    char var_88 = 0
    ebx.b = esi == 0x13
    sub_401ff0(&var_88, arg2 + 4, var_b8_1, var_b4_1)
    int32_t var_70_1 = *(arg2 + 0x1c)
    struct _EXCEPTION_REGISTRATION_RECORD** var_6c_1 = *(arg2 + 0x20)
    int32_t var_4 = 0
    
    if (ebx.b == 0)
    label_465300:
        
        if (esi != 0x14)
        label_4652b3:
            
            if (eax_5 != 0x10 && eax_5 != 6 && ebx:1.b != 0)
                if (sub_40c250(&var_88, 0x6dcbb8).b == 0)
                    int32_t var_70_2 = 0x15
                    sub_45d470(arg1 + 0x10, &var_8c)
            else if (esi == 0x10)
                sub_45d470(arg1 + 4, &var_8c)
            else if (esi != 6)
                if (esi != 5 && *(arg1 + 0x10) != *(arg1 + 0x14))
                    do
                        int32_t edi_1 = *(arg1 + 0x10)
                        int32_t eax_18
                        int32_t edx_3
                        edx_3:eax_18 = muls.dp.d(0x38e38e39, *(arg1 + 0x14) - edi_1)
                        int32_t edx_4 = edx_3 s>> 3
                        
                        if (*(edi_1 + ((edx_4 u>> 0x1f) + edx_4) * 0x24 - 8) == 5)
                            break
                        
                        int32_t eax_23
                        int32_t edx_5
                        edx_5:eax_23 = muls.dp.d(0x38e38e39, *(arg1 + 0x14) - edi_1)
                        int32_t edx_6 = edx_5 s>> 3
                        void* ebx_1 = edi_1 + ((edx_6 u>> 0x1f) + edx_6) * 0x24
                        int32_t var_bc_5 = 0xf
                        int32_t var_c0_1 = 0
                        char var_d0 = 0
                        sub_401ff0(&var_d0, ebx_1 - 0x20, 0, 0xffffffff)
                        int32_t var_b8_5 = *(ebx_1 - 8)
                        int32_t var_b4_12 = *(ebx_1 - 4)
                        int32_t eax_31 = sub_465ea0(&exfile::CToken::`vftable', var_d0)
                        int32_t var_bc_6 = 0xf
                        int32_t var_c0_2 = 0
                        var_d0 = 0
                        sub_401ff0(&var_d0, &var_88, 0, 0xffffffff)
                        int32_t var_b8_6 = var_70_1
                        struct _EXCEPTION_REGISTRATION_RECORD** var_b4_13 = var_6c_1
                        
                        if (eax_31 s< sub_465ea0(&exfile::CToken::`vftable', var_d0))
                            break
                        
                        int32_t eax_35
                        int32_t edx_7
                        edx_7:eax_35 = muls.dp.d(0x38e38e39, *(arg1 + 0x14) - *(arg1 + 0x10))
                        int32_t edx_8 = edx_7 s>> 3
                        sub_45d470(arg1 + 4, 
                            *(arg1 + 0x10) + ((edx_8 u>> 0x1f) + edx_8) * 0x24 - 0x24)
                        (**(*(arg1 + 0x14) - 0x24))(0)
                        *(arg1 + 0x14) -= 0x24
                    while (*(arg1 + 0x10) != *(arg1 + 0x14))
                
                sub_45d470(arg1 + 0x10, &var_8c)
            else
                while (*(arg1 + 0x10) != *(arg1 + 0x14))
                    int32_t eax_8
                    int32_t edx_1
                    edx_1:eax_8 = muls.dp.d(0x38e38e39, *(arg1 + 0x14) - *(arg1 + 0x10))
                    void* var_b4_8 = 0xffffffff
                    int32_t edx_2 = edx_1 s>> 3
                    struct exfile::CToken::VTable* var_68 = &exfile::CToken::`vftable'
                    int32_t var_50_1 = 0xf
                    int32_t var_b8_4 = 0
                    int32_t var_54_1 = 0
                    char var_64 = 0
                    void* esi_1 = *(arg1 + 0x10) + ((edx_2 u>> 0x1f) + edx_2) * 0x24
                    sub_401ff0(&var_64, esi_1 - 0x20, var_b8_4, var_b4_8)
                    int32_t eax_14 = *(esi_1 - 8)
                    int32_t var_48_1 = *(esi_1 - 4)
                    var_4.b = 3
                    (**(*(arg1 + 0x14) - 0x24))(0)
                    *(arg1 + 0x14) -= 0x24
                    
                    if (eax_14 == 5)
                        sub_4661b0(&var_68)
                        break
                    
                    sub_45d470(arg1 + 4, &var_68)
                    var_4.b = 0
                    var_68 = &exfile::CToken::`vftable'
                    
                    if (var_50_1 u>= 0x10)
                        j__free(var_64.d)
        else if (eax_5 == 0x14)
            var_70_1 = 0x17
            int32_t var_44
            sub_401f60(&var_44, ">>")
            var_4.b = 2
            sub_401ff0(&var_88, &var_44, 0, 0xffffffff)
            var_4.b = 0
            int32_t var_30
            
            if (var_30 u>= 0x10)
                j__free(var_44)
            
            goto label_4652b3
    else if (eax_5 == 0x13)
        var_70_1 = 0x16
        int32_t var_2c
        sub_401f60(&var_2c, "<<")
        var_4.b = 1
        sub_401ff0(&var_88, &var_2c, 0, 0xffffffff)
        var_4.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        goto label_465300
    
    var_8c = &exfile::CToken::`vftable'
    
    if (var_74_1 u>= 0x10)
        j__free(var_88.d)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_9c)
return result
