// 函数: sub_52a2d0
// 地址: 0x52a2d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c371b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_2
int32_t eax_2 = __security_cookie ^ &result_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 != 4)
    result.b = 1
else
    result = *(arg1 + 0x74)
    
    if (result s< 0 || result s>= *(arg1 + 0x70))
        result.b = 1
    else
        int32_t* ecx = *(arg1 + 0x3c)
        int32_t __saved_edi
        
        if (ecx == 0)
            result.b = 1
        else if ((*(*ecx + 0x14))(__security_cookie ^ &__saved_edi).b == 0)
            result.b = 1
        else
            int32_t ecx_1 = *(arg1 + 0x74)
            
            if (ecx_1 s< 0 || ecx_1 s>= (*(arg1 + 0x44) - *(arg1 + 0x40)) s>> 2
                    || *(*(arg1 + 0x40) + (ecx_1 << 2)) == 0
                    || ecx_1 s>= (*(arg1 + 0x50) - *(arg1 + 0x4c)) s>> 2)
                result.b = 0
            else
                result = *(*(arg1 + 0x4c) + (ecx_1 << 2))
                result_2 = result
                
                if (result == 0)
                    result.b = 0
                else
                    void var_100
                    sub_535530(&var_100)
                    int32_t var_c_1 = 0
                    (*(*arg4 + 0xc4))(1)
                    (*(*arg4 + 0xc8))(1)
                    int32_t result_3 = result_2
                    char var_6c_1 = 1
                    
                    if ((*(**(arg1 + 0x3c) + 0x24))().b == 0)
                        result.b = 0
                    else
                        int128_t var_b0_1 = data_709450
                        char var_2a_1 = 1
                        int128_t var_a0_1 = zx.o(0)
                        int32_t var_90_1 = *(arg1 + 0x78)
                        int32_t var_28_1 = *(arg1 + 0x7c)
                        void var_140
                        sub_5356d0(&var_100, EnumC13Lines::EnumC13Lines(&var_140))
                        bool cond:1_1 = (*(*result_2 + 0x18))() == 0
                        result = *(arg1 + 0x38)
                        
                        if (not(cond:1_1))
                            int32_t var_158_2
                            
                            if (result == 0)
                                var_158_2 = 1
                            label_52a46c:
                                (*(*arg4 + 0xbc))(var_158_2)
                                (*(*arg4 + 0xc0))(1, 1)
                                goto label_52a4a3
                            
                            if (result == 1)
                                var_158_2 = 3
                                goto label_52a46c
                            
                            result.b = 0
                        else
                            int32_t result_1
                            
                            if (result != 0)
                                if (result == 1)
                                    result_1 = 2
                                    goto label_52a494
                                
                                result.b = 0
                            else
                                result_1 = result
                            label_52a494:
                                (*(*arg4 + 0xbc))(result_1)
                            label_52a4a3:
                                
                                if (sub_58c7b0(arg3, &var_100).b == 0)
                                    result.b = 0
                                else if ((*(**(arg1 + 0x3c) + 0x30))().b == 0)
                                    result.b = 0
                                else
                                    if ((*(*result_2 + 0x18))().b != 0)
                                        (*(*arg4 + 0xc0))(0, 0)
                                    
                                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_2)
return result
