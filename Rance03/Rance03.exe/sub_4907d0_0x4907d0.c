// 函数: sub_4907d0
// 地址: 0x4907d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb308
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t var_1c = __security_cookie ^ &result_1
fsbase->NtTib.ExceptionList = &ExceptionList
result_1 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
int32_t ecx
sub_4909f0(ecx, arg1, arg2, arg3, &result_1, arg4)
int32_t* result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
