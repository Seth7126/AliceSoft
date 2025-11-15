// 函数: sub_4fc3d0
// 地址: 0x4fc3d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_525d40(*(arg1 + 0x1fc), *(arg1 + 0x1e4), arg2, arg3)
sub_525e10(*(arg1 + 0x1fc), *(arg1 + 0x1e4))
void* edi = *(arg1 + 0x1e4)

if (*(edi + 0x1e0) != 0)
    struct partsengine::IEventArgs::partsengine::SDragEndEventArgs::VTable* const var_14 =
        &partsengine::SDragEndEventArgs::`vftable'{for `partsengine::IEventArgs'}
    int32_t var_10_1 = 1
    int16_t var_c_1 = 0
    sub_4cbd50(edi + 0x1e4, &var_14, 0)

*(edi + 0x1e0) = 0
int32_t result = *(arg1 + 8)
*(arg1 + 0x1e4) = result
*(arg1 + 0x1fc) = result
return result
