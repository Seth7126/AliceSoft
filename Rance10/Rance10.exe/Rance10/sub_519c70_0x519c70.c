// 函数: sub_519c70
// 地址: 0x519c70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    result = sub_555e00(arg3, 0x18, arg9)
int32_t xmm3 = (zx.o(0)).d
float xmm4 = arg4
float xmm2_1 = arg5 * 0.5f
void* edx = *(arg3 i+ (arg9 << 2) + 0x7c)
int32_t esi_1 = 0
void* var_4 = edx
arg5 = xmm2_1
float xmm1_1 = xmm2_1 / xmm4
arg3 = xmm1_1

if (not(xmm4 <= 0f))
    float xmm6_1 = arg2
    float xmm5_2 = xmm2_1 + xmm6_1
    arg9 = xmm5_2
    
    do
        float xmm1_3 = _mm_cvtepi32_ps(zx.o(int.d(xmm3 * xmm1_1 + 0.5f)))
        int32_t ecx_1 = int.d(xmm4 f- xmm3 + arg1)
        int32_t var_20_1 = ecx_1
        result = sub_54bec0(edx, ecx_1, int.d(xmm1_3 + xmm5_2), ecx_1, 
            int.d(xmm2_1 - xmm1_3 + xmm6_1), arg6, arg7, arg8)
        xmm4 = arg4
        esi_1 += 1
        xmm2_1 = arg5
        xmm5_2 = arg9
        xmm1_1 = arg3
        xmm6_1 = arg2
        edx = var_4
        xmm3 = _mm_cvtepi32_ps(zx.o(esi_1))
    while (xmm4 f> xmm3)

return result
