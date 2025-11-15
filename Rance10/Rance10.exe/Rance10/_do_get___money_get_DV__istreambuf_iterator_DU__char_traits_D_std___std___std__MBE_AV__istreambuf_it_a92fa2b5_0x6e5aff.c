// 函数: ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAAVios_base@2@AAHAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z
// 地址: 0x6e5aff
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x2c
int32_t (* var_c)(void* arg1) = sub_74a30a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_8 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_8
void* const __saved_ebp_3 = &data_6e5b0b
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void var_20
__saved_ebp_3 = &var_20
int32_t* var_38
int32_t arg_8
int32_t arg_10
std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getmfld(
    &var_38, &arg_8, &arg_10, arg3, arg4, __saved_ebp_3)
int32_t var_8 = 0
__saved_ebp_3 = &arg_10

if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, __saved_ebp_3)
        != 0)
    *arg5 |= 1

int32_t* var_28

if (var_28 != 0)
    int32_t i = 0
    __saved_ebp_3 = nullptr
    std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::resize(arg6, 
        var_28, __saved_ebp_3.b)
    int32_t* eax_3 = var_38
    __saved_ebp_3 = 0x10
    int32_t var_24
    
    if (var_24 u< 0x10)
        eax_3 = &var_38
    
    if (*eax_3 == 0x2d)
        char* ecx_2
        
        if (arg6[5] u< 0x10)
            ecx_2 = arg6
        else
            ecx_2 = *arg6
        
        char var_16
        eax_3.b = var_16
        *ecx_2 = eax_3.b
        i = 1
    
    for (; i u< var_28; i += 1)
        int32_t** eax_4 = var_38
        
        if (var_24 u< 0x10)
            eax_4 = &var_38
        
        char* ecx_3
        
        if (arg6[5] u< 0x10)
            ecx_3 = arg6
        else
            ecx_3 = *arg6
        
        int32_t eax_5
        eax_5.b = *(&__saved_ebp_3 + sx.d(*(eax_4 + i)))
        ecx_3[i] = eax_5.b
else
    *arg5 |= 2

int32_t ecx_4 = arg_8
__saved_ebp_3 = nullptr
*arg1 = ecx_4
arg1[1] = arg2
sub_4033f0(&var_38, 1, __saved_ebp_3)
__saved_ebp_3 = &data_6e5bd0
@__security_check_cookie@4(eax_8 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = __saved_ebp_3
return arg1
