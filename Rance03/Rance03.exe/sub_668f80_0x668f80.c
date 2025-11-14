// 函数: sub_668f80
// 地址: 0x668f80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cff18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t ecx_2 = (arg2 - arg3) s/ 0x28
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(ecx_2 + 1)
int32_t var_14 = (eax_5 - edx_2) s>> 1
int32_t* var_10 = &result_1
int32_t var_4 = 0
sub_669860(&result_1, arg2, arg3, ecx_2, &result_1, arg4)
int32_t result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
