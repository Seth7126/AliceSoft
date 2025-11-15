// 函数: sub_600dd0
// 地址: 0x600dd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
void* result_2
void* result_3 = result_2
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg2 + 0x14)
char* result

if (*(arg2 + 0xc) s< &ecx[1])
    result.b = 0
else
    int32_t eax_3
    
    if (*(arg2 + 0xc) != 0)
        eax_3 = *(arg2 + 8)
    else
        eax_3 = 0
    
    *(arg1 + 0x1c) = *(ecx + eax_3)
    *(arg2 + 0x14) += 4
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    
    if (sub_622cd0(arg2, &var_2c).b == 0)
        result_2.b = 0
    else
        void* result_1
        
        if (var_1c_1 != 0)
            result_2 = **(arg1 + 0x20) + 0x44
            sub_60c2a0(result_2 + 0xb4, &result_1, &var_2c)
            result = result_1
            
            if (result == *(result_2 + 0xb8))
                result_2.b = 0
            else
                result = sub_609d60(result_2, *(result + 0x20))
                *(arg1 + 0x24) = result
                
                if (result != 0)
                    goto label_600e9e
                
                result_2.b = 0
        else
            *(arg1 + 0x24) = 0
        label_600e9e:
            
            if (sub_622c00(arg2, arg1 + 0x28).b == 0)
                result_2.b = 0
            else if (sub_622c00(arg2, arg1 + 0x2c).b == 0)
                result_2.b = 0
            else if (sub_622c00(arg2, &result_1).b == 0)
                result_2.b = 0
            else
                result_2 = result_1
                *(arg1 + 0x14) = 0
                
                if (result_2 s<= 0)
                    result_2.b = 1
                else if (sub_405df0(arg1 + 0xc, result_2).b == 0)
                    result_2.b = 0
                else
                    char* eax_8
                    
                    if (*(arg1 + 0x14) != 0)
                        eax_8 = *(arg1 + 0x10)
                    else
                        eax_8 = nullptr
                    
                    if (sub_622bb0(arg2, eax_8, result_2).b == 0)
                        result_2.b = 0
                    else
                        result_2.b = 1
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = result_2.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
