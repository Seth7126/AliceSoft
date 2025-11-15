// 函数: ?_Getcat@?$moneypunct@G$0A@@std@@SAIPAPBVfacet@locale@2@PBV42@@Z
// 地址: 0x6d8a97
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x3c
int32_t (* var_c)(void* arg1) = sub_74a0a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
void* const var_60_3 = &data_6d8aa3
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
char ebx = 0
int32_t var_14 = 0

if (arg1 != 0 && *arg1 == 0)
    struct std::money_base::std::_Mpunct<wchar_t>::VTable** esi_1 = sub_6e810c(0x58)
    struct std::money_base::std::_Mpunct<wchar_t>::VTable** var_18_1 = esi_1
    int32_t var_8 = 0
    void var_4c
    
    if (esi_1 == 0)
        esi_1 = nullptr
    else
        char eax_2 = sub_62c000(&var_4c, sub_62c5d0(arg2))
        esi_1[1] = 0
        ebx = 1
        int32_t var_14_1 = 1
        int32_t var_60_1 = 1
        int32_t var_8_1 = 2
        *esi_1 = &std::_Mpunct<wchar_t>::`vftable'{for `std::money_base'}
        esi_1[0xa].b = 0
        std::_Mpunct<wchar_t>::_Init(esi_1, eax_2)
        *esi_1 = &std::moneypunct<wchar_t, 0>::`vftable'{for `std::_Mpunct<wchar_t>'}
    
    *arg1 = esi_1
    
    if ((ebx & 1) != 0)
        sub_62c1c0(&var_4c)

int32_t var_60_2 = 3
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d8b1b
return 3
