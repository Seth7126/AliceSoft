// 函数: sub_633be0
// 地址: 0x633be0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745928
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0

if (arg1 != 0 && *arg1 == 0)
    struct std::locale::facet::std::collate<wchar_t>::VTable** eax_3 = sub_6e810c(0x10)
    struct std::locale::facet::std::collate<wchar_t>::VTable** var_34_1 = eax_3
    int32_t var_8_1 = 0
    void var_2c
    char* eax_4 = sub_62c4d0(arg2, &var_2c)
    var_8_1.b = 1
    int32_t var_30_1 = 1
    
    if (*(eax_4 + 0x14) u>= 0x10)
        eax_4 = *eax_4
    
    void var_68
    sub_62c000(&var_68, eax_4)
    eax_3[1] = 0
    *eax_3 = &std::collate<wchar_t>::`vftable'{for `std::locale::facet'}
    int32_t eax_5
    int32_t edx_1
    eax_5, edx_1 = __Getcoll()
    eax_3[2] = eax_5
    eax_3[3] = edx_1
    *arg1 = eax_3
    sub_62c1c0(&var_68)
    sub_403320(&var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return 1
