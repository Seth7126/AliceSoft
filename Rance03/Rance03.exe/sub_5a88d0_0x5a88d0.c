// 函数: sub_5a88d0
// 地址: 0x5a88d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 s< 0)
    result.b = 0
else
    void* edx = data_75d508
    
    if (arg3 s>= (*(edx + 0x54) - *(edx + 0x50)) s>> 2)
        result.b = 0
    else
        result = *(*(edx + 0x50) + (arg3 << 2))
        
        if (result == 0 || result == 0xffffffec)
            result.b = 0
        else
            int32_t* var_34
            sub_5272a0(&result[0x7e], &var_34, arg2)
            int32_t var_c_1 = 0
            int32_t* edx_1 = &var_34
            int32_t var_20
            
            if (var_20 u>= 0x10)
                edx_1 = var_34
            
            (*(*arg4 + 4))(edx_1)
            
            if (var_20 u>= 0x10)
                j__free(var_34)
            
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
