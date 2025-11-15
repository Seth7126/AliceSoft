// 函数: sub_40f830
// 地址: 0x40f830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AAVios_base@2@AAHAA_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
int32_t var_94 = 0

if (ecx != 0)
    void var_90
    (*(*ecx + 0xc))(&var_90, arg3)
    void* ecx_2 = &var_90
    int32_t var_8_1 = 0
    char eax_4 = sub_41a7d0(ecx_2)
    char eax_5
    
    if (eax_4 == 0)
        eax_5 = sub_41a800(ecx_2)
    
    if (eax_4 != 0 || eax_5 != 0)
        sub_414510(arg2, sub_41a840(&var_90))
    else
        sub_414340(arg2)
    
    sub_40ad50(&var_90)
else
    sub_414340(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
