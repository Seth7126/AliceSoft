// 函数: sub_44de80
// 地址: 0x44de80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x2d4) += 1
uint32_t eax = sub_44c3c0(arg1 + 0x2d0)
int32_t edx_1 = eax - *(arg1 + 0x2d8)

if (edx_1 u>= 0x3e8)
    int32_t ecx_1 = *(arg1 + 0x2d4) * 0x3e8
    double xmm0_2 = _mm_cvtepi32_pd(zx.q(edx_1))
    *(arg1 + 0x2d4) = 0
    *(arg1 + 0x2d8) = eax
    *(arg1 + 0x2dc) = _mm_cvtepi32_ps(zx.o(ecx_1))
        / _mm_cvtpd_ps(xmm0_2 f+ *((edx_1 u>> 0x1f << 3) + &data_709480))

int32_t eax_1 = *(arg1 + 0x298)
int32_t ebp = *(arg1 + 0x294)
void* result

if (arg1 == 0xfffffd64 || arg1 == 0xfffffd58)
    result.b = 0
    return result

if (*(arg1 + 0x2b8) == 1)
    if (*(arg1 + 0x2b4) == 0)
        result.b = 0
        return result
    
    void* edi_1 = *(arg1 + 0x2c0)
    
    if (edi_1 == 0)
        result.b = 0
        return result
    
    int32_t* ecx_2 = *(arg1 + 0xc)
    int32_t edi_2 = *(edi_1 + 0xc)
    int32_t xmm1
    int32_t var_1c_1 = xmm1
    int32_t eax_5 = (*(*ecx_2 + 0x18))((*(*ecx_2 + 0x1c))(arg1 + 0x29c, arg1 + 0x2a8))
    
    if (sub_524270(*(arg1 + 0x2b4), edi_2, ebp, eax_1, eax_5).b == 0)
        result.b = 0
        return result

result.b = 1
return result
