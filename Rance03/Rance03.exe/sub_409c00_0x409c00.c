// 函数: sub_409c00
// 地址: 0x409c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3316
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_fc
int32_t eax_2 = __security_cookie ^ &var_fc
int32_t __saved_esi
int32_t var_104 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
var_fc = 0

if (ecx != 0)
    void var_84
    (*(*ecx + 0xc))(&var_84, arg3)
    int32_t var_4 = 0
    var_4.b = 1
    void var_f8
    sub_40db10(arg2, sub_405bb0(&var_f8))
    sub_405be0(&var_f8)
    sub_405be0(&var_84)
else
    sub_40d770(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_fc)
return arg2
