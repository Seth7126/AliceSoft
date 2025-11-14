// 函数: sub_6b118e
// 地址: 0x6b118e
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    *((arg1 u>> 0x1f << 3) + &data_714fc0)
    return 

int32_t xmm0_3[0x4] = _mm_unpacklo_epi32(zx.o(arg1), zx.q(arg2))
int32_t eflags
int32_t ecx_1
ecx_1, eflags = _bit_scan_reverse(arg2)
int32_t xmm2[0x4] = zx.o(0x20 - ecx_1)
uint64_t xmm0_4[0x2] = _mm_sll_epi64(xmm0_3, xmm2)
int32_t xmm3_2[0x4] = _mm_srli_epi64(_mm_slli_epi64(xmm0_4, 0x33), 0x33)
uint64_t xmm0_6[0x2] = _mm_slli_epi64(_mm_srli_epi64(xmm0_4, 0xd), 1)
int32_t xmm3_3[0x4] = _mm_cmpgt_epi32(xmm3_2, 0x800)
int32_t xmm0_7[0x4] = _mm_sub_epi64(xmm0_6, _mm_unpacklo_epi32(xmm3_3, xmm3_3))
int32_t xmm1_3[0x4] = _mm_cmpgt_epi32(xmm3_2, 0x17ff)
_mm_add_epi64(_mm_sub_epi64(xmm0_7, _mm_unpacklo_epi32(xmm1_3, xmm1_3)), 
    _mm_slli_epi64(_mm_sub_epi64(0x43f, xmm2), 0x34))
