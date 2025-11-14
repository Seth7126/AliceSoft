// 函数: sub_641a90
// 地址: 0x641a90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* ebx = arg2
int32_t i_9 = *arg3
int32_t* var_2c = ebx
int32_t i_10 = i_9
int32_t eax_4
int32_t ecx
eax_4, ecx = __alloca_probe_16(i_9 << 2)
int128_t* edi = arg4
int32_t __saved_edi
int32_t* var_c = &__saved_edi
int32_t var_40 = ecx
sub_641440(eax_4, arg3[6], i_9, ebx, edi, 140f, 0xffffffff)
int32_t i = 0

if (i_9 s> 0)
    int32_t* edx_2 = var_c
    
    if (i_9 u>= 8 && (edx_2 u> edi - 4 + (i_9 << 2) || &edx_2[-1 + i_9] u< edi)
            && (edx_2 u> &ebx[-1 + i_9] || &edx_2[-1 + i_9] u< ebx))
        int32_t eax_14 = i_9 & 0x80000007
        
        if (eax_14 s< 0)
            eax_14 = ((eax_14 - 1) | 0xfffffff8) + 1
        
        void* eax_17 = &ebx[4]
        int128_t* edi_3 = arg4
        
        do
            i += 8
            *(var_c - arg4 + edi_3) = _mm_sub_ps(*(eax_17 - 0x10), *edi_3)
            edi_3 = &edi_3[2]
            *(edx_2 - ebx + eax_17) = _mm_sub_ps(*eax_17, *(arg4 - ebx + eax_17))
            eax_17 += 0x20
        while (i s< i_9 - eax_14)
        
        i_9 = i_10
        edi = arg4
        ebx = var_2c
        edx_2 = var_c
    
    if (i s< i_9)
        if (i_9 - i s>= 4)
            int32_t eax_20 = i_9 - 3
            void* eax_24 = edi + ((i + 1) << 2)
            void* edx_5 = &edx_2[i + 2]
            
            do
                *(edx_5 - 8) = ebx[i] f- *(eax_24 - 4)
                *(edx_2 - edi + eax_24) = *(ebx - edi + eax_24) f- *eax_24
                i_9 = i_10
                *edx_5 = *(ebx - edx_2 + edx_5) f- *(eax_24 + 4)
                float xmm0_10 = ebx[i + 3]
                i += 4
                float xmm0_11 = xmm0_10 f- *(eax_24 + 8)
                eax_24 += 0x10
                *(edx_5 + 4) = xmm0_11
                edx_5 += 0x10
            while (i s< eax_20)
            
            edi = arg4
            edx_2 = var_c
        
        if (i s< i_9)
            void* eax_25 = edi + (i << 2)
            int32_t i_8 = i_9 - i
            int32_t i_1
            
            do
                *(edx_2 - edi + eax_25) = *(eax_25 + ebx - edi) f- *eax_25
                eax_25 += 4
                i_1 = i_8
                i_8 -= 1
            while (i_1 != 1)
            edi = arg4

void* eax_26 = arg3[1]
int32_t* var_40_1 = arg3
int32_t* result = sub_641440(eax_26, arg3[6], i_9, var_c, edi, 0f, *(eax_26 + 0x80))
int32_t i_2 = 0

if (i_9 s> 0)
    int32_t* ecx_5 = var_c
    
    if (i_9 u>= 8)
        if (ecx_5 u<= &ebx[i_9 - 1])
            result = &ecx_5[-1 + i_9]
        
        if (ecx_5 u> &ebx[i_9 - 1] || result u< ebx)
            int32_t eax_31 = i_9 & 0x80000007
            
            if (eax_31 s< 0)
                eax_31 = ((eax_31 - 1) | 0xfffffff8) + 1
            
            result = &ecx_5[4]
            int32_t* edi_10 = ebx
            
            do
                i_2 += 8
                float xmm0_14[0x4] = *edi_10
                edi_10 = &edi_10[8]
                *(result - 0x10) = _mm_sub_ps(xmm0_14, *(result - 0x10))
                *result = _mm_sub_ps(*(result + ebx - ecx_5), *result)
                result = &result[8]
            while (i_2 s< i_9 - eax_31)
            
            edi = arg4
            ecx_5 = var_c
    
    if (i_2 s< i_9)
        result = i_9 - i_2
        
        if (result s>= 4)
            result = &ecx_5[i_2 + 1]
            void* ecx_7 = &ebx[i_2 + 3]
            int32_t i_6 = ((i_9 - i_2 - 4) u>> 2) + 1
            i_2 += (((i_9 - i_2 - 4) u>> 2) + 1) << 2
            edi = arg4
            int32_t i_3
            
            do
                result[-1] = *(ecx_7 - 0xc) f- result[-1]
                *result = *(result + ebx - ecx_5) f- *result
                result[1] = *(ecx_7 - 4) f- result[1]
                float xmm0_23 = *ecx_7
                ecx_7 += 0x10
                result[2] = xmm0_23 f- result[2]
                result = &result[4]
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
            ebx = var_2c
            ecx_5 = var_c
        
        if (i_2 s< i_9)
            result = &ecx_5[i_2]
            int32_t i_7 = i_9 - i_2
            int32_t i_4
            
            do
                *result = *(result + ebx - ecx_5) f- *result
                result = &result[1]
                i_4 = i_7
                i_7 -= 1
            while (i_4 != 1)
    
    if (i_9 s> 0)
        float* edx_10 = var_c - edi
        int32_t i_5
        
        do
            int32_t ecx_9 = int.d(*edi + 0.5f)
            
            if (ecx_9 s>= 0x28)
                ecx_9 = 0x27
            else if (ecx_9 s< 0)
                ecx_9 = 0
            
            result = arg3[1]
            *edi = result[ecx_9 + 0x54] f+ *(edx_10 + edi)
            edi += 4
            i_5 = i_9
            i_9 -= 1
        while (i_5 != 1)

sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
