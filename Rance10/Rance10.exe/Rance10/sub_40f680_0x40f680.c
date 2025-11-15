// 函数: sub_40f680
// 地址: 0x40f680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AAVios_base@2@_W_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
int32_t var_ac = 0

if (ecx != 0)
    void var_a8
    (*(*ecx + 0xc))(&var_a8, arg3)
    void* ecx_2 = &var_a8
    int32_t var_8_1 = 0
    
    if (sub_41a7d0(ecx_2) != 0)
    label_40f71c:
        var_8_1.b = 1
        void var_2c
        sub_414640(arg2, sub_41aaa0(&var_a8, &var_2c))
        sub_403320(&var_2c)
    else
        if (sub_41a800(ecx_2) != 0)
            goto label_40f71c
        
        if (sub_41a820(ecx_2) != 0)
            goto label_40f71c
        
        sub_414340(arg2)
    
    sub_40ad50(&var_a8)
else
    sub_414340(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
