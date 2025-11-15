// 函数: sub_4f5260
// 地址: 0x4f5260
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x68)

if (esi == 0)
    if (*(arg1 + 0x5c) == *(arg1 + 0x60))
        void* eax_2 = sub_404080(arg1 + 0x30)
        sub_4f4360(arg1, sub_404080(arg1 + 0x30), eax_2, esi)
    
    esi = *(*(arg1 + 0x5c) + ((*(arg1 + 0x60) - *(arg1 + 0x5c)) s>> 2 << 2) - 4)

struct partsengine::IEventArgs::partsengine::SSwipeEndEventArgs::VTable* ecx_6 = *(esi + 0x210)

if (ecx_6 != *(esi + 0x18))
    sub_525b60(ecx_6)
    *(esi + 0x210) = *(esi + 0x18)
