// 函数: sub_638e20
// 地址: 0x638e20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = arg3
arg1[0x11] = 0

if (i == 0)
    return i

do
    uint32_t ecx = zx.d(arg1[0x12].w)
    int32_t ecx_1
    
    if (arg2 == 8)
        if (ecx.w - 0x30 u> 7)
            break
        
        ecx_1 = ecx - 0x30
    else if (0x30 u> ecx.w || ecx u> 0x39)
        if (arg2 != 0x10)
            break
        
        if (ecx.w - 0x61 u> 5)
            if (ecx.w - 0x41 u> 5)
                break
            
            ecx_1 = ecx - 0x37
        else
            ecx_1 = ecx - 0x57
    else
        ecx_1 = ecx - 0x30
    
    if (ecx_1 == 0xffffffff)
        break
    
    i -= 1
    int16_t* ebx_1 = *arg1
    arg1[0x11] = arg1[0x11] * arg2 + ecx_1
    
    if (ebx_1 != arg1[2])
        if (*ebx_1 == 0x5c && sub_636a80(arg1) != 0)
            *arg1 = &ebx_1[1]
        
        *arg1 += 2
    
    sub_635790(arg1)
while (i != 0)

return i
