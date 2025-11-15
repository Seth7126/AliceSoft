// 函数: sub_403987
// 地址: 0x403987
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = *(arg1 - 0x14)
int32_t eax = esi[5]

if (eax u>= 0x10)
    sub_403160(*esi, eax + 1, 1)

esi[5] = 0xf
bool cond:0 = esi[5] u< 0x10
esi[4] = 0

if (not(cond:0))
    esi = *esi

*esi = nullptr
sub_70021b(nullptr, nullptr)
noreturn
