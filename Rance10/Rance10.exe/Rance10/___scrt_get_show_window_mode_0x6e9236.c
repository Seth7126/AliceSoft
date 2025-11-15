// 函数: ___scrt_get_show_window_mode
// 地址: 0x6e9236
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void startupInfo
_memset(&startupInfo, 0, 0x44)
GetStartupInfoW(&startupInfo)
char var_1c

if ((var_1c & 1) == 0)
    return 0xa

int16_t var_18
return zx.d(var_18)
