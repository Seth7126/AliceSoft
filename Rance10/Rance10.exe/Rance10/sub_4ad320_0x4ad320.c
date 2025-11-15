// 函数: sub_4ad320
// 地址: 0x4ad320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4c2bb0(arg1 + 0x40)
sub_4ad3b0(arg1, arg3)
void** esi = *(arg1 + 0x78)
int32_t edi = 0
uint32_t ebp_3 = (*(arg1 + 0x7c) - esi + 3) u>> 2

if (esi u> *(arg1 + 0x7c))
    ebp_3 = 0

if (ebp_3 != 0)
    do
        int32_t var_1c_1 = arg5
        int32_t var_20_1 = arg4
        sub_4ee2b0(*esi, arg2, arg2, arg3)
        edi += 1
        esi = &esi[1]
    while (edi != ebp_3)

struct partsengine::IEventArgs::partsengine::SCreatedEventArgs::VTable* const var_4 =
    &partsengine::SCreatedEventArgs::`vftable'{for `partsengine::IEventArgs'}
return sub_4cbd50(arg1 + 0xc, &var_4, 0)
