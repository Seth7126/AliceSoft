// 函数: sub_4fb8d0
// 地址: 0x4fb8d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(**(arg1 + 0x1e4) + 0x50)

if (*(ecx + 0x1aa) != 0)
    int32_t xmm0_1 = *(arg1 + 0x1ec)
    *(ecx + 0x90) = *(arg1 + 0x1e8)
    *(ecx + 0x94) = xmm0_1

void* ecx_1 = *(arg1 + 0x1e4)
float esi = *(arg1 + 0x1c)
float edx = *(arg1 + 0x18)
sub_525bc0(ecx_1, edx, esi, edx, esi, ecx_1 + 0x1e0, 1, 1, arg2)
void* esi_1 = *(arg1 + 0x1e4)

if (*(esi_1 + 0x1e0) != 0)
    struct partsengine::IEventArgs::partsengine::SDragEndEventArgs::VTable* const var_c =
        &partsengine::SDragEndEventArgs::`vftable'{for `partsengine::IEventArgs'}
    int32_t var_8_1 = 1
    char var_4_1 = 1
    char var_3_1 = arg2
    sub_4cbd50(esi_1 + 0x1e4, &var_c, 0)

*(esi_1 + 0x1e0) = 0
sub_525e10(*(arg1 + 0x1fc), *(arg1 + 0x1e4))
int32_t result = *(arg1 + 8)
*(arg1 + 0x1e4) = result
*(arg1 + 0x1fc) = result
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x1e8) = 0
*(arg1 + 0x1ec) = 0
*(arg1 + 0x1f0) = 1
*(arg1 + 0x3c) = 0
return result
