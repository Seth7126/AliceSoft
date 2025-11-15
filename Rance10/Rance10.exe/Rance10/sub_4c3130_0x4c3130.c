// 函数: sub_4c3130
// 地址: 0x4c3130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = &arg1[0x2b]
*arg1 = &partsengine::CConstructionProcess::`vftable'
int32_t eax = edi[5]

if (eax u>= 0x10)
    sub_403160(*edi, eax + 1, 1)

edi[5] = 0xf
bool cond:0 = edi[5] u< 0x10
edi[4] = 0

if (not(cond:0))
    edi = *edi

*edi = nullptr
int32_t eax_2 = arg1[0x2a]

if (eax_2 u>= 0x10)
    eax_2 = sub_403160(arg1[0x25], eax_2 + 1, 1)

arg1[0x2a] = 0xf
bool cond:1 = arg1[0x2a] u< 0x10
arg1[0x29] = 0

if (cond:1)
    arg1[0x25].b = 0
    arg1[0x18] = &textsurface::CTextSurfaceProperty::`vftable'
    return eax_2

char* eax_4 = arg1[0x25]
*eax_4 = 0
arg1[0x18] = &textsurface::CTextSurfaceProperty::`vftable'
return eax_4
