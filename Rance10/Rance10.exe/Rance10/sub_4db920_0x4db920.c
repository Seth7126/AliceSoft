// 函数: sub_4db920
// 地址: 0x4db920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 =
    &partsengine::CFlatKeyDataScript::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
arg1[2] = 0xffffffff
arg1[3].b = 0
bool cond:0 = arg1[9] u< 0x10
arg1[8] = 0
char* eax

if (cond:0)
    eax = &arg1[4]
else
    eax = arg1[4]

*eax = 0
int32_t eax_1 = arg1[9]

if (eax_1 u>= 0x10)
    eax_1 = sub_403160(arg1[4], eax_1 + 1, 1)

arg1[9] = 0xf
bool cond:1 = arg1[9] u< 0x10
arg1[8] = 0

if (cond:1)
    arg1[4].b = 0
    return eax_1

char* eax_3 = arg1[4]
*eax_3 = 0
return eax_3
