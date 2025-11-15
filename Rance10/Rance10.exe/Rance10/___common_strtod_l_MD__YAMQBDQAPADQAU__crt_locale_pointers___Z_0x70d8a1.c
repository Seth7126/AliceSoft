// 函数: ??$common_strtod_l@MD@@YAMQBDQAPADQAU__crt_locale_pointers@@@Z
// 地址: 0x70d8a1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_24 = edi

if (arg2 != 0)
    *arg2 = arg1

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return float.t(0)

void* var_1c
int32_t* ecx_2 = _LocaleUpdate::_LocaleUpdate(&var_1c, arg3)
float var_8
float* var_28_2 = &var_8
int32_t* var_30 = ecx_2
var_8 = fconvert.s(float.t(0))
__crt_strtox::make_c_string_character_source<char,std::nullptr>(&var_30, arg1, arg2)
void var_18
int32_t eax_1 =
    __crt_strtox::parse_floating_point<class __crt_strtox::c_string_character_source<char>,float>(
    &var_18, var_30, ecx_2)

if (eax_1 == 3 || eax_1 == 2)
    *__errno() = 0x22

float var_c_1 = fconvert.s(fconvert.t(var_8))
char var_10

if (var_10 != 0)
    void* eax_3 = var_1c
    *(eax_3 + 0x350) &= 0xfffffffd

return fconvert.t(var_c_1)
