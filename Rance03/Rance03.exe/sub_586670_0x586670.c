// 函数: sub_586670
// 地址: 0x586670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c7640
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t eax_6
int32_t ecx
eax_6, ecx = sub_556710(arg1, (arg2[1] - *arg2) s>> 6)

if (eax_6.b != 0)
    int32_t var_8_1 = 0
    int32_t* var_2c_1 = arg2
    int32_t var_30_1 = ecx
    arg1[1] = sub_5867e0(eax_6, arg2[1], *arg2, *arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
