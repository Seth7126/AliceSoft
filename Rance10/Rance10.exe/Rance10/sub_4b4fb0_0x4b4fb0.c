// 函数: sub_4b4fb0
// 地址: 0x4b4fb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &partsengine::CGUISpinBoxModel::`vftable'
int32_t eax = arg1[0x28]

if (eax u>= 0x10)
    eax = sub_403160(arg1[0x23], eax + 1, 1)

arg1[0x28] = 0xf
bool cond:0 = arg1[0x28] u< 0x10
arg1[0x27] = 0

if (cond:0)
    arg1[0x23].b = 0
    arg1[3] = &textsurface::CTextSurfaceProperty::`vftable'
    return eax

char* eax_2 = arg1[0x23]
*eax_2 = 0
arg1[3] = &textsurface::CTextSurfaceProperty::`vftable'
return eax_2
