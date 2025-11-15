// 函数: sub_6d8d37
// 地址: 0x6d8d37
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x3c
int32_t (* var_c)(void* arg1) = sub_749788
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
void* const var_60_3 = &data_6d8d43
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
char ebx = 0
int32_t var_14 = 0

if (arg1 != 0 && *arg1 == 0)
    struct std::locale::facet::std::numpunct<wchar_t>::VTable** esi_1 = sub_6e810c(0x18)
    struct std::locale::facet::std::numpunct<wchar_t>::VTable** var_18_1 = esi_1
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
        *esi_1 = &std::numpunct<wchar_t>::`vftable'{for `std::locale::facet'}
        std::numpunct<wchar_t>::_Init(esi_1, eax_2)
    
    *arg1 = esi_1
    
    if ((ebx & 1) != 0)
        sub_62c1c0(&var_4c)

int32_t var_60_2 = 4
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d8db1
return 4
