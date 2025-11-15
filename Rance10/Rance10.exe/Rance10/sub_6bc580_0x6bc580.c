// 函数: sub_6bc580
// 地址: 0x6bc580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = arg3[0xa]
int32_t ebx = *arg3
int32_t var_18 = ebx
__alloca_probe_16(esi << 2)
int32_t __saved_edi
int32_t* ecx = &__saved_edi
int32_t* var_2c = &__saved_edi
int32_t i = 0
float xmm2_1 = *(arg3[1] + 4) + arg6

if (esi s> 0)
    do
        (&__saved_edi)[i] = 0xc61c3c00
        i += 1
    while (i s< arg3[0xa])

int128_t* eax_7 = arg3[1]
int32_t i_1 = 0
int32_t* esi_1 = arg5
float xmm1_1[0x4] = _mm_max_ss(*(eax_7 + 8), xmm2_1)
float xmm2_3[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0)

if (ebx s> 0)
    if (ebx u>= 8)
        ecx = arg3[4]
        int32_t* var_c_1 = ecx
        
        if (esi_1 u<= &ecx[ebx - 1])
            eax_7 = &esi_1[-1 + ebx]
        
        if (esi_1 u> &ecx[ebx - 1] || eax_7 u< ecx)
            eax_7 = &arg3[4]
            
            if (esi_1 u<= eax_7)
                ecx = &esi_1[-1 + ebx]
            
            if (esi_1 u> eax_7 || ecx u< eax_7)
                int32_t eax_9 = ebx & 0x80000007
                
                if (eax_9 s< 0)
                    eax_9 = ((eax_9 - 1) | 0xfffffff8) + 1
                
                ecx = esi_1
                
                do
                    float xmm0_1[0x4] = *(var_c_1 + (i_1 << 2))
                    eax_7 = 0x10 - esi_1 + ecx
                    i_1 += 8
                    *ecx = _mm_add_ps(xmm0_1, xmm2_3)
                    *(ecx + 0x10) = _mm_add_ps(*(eax_7 + var_c_1), xmm2_3)
                    ecx = &ecx[8]
                while (i_1 s< ebx - eax_9)
                
                ebx = var_18
                esi_1 = arg5
    
    if (i_1 s< ebx)
        eax_7 = ebx - i_1
        
        if (eax_7 s>= 4)
            ecx = 0xfffffff8 - esi_1
            int32_t* var_20_1 = ecx
            void* esi_3 = (i_1 << 2) + 8 + esi_1
            int32_t var_10_2 = ((ebx - i_1 - 4) u>> 2) + 1
            int32_t i_3 = ((ebx - i_1 - 4) u>> 2) + 1
            void* edx_1 = (i_1 << 2) + 8
            int32_t i_2
            
            do
                int32_t* ecx_4 = ecx + esi_3
                *(esi_3 - 8) = *(ecx_4 + arg3[4]) f+ xmm1_1
                *(esi_3 - 4) = *(ecx_4 + arg3[4] + 4) f+ xmm1_1
                float xmm0_9 = *(edx_1 + arg3[4])
                edx_1 += 0x10
                *esi_3 = xmm0_9 f+ xmm1_1
                eax_7 = arg3[4]
                ecx = var_20_1
                *(esi_3 + 4) = *(4 - esi_1 + esi_3 + eax_7) f+ xmm1_1
                esi_3 += 0x10
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
            i_1 += (((ebx - i_1 - 4) u>> 2) + 1) << 2
            ebx = var_18
            esi_1 = arg5
        
        for (; i_1 s< ebx; i_1 += 1)
            eax_7 = arg3[4]
            esi_1[i_1] = *(eax_7 + (i_1 << 2)) f+ xmm1_1

int32_t* var_40 = ecx
int32_t result =
    sub_6bbad0(sub_6bb840(eax_7, arg3[2], arg3, arg2, esi_1, var_2c, arg4), var_2c, arg3, esi_1)
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
