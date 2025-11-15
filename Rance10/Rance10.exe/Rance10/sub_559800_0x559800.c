// 函数: sub_559800
// 地址: 0x559800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &partsengine::CTextLineSprite::`vftable'
sub_559960(&arg1[0x2d])
sub_559960(&arg1[0x30])
sub_55ac20(arg1)
sub_55c120(&arg1[0x36])
void* ecx_2 = arg1[0x33]

if (ecx_2 != 0)
    sub_403160(ecx_2, (arg1[0x35] - ecx_2) s>> 2, 4)
    arg1[0x33] = 0
    arg1[0x34] = 0
    arg1[0x35] = 0

void* ecx_3 = arg1[0x30]

if (ecx_3 != 0)
    sub_403160(ecx_3, (arg1[0x32] - ecx_3) s>> 2, 4)
    arg1[0x30] = 0
    arg1[0x31] = 0
    arg1[0x32] = 0

void* ecx_4 = arg1[0x2d]

if (ecx_4 != 0)
    sub_403160(ecx_4, (arg1[0x2f] - ecx_4) s>> 2, 4)
    arg1[0x2d] = 0
    arg1[0x2e] = 0
    arg1[0x2f] = 0

arg1[0x1d] = &partsengine::CTextDecoration::`vftable'
void* edi_1 = &arg1[7]
arg1[0x1e] = &textsurface::CTextSurfaceProperty::`vftable'
arg1[0xd] = &partsengine::CTextDecoration::`vftable'
arg1[0xe] = &textsurface::CTextSurfaceProperty::`vftable'
int32_t eax_10 = *(edi_1 + 0x14)

if (eax_10 u>= 0x10)
    sub_403160(*edi_1, eax_10 + 1, 1)

*(edi_1 + 0x14) = 0xf
bool cond:0 = *(edi_1 + 0x14) u< 0x10
*(edi_1 + 0x10) = 0

if (not(cond:0))
    edi_1 = *edi_1

*edi_1 = 0
int32_t eax_12 = arg1[6]

if (eax_12 u>= 0x10)
    eax_12 = sub_403160(arg1[1], eax_12 + 1, 1)

arg1[6] = 0xf
bool cond:1 = arg1[6] u< 0x10
arg1[5] = 0

if (cond:1)
    arg1[1].b = 0
    return eax_12

char* eax_14 = arg1[1]
*eax_14 = 0
return eax_14
