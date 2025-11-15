// 函数: sub_508b20
// 地址: 0x508b20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = &arg1[0x39]
*arg1 = &partsengine::CGUIMultiTextBoxModel::`vftable'
int32_t eax = edi[5]

if (eax u>= 0x10)
    sub_403160(*edi, eax + 1, 1)

edi[5] = 0xf
bool cond:0 = edi[5] u< 0x10
edi[4] = 0

if (not(cond:0))
    edi = *edi

*edi = nullptr
void* edi_1 = &arg1[0x33]
int32_t eax_2 = *(edi_1 + 0x14)

if (eax_2 u>= 0x10)
    sub_403160(*edi_1, eax_2 + 1, 1)

*(edi_1 + 0x14) = 0xf
bool cond:1 = *(edi_1 + 0x14) u< 0x10
*(edi_1 + 0x10) = 0

if (not(cond:1))
    edi_1 = *edi_1

*edi_1 = 0
void* edi_2 = &arg1[0x2d]
int32_t eax_4 = *(edi_2 + 0x14)

if (eax_4 u>= 0x10)
    sub_403160(*edi_2, eax_4 + 1, 1)

*(edi_2 + 0x14) = 0xf
bool cond:2 = *(edi_2 + 0x14) u< 0x10
*(edi_2 + 0x10) = 0

if (not(cond:2))
    edi_2 = *edi_2

*edi_2 = 0
void* edi_3 = &arg1[0x27]
int32_t eax_6 = *(edi_3 + 0x14)

if (eax_6 u>= 0x10)
    sub_403160(*edi_3, eax_6 + 1, 1)

*(edi_3 + 0x14) = 0xf
bool cond:3 = *(edi_3 + 0x14) u< 0x10
*(edi_3 + 0x10) = 0

if (not(cond:3))
    edi_3 = *edi_3

*edi_3 = 0
int32_t eax_8 = arg1[0x16]

if (eax_8 u>= 0x10)
    eax_8 = sub_403160(arg1[0x11], eax_8 + 1, 1)

arg1[0x16] = 0xf
bool cond:4 = arg1[0x16] u< 0x10
arg1[0x15] = 0

if (cond:4)
    arg1[0x11].b = 0
    arg1[3] = &textsurface::CTextSurfaceProperty::`vftable'
    return eax_8

char* eax_10 = arg1[0x11]
*eax_10 = 0
arg1[3] = &textsurface::CTextSurfaceProperty::`vftable'
return eax_10
