// 函数: sub_528e30
// 地址: 0x528e30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_4 = arg1[1].d
int64_t var_c = *arg1
float xmm2_2 = arg3[0xb] f* var_4 f+ arg3[0xf]
float xmm3_2 = arg3[0xa] f* var_4 f+ arg3[0xe]
float xmm4_1 = *arg3 f* var_c.d
float xmm5_1 = arg3[5] f* var_c:4.d
xmm2_2 - 1f
int32_t* eax_1
eax_1:1.b =
    (xmm2_2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm2_2, 1f) ? 1 : 0) << 2 | (xmm2_2 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm2_2 - 0f
    eax_1:1.b = (xmm2_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_2, 0f) ? 1 : 0) << 2
        | (xmm2_2 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm1_1 = 1f / xmm2_2
        var_c.d = xmm1_1 * xmm4_1
        var_c:4.d = xmm1_1 * xmm5_1
        var_4 = xmm1_1 * xmm3_2
else
    var_c.d = xmm4_1
    var_c:4.d = xmm5_1
    var_4 = xmm3_2

*arg2 = var_c
arg2[1].d = var_4
return arg2
