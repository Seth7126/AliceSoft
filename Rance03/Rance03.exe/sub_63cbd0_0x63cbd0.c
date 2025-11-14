// 函数: sub_63cbd0
// 地址: 0x63cbd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = *(arg2 + 0x510)
int32_t* ecx_2 = arg3
int32_t eax_5
int32_t edx
edx:eax_5 = sx.q(*(*(*(*(arg1 + 0x40) + 4) + 0x1c) + (*(arg1 + 0x1c) << 2)))
int32_t ebx_1 = (eax_5 - edx) s>> 1

if (ecx_2 == 0)
    _memset(arg4, 0, ebx_1 << 2)
    return 0

void* const edi_2 = *(edi + 0x340) * *ecx_2
void* i_1 = nullptr
void* i_3 = nullptr

if (edi_2 s< 0)
    edi_2 = nullptr
else if (edi_2 s> 0xff)
    edi_2 = 0xff

int32_t i = 1
arg1 = edi_2
int32_t i_4 = 1

if (*(arg2 + 0x504) s> 1)
    void* eax_8 = arg2 + 0x108
    void* var_c_1 = eax_8
    
    do
        int32_t eax_9 = *eax_8
        int32_t eax_10 = ecx_2[eax_9]
        int32_t ecx_4 = eax_10 & 0x7fff
        
        if (ecx_4 == eax_10)
            void* const eax_11 = edi
            i_1 = *(eax_11 + (eax_9 << 2) + 0x344)
            edi_2 = *(eax_11 + 0x340) * ecx_4
            
            if (edi_2 s>= 0)
                eax_11 = 0xff
                
                if (edi_2 s> 0xff)
                    edi_2 = 0xff
            else
                edi_2 = nullptr
            
            sub_63af50(eax_11, i_3, ebx_1, i_1, arg1, edi_2, arg4)
            i = i_4
            i_3 = i_1
            arg1 = edi_2
        
        i += 1
        eax_8 = var_c_1 + 4
        i_4 = i
        var_c_1 = eax_8
        ecx_2 = arg3
    while (i s< *(arg2 + 0x504))

void* eax_14 = ebx_1 - i_1

if (i_1 s< ebx_1)
    if (eax_14 u>= 8)
        float xmm1_1[0x4] = *((edi_2 << 2) + &data_6f1f80)
        float xmm1_2[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0)
        void* eax_15 = eax_14 & 0x80000007
        
        if (eax_15 s< 0)
            eax_15 = ((eax_15 - 1) | 0xfffffff8) + 1
        
        void* eax_19 = &arg4[i_1 << 2]
        
        do
            float xmm0_1[0x4] = *eax_19
            i_1 += 8
            eax_19 += 0x20
            *(eax_19 - 0x20) = _mm_mul_ps(xmm0_1, xmm1_2)
            *(eax_19 - 0x10) = _mm_mul_ps(*(eax_19 - 0x10), xmm1_2)
        while (i_1 s< ebx_1 - eax_15)
    
    if (i_1 s< ebx_1)
        if (ebx_1 - i_1 s>= 4)
            float xmm1_3[0x4] = *((edi_2 << 2) + &data_6f1f80)
            float xmm1_4[0x4] = _mm_shuffle_ps(xmm1_3, xmm1_3, 0)
            void* eax_23 = &arg4[8 + (i_1 << 2)]
            int32_t i_5 = ((ebx_1 - i_1 - 4) u>> 2) + 1
            i_1 += i_5 << 2
            int32_t i_2
            
            do
                eax_23 += 0x10
                *(eax_23 - 0x18) = _mm_mul_ps(*(eax_23 - 0x18), xmm1_4)
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        if (i_1 s< ebx_1)
            float xmm1_5 = *((edi_2 << 2) + &data_6f1f80)
            
            do
                *(arg4 + (i_1 << 2)) = *(arg4 + (i_1 << 2)) * xmm1_5
                i_1 += 1
            while (i_1 s< ebx_1)

return 1
