// 函数: sub_631f14
// 地址: 0x631f14
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = *(arg1 - 0x14)
int32_t eax = esi[5]

if (eax u>= 8)
    sub_403160(*esi, eax + 1, 2)

esi[5] = 7
bool cond:0 = esi[5] u< 8
esi[4] = 0

if (not(cond:0))
    esi = *esi

*esi = nullptr
sub_70021b(nullptr, nullptr)
noreturn
