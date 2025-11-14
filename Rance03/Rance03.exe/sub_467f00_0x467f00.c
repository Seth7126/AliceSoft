// 函数: sub_467f00
// 地址: 0x467f00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b91a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* result = sub_467760(arg1, arg2)
int32_t var_8_1 = 0
arg2 = result
arg1 = &result[2]
void* var_18 = &result[2]
var_8_1.b = 1

if (result != 0xfffffff8)
    result[2] = &exfile::CToken::`vftable'
    result[8] = 0xf
    result[7] = 0
    result[3].b = 0
    sub_401ff0(&result[3], arg3 + 4, 0, 0xffffffff)
    result[9] = *(arg3 + 0x1c)
    result[0xa] = *(arg3 + 0x20)

fsbase->NtTib.ExceptionList = ExceptionList
return result
