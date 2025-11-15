// 函数: ?_New_Locimp@_Locimp@locale@std@@CAPAV123@ABV123@@Z
// 地址: 0x6d46f9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 4
int32_t (* var_c)(void* arg1) = sub_7493ed
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6d4705
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::locale::facet::std::locale::_Locimp::VTable** eax = sub_6e810c(0x20)
struct std::locale::facet::std::locale::_Locimp::VTable** var_14 = eax
struct std::locale::facet::std::locale::_Locimp::VTable** result = nullptr
int32_t var_8 = 0

if (eax != 0)
    result = std::locale::_Locimp::_Locimp(eax, arg1)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d4728
return result
