// 函数: sub_42e230
// 地址: 0x42e230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
int32_t arg_4
void** result = (*(**(arg1 + 0xc) + 0x1c))(arg_4)
char* result_2 = result

if (result_2 != 0)
    void* ecx_1
    
    if (*result_2 != 0)
        char* result_4 = result_2
        
        do
            result.b = *result_4
            result_4 = &result_4[1]
        while (result.b != 0)
        
        ecx_1 = result_4 - &result_4[1]
    else
        ecx_1 = nullptr
    
    sub_402110(&var_2c, result_2, ecx_1)
    void** result_3 = sub_417ed0(arg1 + 0x34, &var_2c)
    char eax_7
    
    if (result_3 != *(arg1 + 0x34))
        eax_7 = sub_40c3a0(&var_2c, &result_3[4])
    
    if (result_3 == *(arg1 + 0x34) || eax_7 != 0)
        result_1 = *(arg1 + 0x34)
    else
        result_1 = result_3
    
    result = result_1
    
    if (result != *(arg1 + 0x34))
        int32_t ecx_4 = result[0xa]
        
        if (ecx_4 != 0xffffffff)
            result = (*(arg1 + 0x4c) - *(arg1 + 0x48)) s>> 2
            
            if (ecx_4 s< result)
                result = *(arg1 + 0x48)
                
                if (result[ecx_4] != 0)
                    result = sub_4158d0(arg1 + 0x28, &arg_4)

if (var_18 u>= 0x10)
    result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
