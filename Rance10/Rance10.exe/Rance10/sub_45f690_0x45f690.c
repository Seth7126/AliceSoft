// 函数: sub_45f690
// 地址: 0x45f690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bf1b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
struct exfile::CDefineData::VTable** eax_3 = sub_6e810c(0xa4)
struct exfile::CDefineData::VTable** var_34 = eax_3
int32_t var_8_1 = 0
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, 0x75cd8a, nullptr)
var_8_1.b = 1
int32_t var_38_1 = 1
int32_t var_8_2 = 2
var_34 = sub_46da00(eax_3, &var_30, arg2)
sub_42ccf0(arg1 + 4, &var_34)

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

int32_t result = *(*(arg1 + 4) + ((*(arg1 + 8) - *(arg1 + 4)) s>> 2 << 2) - 4)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
