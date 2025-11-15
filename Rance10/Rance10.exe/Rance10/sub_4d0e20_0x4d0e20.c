// 函数: sub_4d0e20
// 地址: 0x4d0e20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &partsengine::CFlatEmitterData::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
sub_4d0eb0(arg1)
int32_t eax = arg1[0x53]
void* edi = &arg1[0x4e]

if (eax u>= 0x10)
    sub_403160(*edi, eax + 1, 1)

*(edi + 0x14) = 0xf
bool cond:0 = *(edi + 0x14) u< 0x10
*(edi + 0x10) = 0

if (not(cond:0))
    edi = *edi

*edi = 0
int32_t eax_2 = arg1[7]

if (eax_2 u>= 0x10)
    eax_2 = sub_403160(arg1[2], eax_2 + 1, 1)

arg1[7] = 0xf
bool cond:1 = arg1[7] u< 0x10
arg1[6] = 0

if (cond:1)
    arg1[2].b = 0
    return eax_2

char* eax_4 = arg1[2]
*eax_4 = 0
return eax_4
