// 函数: sub_477070
// 地址: 0x477070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9f58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (data_75d534 == 0)
    result.b = 0
else
    int32_t* var_50_1 = arg1
    result = sub_6203f0()
    
    if (result == 0)
        result.b = 0
    else
        result = (*result)->Next(0x6dd878)
        
        if (result == 0)
            result.b = 0
        else
            int32_t var_28
            sub_401f60(&var_28, (*result)->__offset(0xc).d(eax_4))
            int32_t var_4 = 0
            result = sub_402a20(&var_40, &var_28)
            
            if (arg1 != result)
                if (arg1[5] u>= 0x10)
                    j__free(*arg1)
                
                arg1[5] = 0xf
                arg1[4] = 0
                *arg1 = 0
                sub_4030b0(arg1, result)
            
            int32_t var_2c
            
            if (var_2c u>= 0x10)
                j__free(var_40.d)
            
            int32_t var_2c_1 = 0xf
            int32_t var_30_1 = 0
            var_40 = 0
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
