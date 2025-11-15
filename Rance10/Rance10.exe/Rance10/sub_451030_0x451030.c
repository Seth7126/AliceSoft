// 函数: sub_451030
// 地址: 0x451030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0x14)

if (ecx != 0)
    void* ecx_1 = *(ecx + 0x120)
    
    if (ecx_1 != 0)
        int32_t* ecx_2 = *(ecx_1 + 8)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x2c))(1, 0, (*(ecx_1 + 0x10)).d, 1) != 0)
            void* ecx_3 = *(arg1 + 0x14)
            uint128_t xmm1 = zx.o(*(arg2 i+ 8))
            float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg2 i+ 4)))
            float xmm1_2 = _mm_cvtepi32_ps(xmm1) f+ *(ecx_3 + 0x7c)
            char var_8_1
            var_8_1.d = xmm0_1 f+ *(ecx_3 + 0x78)
            *arg3 = var_8_1.d
            arg3[1] = xmm1_2
            void* ecx_4 = *(arg1 + 0x14)
            int32_t* xmm0_3 = *(ecx_4 + 0x108)
            float xmm0_4 = *(ecx_4 + 0x104)
            uint128_t xmm0_5 = zx.o((*(**(ecx_4 + 0x118) + 0x10))())
            void* eax_8 = *(arg1 + 0x14)
            float xmm0_6 = _mm_cvtepi32_ps(xmm0_5)
            int32_t eax_10 = (*(**(eax_8 + 0x118) + 0x14))()
            var_8_1.d = *arg3 + xmm0_6 * xmm0_4
            float xmm1_5 = _mm_cvtepi32_ps(zx.o(eax_10)) f* xmm0_3
            float xmm0_10 = arg3[1]
            *arg4 = var_8_1.d
            arg4[1] = xmm0_10 + xmm1_5
            int32_t* ecx_8 = *(*(*(arg1 + 0x14) + 0x120) + 8)
            int32_t eax_15
            
            if (ecx_8 != 0)
                eax_15 = (*(*ecx_8 + 0x1c))()
            else
                eax_15 = 0
            
            *arg5 = _mm_cvtepi32_ps(zx.o(eax_15))
            int32_t* ecx_9 = *(*(*(arg1 + 0x14) + 0x120) + 8)
            int32_t eax_19
            
            if (ecx_9 != 0)
                eax_19 = (*(*ecx_9 + 0x20))()
            else
                eax_19 = 0
            
            arg5[1] = _mm_cvtepi32_ps(zx.o(eax_19))
            *arg6 = _mm_cvtepi32_ps(zx.o((*(**(*(arg1 + 0x14) + 0x118) + 0x14))())) f/ arg5[1]
            *arg5 = *(*(arg1 + 0x14) + 0x104) f* *arg5
            void* result
            result.b = 1
            arg5[1] = *(*(arg1 + 0x14) + 0x108) f* arg5[1]
            return result

return 0
