// 函数: ?_Init@?$numpunct@G@std@@IAEXABV_Locinfo@2@_N@Z
// 地址: 0x6dccea
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x98
int32_t (* var_c)(void* arg1) = sub_749ac0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_7 = __security_cookie ^ &__saved_ebp
int32_t var_b8 = eax_7
int32_t* var_14 = &var_b8
void* const var_bc_6 = &data_6dccf9
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_50 = arg1
void* eax = _localeconv(arg1)
int32_t var_bc_1 = 0xb
void var_7c
void var_44
__builtin_memcpy(&var_44, __Getcvt(&var_7c), 0x2c)
int32_t var_8 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
void* const edi

if (arg2 == 0)
    edi = *(eax + 8)
else
    edi = &data_794c78

__Getcvt(&var_7c)
void var_a8
void* var_c0 = &var_a8
int32_t var_c4 = 0
*(arg1 + 8) = std::_Maklocstr<char>(edi)
void* var_bc_3 = &var_44
*(arg1 + 0x10) = sub_6d68a6("false", nullptr)
void* var_bc_4 = &var_44
*(arg1 + 0x14) = sub_6d68a6("true", nullptr)
int16_t result

if (arg2 == 0)
    int32_t var_e8_1 = 0xb
    void* var_e8_2 = eax
    void var_e4
    __builtin_memcpy(&var_e4, &var_44, 0x2c)
    result = std::numpunct<uint16_t,uint16_t>::_Getvals<uint16_t>(arg1, nullptr)
else
    void* var_bc_5 = &var_44
    int32_t var_c0_3 = 0
    *(arg1 + 0xc) = sub_6d6873(0x2e)
    void* var_c8_1 = &var_44
    int32_t var_cc_1 = 0
    result = sub_6d6873(0x2c)
    *(arg1 + 0xe) = result

void* const __saved_ebp_3 = &data_6dcdb3
@__security_check_cookie@4(eax_7 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = __saved_ebp_3
return result
