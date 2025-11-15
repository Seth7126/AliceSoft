// 函数: sub_571450
// 地址: 0x571450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg4

struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** esi = arg4
int32_t* edi = arg3 + 0xc

do
    if (esi != 0)
        *esi = &sealengine::CLineListView::`vftable'{for `sealengine::CDrawInstance'}
        esi[1] = 0
        esi[2] = 0
        sub_568810(&esi[1], &edi[-2])
        esi[3] = *edi
        esi[4].b = edi[1].b
        *(esi + 0x11) = *(edi + 5)
        *(esi + 0x14) = *(edi + 8)
        *(esi + 0x24) = *(edi + 0x18)
        *(esi + 0x34) = *(edi + 0x28)
        *(esi + 0x44) = *(edi + 0x38)
    
    edi = &edi[0x15]
    esi = &esi[0x15]
while (&edi[-3] != arg2)

return esi
