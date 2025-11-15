// 函数: sub_4e2c00
// 地址: 0x4e2c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = &arg1[0x38]
*arg1 = &partsengine::CGUICheckBoxModel::`vftable'
int32_t eax = edi[5]

if (eax u>= 0x10)
    sub_403160(*edi, eax + 1, 1)

edi[5] = 0xf
bool cond:0 = edi[5] u< 0x10
edi[4] = 0

if (not(cond:0))
    edi = *edi

*edi = nullptr
void* edi_1 = &arg1[0x32]
int32_t eax_2 = *(edi_1 + 0x14)

if (eax_2 u>= 0x10)
    sub_403160(*edi_1, eax_2 + 1, 1)

*(edi_1 + 0x14) = 0xf
bool cond:1 = *(edi_1 + 0x14) u< 0x10
*(edi_1 + 0x10) = 0

if (not(cond:1))
    edi_1 = *edi_1

*edi_1 = 0
void* edi_2 = &arg1[0x2c]
int32_t eax_4 = *(edi_2 + 0x14)

if (eax_4 u>= 0x10)
    sub_403160(*edi_2, eax_4 + 1, 1)

*(edi_2 + 0x14) = 0xf
bool cond:2 = *(edi_2 + 0x14) u< 0x10
*(edi_2 + 0x10) = 0

if (not(cond:2))
    edi_2 = *edi_2

*edi_2 = 0
void* edi_3 = &arg1[0x26]
int32_t eax_6 = *(edi_3 + 0x14)

if (eax_6 u>= 0x10)
    sub_403160(*edi_3, eax_6 + 1, 1)

*(edi_3 + 0x14) = 0xf
bool cond:3 = *(edi_3 + 0x14) u< 0x10
*(edi_3 + 0x10) = 0

if (not(cond:3))
    edi_3 = *edi_3

*edi_3 = 0
void* edi_4 = &arg1[0x20]
int32_t eax_8 = *(edi_4 + 0x14)

if (eax_8 u>= 0x10)
    sub_403160(*edi_4, eax_8 + 1, 1)

*(edi_4 + 0x14) = 0xf
bool cond:4 = *(edi_4 + 0x14) u< 0x10
*(edi_4 + 0x10) = 0

if (not(cond:4))
    edi_4 = *edi_4

*edi_4 = 0
void* edi_5 = &arg1[0x1a]
int32_t eax_10 = *(edi_5 + 0x14)

if (eax_10 u>= 0x10)
    sub_403160(*edi_5, eax_10 + 1, 1)

*(edi_5 + 0x14) = 0xf
bool cond:5 = *(edi_5 + 0x14) u< 0x10
*(edi_5 + 0x10) = 0

if (not(cond:5))
    edi_5 = *edi_5

*edi_5 = 0
int32_t eax_12 = arg1[0x19]

if (eax_12 u>= 0x10)
    eax_12 = sub_403160(arg1[0x14], eax_12 + 1, 1)

arg1[0x19] = 0xf
bool cond:6 = arg1[0x19] u< 0x10
arg1[0x18] = 0

if (cond:6)
    arg1[0x14].b = 0
    arg1[7] = &textsurface::CTextSurfaceProperty::`vftable'
    return eax_12

char* eax_14 = arg1[0x14]
*eax_14 = 0
arg1[7] = &textsurface::CTextSurfaceProperty::`vftable'
return eax_14
