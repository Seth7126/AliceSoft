// 函数: ?_Getcat@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@SAIPAPBVfacet@locale@2@PBV42@@Z
// 地址: 0x6d8702
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x38
int32_t (* var_c)(void* arg1) = sub_74973f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_58 = __security_cookie ^ &__saved_ebp
void* const var_5c_2 = &data_6d870e
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
char ebx = 0
int32_t var_14 = 0

if (arg1 != 0 && *arg1 == 0)
    struct std::messages_base::std::messages<wchar_t>::VTable** esi_1 = sub_6e810c(8)
    struct std::messages_base::std::messages<wchar_t>::VTable** var_14_1 = esi_1
    int32_t var_8 = 0
    void var_48
    
    if (esi_1 == 0)
        esi_1 = nullptr
    else
        sub_62c000(&var_48, sub_62c5d0(arg2))
        ebx = 1
        *esi_1 = &std::messages<wchar_t>::`vftable'{for `std::messages_base'}
        esi_1[1] = 0
    
    *arg1 = esi_1
    
    if ((ebx & 1) != 0)
        sub_62c1c0(&var_48)

int32_t var_5c_1 = 6
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d8769
return 6
