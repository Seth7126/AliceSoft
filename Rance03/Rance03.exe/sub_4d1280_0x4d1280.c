// 函数: sub_4d1280
// 地址: 0x4d1280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6bf2f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* ecx
int32_t* result = sub_4cedf0(ecx)
int32_t var_8_1 = 0
int32_t* result_1 = result
result[3].w = 0
sub_4d1300(&result[4], arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
