// 函数: sub_64cb50
// 地址: 0x64cb50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x18c)
void* eax_2 = (**(arg1 + 4))(arg1, 1, 0x2000)
*(esi + 8) = eax_2
int32_t i_1 = 0

if (data_7fc25c s< 2)
    int32_t esi_1 = 0
    int32_t var_24 = 0
    int32_t edi = 0
    int32_t var_2c = 0
    int32_t ebx = 0
    int32_t var_30 = 0
    char* const var_28 = &data_807a70[0x58f]
    int32_t i = 0x8000
    void* eax_4 = eax_2 + 0x800
    
    do
        int32_t edx = var_30
        eax_4 += 4
        var_30 += 0x4c8b
        *(eax_4 - 0x804) = edx
        int32_t edx_1 = var_2c
        var_2c += 0x9646
        *(eax_4 - 0x404) = edx_1
        char* const edx_2 = var_28
        var_28 = &var_28[0x8000]
        *(eax_4 + 0xbfc) = edx_2
        *(eax_4 - 4) = i
        i += 0x1d2f
        *(eax_4 + 0x3fc) = ebx
        ebx -= 0x2b32
        *(eax_4 + 0x7fc) = edi
        edi -= 0x54ce
        *(eax_4 + 0xffc) = esi_1
        esi_1 -= 0x6b2f
        *(eax_4 + 0x13fc) = var_24
        var_24 -= 0x14d1
    while (i s<= 0x1d91d1)
    
    return eax_4

int32_t xmm2[0x4] = data_79a850
int32_t xmm3[0x4] = data_79a900
int32_t xmm4[0x4] = data_79a930
int32_t xmm5[0x4] = data_79a8f0
int32_t xmm6[0x4] = data_79a920
int32_t xmm7[0x4] = data_79ab10
uint128_t xmm0 = 0xf
void* ecx_1 = eax_2 + 0x800
int32_t eax_3

do
    eax_3 = i_1 + 4
    ecx_1 += 0x20
    int32_t xmm1_2[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i_1), 0), xmm2)
    i_1 += 8
    *(ecx_1 - 0x820) = _mm_mullo_epi32(xmm1_2, xmm3)
    *(ecx_1 - 0x420) = _mm_mullo_epi32(xmm1_2, xmm4)
    *(ecx_1 - 0x20) = _mm_add_epi32(_mm_mullo_epi32(xmm1_2, xmm5), xmm6)
    *(ecx_1 + 0x3e0) = _mm_mullo_epi32(xmm1_2, xmm7)
    *(ecx_1 + 0x7e0) = __pmulld_xmmdq_memdq(xmm1_2, data_79ab00)
    *(ecx_1 + 0xbe0) = __paddd_xmmdq_memdq(__pslld_xmmdq_memdq(xmm1_2, xmm0), data_79a960)
    int32_t xmm0_17[0x4] = __pmulld_xmmdq_memdq(xmm1_2, data_79aaf0)
    int32_t xmm1_3[0x4] = __pmulld_xmmdq_memdq(xmm1_2, data_79ab20)
    *(ecx_1 + 0xfe0) = xmm0_17
    *(ecx_1 + 0x13e0) = xmm1_3
    int32_t xmm1_5[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(eax_3), 0), xmm2)
    *(ecx_1 - 0x810) = _mm_mullo_epi32(xmm1_5, xmm3)
    *(ecx_1 - 0x410) = _mm_mullo_epi32(xmm1_5, xmm4)
    *(ecx_1 - 0x10) = _mm_add_epi32(_mm_mullo_epi32(xmm1_5, xmm5), xmm6)
    *(ecx_1 + 0x3f0) = _mm_mullo_epi32(xmm1_5, xmm7)
    *(ecx_1 + 0x7f0) = __pmulld_xmmdq_memdq(xmm1_5, data_79ab00)
    *(ecx_1 + 0xbf0) = __paddd_xmmdq_memdq(__pslld_xmmdq_memdq(xmm1_5, xmm0), data_79a960)
    int32_t xmm0_34[0x4] = __pmulld_xmmdq_memdq(xmm1_5, data_79aaf0)
    int32_t xmm1_6[0x4] = __pmulld_xmmdq_memdq(xmm1_5, data_79ab20)
    *(ecx_1 + 0xff0) = xmm0_34
    *(ecx_1 + 0x13f0) = xmm1_6
while (i_1 s<= 0xff)

return eax_3
