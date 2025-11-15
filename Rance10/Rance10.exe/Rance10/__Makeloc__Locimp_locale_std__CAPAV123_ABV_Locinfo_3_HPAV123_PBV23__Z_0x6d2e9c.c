// 函数: ?_Makeloc@_Locimp@locale@std@@CAPAV123@ABV_Locinfo@3@HPAV123@PBV23@@Z
// 地址: 0x6d2e9c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0xc
int32_t (* var_c)(void* arg1) = sub_7492c2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
void* const var_30_14 = &data_6d2ea8
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
int32_t eax_1 = arg2 & 2

if (eax_1 != 0)
    if (arg4 != 0)
        int32_t eax_5 = sub_62c2f0(0x7fbae4)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d0f2e(arg4), eax_5)
    else
        struct std::ctype_base::std::ctype<char>::VTable** eax_2 = sub_6e810c(0x18)
        struct std::ctype_base::std::ctype<char>::VTable** var_14_1 = eax_2
        struct std::ctype_base::std::ctype<char>::VTable** esi_1
        
        if (eax_2 == 0)
            esi_1 = nullptr
        else
            void* var_30 = arg4
            esi_1 = std::ctype<char>::ctype<char>(eax_2, arg1)
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_1, sub_62c2f0(0x7fbae4))

int32_t eax_8 = arg2 & 8

if (eax_8 != 0)
    if (arg4 != 0)
        int32_t eax_13 = sub_62c2f0(0x7fbaa0)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d0fcb(arg4), eax_13)
        int32_t eax_15 = sub_62c2f0(0x7fbaa4)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d1068(arg4), eax_15)
    else
        struct std::locale::facet::std::num_get<char>::VTable** esi_3 = sub_6e810c(8)
        struct std::locale::facet::std::num_get<char>::VTable** var_1c_1 = esi_3
        
        if (esi_3 == 0)
            esi_3 = nullptr
        else
            esi_3[1] &= arg4
            *esi_3 = &std::num_get<char>::`vftable'{for `std::locale::facet'}
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_3, sub_62c2f0(0x7fbaa0))
        int32_t* esi_4 = sub_6e810c(8)
        int32_t* var_1c_2 = esi_4
        
        if (esi_4 == 0)
            esi_4 = nullptr
        else
            esi_4[1] = 0
            *esi_4 = &std::num_put<char>::`vftable'{for `std::locale::facet'}
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_4, sub_62c2f0(0x7fbaa4))

if (eax_8 != 0)
    if (arg4 != 0)
        int32_t eax_19 = sub_62c2f0(0x7fbaa8)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d1105(arg4), eax_19)
    else
        int32_t* esi_7 = sub_6e810c(0x18)
        int32_t* var_1c_3 = esi_7
        int32_t var_8 = 7
        
        if (esi_7 == 0)
            esi_7 = nullptr
        else
            esi_7[1] &= arg4
            void* var_30_7 = arg4
            var_8.b = 8
            *esi_7 = &std::numpunct<char>::`vftable'{for `std::locale::facet'}
            std::numpunct<char>::_Init(esi_7, arg1.b)
        
        int32_t var_8_1 = 0xffffffff
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_7, sub_62c2f0(0x7fbaa8))

if (eax_1 != 0)
    if (arg4 != 0)
        int32_t eax_23 = sub_62c2f0(0x7fbaac)
        std::locale::_Locimp::_Locimp_Addfac(arg3, sub_6d0e91(arg4), eax_23)
    else
        int32_t* esi_9 = sub_6e810c(8)
        int32_t* var_1c_4 = esi_9
        
        if (esi_9 == 0)
            esi_9 = nullptr
        else
            esi_9[1] &= arg4
            *esi_9 = &std::codecvt<char, char, struct _Mbstatet>::`vftable'{for `std::codecvt_base'}
        
        std::locale::_Locimp::_Locimp_Addfac(arg3, esi_9, sub_62c2f0(0x7fbaac))

std::locale::_Locimp::_Makexloc(arg1, arg2, arg3, arg4)
std::locale::_Locimp::_Makewloc(arg1, arg2, arg3, arg4)
std::locale::_Locimp::_Makeushloc(arg1, arg2, arg3, arg4)
*(arg3 + 0x10) |= arg2
void* eax_25 = *(arg1 + 0x2c)

if (eax_25 == 0)
    eax_25 = arg1 + 0x30

sub_630d40(arg3 + 0x18, eax_25)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d30e2
return arg3
