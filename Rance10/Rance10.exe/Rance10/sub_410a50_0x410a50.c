// 函数: sub_410a50
// 地址: 0x410a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAAVios_base@2@AAY0M@D@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_118 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
int32_t var_110 = 0

if (ecx != 0)
    void var_10c
    (*(*ecx + 0xc))(&var_10c, arg3)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    void var_90
    sub_414740(arg2, sub_40d320(&var_90))
    sub_40ad50(&var_90)
    sub_40ad50(&var_10c)
else
    sub_414340(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
