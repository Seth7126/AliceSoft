// 函数: sub_648cc0
// 地址: 0x648cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x44) != 0)
    arg2 = 1f - arg2

int32_t* ecx = *(arg1 + 0x30)
float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc)))
int32_t xmm0_6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10)))
int32_t* result

if (ecx != 0)
    result = (*(*ecx + 0x18))()
    
    if (result != 0)
        result[1] = 0
        result[2] = 0x3f000000
        result[3] = 0x3f800000
        int32_t xmm1_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_3 * arg2)))
        *result = xmm1_1
        result[4] = 0xffffffff
        result[5] = 0
        result[6] = 0
        result[7] = xmm0_3
        result[8] = 0
        result[9] = 0x3f000000
        result[0xa] = 0x3f800000
        result[0xb] = 0xffffffff
        result[0xc] = 0x3f800000
        result[0xd] = 0
        result[0xe] = xmm1_1
        result[0xf] = xmm0_6
        result[0x10] = 0x3f000000
        result[0x11] = 0x3f800000
        result[0x12] = 0xffffffff
        result[0x13] = 0
        result[0x14] = 0x3f800000
        result[0x15] = xmm0_3
        result[0x16] = xmm0_6
        result[0x17] = 0x3f000000
        result[0x18] = 0x3f800000
        result[0x19] = 0xffffffff
        result[0x1a] = 0x3f800000
        result[0x1b] = 0x3f800000
        int32_t* ecx_1 = *(arg1 + 0x30)
        
        if (ecx_1 != 0 && (*(*ecx_1 + 0x1c))().b != 0)
            result.b = 1
            return result

result.b = 0
return result
