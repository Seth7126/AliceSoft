// 函数: sub_44e220
// 地址: 0x44e220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = data_75d4cc
*(esi + 0x2ec) += 1

if (*(esi + 0x2ff) != 0)
    goto label_44e272

uint32_t result

if (*(esi + 0x2fe) != 0)
label_44e27e:
    int32_t* ecx_1 = *(esi + 0x1c)
    *(esi + 0x2ec) = 0
    *(esi + 0x2f0) = (**ecx_1)()
    *(esi + 0x2d4) += 1
    result = sub_44c3c0(esi + 0x2d0)
    int32_t edx_2 = result - *(esi + 0x2d8)
    
    if (edx_2 u>= 0x3e8)
        int32_t ecx_3 = *(esi + 0x2d4) * 0x3e8
        double xmm0_1 = _mm_cvtepi32_pd(zx.q(edx_2))
        *(esi + 0x2d8) = result
        result.b = 1
        *(esi + 0x2d4) = 0
        *(esi + 0x2dc) = _mm_cvtepi32_ps(zx.o(ecx_3))
            / _mm_cvtpd_ps(xmm0_1 f+ *((edx_2 u>> 0x1f << 3) + &data_709480))
        return result
else
    if (*(esi + 0x2fd) == 0 || *(esi + 0x2fc) == 0)
        goto label_44e272
    
    *(esi + 0x300) += 1
    
    if (*(esi + 0x300) s< *(esi + 0x304))
        goto label_44e27e
    
    *(esi + 0x300) = 0
label_44e272:
    result = sub_44dd30(esi)
    
    if (result.b == 0)
        return result
    
    if (*(esi + 0x2e8) != 0)
        result = sub_4556d0()
        *(esi + 0x308) = result
        
        if (*(esi + 0x30c) s< result)
            *(esi + 0x30c) = result

result.b = 1
return result
