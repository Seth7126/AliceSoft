// 函数: sub_40cea0
// 地址: 0x40cea0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = &arg1[0xf]
*arg1 = &dpanalysis::CModel::`vftable'
sub_408e50(&esi[6])
int32_t eax = esi[5]

if (eax u>= 0x10)
    sub_403160(*esi, eax + 1, 1)

esi[5] = 0xf
bool cond:0 = esi[5] u< 0x10
esi[4] = 0

if (not(cond:0))
    esi = *esi

*esi = nullptr
arg1[0xb] = &dpanalysis::CBreakPointList::`vftable'
sub_40a220(&arg1[0xc])
arg1[4] = &dpanalysis::CFuncStackInfo::`vftable'
return sub_419400(&arg1[8]) __tailcall
