// 函数: sub_64d750
// 地址: 0x64d750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_110
int32_t eax_1 = __security_cookie ^ &var_110
int32_t eax_3 = *(arg1 + 0x194)
int32_t ecx = *(arg2 + 4)
int32_t edi = arg4
var_110 = arg2
int32_t result = *(eax_3 + (ecx << 2) + 0x54)
int32_t ecx_1 = arg3 + (arg5 << 2)
int128_t* ebx_1 = *(arg2 + 0x54)
int32_t result_1 = result
int32_t var_108 = ecx_1

if (arg7 u> 0)
    int32_t ebp_1 = arg6
    int32_t i
    
    do
        int32_t var_104[0x4]
        result(&var_104, ecx_1, ebp_1)
        int32_t j = 0
        void var_8
        
        if ((edi u> &var_8 || edi + 0x7e u< &var_104)
                && (edi u> ebx_1 + 0xfc || edi + 0x7e u< ebx_1))
            float xmm2_1[0x4] = data_79aa80
            int64_t xmm3_1 = (data_79aa60).q
            int128_t* eax_10 = ebx_1
            
            do
                *(edi + (j << 1)) = _mm_sub_epi16(
                    _mm_shuffle_epi32(
                        _mm_shufflehi_epi16(
                            _mm_shufflelo_epi16(
                                _mm_cvttps_epi32(_mm_add_ps(
                                    _mm_mul_ps(*(&var_104 - ebx_1 + eax_10), *eax_10), xmm2_1)), 
                                0xd8), 
                            0xd8), 
                        0xd8), 
                    zx.o(xmm3_1))
                float xmm0_9[0x4] = eax_10[1]
                void var_f4
                float xmm1_6[0x4] = *(&var_f4 - ebx_1 + eax_10)
                eax_10 = &eax_10[2]
                *(edi + (j << 1) + 8) = _mm_sub_epi16(
                    _mm_shuffle_epi32(
                        _mm_shufflehi_epi16(
                            _mm_shufflelo_epi16(
                                _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(xmm1_6, xmm0_9), xmm2_1)), 
                                0xd8), 
                            0xd8), 
                        0xd8), 
                    zx.o(xmm3_1))
                j += 8
            while (j s< 0x40)
        else
            do
                *(edi + (j << 1)) =
                    (int.d(*(&var_104 + ebx_1 - &var_104 + (j << 2)) f* var_104[j] + 16384.5f)).w
                    - 0x4000
                j += 1
            while (j s< 0x40)
        
        edi -= 0xffffff80
        ecx_1 = var_108
        ebp_1 += *(var_110 + 0x24)
        i = arg7
        arg7 -= 1
        result = result_1
    while (i != 1)

@__security_check_cookie@4(eax_1 ^ &var_110)
return result
