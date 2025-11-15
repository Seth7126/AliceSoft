// 函数: ??0_Locimp@locale@std@@AAE@ABV012@@Z
// 地址: 0x6d43a5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 4
int32_t (* var_c)(void* arg1) = sub_7493a2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_2 = &data_6d43b1
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::locale::facet::std::locale::_Locimp::VTable** var_14 = arg1
arg1[1] = 1
*arg1 = &std::locale::_Locimp::`vftable'{for `std::locale::facet'}
arg1[2] = 0
int32_t var_8 = 0
arg1[3] = *(arg2 + 0xc)
arg1[4] = *(arg2 + 0x10)
int32_t eax_1
eax_1.b = *(arg2 + 0x14)
arg1[5].b = eax_1.b
void* eax_2 = *(arg2 + 0x18)

if (eax_2 == 0)
    eax_2 = arg2 + 0x1c

arg1[6] = 0
arg1[7].b = 0
sub_630d40(&arg1[6], eax_2)
var_8.b = 1
std::locale::_Locimp::_Locimp_ctor(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d440c
return arg1
