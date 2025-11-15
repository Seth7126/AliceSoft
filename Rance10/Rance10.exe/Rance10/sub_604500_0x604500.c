// 函数: sub_604500
// 地址: 0x604500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0 = *arg1
xmm0 - 0f
int32_t* result
result:1.b =
    (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    result.b = 0
    return result

result.b = 1
return result
