// 函数: sub_56cc40
// 地址: 0x56cc40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *(arg1 + 0x1c)
int32_t edi = *(arg1 + 0x20)

if (esi != edi)
    SRWLOCK* ebp_1 = &esi[1]
    
    do
        __Smtx_lock_shared(ebp_1)
        int32_t ebx_1 = *esi
        __Smtx_unlock_shared(ebp_1)
        
        if (ebx_1 == arg2)
            __Smtx_lock_shared(&esi[1])
            int32_t* edi_1 = *esi
            __Smtx_unlock_shared(&esi[1])
            int32_t ebx_2 = *(arg1 + 4)
            int32_t eax_3 = (*(*edi_1 + 0x10))()
            float xmm0_1 = _mm_cvtepi32_ps(zx.o(ebx_2))
            *arg3 = _mm_cvtepi32_ps(zx.o(eax_3)) / xmm0_1
            *arg4 = _mm_cvtepi32_ps(zx.o(esi[4])) / _mm_cvtepi32_ps(zx.o(*(arg1 + 4)))
            __Smtx_lock_shared(&esi[1])
            int32_t* edi_2 = *esi
            __Smtx_unlock_shared(&esi[1])
            int32_t ebx_4 = *(arg1 + 8)
            int32_t eax_7 = (*(*edi_2 + 0x14))()
            float xmm0_5 = _mm_cvtepi32_ps(zx.o(ebx_4))
            *arg5 = _mm_cvtepi32_ps(zx.o(eax_7)) / xmm0_5
            *arg6 = _mm_cvtepi32_ps(zx.o(esi[5])) / _mm_cvtepi32_ps(zx.o(*(arg1 + 8)))
            float* eax_10
            eax_10.b = 1
            return eax_10
        
        esi = &esi[9]
        ebp_1 = &ebp_1[9]
    while (esi != edi)

void* eax
eax.b = 0
return eax
