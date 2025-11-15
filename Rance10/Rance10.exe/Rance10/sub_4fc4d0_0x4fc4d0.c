// 函数: sub_4fc4d0
// 地址: 0x4fc4d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x1f8)

if (*(edi + 0x1e2) != 0)
    struct partsengine::IEventArgs::partsengine::SDragEndEventArgs::VTable* const var_c =
        &partsengine::SDragEndEventArgs::`vftable'{for `partsengine::IEventArgs'}
    int32_t var_8_1 = 2
    int16_t var_4_1 = 0
    sub_4cbd50(edi + 0x1e4, &var_c, 0)

*(edi + 0x1e2) = 0
int32_t result = *(arg1 + 8)
*(arg1 + 0x1f8) = result
*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0
return result
