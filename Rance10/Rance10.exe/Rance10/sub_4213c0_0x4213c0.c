// 函数: sub_4213c0
// 地址: 0x4213c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729040
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = 0
int32_t esi = arg3
int32_t var_88 = esi
int32_t* result

if ((*(**(arg1 + 0xc) + 0x20))((*(**(arg1 + 8) + 0x18))(esi)) s<= 0)
label_421608:
    result.b = 1
else
    while (true)
        result = (*(**(arg1 + 0xc) + 0x24))((*(**(arg1 + 8) + 0x18))(esi), edi)
        
        if (result != 0)
            int32_t eax_8 = (**result)(eax_2)
            char eax_9 = sub_421f30(eax_8)
            char eax_10
            
            if (eax_9 == 0)
                eax_10 = sub_421fa0(eax_8)
            
            if (eax_9 == 0 && eax_10 == 0)
            label_4215f0:
                edi += 1
                
                if (edi s>= (*(**(arg1 + 0xc) + 0x20))((*(**(arg1 + 8) + 0x18))(esi)))
                    goto label_421608
                
                continue
            else
                int32_t* esi_1 = (*(**(arg1 + 8) + 4))(esi)
                
                if (esi_1 != 0 && edi s>= 0)
                    int32_t eax_13
                    int32_t edx_5
                    edx_5:eax_13 = sx.q((*(*esi_1 + 0x14))())
                    
                    if (edi s< (eax_13 + (edx_5 & 3)) s>> 2)
                        result = (*(*esi_1 + 0x18))()
                        
                        if (result != 0)
                            esi = var_88
                            
                            if (result[edi] != arg5)
                                goto label_4215f0
                            
                            void* var_44
                            sub_4201d0(arg1, &var_44, esi)
                            int32_t var_8_1 = 0
                            int32_t var_18_1 = 0xf
                            int32_t var_1c_1 = 0
                            char var_2c = 0
                            var_8_1.b = 1
                            char* edx_8 =
                                (*(**(arg1 + 0xc) + 0x28))((*(**(arg1 + 8) + 0x18))(esi), edi)
                            int32_t* var_30
                            
                            if (edx_8 != 0)
                                void* ecx_14
                                
                                if (*edx_8 != 0)
                                    char* ecx_15 = edx_8
                                    char* eax_18
                                    
                                    do
                                        eax_18.b = *ecx_15
                                        ecx_15 = &ecx_15[1]
                                    while (eax_18.b != 0)
                                    ecx_14 = ecx_15 - &ecx_15[1]
                                    esi = var_88
                                else
                                    ecx_14 = nullptr
                                
                                sub_403490(&var_2c, edx_8, ecx_14)
                                int32_t var_80_1 = arg2
                                struct dpvariable::CRefPageInfo::VTable* var_84 =
                                    &dpvariable::CRefPageInfo::`vftable'
                                int32_t var_7c_1 = esi
                                int32_t var_78_1 = edi
                                int32_t var_60_1 = 0xf
                                int32_t var_64_1 = 0
                                char var_74 = 0
                                sub_403590(&var_74, &var_44, 0, 0xffffffff)
                                var_8_1.b = 2
                                int32_t var_48_1 = 0xf
                                int32_t var_4c_1 = 0
                                char var_5c = 0
                                sub_403590(&var_5c, &var_2c, 0, 0xffffffff)
                                var_8_1.b = 3
                                sub_4223b0(arg4, &var_84)
                                sub_423180(&var_84)
                                
                                if (var_18_1 u>= 0x10)
                                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                                
                                int32_t var_8_2 = 0xffffffff
                                int32_t var_18_2 = 0xf
                                int32_t var_1c_2 = 0
                                var_2c = 0
                                
                                if (var_30 u>= 0x10)
                                    sub_403160(var_44, var_30 + 1, 1)
                                
                                var_30 = 0xf
                                int32_t var_34_1 = 0
                                var_44.b = 0
                                goto label_4215f0
                            
                            if (var_18_1 u>= 0x10)
                                sub_403160(var_2c.d, var_18_1 + 1, 1)
                            
                            int32_t var_18_3 = 0xf
                            int32_t var_1c_3 = 0
                            var_2c = 0
                            
                            if (var_30 u>= 0x10)
                                sub_403160(var_44, var_30 + 1, 1)
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
