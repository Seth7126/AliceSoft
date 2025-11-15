// 函数: sub_6e3e9a
// 地址: 0x6e3e9a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x5c
int32_t (* var_c)(void* arg1) = sub_7496e5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_6 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_6
void* const var_80_3 = &data_6e3ea6
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t var_34 = 0

if (arg1 != 0 && *arg1 == 0)
    struct std::locale::facet::std::collate<char>::VTable** esi_1 = sub_6e810c(0x10)
    struct std::locale::facet::std::collate<char>::VTable** var_38_1 = esi_1
    int32_t var_8 = 0
    void var_6c
    void var_2c
    
    if (esi_1 == 0)
        esi_1 = nullptr
    else
        char* eax_2 = sub_62c4d0(arg2, &var_2c)
        var_8.b = 1
        int32_t var_34_1 = 1
        
        if (*(eax_2 + 0x14) u>= 0x10)
            eax_2 = *eax_2
        
        sub_62c000(&var_6c, eax_2)
        esi_1[1] = 0
        int32_t var_80_2 = 3
        ebx = 3
        *esi_1 = &std::collate<char>::`vftable'{for `std::locale::facet'}
        int32_t eax_3
        int32_t edx_1
        eax_3, edx_1 = __Getcoll()
        esi_1[2] = eax_3
        esi_1[3] = edx_1
    
    *arg1 = esi_1
    
    if ((ebx.b & 2) != 0)
        ebx &= 0xfffffffd
        sub_62c1c0(&var_6c)
    
    if ((ebx.b & 1) != 0)
        sub_4033f0(&var_2c, 1, nullptr)

@__security_check_cookie@4(eax_6 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e3f3f
return 1
