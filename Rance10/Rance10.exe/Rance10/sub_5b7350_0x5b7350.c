// 函数: sub_5b7350
// 地址: 0x5b7350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0 = *arg1
xmm0 - arg2
int32_t* result
result:1.b =
    (xmm0 == arg2 ? 1 : 0) << 6 | (is_unordered.d(xmm0, arg2) ? 1 : 0) << 2 | (xmm0 < arg2 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    *arg1 = arg2
    float var_50 = arg2
    float var_4c_1 = arg2
    float var_48_1 = arg2
    int128_t var_44
    result = sub_6cae40(&var_44, &var_50)
    arg1[0x5a].b = 1
    *(arg1 + 0x68) = var_44
    int128_t var_34
    *(arg1 + 0x78) = var_34
    int128_t var_24
    *(arg1 + 0x88) = var_24
    int128_t var_14
    *(arg1 + 0x98) = var_14

return result
