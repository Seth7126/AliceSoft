// 函数: sub_57fc10
// 地址: 0x57fc10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3cc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
int32_t var_1c = 0
int32_t esi_2 = (arg2 - arg3) s>> 2
int32_t var_18 = 0
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(esi_2 + 1)
int32_t var_14 = (eax_4 - edx) s>> 1
int32_t* var_10 = &result_1
int32_t var_4 = 0
sub_580120(&result_1, arg2, arg3, esi_2, &result_1, arg4)
int32_t result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
