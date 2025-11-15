// 函数: ??$process_floating_point_specifier_t@M@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ
// 地址: 0x707b50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_c
float* var_18 = &var_c
char var_5 = 0
var_c = fconvert.s(float.t(0))
void var_38
__crt_strtox::make_input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char> >(
    &var_38, arg1 + 8, *(arg1 + 0x30), *(arg1 + 0x34), &var_5)
int32_t result = __crt_strtox::parse_floating_point<class __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<wchar_t> >,float>(
    *(arg1 + 0x68))

if (var_5 == 0 || result == 1)
    result.b = 0
else
    if (*(arg1 + 0x2e) == 0)
        return __crt_stdio_input::input_processor<float,char,class __crt_stdio_input::string_input_adapter<char> >::write_floating_point<float>(
            arg1, &var_c)
    
    result.b = 1

return result
