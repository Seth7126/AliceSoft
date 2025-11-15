// 函数: sub_4207f0
// 地址: 0x4207f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728f18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_70 = arg4
int32_t edi = arg3 * 3
int32_t* esi = (*(**(arg1 + 8) + 4))(arg2)
int32_t result

if (esi == 0 || edi s< 0)
    result.b = 0
else
    int32_t eax_7
    int32_t edx_2
    edx_2:eax_7 = sx.q((*(*esi + 0x14))(eax_2))
    
    if (edi s>= (eax_7 + (edx_2 & 3)) s>> 2)
        result.b = 0
    else
        result = (*(*esi + 0x18))()
        
        if (result == 0)
            result.b = 0
        else
            int32_t var_6c = *(result + (edi << 2))
            int32_t esi_1 = (*(**(arg1 + 8) + 4))(arg2)
            
            if (esi_1 == 0 || edi + 1 s< 0)
                result.b = 0
            else
                int32_t eax_13
                int32_t edx_5
                edx_5:eax_13 = sx.q((*(*esi_1 + 0x14))())
                
                if (edi + 1 s>= (eax_13 + (edx_5 & 3)) s>> 2)
                    result.b = 0
                else
                    result = (*(*esi_1 + 0x18))()
                    
                    if (result == 0)
                        result.b = 0
                    else
                        int32_t esi_2 = *(result + ((edi + 1) << 2))
                        int32_t var_68
                        
                        if (sub_420630(arg1, arg2, edi + 2, &var_68).b == 0)
                            result.b = 0
                        else
                            int32_t var_1c_1 = 0xf
                            int32_t var_20_1 = 0
                            char var_30 = 0
                            int32_t var_8_1 = 0
                            char* eax_18 = (***(arg1 + 0xc))(esi_2)
                            char* var_84_4
                            
                            var_84_4 = eax_18 == 0 ? &data_75d41c : eax_18
                            
                            sub_403450(var_84_4)
                            void var_48
                            sub_403360(&var_48, "%6d <%s> (%d)")
                            var_8_1.b = 1
                            char* eax_19 = &var_30
                            
                            if (var_1c_1 u>= 0x10)
                                eax_19 = var_30.d
                            
                            void var_60
                            char* eax_21 =
                                sub_422930(&var_6c, &var_48, &var_60, &var_6c, eax_19, var_68)
                            var_8_1.b = 2
                            
                            if (*(eax_21 + 0x14) u>= 0x10)
                                eax_21 = *eax_21
                            
                            sub_403450(eax_21)
                            sub_403320(&var_60)
                            sub_403320(&var_48)
                            sub_403320(&var_30)
                            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
