// 函数: sub_5514a0
// 地址: 0x5514a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &partsengine::CLoopCGSprite::`vftable'{for `common::SuicideRefCounter<class partsengine::CSprite>'}
sub_551530(arg1)
void* esi = &arg1[5]
arg1[0x11] = &common::CRect::`vftable'
arg1[0x15] = &common::CSize::`vftable'
arg1[0x12] = &common::CPoint::`vftable'
int32_t result = *(esi + 0x14)

if (result u>= 0x10)
    result = sub_403160(*esi, result + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
void* ecx = arg1[2]

if (ecx != 0)
    result = sub_403160(ecx, (arg1[4] - ecx) s>> 2, 4)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

return result
