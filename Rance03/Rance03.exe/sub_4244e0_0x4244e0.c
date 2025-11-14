// 函数: sub_4244e0
// 地址: 0x4244e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4c71
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t var_14 = __security_cookie ^ &var_10
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg2
int32_t var_4 = 0

if (arg2 != 0)
    *arg2 = *arg3
    arg2[1] = arg3[1]
    arg2[2] = arg3[2]
    arg2[8] = 0xf
    arg2[7] = 0
    arg2[3].b = 0
    result = sub_401ff0(&arg2[3], &arg3[3], 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
return result
