// 函数: ?scan_optional_length_modifier@?$format_string_parser@D@__crt_stdio_input@@AAEXXZ
// 地址: 0x70b079
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result = *(arg1 + 8)
uint32_t edx = zx.d(*result)
void* edx_1

if (edx s<= 0x6a)
    if (edx == 0x6a)
        *(arg1 + 0x20) = 5
        *(arg1 + 8) = &result[1]
        return &result[1]
    
    if (edx == 0x49)
        edx.b = result[1]
        
        if (edx.b == 0x33 && result[2] == 0x32)
            result = &result[3]
            *(arg1 + 8) = result
            *(arg1 + 0x20) = 9
            return result
        
        if (edx.b == 0x36 && result[2] == 0x34)
            *(arg1 + 0x20) = 0xa
            *(arg1 + 8) = &result[3]
            return &result[3]
        
        if (edx.b == 0x64 || edx.b == 0x69 || edx.b == 0x6f || edx.b == 0x75 || edx.b == 0x78
                || edx.b == 0x58)
            *(arg1 + 8) = &result[1]
            *(arg1 + 0x20) = 9
    else
        if (edx == 0x4c)
            *(arg1 + 0x20) = 8
            *(arg1 + 8) = &result[1]
            return &result[1]
        
        if (edx == 0x54)
            *(arg1 + 0x20) = 0xb
            *(arg1 + 8) = &result[1]
            return &result[1]
        
        if (edx == 0x68)
            edx_1 = &result[1]
            
            if (*edx_1 == 0x68)
                *(arg1 + 0x20) = 1
                *(arg1 + 8) = &result[2]
                return &result[2]
            
            *(arg1 + 0x20) = 2
            *(arg1 + 8) = edx_1
else if (edx == 0x6c)
    edx_1 = &result[1]
    
    if (*edx_1 == 0x6c)
        *(arg1 + 0x20) = 4
        *(arg1 + 8) = &result[2]
        return &result[2]
    
    *(arg1 + 0x20) = 3
    *(arg1 + 8) = edx_1
else
    if (edx == 0x74)
        *(arg1 + 0x20) = 7
        *(arg1 + 8) = &result[1]
        return &result[1]
    
    if (edx == 0x7a)
        *(arg1 + 0x20) = 6
        *(arg1 + 8) = &result[1]
        return &result[1]
return result
