// 函数: ?_Getcat@?$time_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@SAIPAPBVfacet@locale@2@PBV42@@Z
// 地址: 0x6d8e8a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x38
int32_t (* var_c)(void* arg1) = sub_74a0c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_58 = __security_cookie ^ &__saved_ebp
void* const var_5c_3 = &data_6d8e96
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
char ebx = 0
int32_t var_14 = 0

if (arg1 != 0 && *arg1 == 0)
    uint32_t (* esi_1)[0x4] = sub_6e810c(0xc)
    uint32_t (* var_14_1)[0x4] = esi_1
    int32_t var_8 = 0
    void var_48
    
    if (esi_1 == 0)
        esi_1 = nullptr
    else
        int32_t* eax_2 = sub_62c000(&var_48, sub_62c5d0(arg2))
        (*esi_1)[1] = 0
        *esi_1 = &std::time_put<uint16_t>::`vftable'{for `std::locale::facet'}
        ebx = 1
        (*esi_1)[2] = 0
        std::time_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Init(
            esi_1, eax_2)
    
    *arg1 = esi_1
    
    if ((ebx & 1) != 0)
        sub_62c1c0(&var_48)

int32_t var_5c_2 = 5
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d8efd
return 5
