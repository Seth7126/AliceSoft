// 函数: sub_4d07e0
// 地址: 0x4d07e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6bf1d9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* ecx
int32_t* result = sub_4d0e00(ecx)
int32_t var_8_1 = 0
int32_t* result_1 = result
result[3].w = 0
void* var_1c = &result[4]
void* var_20 = &result[4]
var_8_1.b = 1

if (result != 0xfffffff0)
    void** eax_4 = *arg1
    result[9] = 0xf
    result[8] = 0
    result[4].b = 0
    sub_401ff0(&result[4], eax_4, 0, 0xffffffff)
    var_8_1.b = 2
    sub_4c9680(&result[0xa])

fsbase->NtTib.ExceptionList = ExceptionList
return result
