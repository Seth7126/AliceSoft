// 函数: sub_4be8c0
// 地址: 0x4be8c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = &arg1[0x25]
*arg1 = &partsengine::CGUIMessageWindowModel::`vftable'
arg1[0x33] = &textsurface::CTextSurfaceProperty::`vftable'
arg1[0x2b] = &common::CRect::`vftable'
arg1[0x2f] = &common::CSize::`vftable'
arg1[0x2c] = &common::CPoint::`vftable'
int32_t eax = edi[5]

if (eax u>= 0x10)
    sub_403160(*edi, eax + 1, 1)

edi[5] = 0xf
bool cond:0 = edi[5] u< 0x10
edi[4] = 0

if (not(cond:0))
    edi = *edi

*edi = nullptr
sub_408940(&arg1[0x12])
int32_t eax_2 = arg1[0x10]
void* edi_1 = &arg1[0xb]

if (eax_2 u>= 0x10)
    sub_403160(*edi_1, eax_2 + 1, 1)

*(edi_1 + 0x14) = 0xf
bool cond:1 = *(edi_1 + 0x14) u< 0x10
*(edi_1 + 0x10) = 0

if (not(cond:1))
    edi_1 = *edi_1

*edi_1 = 0
int32_t eax_4 = arg1[0xa]

if (eax_4 u>= 0x10)
    eax_4 = sub_403160(arg1[5], eax_4 + 1, 1)

arg1[0xa] = 0xf
bool cond:2 = arg1[0xa] u< 0x10
arg1[9] = 0

if (cond:2)
    arg1[5].b = 0
    return eax_4

char* eax_6 = arg1[5]
*eax_6 = 0
return eax_6
