// 函数: sub_517270
// 地址: 0x517270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x48)

if (arg2 == 0)
    if (*(esi + 0x1b4) != 0)
        arg2.d = &partsengine::SLostFocusEventArgs::`vftable'{for `partsengine::IEventArgs'}
        sub_4cbd50(esi + 0x1e4, &arg2, 0)
        *(esi + 0x1b4) = 0
else if (*(esi + 0x1b4) == 0)
    arg2.d = &partsengine::SFocusEventArgs::`vftable'{for `partsengine::IEventArgs'}
    sub_4cbd50(esi + 0x1e4, &arg2, 0)
    *(esi + 0x1b4) = 1
