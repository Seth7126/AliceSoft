// 函数: sub_519b50
// 地址: 0x519b50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    result = sub_555e00(arg3, 0x18, arg9)
int32_t xmm2 = (zx.o(0)).d
float xmm3_1 = arg5 * 0.5f
void* edx = *(arg3 i+ (arg9 << 2) + 0x7c)
int32_t esi_1 = 0
void* var_4 = edx
arg5 = xmm3_1
float xmm1_1 = xmm3_1 / arg4
arg3 = xmm1_1

if (not(arg4 <= 0f))
    float xmm5_1 = arg2
    float xmm4_2 = xmm3_1 + xmm5_1
    arg9 = xmm4_2
    
    do
        int32_t ecx_1 = int.d(xmm2 f+ arg1)
        int32_t var_20_1 = ecx_1
        float xmm1_3 = _mm_cvtepi32_ps(zx.o(int.d(xmm2 * xmm1_1 + 0.5f)))
        result = sub_54bec0(edx, ecx_1, int.d(xmm1_3 + xmm4_2), ecx_1, 
            int.d(xmm3_1 - xmm1_3 + xmm5_1), arg6, arg7, arg8)
        xmm3_1 = arg5
        esi_1 += 1
        xmm4_2 = arg9
        xmm1_1 = arg3
        xmm5_1 = arg2
        edx = var_4
        xmm2 = _mm_cvtepi32_ps(zx.o(esi_1))
    while (arg4 f> xmm2)

return result
