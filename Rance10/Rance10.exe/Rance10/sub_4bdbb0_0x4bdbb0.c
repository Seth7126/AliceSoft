// 函数: sub_4bdbb0
// 地址: 0x4bdbb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x1c) == arg2)
    struct common::CPoint::VTable* const var_18 = &common::CPoint::`vftable'
    int32_t var_14 = 1
    int32_t var_10 = 1
    struct common::CPoint::VTable* var_c
    struct common::CPoint::VTable** eax_1 = sub_404810(arg1 + 4, &var_c, &var_18)
    *(arg3 + 4) = eax_1[1]
    *(arg3 + 8) = eax_1[2]
    int32_t result
    result.b = 1
    return result

void* i = arg1 + 0x20

for (void* edi = i + 8; i != edi; i += 4)
    if (*i != 0 && sub_4bdbb0(arg2, arg3) != 0)
        return 1

return 0
