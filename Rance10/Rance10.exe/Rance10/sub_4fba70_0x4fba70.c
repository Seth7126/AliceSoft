// 函数: sub_4fba70
// 地址: 0x4fba70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0x1f8)
float esi = *(arg1 + 0x2c)
float edx = *(arg1 + 0x28)
sub_525bc0(ecx, edx, esi, edx, esi, ecx + 0x1e2, 2, 1, arg2)
void* esi_1 = *(arg1 + 0x1f8)

if (*(esi_1 + 0x1e2) != 0)
    struct partsengine::IEventArgs::partsengine::SDragEndEventArgs::VTable* const var_c =
        &partsengine::SDragEndEventArgs::`vftable'{for `partsengine::IEventArgs'}
    int32_t var_8_1 = 2
    char var_4_1 = 1
    char var_3_1 = arg2
    sub_4cbd50(esi_1 + 0x1e4, &var_c, 0)

*(esi_1 + 0x1e2) = 0
int32_t result = *(arg1 + 8)
*(arg1 + 0x1f8) = result
*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0
*(arg1 + 0x1f0) = 1
return result
