// 函数: sub_40f530
// 地址: 0x40f530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_88 = 0xffffffff
int32_t (* var_8c)(void* arg1) = sub_727c48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t var_a0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
int32_t var_98 = 0

if (ecx != 0)
    (*(*ecx + 0xc))(&var_84, arg3)
    void* ecx_2 = &var_84
    int32_t var_88_1 = 0
    
    if (sub_41a7d0(ecx_2) == 0)
        sub_414340(arg2)
    else
        sub_414470(arg2, sub_41a840(ecx_2) != 0)
    
    sub_40ad50(&var_84)
else
    sub_414340(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_84)
return arg2
