// 函数: sub_449cc0
// 地址: 0x449cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b6d80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*(arg1 + 0x1c) != 0 && *(arg1 + 0x14) != 0)
    sub_401f60(&var_4c, arg2)
    int32_t var_c_1 = 0
    int32_t var_c_2 = 0xffffffff
    int32_t* result_1 = sub_449300(*(arg1 + 0x1c), &var_4c)
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    if (result_1 == 0)
        sub_401f60(&var_4c, arg2)
        int32_t var_c_3 = 1
        result_1 = sub_449e50(arg1, arg1 + 0x20, arg2)
        
        if (result_1 == 0)
            result_1 = nullptr
        else if (sub_449120(*(arg1 + 0x1c), &var_4c, result_1) == 0)
            (*(*result_1 + 4))(eax_4)
            result_1 = nullptr
        
        int32_t var_c_4 = 0xffffffff
        
        if (var_38 u>= 0x10)
            j__free(var_4c)
        
        if (result_1 == 0)
            sub_401f60(&var_4c, arg2)
            int32_t var_c_5 = 2
            int32_t var_c_6 = 0xffffffff
            result_1 = sub_449c90(arg1, &var_4c, sub_449f20(arg1, arg2))
            sub_401fb0(&var_4c)
            
            if (result_1 == 0)
                void var_34
                sub_401f60(&var_34, arg2)
                int32_t var_c_7 = 3
                result_1 = sub_449c90(arg1, &var_34, sub_449e50(arg1, arg1 + 0x30, arg2))
                sub_401fb0(&var_34)
    
    result = result_1
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
