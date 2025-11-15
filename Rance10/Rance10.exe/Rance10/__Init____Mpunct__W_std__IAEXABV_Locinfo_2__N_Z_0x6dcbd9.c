// 函数: ?_Init@?$_Mpunct@_W@std@@IAEXABV_Locinfo@2@_N@Z
// 地址: 0x6dcbd9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x34
int32_t (* var_c)(void* arg1) = sub_749aa5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
int32_t* var_14 = &var_54
void* const var_58_4 = &data_6dcbe5
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_18 = arg1
int32_t var_5c = 0xb
void var_44
void* eax_1 = _localeconv(__builtin_memcpy(arg1 + 0x2c, __Getcvt(&var_44), 0x2c))
*(arg1 + 8) = 0
void* var_5c_1 = arg1 + 0x2c
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
int32_t var_60 = 0
int32_t var_8 = 0
*(arg1 + 8) = std::_Maklocstr<char>(*(eax_1 + 0x1c))
void* var_58_1 = eax_1
sub_6d672c(arg1, nullptr)
char eax_4

if (*(arg1 + 0x28) == 0)
    eax_4 = *(eax_1 + 0x29)
else
    eax_4 = *(eax_1 + 0x28)

int32_t eax_5 = sx.d(eax_4)
*(arg1 + 0x1c) = eax_5

if (eax_5 s< 0 || eax_5 s>= 0x7f)
    *(arg1 + 0x1c) = 0

std::_Mpunct<uint16_t>::_Makpat(arg1, arg1 + 0x20, sx.d(*(eax_1 + 0x2b)), sx.d(*(eax_1 + 0x2a)), 
    sx.d(*(eax_1 + 0x2e)))
int32_t result = std::_Mpunct<uint16_t>::_Makpat(arg1, arg1 + 0x24, sx.d(*(eax_1 + 0x2d)), 
    sx.d(*(eax_1 + 0x2c)), sx.d(*(eax_1 + 0x2f)))

if (arg2 != 0)
    result = 0x76782b24
    __builtin_strncpy(arg1 + 0x20, "$+xv", 4)
    __builtin_strncpy(arg1 + 0x24, "$+xv", 4)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6dcc9a
return result
