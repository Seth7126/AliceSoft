// 函数: sub_50a310
// 地址: 0x50a310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx_2 = *(arg1 + 0x40)

if (edx_2 s< 0 || edx_2 s>= (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    return float.t(0)

void* eax_5 = *(*(*(arg1 + 8) + (edx_2 << 2)) + 4)
int32_t esi

if (eax_5 != 0)
    esi = *(eax_5 + 0x1c)
else
    esi = 0

int32_t edx_1

if (eax_5 != 0)
    edx_1 = *(eax_5 + 0x18)
else
    edx_1 = 0

struct partsengine::CRect::VTable* var_14
sub_4fbef0(&var_14, edx_1, esi, arg1 + 0x44)
struct partsengine::COriginPosMode::VTable* const var_1c = &partsengine::COriginPosMode::`vftable'
float var_18 = arg3
int32_t var_4
return fconvert.t(_mm_cvtepi32_ps(zx.o(sub_50ff00(&var_1c, var_4))) + arg2)
