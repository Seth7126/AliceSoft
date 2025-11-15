// 函数: ?_Init@?$numpunct@D@std@@IAEXABV_Locinfo@2@_N@Z
// 地址: 0x6d28d9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x64
int32_t (* var_c)(void* arg1) = sub_7491ff
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_84 = __security_cookie ^ &__saved_ebp
int32_t* var_14 = &var_84
void* const var_88_4 = &data_6d28e5
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_1c = arg1
int32_t* eax = _localeconv(arg1)
void var_48
__Getcvt(&var_48)
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
int32_t var_8 = 0
void* const var_18

if (arg2 == 0)
    var_18 = eax[2]
else
    var_18 = &data_794c78

void var_74
__Getcvt(&var_74)
void* var_8c = &var_48
int32_t var_90 = 0
*(arg1 + 8) = std::_Maklocstr<char>(var_18)
void* var_88_2 = &var_48
int32_t var_8c_1 = 0
*(arg1 + 0x10) = std::_Maklocstr<char>("false")
void* var_88_3 = &var_48
int32_t var_8c_2 = 0
char* result = std::_Maklocstr<char>("true")
*(arg1 + 0x14) = result

if (arg2 == 0)
    char* eax_4
    eax_4.b = **eax
    *(arg1 + 0xc) = eax_4.b
    result.b = *eax[1]
    *(arg1 + 0xd) = result.b
else
    *(arg1 + 0xc) = 0x2c2e

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d2975
return result
