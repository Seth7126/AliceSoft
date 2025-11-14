// 函数: sub_4f8c20
// 地址: 0x4f8c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_24 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (result != 0)
    int32_t* var_18 = nullptr
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    sub_4a6db0(&var_18, sub_510440(*(result + 0x34), arg15) + 0x2c)
    int32_t* edx = var_18
    *arg2 = *edx
    *arg4 = edx[1]
    *arg5 = edx[2]
    *arg6 = edx[3]
    *arg7 = edx[4]
    *arg8 = edx[5]
    *arg9 = edx[6]
    *arg10 = edx[7]
    *arg11 = edx[8]
    *arg12 = edx[9]
    *arg13 = edx[0xa]
    *arg14 = edx[0xb]
    result = j__free(edx)

fsbase->NtTib.ExceptionList = ExceptionList
return result
