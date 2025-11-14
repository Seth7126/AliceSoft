// 函数: sub_576810
// 地址: 0x576810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void* result
int32_t ebx

if (sub_468d00(arg2, &var_2c).b == 0)
    ebx.b = 0
else if (sub_40c250(&var_2c, 0x6e5134).b == 0)
    ebx.b = 0
else if (sub_468b20(arg2, &result_1).b == 0)
    ebx.b = 0
else
    result = result_1
    
    if (result u> 5)
        ebx.b = 0
    else
        *(arg1 + 8) = result
        ebx.b = 1

if (var_18 u>= 0x10)
    j__free(var_2c.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
