// 函数: __Getdateorder
// 地址: 0x6e8005
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg1
var_8 = 0
___crtGetLocaleInfoEx(*(____lc_locale_name_func(arg1) + 0x14), 0x22, &var_8, 2)

if (var_8.w == 0x30)
    return 2

if (var_8.w == 0x31)
    return 1

int32_t ebx_1
ebx_1.b = var_8.w != 0x32
return (ebx_1 - 1) & 3
