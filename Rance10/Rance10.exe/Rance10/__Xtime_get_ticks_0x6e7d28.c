// 函数: __Xtime_get_ticks
// 地址: 0x6e7d28
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

FILETIME var_c
var_c.dwHighDateTime = arg1
var_c.dwLowDateTime = arg1
___crtGetSystemTimePreciseAsFileTime(&var_c)
return var_c.dwLowDateTime + 0x2ac18000
