// 函数: sub_62d3e0
// 地址: 0x62d3e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74509e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_80 = arg1
int32_t var_88 = 0
struct std::locale::facet::std::locale::_Locimp::VTable** eax_3 =
    std::locale::_Locimp::_New_Locimp(0)
struct std::locale::facet::std::locale::_Locimp::VTable** var_80_1 = eax_3
char var_2c
int32_t var_9c = sub_403360(&var_2c, "JPN")
int32_t var_8_1 = 0
void var_84
sub_62c370(&var_84, &var_2c)
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_8_2 = 1
struct std::wstring_convert<class std::codecvt<wchar_t, char, struct _Mbstatet>, wchar_t, class std::allocator<wchar_t>, class std::allocator<char> >::VTable
    * var_7c
sub_630a40(&var_7c, sub_6321c0(&var_84))
var_8_2.b = 2
sub_630900(arg1, arg2)
sub_630970(&var_7c)
int32_t var_8_3 = 3

if (eax_3 != 0)
    int32_t* eax_9 = (*eax_3)->_Decref(eax_2)
    
    if (eax_9 != 0)
        (**eax_9)(1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
