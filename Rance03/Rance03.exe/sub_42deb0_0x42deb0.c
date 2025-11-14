// 函数: sub_42deb0
// 地址: 0x42deb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5420
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg3 * 3
int32_t edi = (*(**(arg1 + 8) + 4))(arg2)
int32_t result

if (edi == 0 || esi s< 0)
    result.b = 0
else
    int32_t eax_9
    int32_t edx_2
    edx_2:eax_9 = sx.q((*(*edi + 0x14))(eax_4))
    
    if (esi s>= (eax_9 + (edx_2 & 3)) s>> 2)
        result.b = 0
    else
        result = (*(*edi + 0x18))()
        
        if (result == 0)
            result.b = 0
        else
            int32_t eax_12 = *(result + (esi << 2))
            int32_t edi_1 = (*(**(arg1 + 8) + 4))(arg2)
            
            if (edi_1 == 0 || esi + 1 s< 0)
                result.b = 0
            else
                int32_t eax_15
                int32_t edx_5
                edx_5:eax_15 = sx.q((*(*edi_1 + 0x14))())
                
                if (esi + 1 s>= (eax_15 + (edx_5 & 3)) s>> 2)
                    result.b = 0
                else
                    result = (*(*edi_1 + 0x18))()
                    
                    if (result == 0)
                        result.b = 0
                    else
                        int32_t edi_2 = *(result + ((esi + 1) << 2))
                        int32_t var_4c
                        
                        if (sub_42cfa0(arg1, arg2, esi + 2, &var_4c).b == 0)
                            result.b = 0
                        else
                            int32_t var_30_1 = 0xf
                            int32_t var_34_1 = 0
                            char var_44 = 0
                            int32_t var_4 = 0
                            char* eax_20 = (***(arg1 + 0xc))(edi_2)
                            char* var_6c_4
                            
                            var_6c_4 = eax_20 == 0 ? &data_6db020 : eax_20
                            
                            sub_402670(&var_44, var_6c_4)
                            char* eax_21 = &var_44
                            int32_t var_6c_5 = var_4c
                            
                            if (var_30_1 u>= 0x10)
                                eax_21 = var_44.d
                            
                            char* var_70_2 = eax_21
                            int32_t var_74_2 = eax_12
                            int32_t var_2c
                            char* eax_22 = sub_4691f0(&var_2c, "%6d <%s> (%d)")
                            var_4.b = 1
                            
                            if (*(eax_22 + 0x14) u>= 0x10)
                                eax_22 = *eax_22
                            
                            sub_402670(arg4, eax_22)
                            int32_t var_18
                            
                            if (var_18 u>= 0x10)
                                j__free(var_2c)
                            
                            if (var_30_1 u>= 0x10)
                                j__free(var_44.d)
                            
                            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
