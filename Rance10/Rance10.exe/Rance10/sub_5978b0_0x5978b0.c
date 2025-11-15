// 函数: sub_5978b0
// 地址: 0x5978b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t xmm0 = *arg6
int128_t* eax
eax.b = arg8
*(arg1 + 0x1c) = eax.b
*(arg1 + 0xc) = xmm0
*(arg1 + 0x80) = arg9
void* result = *(arg1 + 0x64)

if (result == *(arg1 + 0x68))
    *(arg1 + 0x7c) = 0xffffffff
else
    float xmm0_2 = *(arg1 + 4)
    xmm0_2 f- 0
    result:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
        | (xmm0_2 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        *(arg1 + 0x7c) = 0xffffffff
    else
        float xmm1 = _mm_max_ss(arg2, 0)
        int32_t ecx_2 = (*(arg1 + 0x68) - *(arg1 + 0x64)) s>> 3
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(int.d(xmm1 / xmm0_2))
        result = divs.dp.d(edx_1:eax_2, ecx_2)
        *(arg1 + 0x7c) = mods.dp.d(edx_1:eax_2, ecx_2)

int32_t ecx_3 = *(arg1 + 0x7c)

if (ecx_3 s>= 0)
    result = (*(arg1 + 0x68) - *(arg1 + 0x64)) s>> 3
    
    if (ecx_3 s< result)
        arg8.d = arg1
        sub_42ccf0(arg10, &arg8)
        int32_t var_8_3 = sub_597960(arg1, arg7, arg5)
        return sub_597a90(arg1, arg3, arg4)

return result
