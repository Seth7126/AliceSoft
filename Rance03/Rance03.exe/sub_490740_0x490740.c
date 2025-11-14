// 函数: sub_490740
// 地址: 0x490740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb308
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result_1
int32_t var_1c = __security_cookie ^ &result_1
fsbase->NtTib.ExceptionList = &ExceptionList
result_1 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
void* ecx
sub_4908d0(ecx, arg1, arg2, 1, arg3, &result_1, 1, nullptr)
struct _EXCEPTION_REGISTRATION_RECORD** result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
