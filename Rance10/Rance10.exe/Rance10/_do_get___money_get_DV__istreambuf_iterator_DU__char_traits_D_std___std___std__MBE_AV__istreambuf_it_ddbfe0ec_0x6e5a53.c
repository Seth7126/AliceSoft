// 函数: ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAAVios_base@2@AAHAAO@Z
// 地址: 0x6e5a53
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x34
int32_t (* var_c)(void* arg1) = sub_74a2dd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_5 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_5
void* const var_58_3 = &data_6e5a5f
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_38
void var_20
int32_t arg_8
int32_t arg_10
std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getmfld(
    &var_38, &arg_8, &arg_10, arg4, arg5, &var_20)
int32_t var_8 = 0

if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10) != 0)
    *arg6 |= 1

int32_t var_28

if (var_28 == 0)
    *arg6 |= 2
else
    int32_t* edi_1 = var_38
    int32_t var_24
    
    if (var_24 u< 0x10)
        edi_1 = &var_38
    
    int32_t var_3c = 0
    int32_t var_40
    std::_Stodx_v2(edi_1, &var_40, 0, &var_3c)
    
    if (var_40 == edi_1 || var_3c != 0)
        *arg6 |= 2
    else
        *arg7 = fconvert.d(arg1)

*arg2 = arg_8
arg2[1] = arg3
sub_4033f0(&var_38, 1, nullptr)
@__security_check_cookie@4(eax_5 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e5afc
return arg2
