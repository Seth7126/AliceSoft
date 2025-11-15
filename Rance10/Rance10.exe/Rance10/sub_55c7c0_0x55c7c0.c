// 函数: sub_55c7c0
// 地址: 0x55c7c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &
    partsengine::CTextSprite::`vftable'{for `common::SuicideRefCounter<class partsengine::CSprite>'}
sub_55c8a0(arg1)
sub_55f850(arg1)
int32_t eax = arg1[0x3b]
void* edi = &arg1[0x36]

if (eax u>= 0x10)
    sub_403160(*edi, eax + 1, 1)

*(edi + 0x14) = 0xf
bool cond:0 = *(edi + 0x14) u< 0x10
*(edi + 0x10) = 0

if (not(cond:0))
    edi = *edi

*edi = 0
arg1[0x2a] = &common::CRect::`vftable'
arg1[0x2e] = &common::CSize::`vftable'
arg1[0x2b] = &common::CPoint::`vftable'
void* ecx_1 = arg1[0x27]

if (ecx_1 != 0)
    sub_403160(ecx_1, (arg1[0x29] - ecx_1) s>> 2, 4)
    arg1[0x27] = 0
    arg1[0x28] = 0
    arg1[0x29] = 0

int32_t result = sub_55c120(&arg1[0x22])
arg1[0x12] = &partsengine::CTextDecoration::`vftable'
arg1[0x13] = &textsurface::CTextSurfaceProperty::`vftable'
arg1[2] = &partsengine::CTextDecoration::`vftable'
arg1[3] = &textsurface::CTextSurfaceProperty::`vftable'
return result
