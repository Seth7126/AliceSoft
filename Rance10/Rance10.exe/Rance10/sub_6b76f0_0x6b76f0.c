// 函数: sub_6b76f0
// 地址: 0x6b76f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = *(arg2 + 0x510)
int32_t* ecx_2 = arg3
int32_t eax_5
int32_t edx
edx:eax_5 = sx.q(*(*(*(*(arg1 + 0x40) + 4) + 0x1c) + (*(arg1 + 0x1c) << 2)))
int32_t ebp_1 = (eax_5 - edx) s>> 1

if (ecx_2 == 0)
    _memset(arg4, 0, ebp_1 << 2)
    return 0

void* const ebx_2 = *(ebx + 0x340) * *ecx_2
int32_t i_1 = 0
int32_t i_3 = 0

if (ebx_2 s< 0)
    ebx_2 = nullptr
else if (ebx_2 s> 0xff)
    ebx_2 = 0xff

int32_t i = 1
arg1 = ebx_2
int32_t i_4 = 1

if (*(arg2 + 0x504) s> 1)
    void* eax_8 = arg2 + 0x108
    void* var_c_1 = eax_8
    
    do
        int32_t eax_9 = *eax_8
        int32_t eax_10 = ecx_2[eax_9]
        int32_t ecx_4 = eax_10 & 0x7fff
        
        if (ecx_4 == eax_10)
            void* const eax_11 = ebx
            i_1 = *(eax_11 + (eax_9 << 2) + 0x344)
            ebx_2 = *(eax_11 + 0x340) * ecx_4
            
            if (ebx_2 s>= 0)
                eax_11 = 0xff
                
                if (ebx_2 s> 0xff)
                    ebx_2 = 0xff
            else
                ebx_2 = nullptr
            
            sub_6b58a0(eax_11, i_3, ebp_1, i_1, arg1, ebx_2, arg4)
            i = i_4
            i_3 = i_1
            arg1 = ebx_2
        
        i += 1
        eax_8 = var_c_1 + 4
        i_4 = i
        var_c_1 = eax_8
        ecx_2 = arg3
    while (i s< *(arg2 + 0x504))

int32_t eax_14 = ebp_1 - i_1

if (i_1 s< ebp_1)
    if (eax_14 u>= 8)
        float xmm1_1[0x4] = *((ebx_2 << 2) + &data_774930)
        float xmm1_2[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0)
        int32_t eax_15 = eax_14 & 0x80000007
        
        if (eax_15 s< 0)
            eax_15 = ((eax_15 - 1) | 0xfffffff8) + 1
        
        do
            *(arg4 + (i_1 << 2)) = _mm_mul_ps(*(arg4 + (i_1 << 2)), xmm1_2)
            *(arg4 + (i_1 << 2) + 0x10) = _mm_mul_ps(*(arg4 + (i_1 << 2) + 0x10), xmm1_2)
            i_1 += 8
        while (i_1 s< ebp_1 - eax_15)
    
    if (i_1 s< ebp_1)
        if (ebp_1 - i_1 s>= 4)
            float xmm1_3[0x4] = *((ebx_2 << 2) + &data_774930)
            float xmm1_4[0x4] = _mm_shuffle_ps(xmm1_3, xmm1_3, 0)
            void* eax_21 = &(*arg4)[2 + i_1]
            int32_t i_5 = ((ebp_1 - i_1 - 4) u>> 2) + 1
            i_1 += i_5 << 2
            int32_t i_2
            
            do
                eax_21 += 0x10
                *(eax_21 - 0x18) = _mm_mul_ps(*(eax_21 - 0x18), xmm1_4)
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        if (i_1 s< ebp_1)
            float xmm1_5 = *((ebx_2 << 2) + &data_774930)
            
            do
                (*arg4)[i_1] = (*arg4)[i_1] f* xmm1_5
                i_1 += 1
            while (i_1 s< ebp_1)

return 1
