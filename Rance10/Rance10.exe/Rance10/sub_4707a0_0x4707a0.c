// 函数: sub_4707a0
// 地址: 0x4707a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d84e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct exfile::CFormatData::VTable** var_34 = arg1
struct exfile::CFormatData::VTable** var_38 = arg1
*arg1 = &exfile::CFormatData::`vftable'
arg1[1].w = 0
arg1[2] = 0
sub_462db0(&arg1[3], arg2)
int32_t var_8_1 = 0
void* eax_3 = &arg1[0xb]
arg1[9] = 0
arg1[0xa] = 0
*(eax_3 + 0x14) = 0xf
*(eax_3 + 0x10) = 0

if (*(eax_3 + 0x14) u>= 0x10)
    eax_3 = *eax_3

*eax_3 = 0
var_8_1.b = 1
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, 0x75ce76, nullptr)
var_8_1.b = 2
sub_462db0(&arg1[0x11], &var_30)

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
