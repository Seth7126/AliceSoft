// 函数: sub_4fb9d0
// 地址: 0x4fb9d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0x1f4)
float esi = *(arg1 + 0x24)
float edx = *(arg1 + 0x20)
sub_525bc0(ecx, edx, esi, edx, esi, ecx + 0x1e1, 4, 1, arg2)
void* esi_1 = *(arg1 + 0x1f4)

if (*(esi_1 + 0x1e1) != 0)
    struct partsengine::IEventArgs::partsengine::SDragEndEventArgs::VTable* const var_c =
        &partsengine::SDragEndEventArgs::`vftable'{for `partsengine::IEventArgs'}
    int32_t var_8_1 = 4
    char var_4_1 = 1
    char var_3_1 = arg2
    sub_4cbd50(esi_1 + 0x1e4, &var_c, 0)

*(esi_1 + 0x1e1) = 0
int32_t result = *(arg1 + 8)
*(arg1 + 0x1f4) = result
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
*(arg1 + 0x1f0) = 1
return result
