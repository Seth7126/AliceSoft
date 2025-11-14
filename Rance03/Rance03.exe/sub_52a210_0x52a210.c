// 函数: sub_52a210
// 地址: 0x52a210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x10) == 0)
    int32_t result
    result.b = 1
    return result

*(arg1 + 0x74) = arg2
*(arg1 + 0x38) = 0
float xmm4_4 = *(arg3 + 8) f* *(arg1 + 0x14) + *(arg3 + 0x18) f* *(arg1 + 0x18)
    + *(arg3 + 0x28) f* *(arg1 + 0x1c) f+ *(arg3 + 0x38)
float xmm5_4 = *(arg3 + 0xc) f* *(arg1 + 0x14) + *(arg3 + 0x1c) f* *(arg1 + 0x18)
    + *(arg3 + 0x2c) f* *(arg1 + 0x1c) f+ *(arg3 + 0x3c)
xmm5_4 - 1f
void* eax_1
eax_1:1.b =
    (xmm5_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm5_4, 1f) ? 1 : 0) << 2 | (xmm5_4 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm5_4 - 0f
    eax_1:1.b = (xmm5_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_4, 0f) ? 1 : 0) << 2
        | (xmm5_4 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        xmm4_4 = 1f / xmm5_4 * xmm4_4

*(arg1 + 0x80) = xmm4_4
return sub_52a730(arg1, arg4, arg5) != 0
