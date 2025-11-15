// 函数: sub_58edd0
// 地址: 0x58edd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *arg1
int32_t ecx = arg1[1]

if (esi == ecx)
    *arg3 = 0
    return arg3

int32_t* eax_1 = esi
int32_t* edx_1

while (true)
    if (eax_1 == ecx)
        *arg3 = esi[2]
        return arg3
    
    if (_mm_cvtepi32_ps(zx.o(*eax_1)) f<= arg2)
        edx_1 = eax_1
        eax_1 = &eax_1[3]
        
        if (eax_1 == ecx)
            break
        
        if (not(arg2 f>= _mm_cvtepi32_ps(zx.o(*eax_1))))
            break
    else
        eax_1 = &eax_1[3]

*arg3 = edx_1[2]
return arg3
