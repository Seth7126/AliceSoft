// 函数: sub_4c8ed0
// 地址: 0x4c8ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void** result_1 = arg3

if (result_1[4] != 0)
    if (result_1[5] u< 0x10)
        result = result_1
    else
        result = *result_1
    
    if (*result != 0xa)
        int32_t var_40_1 = 1
        var_2c = 0xa
        void* eax_5 = sub_4294e0(result_1, &var_2c, arg1)
        
        if (eax_5 != 0xffffffff)
            int32_t var_4 = 0
            char var_28
            sub_403110(arg2, sub_403070(result_1, &var_28, 0, eax_5), nullptr, 0xffffffff)
            int32_t var_4_1 = 0xffffffff
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28.d)
            
            int32_t var_14_1 = 0xf
            int32_t var_18_1 = 0
            var_28 = 0
            result = sub_402210(result_1, 0, eax_5)
        else
            result = sub_403110(arg2, result_1, nullptr, eax_5)
            bool cond:0_1 = result_1[5] u< 0x10
            result_1[4] = 0
            
            if (not(cond:0_1))
                result_1 = *result_1
            
            *result_1 = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
