// 函数: sub_409fb0
// 地址: 0x409fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b33eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a4
int32_t eax_2 = __security_cookie ^ &var_a4
int32_t __saved_esi
int32_t var_ac = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
int32_t var_9c = 0

if (ecx != 0)
    void var_98
    (*(*ecx + 0xc))(&var_98, arg3)
    void* ecx_2 = &var_98
    int32_t var_c_1 = 0
    
    if (sub_421dd0(ecx_2) == 0)
        sub_40d770(arg2)
    else
        sub_40d890(arg2, sub_421e40(ecx_2) != 0)
    
    sub_405be0(&var_98)
else
    sub_40d770(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a4)
return arg2
