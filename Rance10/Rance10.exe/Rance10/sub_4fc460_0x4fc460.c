// 函数: sub_4fc460
// 地址: 0x4fc460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x1f4)

if (*(edi + 0x1e1) != 0)
    struct partsengine::IEventArgs::partsengine::SDragEndEventArgs::VTable* const var_c =
        &partsengine::SDragEndEventArgs::`vftable'{for `partsengine::IEventArgs'}
    int32_t var_8_1 = 4
    int16_t var_4_1 = 0
    sub_4cbd50(edi + 0x1e4, &var_c, 0)

*(edi + 0x1e1) = 0
int32_t result = *(arg1 + 8)
*(arg1 + 0x1f4) = result
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
return result
