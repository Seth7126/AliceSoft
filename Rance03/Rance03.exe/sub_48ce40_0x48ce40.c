// 函数: sub_48ce40
// 地址: 0x48ce40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6baf10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg3[1] = *arg3
char result

if (*(arg1 + 8) != 0)
    int32_t var_4 = 0
    int32_t var_40
    result = sub_48d090(arg1, sub_48c5b0(&var_40, arg2), arg3)
    int32_t var_4_1 = 0xffffffff
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        j__free(var_40)

if (*(arg1 + 8) == 0 || result == 0)
    result = sub_48cf40(arg1, arg2, arg3)
    
    if (result != 0)
        result = 1
    else
        int32_t* ebx
        
        if (*(arg1 + 8) != result)
            int32_t var_4_2 = 1
            int32_t var_28
            ebx.b = sub_48d090(arg1, sub_48c450(&var_28, arg2), arg3)
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28)
        
        if (*(arg1 + 8) != result && ebx.b != 0)
            result = 1
        else
            result = 0
else
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
