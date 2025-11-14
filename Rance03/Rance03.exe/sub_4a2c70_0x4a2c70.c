// 函数: sub_4a2c70
// 地址: 0x4a2c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0xdc) != arg2)
    *(arg1 + 0xdc) = arg2
    *(arg1 + 0x70) = 1

float xmm1 = *(arg1 + 0x94)
xmm1 f- 0
int32_t result
result:1.b =
    (xmm1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    *(arg1 + 0x94) = 0
    *(arg1 + 0x70) = 1

return result
