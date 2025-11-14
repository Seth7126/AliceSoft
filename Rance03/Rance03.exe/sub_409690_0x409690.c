// 函数: sub_409690
// 地址: 0x409690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3281
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_170
int32_t eax_2 = __security_cookie ^ &var_170
int32_t __saved_edi
int32_t var_180 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
var_170 = 0

if (ecx == 0 || *(arg1 + 8) == 0)
    sub_40d770(arg2)
else
    void var_f8
    (*(*ecx + 0xc))(&var_f8, arg3)
    int32_t var_4 = 0
    void var_16c
    (*(**(arg1 + 8) + 0xc))(&var_16c, arg3)
    var_4.b = 1
    var_4.b = 2
    void var_84
    sub_40db10(arg2, sub_405b70(&var_84, &var_16c))
    sub_405be0(&var_84)
    sub_405be0(&var_16c)
    sub_405be0(&var_f8)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_170)
return arg2
