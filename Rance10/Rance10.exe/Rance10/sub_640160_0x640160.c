// 函数: sub_640160
// 地址: 0x640160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &textsurface::CTextSurfaceCacheProperty::`vftable'
int32_t eax = arg1[0x13]

if (eax u>= 0x10)
    eax = sub_403160(arg1[0xe], eax + 1, 1)

arg1[0x13] = 0xf
bool cond:0 = arg1[0x13] u< 0x10
arg1[0x12] = 0

if (cond:0)
    arg1[0xe].b = 0
    arg1[1] = &textsurface::CTextSurfaceProperty::`vftable'
    return eax

char* eax_2 = arg1[0xe]
*eax_2 = 0
arg1[1] = &textsurface::CTextSurfaceProperty::`vftable'
return eax_2
