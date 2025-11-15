// 函数: sub_5a4788
// 地址: 0x5a4788
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg1 - 0x2c)
int32_t edi = *(arg1 - 0x1c)
void* esi = *(arg1 - 0x20)

if (ebx s> 1)
    sub_5a4a60(esi, edi * 0x34c + esi)

if (ebx s> 0)
    sub_5a4a60(edi * 0x34c + esi, (edi + 1) * 0x34c + esi)

sub_403160(esi, *(arg1 - 0x18), 0x34c)
sub_70021b(nullptr, nullptr)
noreturn
