// 函数: sub_4e6d70
// 地址: 0x4e6d70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(*(arg1 + 4) + 0x40)
float xmm0 = *(ecx + 0x7c)
xmm0 - arg2
void* result
result:1.b =
    (xmm0 == arg2 ? 1 : 0) << 6 | (is_unordered.d(xmm0, arg2) ? 1 : 0) << 2 | (xmm0 < arg2 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
bool p_3

if (not(p_1))
    float xmm0_1 = *(ecx + 0x80)
    xmm0_1 - arg3
    result:1.b = (xmm0_1 == arg3 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, arg3) ? 1 : 0) << 2
        | (xmm0_1 < arg3 ? 1 : 0)
    p_3 = unimplemented  {test ah, 0x44}

if (p_1 || p_3)
    *(ecx + 0x7c) = arg2
    *(ecx + 0x80) = arg3
    *(ecx + 0x70) = 1

return result
