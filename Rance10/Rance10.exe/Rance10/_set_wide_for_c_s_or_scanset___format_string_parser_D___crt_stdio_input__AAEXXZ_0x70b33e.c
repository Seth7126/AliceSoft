// 函数: ?set_wide_for_c_s_or_scanset@?$format_string_parser@D@__crt_stdio_input@@AAEXXZ
// 地址: 0x70b33e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 0x20)

if (result == 2)
    *(arg1 + 0x24) = 0

if (result == 3 || result == 4 || result == 8)
    *(arg1 + 0x24) = 1

return result
