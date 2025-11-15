// 函数: ??$common_strtod_l@N_W@@YANQB_WQAPA_WQAU__crt_locale_pointers@@@Z
// 地址: 0x70d932
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_28 = edi

if (arg2 != 0)
    *arg2 = arg1

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return float.t(0)

void* var_20
int32_t* ecx_2 = _LocaleUpdate::_LocaleUpdate(&var_20, arg3)
double var_10
double* var_2c_2 = &var_10
int32_t* var_34 = ecx_2
var_10 = fconvert.d(float.t(0))
__crt_strtox::make_c_string_character_source<char,std::nullptr>(&var_34, arg1, arg2)
void var_1c
int32_t eax_1 = __crt_strtox::parse_floating_point<class __crt_strtox::c_string_character_source<char>,struct _LDBL12>(
    &var_1c, var_34, ecx_2)

if (eax_1 == 3 || eax_1 == 2)
    *__errno() = 0x22

long double result = fconvert.t(var_10)
char var_14

if (var_14 != 0)
    void* eax_3 = var_20
    *(eax_3 + 0x350) &= 0xfffffffd

return result
