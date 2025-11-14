// 函数: sub_4906b0
// 地址: 0x4906b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bb2d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_28
int32_t var_2c = __security_cookie ^ &var_28
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_c_1 = 0
void* ecx
sub_4908d0(ecx, arg1, arg2, arg3, arg4, &result_1, 0, arg5)
struct _EXCEPTION_REGISTRATION_RECORD** result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
