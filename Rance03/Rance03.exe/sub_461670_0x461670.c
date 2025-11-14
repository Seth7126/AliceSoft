// 函数: sub_461670
// 地址: 0x461670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_460b40(arg1 + 8)
int32_t* var_30 = arg2
int32_t result_1 = 0
int32_t var_14 = 0
int32_t var_10 = 0
sub_459eb0(&result_1, arg2, arg3 + arg2)
int32_t var_4 = 0
int32_t ebx
ebx.b = sub_459730(arg1 + 0x2c, arg1 + 8, &result_1)
int32_t result = result_1

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
