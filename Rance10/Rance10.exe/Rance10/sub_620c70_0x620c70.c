// 函数: sub_620c70
// 地址: 0x620c70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744748
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** arg_4
struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** esi = arg_4
int32_t* edx = esi[5]
void* result

if (esi[3] s>= &edx[1])
    int32_t eax_3
    
    if (esi[3] != 0)
        eax_3 = esi[2]
    else
        eax_3 = 0
    
    arg1[6] = *(edx + eax_3)
    esi[5] = &esi[5]->__offset(0x4).d
    sub_6222a0(&arg1[1])
    arg1[9] = 0
    int32_t* ecx_1 = esi[5]
    
    if (esi[3] s>= &ecx_1[1])
        if (esi[3] != 0)
            result = esi[2]
        else
            result = nullptr
        
        int32_t ebx_1 = *(ecx_1 + result)
        esi[5] = &ecx_1[1]
        void* result_1 = nullptr
        
        if (ebx_1 s> 0)
            do
                int32_t* ecx_2 = esi[5]
                
                if (esi[3] s< &ecx_2[1])
                    goto label_620f02
                
                int32_t eax_6
                
                if (esi[3] != 0)
                    eax_6 = esi[2]
                else
                    eax_6 = 0
                
                void* eax_7 = *(ecx_2 + eax_6)
                esi[5] = &ecx_2[1]
                arg_4 = nullptr
                int32_t var_8_1 = 0
                
                if (eax_7 + 1 u> 6)
                    goto label_620f02
                
                int32_t* var_18
                struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** ecx_11
                
                switch (eax_7)
                    case nullptr
                        var_18 = arg1
                        int32_t* var_1c
                        struct sys43vm::CPage::sys43vm::CDelegatePage::VTable*** eax_9 =
                            sub_622470(&var_1c, &var_18)
                        struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** ecx_7 = *eax_9
                        *eax_9 = nullptr
                        arg_4 = ecx_7
                        int32_t* ecx_8 = var_1c
                        
                        if (ecx_8 != 0)
                            var_8_1.b = 2
                            (**ecx_8)(1)
                            var_8_1.b = 0
                        
                        goto label_620eaa
                    case 1
                        var_18 = arg1
                        struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** var_20
                        void** eax_11 = sub_6224f0(&var_20, &var_18)
                        struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** ecx_10 = *eax_11
                        *eax_11 = nullptr
                        arg_4 = ecx_10
                        ecx_11 = var_20
                    label_620e97:
                        
                        if (ecx_11 == 0)
                            goto label_620eaa
                        
                        (*ecx_11)->__offset(0x0).d(1)
                    label_620eaa:
                        
                        if ((*arg_4)->__offset(0x8).d(esi).b == 0)
                            struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** ecx_28 = arg_4
                            
                            if (ecx_28 != 0)
                                (*ecx_28)->__offset(0x0).d(1)
                            
                            goto label_620f02
                        
                        sub_6221d0(&arg1[1], &arg_4)
                        int32_t var_8_3 = 0xffffffff
                        struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** ecx_25 = arg_4
                        
                        if (ecx_25 != 0)
                            (*ecx_25)->__offset(0x0).d(1)
                    case 2
                        struct sys43vm::CPage::sys43vm::CStringPage::VTable** var_24
                        sub_6225a0(&arg_4, sub_622570(&var_24))
                        struct sys43vm::CPage::sys43vm::CStringPage::VTable** ecx_14 = var_24
                        
                        if (ecx_14 != 0)
                            var_8_1.b = 3
                            (*ecx_14)->__offset(0x0).d(1)
                            var_8_1.b = 0
                        
                        goto label_620eaa
                    case 3
                        var_18 = arg1
                        struct sys43vm::CVarListPage::sys43vm::CArrayPage::VTable** var_28
                        struct sys43vm::CPage::sys43vm::CDelegatePage::VTable*** eax_15 =
                            sub_6225d0(&result_1, &var_18, &var_28, &result_1)
                        struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** ecx_16 = *eax_15
                        *eax_15 = nullptr
                        arg_4 = ecx_16
                        struct sys43vm::CVarListPage::sys43vm::CArrayPage::VTable** ecx_17 = var_28
                        
                        if (ecx_17 != 0)
                            var_8_1.b = 4
                            (*ecx_17)->vFunc_0(1)
                            var_8_1.b = 0
                        
                        goto label_620eaa
                    case 4
                        var_18 = arg1
                        struct sys43vm::CVarListPage::sys43vm::CStructPage::VTable** var_2c
                        sub_6225a0(&arg_4, sub_622610(&result_1, &var_18, &var_2c, &result_1))
                        struct sys43vm::CVarListPage::sys43vm::CStructPage::VTable** ecx_20 = var_2c
                        
                        if (ecx_20 != 0)
                            var_8_1.b = 5
                            (*ecx_20)->vFunc_0(1)
                            var_8_1.b = 0
                        
                        goto label_620eaa
                    case 5
                        var_18 = arg1
                        struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** var_30
                        struct sys43vm::CPage::sys43vm::CDelegatePage::VTable*** eax_21 =
                            sub_622650(&result_1, &var_18, &var_30, &result_1)
                        struct sys43vm::CPage::sys43vm::CDelegatePage::VTable** ecx_22 = *eax_21
                        *eax_21 = nullptr
                        arg_4 = ecx_22
                        ecx_11 = var_30
                        goto label_620e97
                    case 0xffffffff
                        var_18 = nullptr
                        var_8_1.b = 1
                        sub_6221d0(&arg1[1], &var_18)
                        int32_t* ecx_4 = var_18
                        
                        if (ecx_4 != 0)
                            (**ecx_4)(1)
                        
                        sub_405d30(&arg1[7], result_1)
                        int32_t var_8_2 = 0xffffffff
                
                result = result_1 + 1
                result_1 = result
            while (result s< ebx_1)
        
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

label_620f02:
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
