// 函数: ??$skip_whitespace@Vstring_input_adapter@__crt_stdio_input@@D@__crt_stdio_input@@YAHAAV?$string_input_adapter@D@0@QAU__crt_locale_pointers@@@Z
// 地址: 0x707eee
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result
int32_t i

do
    result = __crt_stdio_input::string_input_adapter<char>::get(arg1)
    
    if (result == 0xffffffff)
        break
    
    i = __ischartype_l(zx.d(result.b), 8, arg2)
while (i != 0)
return result
