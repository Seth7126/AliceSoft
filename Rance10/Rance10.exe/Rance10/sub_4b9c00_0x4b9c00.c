// 函数: sub_4b9c00
// 地址: 0x4b9c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcbbc
int32_t eax

if (esi != 0)
    if (sub_63c080(esi) != 0)
        eax = (*(**(esi + 0x2c) + 0x48))()
    else
        eax = 0
    
    esi = data_7fcbbc
else
    eax = 0

*arg1 = _mm_cvtepi32_ps(zx.o(eax)) * 0.5f
int32_t eax_3

if (esi != 0)
    if (sub_63c080(esi) != 0)
        eax_3 = (*(**(esi + 0x2c) + 0x4c))()
    else
        eax_3 = 0
else
    eax_3 = 0

arg1[1] = _mm_cvtepi32_ps(zx.o(eax_3)) * 0.5f
sub_6cac10(&arg1[2])
arg1[0x12].w = 0
arg1[0x13] = 0x3f800000
arg1[0x14] = 0x3f800000
arg1[0x15].b = 0
return arg1
