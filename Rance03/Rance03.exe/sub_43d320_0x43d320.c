// 函数: sub_43d320
// 地址: 0x43d320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b6541
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_38
int32_t* ecx
int32_t* result = sub_43d610(ecx)
int32_t var_8_1 = 0
int32_t* result_1 = result
result[3].w = 0
void* var_24 = &result[4]
void* var_28 = &result[4]
var_8_1.b = 1

if (result != 0xfffffff0)
    int32_t var_3c_1 = 0
    int32_t var_40_1 = 0.d
    int32_t var_1c = *arg1
    void* var_44_1 = &result[4]
    sub_43db10(&result[4], &var_1c)

fsbase->NtTib.ExceptionList = ExceptionList
return result
