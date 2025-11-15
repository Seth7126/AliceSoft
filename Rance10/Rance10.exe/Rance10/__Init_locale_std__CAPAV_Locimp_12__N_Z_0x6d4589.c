// 函数: ?_Init@locale@std@@CAPAV_Locimp@12@_N@Z
// 地址: 0x6d4589
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 8
int32_t (* var_c)(void* arg1) = sub_7493c5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_6 = __security_cookie ^ &__saved_ebp
void* const var_2c = &data_6d4595
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void var_14
std::_Lockit::_Lockit(&var_14, 0)
struct std::locale::facet::std::locale::_Locimp::VTable** result = data_7fbacc
int32_t var_8 = 0

if (result == 0)
    result = std::locale::_Locimp::_New_Locimp(0)
    std::locale::_Setgloballocale(result)
    result[4] = 0x3f
    sub_630d40(&result[6], U"C")
    data_7fbac8 = result
    int32_t (__fastcall* const vFunc_1)(void* arg1) = (*result)->vFunc_1
    j_sub_4033e0()
    vFunc_1(eax_6)
    data_7fbaec = data_7fbac8

if (arg1 != 0)
    int32_t (__fastcall* const vFunc_1_1)(void* arg1) = (*result)->vFunc_1
    j_sub_4033e0()
    vFunc_1_1(eax_6)

std::_Lockit::~_Lockit(&var_14)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d4616
return result
