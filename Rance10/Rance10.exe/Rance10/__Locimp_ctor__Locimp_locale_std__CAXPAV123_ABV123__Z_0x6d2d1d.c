// 函数: ?_Locimp_ctor@_Locimp@locale@std@@CAXPAV123@ABV123@@Z
// 地址: 0x6d2d1d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x3c
int32_t (* var_c)(void* arg1) = sub_749292
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_7 = __security_cookie ^ &__saved_ebp
void* const var_60_1 = &data_6d2d29
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2
int32_t result

if (esi != data_7fbac8)
    void var_18
    std::_Lockit::_Lockit(&var_18, 0)
    int32_t var_8_1 = 1
    int32_t eax = *(arg1 + 0xc)
    
    if (eax != 0)
        int32_t eax_2 = __malloc_base(eax << 2)
        *(arg1 + 8) = eax_2
        
        if (eax_2 == 0)
            sub_6d08ed()
            noreturn
        
        int32_t i = *(arg1 + 0xc)
        
        while (i != 0)
            i -= 1
            int32_t* ecx_4 = *(*(esi + 8) + (i << 2))
            int32_t* var_14_1 = ecx_4
            *(*(arg1 + 8) + (i << 2)) = ecx_4
            
            if (ecx_4 != 0)
                int32_t esi_1 = *(*ecx_4 + 4)
                j_sub_4033e0()
                esi_1(eax_7)
                esi = arg2
    
    result = std::_Lockit::~_Lockit(&var_18)
else
    void var_4c
    sub_62c000(&var_4c, U"C")
    int32_t var_8 = 0
    std::locale::_Locimp::_Makeloc(&var_4c, 0x3f, arg1, nullptr)
    result = sub_62c1c0(&var_4c)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d2dd1
return result
