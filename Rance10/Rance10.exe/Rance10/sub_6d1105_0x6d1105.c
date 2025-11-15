// 函数: sub_6d1105
// 地址: 0x6d1105
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x14
int32_t (* var_c)(void* arg1) = sub_7495d7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_5 = __security_cookie ^ &__saved_ebp
void* const var_38_3 = &data_6d1111
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void var_18
std::_Lockit::_Lockit(&var_18, 0)
int32_t* result_2 = data_7fbabc
int32_t var_8 = 0
int32_t* result_1 = result_2
int32_t* result = sub_62c5f0(arg1, sub_62c2f0(0x7fbaa8))

if (result == 0)
    if (result_2 == 0)
        std::numpunct<uint16_t>::_Getcat(&result_1, arg1)
        result = result_1
        data_7fbabc = result
        int32_t esi = *(*result + 4)
        j_sub_4033e0()
        esi(eax_5)
        std::_Facet_Register(result)
    else
        result = result_2

std::_Lockit::~_Lockit(&var_18)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d11a1
return result
