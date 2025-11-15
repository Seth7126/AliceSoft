// 函数: sub_636a80
// 地址: 0x636a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* result = *arg1 + 2

if (result != arg1[2])
    char ecx = (arg1[0x14]).b
    uint32_t edx_1
    
    if ((ecx & 8) == 0)
        edx_1 = zx.d(*result)
    
    if ((ecx & 8) == 0 && (edx_1 == 0x28 || edx_1 == 0x29))
        result.b = 1
        return result
    
    if ((ecx & 0x10) == 0)
        result = zx.d(*result)
        
        if (result == 0x7b || result == 0x7d)
            result.b = 1
            return result

result.b = 0
return result
