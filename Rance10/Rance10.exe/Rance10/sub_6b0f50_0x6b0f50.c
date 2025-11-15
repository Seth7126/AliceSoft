// 函数: sub_6b0f50
// 地址: 0x6b0f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* edx = arg3
int32_t esi = *(arg1 + 4)
int32_t i = 0
int128_t* result = arg2

if (esi != 0)
    if (esi u>= 0x20 && (result u> edx - 1 + esi || result - 1 + esi u< edx))
        do
            i += 0x20
            *result = _mm_add_epi8(*edx, *result)
            int32_t xmm1_3[0x4] = edx[1]
            edx = &edx[2]
            result[1] = _mm_add_epi8(xmm1_3, result[1])
            result = &result[2]
        while (i u< (esi & 0xffffffe0))
    
    if (i u< esi)
        char* edx_1 = edx - result
        int32_t i_2 = esi - i
        int32_t i_1
        
        do
            void* ecx
            ecx.b = *(edx_1 + result)
            result += 1
            *(result - 1) += ecx.b
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

return result
