// 函数: sub_4eb6a0
// 地址: 0x4eb6a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg1 - 0x40)
int32_t edi = *(arg1 - 0x38)
void* esi = *(arg1 - 0x44)

if (ebx s> 1)
    sub_4174a0(esi, esi + edi * 0x18)

if (ebx s> 0)
    sub_4174a0(esi + edi * 0x18, esi + (edi + 1) * 0x18)

sub_403160(esi, *(arg1 - 0x30), 0x18)
sub_70021b(nullptr, nullptr)
noreturn
