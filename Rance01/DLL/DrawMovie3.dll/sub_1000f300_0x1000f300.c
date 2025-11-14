// 函数: sub_1000f300
// 地址: 0x1000f300
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_100193b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_58[0x48]
int32_t eax_2 = __security_cookie ^ &var_58
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result
int32_t __saved_edi

if (arg2 != 0)
    if ((*(**(arg1 + 8) + 0x10))(__security_cookie ^ &__saved_edi) == *(arg1 + 0xc))
        *(arg1 + 4) += arg2
        sub_10012a30(&var_58)
        int32_t var_4 = 0
        int32_t eax_9 = (*(**(arg1 + 8) + 0x34))(*(arg1 + 4) - 1, &var_58)
        int32_t esi_2 = neg.d(eax_9)
        int32_t var_4_1 = 0xffffffff
        sub_100129f0(&var_58)
        result = neg.d(sbb.d(esi_2, esi_2, eax_9 != 0))
    else
        result = 0x80040203
else
    result = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_10001d19(eax_2 ^ &var_58)
return result
