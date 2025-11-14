// 函数: sub_409d00
// 地址: 0x409d00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b335b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_9c
int32_t eax_2 = __security_cookie ^ &var_9c
int32_t __saved_esi
int32_t var_a4 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
var_9c = 0

if (ecx != 0)
    void var_98
    (*(*ecx + 0xc))(&var_98, arg3)
    void* ecx_2 = &var_98
    int32_t var_c_1 = 0
    char eax_6 = sub_421dd0(ecx_2)
    char eax_7
    
    if (eax_6 == 0)
        eax_7 = sub_421e00(ecx_2)
    
    if (eax_6 != 0 || eax_7 != 0)
        sub_40d920(arg2, sub_421e40(&var_98))
    else
        sub_40d770(arg2)
    
    sub_405be0(&var_98)
else
    sub_40d770(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_9c)
return arg2
