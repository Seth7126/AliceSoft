// 函数: sub_48f6d0
// 地址: 0x48f6d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg4
void* ebx = arg5
int32_t* edi = arg2
*arg1 = 0
*edi = _mm_cvtepi32_ps(zx.o(*arg3))
arg1[1] = 0
edi[1] = _mm_cvtepi32_ps(zx.o(*result))

if (*(ebx + 0xc) s> 0 && *(ebx + 0x10) s> 0)
    int32_t edx_1 = *(ebx + 4)
    int32_t ecx_2 = *arg3
    
    if (edx_1 s< ecx_2)
        result = *result
        
        if (*(ebx + 8) s< result)
            void* ecx_3 = ecx_2 - edx_1
            bool cond:0_1 = *(ebx + 0xc) s>= ecx_3
            uint128_t xmm0_4 = zx.o(*(ebx + 4))
            arg2 = *(ebx + 0xc)
            int32_t* eax_1 = &arg2
            
            if (cond:0_1)
                eax_1 = &arg5
            
            arg5 = ecx_3
            void* ecx_4 = *(ebx + 0x10)
            int32_t xmm0_5 = _mm_cvtepi32_ps(xmm0_4)
            int32_t edx_2 = *eax_1
            void* eax_3 = result - *(ebx + 8)
            arg5 = eax_3
            void** eax_4 = &arg2
            *arg1 = xmm0_5
            arg2 = ecx_4
            
            if (ecx_4 s>= eax_3)
                eax_4 = &arg5
            
            void* ecx_5 = *eax_4
            *edi = _mm_cvtepi32_ps(zx.o(*(ebx + 4) + edx_2))
            arg1[1] = _mm_cvtepi32_ps(zx.o(*(ebx + 8)))
            result = arg4
            edi[1] = _mm_cvtepi32_ps(zx.o(*(ebx + 8) + ecx_5))
            *arg3 = edx_2
            *result = ecx_5

int32_t xmm0_12
int32_t xmm1

if (arg6 == 0)
    xmm0_12 = *arg1
    xmm1 = *edi
else
    xmm0_12 = *edi
    xmm1 = *arg1

int32_t xmm2
int32_t xmm3

if (arg7 == 0)
    xmm2 = arg1[1]
    xmm3 = edi[1]
else
    xmm2 = edi[1]
    xmm3 = arg1[1]

*arg1 = xmm0_12
arg1[1] = xmm2
*edi = xmm1
edi[1] = xmm3
return result
