// 函数: ?scan_optional_wide_modifier@?$format_string_parser@D@__crt_stdio_input@@AAEXXZ
// 地址: 0x70b1ee
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = *(arg1 + 8)
void* result
result.b = *edx

if (result.b == 0x77)
    result = &edx[1]
    *(arg1 + 8) = result
    *(arg1 + 0x24) = 1
else if (result.b == 0x43 || result.b == 0x53)
    *(arg1 + 0x24) = 1

return result
