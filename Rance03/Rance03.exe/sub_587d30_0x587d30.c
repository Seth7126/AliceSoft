// 函数: sub_587d30
// 地址: 0x587d30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s>= 0)
    int32_t edx_1 = *(arg1 + 0x160)
    
    if (arg2 s< edx_1 && arg3 s>= 0 && arg3 s< *(arg1 + 0x164))
        int32_t var_138 = arg3
        float xmm1_4 = _mm_cvtepi32_ps(zx.o(arg2)) * 2f / _mm_cvtepi32_ps(zx.o(edx_1)) - 1f
        float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x164)))
        float xmm3 = 1f - _mm_cvtepi32_ps(zx.o(arg3)) * 2f / xmm0_3
        void var_c8
        void var_88
        int32_t* eax_2 = sub_5b0ec0(sub_52d450(arg1 + 0x24, &var_88), &var_c8)
        void var_48
        int32_t* eax_3 = sub_5b0ec0(arg1 + 0xf4, &var_48)
        float var_108[0x10]
        sub_52d060(eax_3, eax_3, &var_108, eax_2)
        float var_120 = xmm1_4
        float var_11c = xmm3
        int32_t var_118 = 0
        float var_114
        float* eax_4 = sub_47b190(&var_120, &var_114, &var_108)
        int32_t var_118_1 = 0x3f800000
        *arg4 = *eax_4
        arg4[1].d = eax_4[2]
        var_120 = xmm1_4
        float var_11c_1 = xmm3
        float* eax_6 = sub_47b190(&var_120, &var_114, &var_108)
        *arg5 = *eax_6
        arg5[1].d = eax_6[2]
        int32_t eax_7
        eax_7.b = 1
        return eax_7

int32_t eax
eax.b = 0
return eax
