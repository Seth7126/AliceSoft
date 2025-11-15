// 函数: sub_4b99c0
// 地址: 0x4b99c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 4)

if (eax s< 0 || eax s> 0x1f4)
    *(arg1 + 4) = 0
    return eax

void* ecx = *(arg1 + 8)
int32_t var_10 = arg2
int32_t var_c = arg3
struct partsengine::IEventArgs::partsengine::SMouseDoubleClickEventArgs::VTable* const var_14 =
    &partsengine::SMouseDoubleClickEventArgs::`vftable'{for `partsengine::IEventArgs'}
int32_t var_8 = 1
void* eax_3 = sub_4cbd50(ecx, &var_14, 0)
*(arg1 + 4) = 0x1f5
return eax_3
