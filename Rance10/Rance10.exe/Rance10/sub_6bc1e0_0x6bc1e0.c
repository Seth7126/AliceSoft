// 函数: sub_6bc1e0
// 地址: 0x6bc1e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t i_7 = *arg3
void* edi = arg2
void* var_20 = edi
int32_t i_8 = i_7
int32_t eax_4
int32_t ecx
eax_4, ecx = __alloca_probe_16(i_7 << 2)
int32_t __saved_edi
int32_t* ebx = &__saved_edi
int32_t var_40 = ecx
int32_t* var_1c = &__saved_edi
sub_6bbbc0(eax_4, arg3[6], i_7, edi, arg4, 140f, 0xffffffff)
int32_t ecx_2 = 0

if (i_7 s> 0)
    float* edx_2 = arg4
    
    if (i_7 u>= 8 && (&__saved_edi u> &edx_2[-1 + i_7] || &(&__saved_edi)[i_7 - 1] u< edx_2)
            && (&__saved_edi u> edi - 4 + (i_7 << 2) || &(&__saved_edi)[i_7 - 1] u< edi))
        int32_t eax_14 = i_7 & 0x80000007
        
        if (eax_14 s< 0)
            eax_14 = ((eax_14 - 1) | 0xfffffff8) + 1
        
        int32_t var_c_2 = i_7 - eax_14
        void* eax_17 = &edx_2[4]
        i_7 = i_8
        int32_t* edi_1 = &__saved_edi
        
        do
            ecx_2 += 8
            *edi_1 = _mm_sub_ps(*(edi - &__saved_edi + edi_1), *(eax_17 - 0x10))
            edi_1 = &edi_1[8]
            *(&__saved_edi - edx_2 + eax_17) = _mm_sub_ps(*(edi - edx_2 + eax_17), *eax_17)
            ebx = var_1c
            eax_17 += 0x20
        while (ecx_2 s< var_c_2)
        
        edi = var_20
        edx_2 = arg4
    
    if (ecx_2 s< i_7)
        if (i_7 - ecx_2 s>= 4)
            int32_t eax_20 = i_7 - 3
            void* eax_24 = &edx_2[ecx_2 + 1]
            void* edx_8 = &ebx[ecx_2 + 2]
            
            do
                *(edx_8 - 8) = *(edi + (ecx_2 << 2)) f- *(eax_24 - 4)
                *(ebx - edx_2 + eax_24) = *(edi - edx_2 + eax_24) f- *eax_24
                i_7 = i_8
                *edx_8 = *(edi - ebx + edx_8) f- *(eax_24 + 4)
                float xmm0_9 = *(edi + (ecx_2 << 2) + 0xc)
                ecx_2 += 4
                float xmm0_10 = xmm0_9 f- *(eax_24 + 8)
                eax_24 += 0x10
                *(edx_8 + 4) = xmm0_10
                edx_8 += 0x10
            while (ecx_2 s< eax_20)
            
            ebx = var_1c
            edx_2 = arg4
        
        if (ecx_2 s< i_7)
            float* eax_25 = &edx_2[ecx_2]
            void* var_c_5 = edi - edx_2
            int32_t i_4 = i_7 - ecx_2
            edi = var_20
            int32_t i
            
            do
                *(ebx - edx_2 + eax_25) = *(var_c_5 + eax_25) - *eax_25
                eax_25 = &eax_25[1]
                i = i_4
                i_4 -= 1
            while (i != 1)
            i_7 = i_8

void* eax_26 = arg3[1]
int32_t* var_40_1 = arg3
void* result = sub_6bbbc0(eax_26, arg3[6], i_7, ebx, arg4, 0f, *(eax_26 + 0x80))
int32_t ecx_6 = 0

if (i_7 s> 0)
    if (i_7 u>= 8)
        result = edi + ((i_7 - 1) << 2)
        
        if (ebx u> result || &ebx[i_7 - 1] u< edi)
            int32_t eax_29 = i_7 & 0x80000007
            
            if (eax_29 s< 0)
                eax_29 = ((eax_29 - 1) | 0xfffffff8) + 1
            
            int32_t edx_14 = i_7 - eax_29
            result = &ebx[4]
            i_7 = i_8
            
            do
                float xmm1_5[0x4] = *(edi + (ecx_6 << 2))
                ecx_6 += 8
                *(result - 0x10) = _mm_sub_ps(xmm1_5, *(result - 0x10))
                *result = _mm_sub_ps(*(edi - ebx + result), *result)
                result += 0x20
            while (ecx_6 s< edx_14)
            
            ebx = var_1c
    
    if (ecx_6 s< i_7)
        result = i_7 - ecx_6
        
        if (result s>= 4)
            void* eax_34 = edi + ((ecx_6 + 3) << 2)
            void* var_10_4 = eax_34
            void* edi_4 = eax_34
            result = &ebx[ecx_6 + 1]
            int32_t i_5 = ((i_7 - ecx_6 - 4) u>> 2) + 1
            ecx_6 += i_5 << 2
            int32_t i_1
            
            do
                *(result - 4) = *(edi_4 - 0xc) f- *(result - 4)
                *result = *(edi - ebx + result) f- *result
                *(result + 4) = *(edi_4 - 4) f- *(result + 4)
                float xmm0_21 = *edi_4
                edi_4 += 0x10
                *(result + 8) = xmm0_21 f- *(result + 8)
                result += 0x10
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            edi = var_20
            ebx = var_1c
        
        if (ecx_6 s< i_7)
            result = &ebx[ecx_6]
            int32_t i_6 = i_7 - ecx_6
            int32_t i_2
            
            do
                *result = *(edi - ebx + result) f- *result
                result += 4
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
    
    if (i_7 s> 0)
        float* edx_22 = arg4
        void* ebx_6 = ebx - edx_22
        int32_t i_3
        
        do
            int32_t eax_36 = int.d(*edx_22 + 0.5f)
            
            if (eax_36 s>= 0x28)
                eax_36 = 0x27
            
            int32_t ecx_7 = 0
            
            if (eax_36 s>= 0)
                ecx_7 = eax_36
            
            result = arg3[1]
            *edx_22 = *(result + (ecx_7 << 2) + 0x150) f+ *(ebx_6 + edx_22)
            edx_22 = &edx_22[1]
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
