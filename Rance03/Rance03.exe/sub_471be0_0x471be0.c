// 函数: sub_471be0
// 地址: 0x471be0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b9981
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* ecx
int32_t* result = sub_472140(ecx)
int32_t var_8_1 = 0
int32_t* result_1 = result
result[3].w = 0
void* var_1c = &result[4]
void* var_20 = &result[4]
var_8_1.b = 1

if (result != 0xfffffff0)
    result[4] = *arg1
    result[5] = &common::CStringWrapper::`vftable'{for `IString'}
    result[0xb] = 0xf
    result[0xa] = 0
    result[6].b = 0
    sub_401ff0(&result[6], &arg1[2], 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
return result
