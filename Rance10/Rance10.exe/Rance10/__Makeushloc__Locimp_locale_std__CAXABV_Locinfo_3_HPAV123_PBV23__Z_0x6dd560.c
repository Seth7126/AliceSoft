// 函数: ?_Makeushloc@_Locimp@locale@std@@CAXABV_Locinfo@3@HPAV123@PBV23@@Z
// 地址: 0x6dd560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0xc
int32_t (* var_c)(void* arg1) = sub_749c1c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
void* const var_30_32 = &data_6dd56c
int32_t var_8_8 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax = arg2
int32_t* ebx = nullptr
int32_t ecx_1 = eax & 2
int32_t var_18 = 0

if (ecx_1 != 0)
    if (arg4 != 0)
        int32_t eax_3 = sub_62c2f0(0x7fbad4)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d6aa9(arg4), eax_3)
    else
        struct std::ctype_base::std::ctype<uint16_t>::VTable** esi_1 = sub_6e810c(0x44)
        struct std::ctype_base::std::ctype<uint16_t>::VTable** var_14_1 = esi_1
        
        if (esi_1 == 0)
            esi_1 = nullptr
        else
            int32_t var_30 = arg1
            esi_1[1] = 0
            *esi_1 = &std::ctype<uint16_t>::`vftable'{for `std::ctype_base'}
            sub_6dccaf(esi_1)
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_1, sub_62c2f0(0x7fbad4))
    
    eax = arg2

int32_t eax_13 = eax & 8

if (eax_13 != 0)
    if (arg4 != 0)
        int32_t eax_9 = sub_62c2f0(0x7fbd3c)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d7168(arg4), eax_9)
        int32_t eax_11 = sub_62c2f0(0x7fbd40)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d72a2(arg4), eax_11)
    else
        struct std::locale::facet::std::num_get<uint16_t>::VTable** esi_3 = sub_6e810c(8)
        struct std::locale::facet::std::num_get<uint16_t>::VTable** var_1c_1 = esi_3
        
        if (esi_3 == 0)
            esi_3 = nullptr
        else
            esi_3[1] = 0
            *esi_3 = &std::num_get<uint16_t>::`vftable'{for `std::locale::facet'}
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_3, sub_62c2f0(0x7fbd3c))
        struct std::locale::facet::std::num_put<uint16_t>::VTable** esi_4 = sub_6e810c(8)
        struct std::locale::facet::std::num_put<uint16_t>::VTable** var_1c_2 = esi_4
        
        if (esi_4 == 0)
            esi_4 = nullptr
        else
            esi_4[1] = 0
            *esi_4 = &std::num_put<uint16_t>::`vftable'{for `std::locale::facet'}
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_4, sub_62c2f0(0x7fbd40))

if (eax_13 != 0)
    if (arg4 != 0)
        int32_t eax_16 = sub_62c2f0(0x7fbd44)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d73dc(arg4), eax_16)
    else
        struct std::locale::facet::std::numpunct<uint16_t>::VTable** esi_7 = sub_6e810c(0x18)
        struct std::locale::facet::std::numpunct<uint16_t>::VTable** var_1c_3 = esi_7
        int32_t var_8 = 7
        
        if (esi_7 == 0)
            esi_7 = nullptr
        else
            esi_7[1] = 0
            int32_t var_30_7 = 0
            var_8.b = 8
            *esi_7 = &std::numpunct<uint16_t>::`vftable'{for `std::locale::facet'}
            std::numpunct<uint16_t>::_Init(esi_7, arg1.b)
        
        int32_t var_8_1 = 0xffffffff
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_7, sub_62c2f0(0x7fbd44))

sub_6d8584(nullptr, nullptr)

if ((arg2 & 1) != 0)
    if (arg4 != 0)
        int32_t eax_21 = sub_62c2f0(0x7fbd48)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d6a0c(arg4), eax_21)
    else
        struct std::locale::facet::std::collate<uint16_t>::VTable** esi_9 = sub_6e810c(0x10)
        struct std::locale::facet::std::collate<uint16_t>::VTable** var_1c_4 = esi_9
        
        if (esi_9 == 0)
            esi_9 = nullptr
        else
            esi_9[1] = 0
            *esi_9 = &std::collate<uint16_t>::`vftable'{for `std::locale::facet'}
            int32_t eax_19
            int32_t edx_1
            eax_19, edx_1 = __Getcoll()
            esi_9[2] = eax_19
            esi_9[3] = edx_1
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_9, sub_62c2f0(0x7fbd48))

int32_t edx_2 = arg2

if ((edx_2.b & 0x20) != 0)
    if (arg4 != 0)
        int32_t eax_25 = sub_62c2f0(0x7fbd4c)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d6b46(arg4), eax_25)
    else
        struct std::messages_base::std::messages<uint16_t>::VTable** esi_11 = sub_6e810c(8)
        struct std::messages_base::std::messages<uint16_t>::VTable** var_1c_5 = esi_11
        
        if (esi_11 == 0)
            esi_11 = nullptr
        else
            esi_11[1] = 0
            *esi_11 = &std::messages<uint16_t>::`vftable'{for `std::messages_base'}
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_11, sub_62c2f0(0x7fbd4c))
    
    edx_2 = arg2

int32_t result = edx_2 & 4

if (result != 0)
    if (arg4 != 0)
        int32_t eax_32 = sub_62c2f0(0x7fbd50)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d6c80(arg4), eax_32)
        int32_t eax_34 = sub_62c2f0(0x7fbd54)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d6dba(arg4), eax_34)
    else
        struct std::locale::facet::std::money_get<uint16_t>::VTable** esi_13 = sub_6e810c(8)
        struct std::locale::facet::std::money_get<uint16_t>::VTable** var_1c_6 = esi_13
        
        if (esi_13 == 0)
            esi_13 = nullptr
        else
            esi_13[1] = 0
            *esi_13 = &std::money_get<uint16_t>::`vftable'{for `std::locale::facet'}
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_13, sub_62c2f0(0x7fbd50))
        struct std::locale::facet::std::money_put<uint16_t>::VTable** esi_14 = sub_6e810c(8)
        struct std::locale::facet::std::money_put<uint16_t>::VTable** var_1c_7 = esi_14
        
        if (esi_14 == 0)
            esi_14 = nullptr
        else
            esi_14[1] = 0
            *esi_14 = &std::money_put<uint16_t>::`vftable'{for `std::locale::facet'}
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_14, sub_62c2f0(0x7fbd54))

if (result != 0)
    if (arg4 != 0)
        int32_t eax_40 = sub_62c2f0(0x7fbd58)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d6f91(arg4), eax_40)
        int32_t eax_42 = sub_62c2f0(0x7fbd5c)
        result = std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d6ef4(arg4), eax_42)
    else
        struct std::money_base::std::_Mpunct<uint16_t>::VTable** esi_17 = sub_6e810c(0x58)
        struct std::money_base::std::_Mpunct<uint16_t>::VTable** var_1c_8 = esi_17
        int32_t var_8_2 = 0x10
        
        if (esi_17 == 0)
            esi_17 = nullptr
        else
            esi_17[1] = 0
            int32_t var_30_18 = 0
            var_8_2.b = 0x11
            *esi_17 = &std::_Mpunct<uint16_t>::`vftable'{for `std::money_base'}
            esi_17[0xa].b = 0
            std::_Mpunct<uint16_t>::_Init(esi_17, arg1.b)
            *esi_17 = &std::moneypunct<uint16_t, 0>::`vftable'{for `std::_Mpunct<uint16_t>'}
        
        int32_t var_8_3 = 0xffffffff
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_17, sub_62c2f0(0x7fbd58))
        int32_t* esi_18 = sub_6e810c(0x58)
        int32_t* var_1c_9 = esi_18
        int32_t var_8_4 = 0x16
        
        if (esi_18 == 0)
            esi_18 = nullptr
        else
            esi_18[1] = 0
            int32_t var_30_20 = 0
            var_8_4.b = 0x17
            *esi_18 = &std::_Mpunct<uint16_t>::`vftable'{for `std::money_base'}
            esi_18[0xa].b = 1
            std::_Mpunct<uint16_t>::_Init(esi_18, arg1.b)
            *esi_18 = &std::moneypunct<uint16_t, 1>::`vftable'{for `std::_Mpunct<uint16_t>'}
        
        int32_t var_8_5 = 0xffffffff
        result = std::locale::_Locimp::_Locimp_Addfac(arg3, esi_18, sub_62c2f0(0x7fbd5c))

if ((arg2.b & 0x10) != 0)
    if (arg4 != 0)
        int32_t eax_49 = sub_62c2f0(0x7fbd60)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d7516(arg4), eax_49)
        int32_t eax_51 = sub_62c2f0(0x7fbd64)
        result = std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d7650(arg4), eax_51)
    else
        struct std::time_base::std::time_get<uint16_t>::VTable** eax_44 = sub_6e810c(0x44)
        struct std::time_base::std::time_get<uint16_t>::VTable** var_1c_10 = eax_44
        int32_t var_8_6 = 0x1b
        struct std::time_base::std::time_get<uint16_t>::VTable** esi_21
        
        if (eax_44 == 0)
            esi_21 = nullptr
        else
            esi_21 = std::time_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::time_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >(
                eax_44, arg1, 0)
        
        int32_t var_8_7 = 0xffffffff
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_21, sub_62c2f0(0x7fbd60))
        int32_t* esi_22 = sub_6e810c(0xc)
        int32_t* var_1c_11 = esi_22
        
        if (esi_22 == 0)
            esi_22 = nullptr
        else
            esi_22[1] = 0
            *esi_22 = &std::time_put<uint16_t>::`vftable'{for `std::locale::facet'}
            esi_22[2] = 0
            std::time_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Init(
                esi_22, arg1)
        
        result = std::locale::_Locimp::_Locimp_Addfac(arg3, esi_22, sub_62c2f0(0x7fbd64))

if (ecx_1 != 0)
    if (arg4 != 0)
        int32_t eax_56 = sub_62c2f0(0x7fbadc)
        result = std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d696f(arg4), eax_56)
    else
        struct std::codecvt_base::std::codecvt<uint16_t, char, struct _Mbstatet>::VTable** eax_53 =
            sub_6e810c(0x34)
        struct std::codecvt_base::std::codecvt<uint16_t, char, struct _Mbstatet>::VTable** 
            var_1c_12 = eax_53
        
        if (eax_53 != 0)
            int32_t var_30_29 = 0
            ebx = sub_6d7864(eax_53, arg1)
        
        result = std::locale::_Locimp::_Locimp_Addfac(arg3, ebx, sub_62c2f0(0x7fbadc))

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6ddae8
return result
