// 函数: sub_5c79c0
// 地址: 0x5c79c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_7402f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*arg1 != 0)
    __Smtx_lock_shared(&arg1[2])
    int32_t esi_2 = arg1[1]
    __Smtx_unlock_shared(&arg1[2])
    
    if (esi_2 == 0)
        result.b = 1
    else
        __Smtx_lock_shared(&arg1[2])
        int32_t* esi_4 = arg1[1]
        __Smtx_unlock_shared(&arg1[2])
        
        if ((*(*esi_4 + 0x10))(eax_2).b == 0)
            result.b = 1
        else
            sub_5c7e30(arg1)
            
            if (sub_57f0d0(arg1[0x172], *(*arg1 + 0x180)).b == 0)
                result.b = 0
            else
                __Smtx_lock_shared(&arg1[2])
                int32_t edi_4 = arg1[1]
                __Smtx_unlock_shared(&arg1[2])
                int32_t eax_6 = *arg1
                void var_3c
                
                if (sub_589e30(&arg1[0x8a], eax_6 + 4, eax_6 + 0x164, &arg1[0x173], edi_4) != 0)
                    int32_t edi_6 = *arg1
                    int32_t var_88
                    sub_56bdc0(edi_6 + 0x1c, &var_88)
                    void* edi_7
                    
                    if (*(edi_6 + 0x170) != 0)
                        edi_7 = &arg1[0x8a]
                    else
                        edi_7 = &arg1[0x8a]
                        
                        if (sub_58a290(edi_7, edi_6 + 4, &var_88) == 0)
                            sub_403360(&var_3c, 0x76a428)
                            int32_t var_14_2 = 1
                            goto label_5c7adf
                    
                    int32_t var_80
                    int32_t var_2c_1 = var_80 ^ 0x80000000
                    int32_t var_34 = var_88 ^ 0x80000000
                    int32_t var_84
                    float var_30 = var_84 ^ 0x80000000
                    int32_t var_7c
                    int32_t var_28_1 = var_7c
                    void var_e0
                    sub_6cbac0(&var_34, &var_e0)
                    void var_a0
                    sub_6ca8d0(&data_7e70e0, &var_a0, &var_e0)
                    float var_94
                    sub_6ca8d0(&data_7e70d4, &var_94, &var_e0)
                    float* eax_11 = sub_6ca8d0(&data_7e70c8, &var_30, &var_e0)
                    *(arg1 + 0x344) = *eax_11
                    int32_t eax_12 = eax_11[2]
                    int32_t var_78
                    *(arg1 + 0x338) = var_78.q
                    int128_t xmm0_6 = var_88.o
                    arg1[0xd3] = eax_12
                    var_34.o = xmm0_6
                    int32_t var_70
                    arg1[0xd0] = var_70
                    int32_t var_174_6 = var_70 ^ 0x80000000
                    int32_t var_74
                    int32_t var_178_2 = var_74 ^ 0x80000000
                    int32_t var_17c_2 = var_78 ^ 0x80000000
                    sub_561770(&var_e0)
                    void var_160
                    float var_120[0x10]
                    int128_t* eax_15 = sub_5c9d40(&var_e0, &var_160, sub_6cbac0(&var_34, &var_120))
                    *(arg1 + 0x350) = *eax_15
                    *(arg1 + 0x360) = eax_15[1]
                    *(arg1 + 0x370) = eax_15[2]
                    void* eax_16 = *arg1
                    *(arg1 + 0x380) = eax_15[3]
                    *(arg1 + 0x390) = *(eax_16 + 0xd0)
                    *(arg1 + 0x3a0) = *(eax_16 + 0xe0)
                    *(arg1 + 0x3b0) = *(eax_16 + 0xf0)
                    *(arg1 + 0x3c0) = *(eax_16 + 0x100)
                    
                    if (sub_589f20(edi_7, eax_16 + 4) == 0)
                        sub_403360(&var_3c, 0x76a460)
                        int32_t var_14_3 = 2
                        goto label_5c7adf
                    
                    int32_t eax_19 = *arg1
                    
                    if (sub_58a060(&arg1[0x8a], eax_19 + 4, &arg1[0xce], &var_a0, &var_94, 
                            &arg1[0xd4], eax_19 + 0x164, arg2, sub_431af0(&arg1[1])) == 0)
                        sub_403360(&var_3c, 0x76a494)
                        int32_t var_14_4 = 3
                        goto label_5c7adf
                    
                    int32_t ecx_23 = sub_5dd740(&arg1[0x173])
                    int32_t* var_58
                    
                    if (*(arg1 + 0x5c5) == 0)
                        var_58.b = 1
                    
                    if (*(arg1 + 0x5c5) != 0 || arg1[0x171].b == 0)
                        var_58.b = 0
                    
                    int32_t var_174_9 = ecx_23
                    
                    if (sub_5dd7b0(&arg1[0x173], sub_431af0(&arg1[1]), var_58.b) != 0)
                        Concurrency::details::GlobalCore::`vector deleting destructor'(arg1)
                        
                        if (sub_5c7df0(arg1).b == 0)
                            result.b = 0
                        else
                            result.b = sub_5c9440(arg1).b != 0
                    else
                        void var_54
                        sub_403360(&var_54, 0x76a55c)
                        int32_t var_14_5 = 4
                        sub_5e01e0(&var_54)
                        sub_403320(&var_54)
                        result.b = 0
                else
                    sub_403360(&var_3c, 0x76a3f8)
                    int32_t var_14_1 = 0
                label_5c7adf:
                    sub_5e01e0(&var_3c)
                    sub_403320(&var_3c)
                    result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
