// 函数: sub_4500a0
// 地址: 0x4500a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcb4c
*(esi + 0x24) += 1
uint32_t eax = sub_44f250(esi + 0x20)
int32_t edx_1 = eax - *(esi + 0x28)

if (edx_1 u>= 0x3e8)
    int32_t ecx_1 = *(esi + 0x24) * 0x3e8
    double xmm0_2 = _mm_cvtepi32_pd(zx.q(edx_1))
    *(esi + 0x24) = 0
    *(esi + 0x28) = eax
    *(esi + 0x2c) = _mm_cvtepi32_ps(zx.o(ecx_1))
        / _mm_cvtpd_ps(xmm0_2 f+ *((edx_1 u>> 0x1f << 3) + &data_79aa70))

*(esi + 0x40) += 1

if (*(esi + 0x52) == 0 && *(esi + 0x51) != 0 && *(esi + 0x50) != 0)
    *(esi + 0x54) += 1
    
    if (*(esi + 0x54) s< *(esi + 0x58))
        int32_t* ecx_3 = *(esi + 0x3c)
        *(esi + 0x40) = 0
        *(esi + 0x44) = (**ecx_3)()
        int32_t eax_4
        eax_4.b = 1
        return eax_4
    
    *(esi + 0x54) = 0

bool eax_2 = sub_44fb70(esi)

if (eax_2 == 0)
    return eax_2

if (*(esi + 0x1c) != 0)
    void* ecx_4 = *(esi + 0x18)
    
    if (ecx_4 != 0)
        void* var_10_1 = ecx_4 + 8
        sub_4522d0(ecx_4 + 0x44)

return true
