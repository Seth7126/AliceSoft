// 函数: sub_458129
// 地址: 0x458129
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x14)
int32_t eax = *(edi + 0x24)
void* esi = edi + 0x10

if (eax u>= 0x10)
    sub_403160(*esi, eax + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
sub_403160(edi, 1, 0x2c)
sub_70021b(nullptr, nullptr)
noreturn
