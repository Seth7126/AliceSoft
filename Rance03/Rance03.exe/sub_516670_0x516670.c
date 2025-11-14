// 函数: sub_516670
// 地址: 0x516670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t ebx = *(arg1 + 0xc0)
int32_t* ebp = *(arg1 + 0xbc)
int32_t edx = 0
void* esi = nullptr
uint32_t edi_3 = (ebx - ebp + 3) u>> 2

if (ebp u> ebx)
    edi_3 = 0

int32_t* eax = ebp

if (edi_3 != 0)
    do
        void* ecx_1 = *(*eax + 4)
        
        if (ecx_1 != 0)
            ecx_1 = *(ecx_1 + 0x18)
        
        edx += 1
        esi += ecx_1
        eax = &eax[1]
    while (edx != edi_3)

int32_t edi_4 = 0
int32_t* result = *(arg1 + 0xbc)
int32_t ecx_2 = *(arg1 + 0xc0)
float xmm2_1 = _mm_cvtepi32_ps(zx.o(arg5 - (((ebx - ebp) s>> 2) - 1) * arg4 - esi))
uint32_t ebx_8 = (ecx_2 - result + 3) u>> 2

if (result u> ecx_2)
    ebx_8 = 0

float xmm2_3 = xmm2_1 * 0.5f + arg2

if (ebx_8 != 0)
    do
        void* edx_1 = *result
        void* ecx_3 = *(edx_1 + 4)
        
        if (ecx_3 != 0)
            ecx_3 = *(ecx_3 + 0x1c)
        
        void* esi_1 = *(edx_1 + 4)
        
        if (esi_1 != 0)
            float xmm0_2 = _mm_cvtepi32_ps(zx.o(ecx_3))
            *(esi_1 + 0xc) = xmm2_3
            *(*(edx_1 + 4) + 0x10) = arg3 - xmm0_2
        
        void* ecx_5 = *(edx_1 + 4)
        
        if (ecx_5 != 0)
            ecx_5 = *(ecx_5 + 0x18)
        
        edi_4 += 1
        result = &result[1]
        xmm2_3 = xmm2_3 + _mm_cvtepi32_ps(zx.o(ecx_5 + arg4))
    while (edi_4 != ebx_8)

return result
