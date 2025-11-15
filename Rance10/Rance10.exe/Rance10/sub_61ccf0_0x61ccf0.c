// 函数: sub_61ccf0
// 地址: 0x61ccf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0 = *arg1
float temp1 = *arg2
xmm0 - temp1
int32_t* result
result:1.b = (xmm0 == temp1 ? 1 : 0) << 6 | (is_unordered.d(xmm0, temp1) ? 1 : 0) << 2
    | (xmm0 < temp1 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    result.b = 0
    return result

result.b = 1
return result
