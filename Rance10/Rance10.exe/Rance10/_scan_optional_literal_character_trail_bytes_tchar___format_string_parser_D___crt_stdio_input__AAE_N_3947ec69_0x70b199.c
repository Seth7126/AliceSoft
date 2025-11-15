// 函数: ?scan_optional_literal_character_trail_bytes_tchar@?$format_string_parser@D@__crt_stdio_input@@AAE_ND@Z
// 地址: 0x70b199
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result

if ((*(___pctype_func(arg1) + (zx.d(arg1[5].b) << 1)) & 0x8000) == 0)
    result.b = 1
else
    char* eax = arg1[2]
    char ecx = *eax
    
    if (ecx != 0)
        *(arg1 + 0x15) = ecx
        arg1[2] = &eax[1]
        result.b = 1
    else
        arg1[3] = 0x2a
        arg1[4] = 0
        arg1[5].w = 0
        *(arg1 + 0x16) = 0
        arg1[6] = 0
        arg1[7] = 0
        arg1[8] = 0
        arg1[9].b = 0
        arg1[0xa] = 0
        result.b = 0

return result
