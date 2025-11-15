// 函数: sub_420cc0
// 地址: 0x420cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728fa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = 0
int32_t* result

if ((*(**(arg1 + 0xc) + 0x14))(eax_2) s<= 0)
label_420ea0:
    result.b = 1
else
    while (true)
        result = (*(**(arg1 + 0xc) + 0x18))(esi)
        
        if (result != 0)
            int32_t eax_6 = (**result)()
            char eax_7 = sub_421f30(eax_6)
            char eax_8
            
            if (eax_7 == 0)
                eax_8 = sub_421fa0(eax_6)
            
            if (eax_7 == 0 && eax_8 == 0)
            label_420e92:
                esi += 1
                
                if (esi s>= (*(**(arg1 + 0xc) + 0x14))())
                    goto label_420ea0
                
                continue
            else
                int32_t* edi_1 = (*(**(arg1 + 8) + 4))((*(**(arg1 + 8) + 0x1c))())
                
                if (edi_1 != 0 && esi s>= 0)
                    int32_t eax_12
                    int32_t edx_5
                    edx_5:eax_12 = sx.q((*(*edi_1 + 0x14))())
                    
                    if (esi s< (eax_12 + (edx_5 & 3)) s>> 2)
                        result = (*(*edi_1 + 0x18))()
                        
                        if (result != 0)
                            if (result[esi] != arg5)
                                goto label_420e92
                            
                            int32_t* var_18_1 = 0xf
                            int32_t var_1c_1 = 0
                            char var_2c = 0
                            int32_t var_8_1 = 0
                            
                            if (sub_41fbd0(arg1, esi, &var_2c) != 0)
                                char var_44
                                sub_403360(&var_44, 0x75cd13)
                                var_8_1.b = 1
                                int32_t var_80_1 = arg2
                                int32_t var_7c_1 = arg3
                                struct dpvariable::CRefPageInfo::VTable* var_84 =
                                    &dpvariable::CRefPageInfo::`vftable'
                                int32_t var_78_1 = esi
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
                                int32_t var_30
                                
                                if (var_30 u>= 0x10)
                                    sub_403160(var_44.d, var_30 + 1, 1)
                                
                                int32_t var_8_2 = 0xffffffff
                                var_30 = 0xf
                                int32_t var_34_1 = 0
                                var_44 = 0
                                
                                if (var_18_1 u>= 0x10)
                                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                                
                                goto label_420e92
                            
                            if (var_18_1 u>= 0x10)
                                sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
