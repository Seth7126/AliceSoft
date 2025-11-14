// 函数: sub_425220
// 地址: 0x425220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
LRESULT result

if (arg2 s< 0 || arg2 s>= (***(*(arg1 + 0xe0) + 8))(__security_cookie ^ &__saved_edi))
    result.b = 0
else
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    int32_t var_c_1 = 0
    sub_42ca60(*(arg1 + 0xe0), arg2, &var_34)
    sub_423ef0(*(arg1 + 0xe4), arg2, &var_34, 1)
    *(arg1 + 0xec) = arg2
    
    if (var_20_1 u>= 0x10)
        j__free(var_34.d)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
