// 函数: sub_6b6af0
// 地址: 0x6b6af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(arg2 + 0x504)
int32_t edi = arg3
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(zx.o(arg5), 0)

if (edi == 0 || arg4 == 0)
    return nullptr

void* ecx
void* eax = sub_6b3050(ecx, esi << 2)
int32_t i = 0
void* ebx_1 = eax
void* var_34_1 = ebx_1
int32_t i_2 = 0

if (esi s<= 0)
    return eax

void* ecx_1

if (esi u< 8)
    ecx_1 = arg4
else
    ecx_1 = arg4
    
    if (data_7fc25c s>= 2)
        i_2 = 0
        
        if ((ebx_1 u> ecx_1 - 4 + (esi << 2) || ebx_1 + ((esi - 1) << 2) u< ecx_1)
                && (ebx_1 u> edi - 4 + (esi << 2) || ebx_1 + ((esi - 1) << 2) u< edi))
            int32_t eax_10 = esi & 0x80000007
            
            if (eax_10 s< 0)
                eax_10 = ((eax_10 - 1) | 0xfffffff8) + 1
            
            void* edx_2 = edi - ecx_1
            int128_t xmm7_1 = data_79a910
            int32_t xmm5_2[0x4] = _mm_sub_epi32(data_79a940, xmm0_1)
            int32_t xmm4_1[0x4] = data_79a920
            void* edx_4 = ebx_1 - ecx_1
            i = 0
            uint64_t xmm2_1[0x2] = 0x10
            void* eax_13 = ecx_1 + 0x10
            uint64_t var_20_1[0x2] = xmm2_1
            void* ecx_3 = edi - ebx_1
            void* edi_1 = ebx_1
            
            do
                edi_1 += 0x20
                int128_t xmm0_2 = *(eax_13 - 0x10)
                eax_13 += 0x20
                i += 8
                int128_t xmm3_1 = *(ecx_3 + edi_1 - 0x20)
                int32_t xmm1_3[0x4] = _mm_mullo_epi32(xmm7_1 & xmm0_2, xmm0_1)
                int32_t xmm3_6[0x4] = _mm_sra_epi32(
                    _mm_add_epi32(_mm_add_epi32(_mm_mullo_epi32(xmm3_1 & xmm7_1, xmm5_2), xmm1_3), 
                        xmm4_1), 
                    xmm2_1)
                *(edi_1 - 0x20) = xmm3_6
                ebx_1 = var_34_1
                int128_t xmm2_5 = _mm_cmpeq_epi32(xmm4_1 & *(eax_13 - 0x30), zx.o(0)) &
                    not.o(_mm_cmpeq_epi32(xmm4_1 & *(ecx_3 + edi_1 - 0x20), zx.o(0)) ^ data_79ab30)
                *(edi_1 - 0x20) = ((xmm3_6 | xmm4_1) & xmm2_5) | (xmm2_5 & not.o(xmm3_6))
                int32_t xmm3_12[0x4] = __psrad_xmmdq_memdq(
                    _mm_add_epi32(
                        _mm_add_epi32(_mm_mullo_epi32(xmm7_1 & *(eax_13 - 0x20), xmm0_1), 
                            _mm_mullo_epi32(xmm7_1 & *(edx_2 + eax_13 - 0x20), xmm5_2)), 
                        xmm4_1), 
                    var_20_1)
                *(edx_4 + eax_13 - 0x20) = xmm3_12
                int128_t xmm2_10 = _mm_cmpeq_epi32(xmm4_1 & *(eax_13 - 0x20), zx.o(0)) &
                    not.o(_mm_cmpeq_epi32(xmm4_1 & *(edx_2 + eax_13 - 0x20), zx.o(0)) ^ data_79ab30)
                xmm2_1 = var_20_1
                *(edx_4 + eax_13 - 0x20) =
                    ((xmm3_12 | xmm4_1) & xmm2_10) | (xmm2_10 & not.o(xmm3_12))
            while (i s< esi - eax_10)
            
            edi = arg3
            i_2 = i
            ecx_1 = arg4

if (i s>= esi)
    return ebx_1

int32_t* ebx_3 = ebx_1 - ecx_1
void* edx_5 = ecx_1 + (i << 2)
void* edi_2 = edi - ecx_1
int32_t i_3 = esi - i_2
int32_t i_1

do
    int32_t eax_19 = ((*edx_5 & 0x7fff) * arg5 + (*(edi_2 + edx_5) & 0x7fff) * (0x10000 - arg5)
        + 0x8000) s>> 0x10
    *(ebx_3 + edx_5) = eax_19
    
    if ((*(edi_2 + edx_5) & 0x8000) != 0 && (*edx_5 & 0x8000) != 0)
        *(ebx_3 + edx_5) = eax_19 | 0x8000
    
    edx_5 += 4
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return var_34_1
