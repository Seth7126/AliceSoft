// 函数: sub_6335f0
// 地址: 0x6335f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t* esi = arg3
int32_t edx = *(arg1 + 4)
int32_t i = 0
int128_t* result = arg2

if (edx != 0)
    if (edx u>= 0x20 && (result u> esi - 1 + edx || result - 1 + edx u< esi))
        do
            i += 0x20
            *result = _mm_add_epi8(*esi, *result)
            int32_t xmm1_3[0x4] = esi[1]
            esi = &esi[2]
            result[1] = _mm_add_epi8(xmm1_3, result[1])
            result = &result[2]
        while (i u< edx - (edx & 0x1f))
    
    if (i u< edx)
        char* esi_1 = esi - result
        int32_t i_2 = edx - i
        int32_t i_1
        
        do
            void* ecx
            ecx.b = *(esi_1 + result)
            result += 1
            *(result - 1) += ecx.b
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

return result
