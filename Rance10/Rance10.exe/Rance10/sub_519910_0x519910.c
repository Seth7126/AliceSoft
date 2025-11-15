// 函数: sub_519910
// 地址: 0x519910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    result = sub_555e00(arg3, 0x18, arg9)
int32_t xmm1 = (zx.o(0)).d
float xmm2_1 = arg4 * 0.5f
void* edx = *(arg3 i+ (arg9 << 2) + 0x7c)
int32_t esi_1 = 0
void* var_4 = edx
arg4 = xmm2_1
float xmm4_1 = xmm2_1 / arg5
arg3 = xmm4_1

if (not(arg5 <= 0f))
    float xmm5_1 = arg1
    float xmm3_1 = xmm2_1 + xmm5_1
    arg9 = xmm3_1
    
    do
        int32_t ecx_1 = int.d(xmm1 f+ arg2)
        int32_t var_20_1 = ecx_1
        float xmm1_4 = _mm_cvtepi32_ps(zx.o(int.d(xmm1 f* xmm4_1 + 0.5f)))
        result = sub_54bec0(edx, int.d(xmm1_4 + xmm3_1), ecx_1, int.d(xmm2_1 - xmm1_4 + xmm5_1), 
            ecx_1, arg6, arg7, arg8)
        xmm2_1 = arg4
        esi_1 += 1
        xmm3_1 = arg9
        xmm4_1 = arg3
        xmm5_1 = arg1
        edx = var_4
        xmm1 = _mm_cvtepi32_ps(zx.o(esi_1))
    while (arg5 f> xmm1)

return result
