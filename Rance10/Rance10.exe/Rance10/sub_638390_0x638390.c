// 函数: sub_638390
// 地址: 0x638390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0x7fffffff
arg1[0x11] = 0

do
    uint32_t ecx = zx.d(arg1[0x12].w)
    
    if (ecx.w - 0x30 u> 9)
        break
    
    if (ecx == 0x2f)
        break
    
    i -= 1
    int16_t* edi_1 = *arg1
    arg1[0x11] = ecx - 0x30 + arg1[0x11] * 0xa
    
    if (edi_1 != arg1[2])
        if (*edi_1 == 0x5c && sub_636a80(arg1) != 0)
            *arg1 = &edi_1[1]
        
        *arg1 += 2
    
    sub_635790(arg1)
while (i != 0)

int16_t result
result.b = i != 0x7fffffff
return result
