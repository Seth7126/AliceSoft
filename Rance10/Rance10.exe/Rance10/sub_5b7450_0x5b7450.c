// 函数: sub_5b7450
// 地址: 0x5b7450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0 = *(arg1 + 0x10)
float temp1 = *arg2
xmm0 - temp1
int32_t* result
result:1.b = (xmm0 == temp1 ? 1 : 0) << 6 | (is_unordered.d(xmm0, temp1) ? 1 : 0) << 2
    | (xmm0 < temp1 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
label_5b7492:
    *(arg1 + 0x10) = *arg2
    *(arg1 + 0x18) = arg2[2]
    void var_40
    result = sub_6cae40(&var_40, arg1 + 0x10)
    *(arg1 + 0xe8) = *result
    *(arg1 + 0xf8) = *(result + 0x10)
    *(arg1 + 0x108) = *(result + 0x20)
    int128_t xmm0_7 = *(result + 0x30)
    *(arg1 + 0x168) = 1
    *(arg1 + 0x118) = xmm0_7
else
    float xmm0_1 = *(arg1 + 0x14)
    float temp2_1 = arg2[1]
    xmm0_1 - temp2_1
    result:1.b = (xmm0_1 == temp2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp2_1) ? 1 : 0) << 2
        | (xmm0_1 < temp2_1 ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        goto label_5b7492
    
    float xmm0_2 = *(arg1 + 0x18)
    float temp3_1 = arg2[2]
    xmm0_2 - temp3_1
    result:1.b = (xmm0_2 == temp3_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, temp3_1) ? 1 : 0) << 2
        | (xmm0_2 < temp3_1 ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (p_5)
        goto label_5b7492

return result
