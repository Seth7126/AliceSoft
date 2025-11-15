// 函数: ?_Makexloc@_Locimp@locale@std@@CAXABV_Locinfo@3@HPAV123@PBV23@@Z
// 地址: 0x6e5013
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 8
int32_t (* var_c)(void* arg1) = sub_74a25c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
void* const var_2c_20 = &data_6e501f
int32_t var_8_6 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
sub_6e3e9a(nullptr, nullptr)

if ((arg2 & 1) != 0)
    if (arg4 != 0)
        int32_t eax_3 = sub_62c2f0(0x7fbdc4)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6e3888(arg4), eax_3)
    else
        struct std::locale::facet::std::collate<char>::VTable** esi_1 = sub_6e810c(0x10)
        struct std::locale::facet::std::collate<char>::VTable** var_14_1 = esi_1
        
        if (esi_1 == 0)
            esi_1 = nullptr
        else
            esi_1[1] &= arg4
            *esi_1 = &std::collate<char>::`vftable'{for `std::locale::facet'}
            int32_t eax_1
            int32_t edx_1
            eax_1, edx_1 = __Getcoll()
            esi_1[2] = eax_1
            esi_1[3] = edx_1
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_1, sub_62c2f0(0x7fbdc4))

int32_t eax_5 = arg2

if ((eax_5.b & 0x20) != 0)
    if (arg4 != 0)
        int32_t eax_8 = sub_62c2f0(0x7fbdc8)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6e3925(arg4), eax_8)
    else
        struct std::messages_base::std::messages<char>::VTable** esi_3 = sub_6e810c(8)
        struct std::messages_base::std::messages<char>::VTable** var_14_2 = esi_3
        
        if (esi_3 == 0)
            esi_3 = nullptr
        else
            esi_3[1] &= arg4
            *esi_3 = &std::messages<char>::`vftable'{for `std::messages_base'}
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_3, sub_62c2f0(0x7fbdc8))
    
    eax_5 = arg2

int32_t result = eax_5 & 4

if (result != 0)
    if (arg4 != 0)
        int32_t eax_14 = sub_62c2f0(0x7fbdcc)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6e39c2(arg4), eax_14)
        int32_t eax_16 = sub_62c2f0(0x7fbdd0)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6e3a5f(arg4), eax_16)
    else
        struct std::locale::facet::std::money_get<char>::VTable** esi_5 = sub_6e810c(8)
        struct std::locale::facet::std::money_get<char>::VTable** var_18_1 = esi_5
        
        if (esi_5 == 0)
            esi_5 = nullptr
        else
            esi_5[1] &= arg4
            *esi_5 = &std::money_get<char>::`vftable'{for `std::locale::facet'}
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_5, sub_62c2f0(0x7fbdcc))
        struct std::locale::facet::std::money_put<char>::VTable** esi_6 = sub_6e810c(8)
        struct std::locale::facet::std::money_put<char>::VTable** var_18_2 = esi_6
        
        if (esi_6 == 0)
            esi_6 = nullptr
        else
            esi_6[1] = 0
            *esi_6 = &std::money_put<char>::`vftable'{for `std::locale::facet'}
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_6, sub_62c2f0(0x7fbdd0))

if (result != 0)
    if (arg4 != 0)
        int32_t eax_22 = sub_62c2f0(0x7fbdd4)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6e3b99(arg4), eax_22)
        int32_t eax_24 = sub_62c2f0(0x7fbdd8)
        result = std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6e3afc(arg4), eax_24)
    else
        struct std::money_base::std::_Mpunct<char>::VTable** esi_9 = sub_6e810c(0x58)
        struct std::money_base::std::_Mpunct<char>::VTable** var_18_3 = esi_9
        int32_t var_8 = 7
        
        if (esi_9 == 0)
            esi_9 = nullptr
        else
            esi_9[1] = 0
            int32_t var_2c_8 = 0
            var_8.b = 8
            *esi_9 = &std::_Mpunct<char>::`vftable'{for `std::money_base'}
            esi_9[0xa].b = 0
            std::_Mpunct<char>::_Init(esi_9, arg1.b)
            *esi_9 = &std::moneypunct<char, 0>::`vftable'{for `std::_Mpunct<char>'}
        
        int32_t var_8_1 = 0xffffffff
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_9, sub_62c2f0(0x7fbdd4))
        int32_t* esi_10 = sub_6e810c(0x58)
        int32_t* var_18_4 = esi_10
        int32_t var_8_2 = 0xd
        
        if (esi_10 == 0)
            esi_10 = nullptr
        else
            esi_10[1] = 0
            int32_t var_2c_10 = 0
            var_8_2.b = 0xe
            *esi_10 = &std::_Mpunct<char>::`vftable'{for `std::money_base'}
            esi_10[0xa].b = 1
            std::_Mpunct<char>::_Init(esi_10, arg1.b)
            *esi_10 = &std::moneypunct<char, 1>::`vftable'{for `std::_Mpunct<char>'}
        
        int32_t var_8_3 = 0xffffffff
        result = std::locale::_Locimp::_Locimp_Addfac(arg3, esi_10, sub_62c2f0(0x7fbdd8))

if ((arg2.b & 0x10) != 0)
    if (arg4 != 0)
        int32_t eax_31 = sub_62c2f0(0x7fbddc)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6e3c36(arg4), eax_31)
        int32_t eax_33 = sub_62c2f0(0x7fbde0)
        result = std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6e3cd3(arg4), eax_33)
    else
        struct std::time_base::std::time_get<char>::VTable** eax_26 = sub_6e810c(0x44)
        struct std::time_base::std::time_get<char>::VTable** var_18_5 = eax_26
        int32_t var_8_4 = 0x12
        struct std::time_base::std::time_get<char>::VTable** esi_13
        
        if (eax_26 == 0)
            esi_13 = nullptr
        else
            esi_13 = sub_6e3d70(eax_26, arg1, arg4)
        
        int32_t var_8_5 = 0xffffffff
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_13, sub_62c2f0(0x7fbddc))
        int32_t* esi_14 = sub_6e810c(0xc)
        int32_t* var_18_6 = esi_14
        
        if (esi_14 == 0)
            esi_14 = nullptr
        else
            esi_14[1] = 0
            *esi_14 = &std::time_put<char>::`vftable'{for `std::locale::facet'}
            esi_14[2] = 0
            std::time_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Init(
                esi_14, arg1)
        
        result = std::locale::_Locimp::_Locimp_Addfac(arg3, esi_14, sub_62c2f0(0x7fbde0))

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e5387
return result
