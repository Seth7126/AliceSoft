// 函数: sub_6bbbc0
// 地址: 0x6bbbc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = arg3
float edi
float var_5c = edi
int32_t var_2c = ebx
int32_t esi = ebx << 2
__alloca_probe_16(esi)
int32_t* edi_1 = &var_5c
int32_t* var_38 = &var_5c
__alloca_probe_16(esi)
int32_t* var_1c = &var_5c
__alloca_probe_16(esi)
int32_t* var_20 = &var_5c
__alloca_probe_16(esi)
int32_t* var_24 = &var_5c
__alloca_probe_16(esi)
int32_t xmm4 = (zx.o(0)).d
float xmm3 = arg6
int32_t xmm5 = (zx.o(0)).d
float xmm6 = 1f
int32_t var_18 = 0
float var_44 = 0f
float var_14 = 0f
float xmm0_2 = _mm_max_ss(*arg4 + xmm3, 0x3f800000)
float xmm1_2 = xmm0_2 * xmm0_2 * 0.5f
var_5c = xmm1_2
float xmm7_1 = xmm1_2 * xmm0_2
*var_1c = xmm1_2
*var_20 = 0
float var_10 = xmm1_2
*var_24 = xmm7_1
int32_t xmm7_2 = (zx.o(0)).d
var_5c = 0f

if (ebx s> 1)
    float xmm5_1 = xmm1_2
    float xmm7_3 = 1f
    float xmm6_1 = xmm7_1
    float xmm4_1 = xmm5_1
    int32_t i_3 = ebx - 1
    float __saved_esi
    float* eax_12 = &__saved_esi
    int32_t i
    
    do
        edi_1 = var_38
        float xmm3_3 = _mm_max_ss(*(arg4 - &var_5c + eax_12) + arg6, 0x3f800000)
        float xmm2_2 = xmm3_3 * xmm3_3
        float xmm1_4 = xmm7_3 * xmm2_2
        xmm5_1 = xmm5_1 + xmm2_2
        xmm4_1 = xmm4_1 + xmm1_4
        xmm6_1 = xmm6_1 + xmm2_2 * xmm3_3
        *eax_12 = xmm5_1
        float xmm1_6 = xmm1_4 * xmm3_3 + var_44
        float xmm0_8 = xmm1_4 * xmm7_3 + var_14
        *(var_1c - &var_5c + eax_12) = xmm4_1
        xmm7_3 = xmm7_3 + 1f
        var_14 = xmm0_8
        *(var_20 - &var_5c + eax_12) = var_14
        *(var_24 - &var_5c + eax_12) = xmm6_1
        *eax_12 = xmm1_6
        eax_12 = &eax_12[1]
        i = i_3
        i_3 -= 1
        var_44 = xmm1_6
    while (i != 1)
    xmm5 = var_18
    xmm4 = (zx.o(0)).d
    xmm3 = arg6
    xmm6 = 1f
    ebx = var_2c
    xmm7_2 = xmm5

int32_t i_2 = 0
int32_t esi_2 = arg5
int32_t xmm1_8 = (zx.o(0)).d
int32_t var_10_1 = 0
int32_t eax_14 = *arg2
int32_t i_1 = eax_14 s>> 0x10

if (i_1 s< 0)
    int32_t* var_c_1 = nullptr
    
    do
        uint32_t eax_15 = zx.d(eax_14.w)
        int32_t edx_4 = neg.d(i_1)
        i_2 += 1
        float xmm2_5 = edi_1[eax_15] f+ edi_1[edx_4]
        float xmm3_5 = var_1c[eax_15] f- var_1c[edx_4]
        float xmm6_3 = var_20[eax_15] f+ var_20[edx_4]
        float xmm1_10 = var_24[eax_15] f+ var_24[edx_4]
        float xmm5_3 = (&var_5c)[eax_15] - (&var_5c)[edx_4]
        edi_1 = var_38
        xmm7_2 = xmm1_10 * xmm6_3 - xmm5_3 * xmm3_5
        xmm5 = xmm5_3 * xmm2_5 - xmm1_10 * xmm3_5
        float xmm1_12 = var_10_1
        xmm6 = xmm6_3 * xmm2_5 - xmm3_5 * xmm3_5
        xmm3 = arg6
        xmm1_8 = xmm1_12 + 1f
        var_10_1 = xmm1_8
        *(var_c_1 + esi_2) = _mm_max_ss((xmm1_12 f* xmm5 f+ xmm7_2) / xmm6, 0) - xmm3
        int32_t* eax_17 = i_2 << 2
        var_c_1 = eax_17
        eax_14 = *(eax_17 + arg2)
        i_1 = eax_14 s>> 0x10
    while (i_1 s< 0)
    
    ebx = var_2c

int32_t eax_19 = arg2[i_2]
uint32_t result = zx.d(eax_19.w)
int32_t edx_8 = eax_19 s>> 0x10
uint32_t result_1 = result

while (result s< ebx)
    float xmm2_7 = edi_1[result] f- edi_1[edx_8]
    float xmm3_8 = var_1c[result_1] f- var_1c[edx_8]
    float xmm6_6 = var_20[result_1] f- var_20[edx_8]
    float xmm1_14 = var_24[result_1] f- var_24[edx_8]
    float xmm5_6 = (&var_5c)[result_1] - (&var_5c)[edx_8]
    ebx = var_2c
    xmm7_2 = xmm1_14 * xmm6_6 - xmm5_6 * xmm3_8
    xmm5 = xmm5_6 * xmm2_7 - xmm1_14 * xmm3_8
    xmm6 = xmm6_6 * xmm2_7 - xmm3_8 * xmm3_8
    xmm3 = arg6
    xmm1_8 = var_10_1 f+ 1f
    float xmm0_21 = var_10_1 f* xmm5
    var_10_1 = xmm1_8
    *(esi_2 + (i_2 << 2)) = _mm_max_ss((xmm0_21 f+ xmm7_2) / xmm6, 0) - xmm3
    i_2 += 1
    int32_t eax_24 = arg2[i_2]
    result = zx.d(eax_24.w)
    edx_8 = eax_24 s>> 0x10
    result_1 = result

for (; i_2 s< ebx; i_2 += 1)
    float xmm0_27 = xmm1_8
    xmm1_8 = xmm1_8 f+ 1f
    *(esi_2 + (i_2 << 2)) = _mm_max_ss((xmm0_27 f* xmm5 f+ xmm7_2) * 1f / xmm6, 0) - xmm3

int32_t edi_5 = arg7

if (edi_5 s> 0)
    int32_t ecx_3 = 0
    int32_t eax_26
    int32_t edx_10
    edx_10:eax_26 = sx.q(edi_5)
    result = (eax_26 - edx_10) s>> 1
    
    if (result - edi_5 s< 0)
        uint32_t ebx_4 = result << 2
        int32_t var_c_2 = result - arg7
        int32_t edx_14 = neg.d(result - edi_5) << 2
        uint32_t eax_28 = result << 2
        int32_t edi_11 = (arg7 - result) << 2
        int32_t temp2_1
        
        do
            float xmm2_9 = *(edx_14 + var_38) f+ *(ebx_4 + var_38)
            float xmm3_11 = *(ebx_4 + var_1c) f- *(edx_14 + var_1c)
            float xmm6_9 = *(edx_14 + var_20) f+ *(ebx_4 + var_20)
            float xmm1_18 = *(edx_14 + var_24) f+ *(ebx_4 + var_24)
            float xmm5_9 = *(ebx_4 + &var_5c) f- *(edx_14 + &var_5c)
            esi_2 = arg5
            xmm5 = xmm5_9 * xmm2_9 - xmm1_18 * xmm3_11
            xmm7_2 = xmm1_18 * xmm6_9 - xmm5_9 * xmm3_11
            xmm6 = xmm6_9 * xmm2_9 - xmm3_11 * xmm3_11
            xmm3 = arg6
            float xmm1_24 = (xmm4 f* xmm5 f+ xmm7_2) / xmm6 - xmm3
            
            if (not(*(esi_2 + (ecx_3 << 2)) f<= xmm1_24))
                *(esi_2 + (ecx_3 << 2)) = xmm1_24
            
            edi_11 -= 4
            eax_28 += 4
            xmm4 = xmm4 f+ 1f
            ecx_3 += 1
            ebx_4 = eax_28
            temp2_1 = var_c_2
            var_c_2 += 1
            edx_14 = edi_11
        while (temp2_1 + 1 s< 0)
        ebx = var_2c
        edi_5 = arg7
    
    int32_t edx_15 = result + ecx_3
    
    if (edx_15 s< ebx)
        result = (result - arg7 + ecx_3) << 2
        float* result_2 = (edx_15 - edi_5) << 2
        int32_t var_30_1 = edx_15 << 2
        int32_t var_c_3 = edx_15 << 2
        
        do
            float xmm2_11 = *(var_30_1 + var_38) f- *(result_2 + var_38)
            float xmm3_14 = *(var_30_1 + var_1c) f- *(result_2 + var_1c)
            float xmm6_12 = *(var_30_1 + var_20) f- *(result_2 + var_20)
            float xmm1_26 = *(var_30_1 + var_24) f- *(result_2 + var_24)
            float xmm5_12 = *(var_30_1 + &var_5c) f- *(result_2 + &var_5c)
            esi_2 = arg5
            ebx = var_2c
            xmm5 = xmm5_12 * xmm2_11 - xmm1_26 * xmm3_14
            xmm7_2 = xmm1_26 * xmm6_12 - xmm5_12 * xmm3_14
            xmm6 = xmm6_12 * xmm2_11 - xmm3_14 * xmm3_14
            xmm3 = arg6
            float xmm1_32 = (xmm4 f* xmm5 f+ xmm7_2) / xmm6 - xmm3
            
            if (not(*(esi_2 + (ecx_3 << 2)) f<= xmm1_32))
                *(esi_2 + (ecx_3 << 2)) = xmm1_32
            
            result += 4
            int32_t edi_13 = var_c_3 + 4
            edx_15 += 1
            var_c_3 = edi_13
            ecx_3 += 1
            var_30_1 = edi_13
            xmm4 = xmm4 f+ 1f
            result_2 = result
        while (edx_15 s< ebx)
    
    if (ecx_3 s< ebx)
        float xmm0_39 = 1f / xmm6
        float var_18_3 = xmm0_39
        
        do
            float xmm1_37 = (xmm4 f* xmm5 f+ xmm7_2) * xmm0_39 - xmm3
            
            if (not(*(esi_2 + (ecx_3 << 2)) f<= xmm1_37))
                *(esi_2 + (ecx_3 << 2)) = xmm1_37
            
            xmm0_39 = var_18_3
            xmm4 = xmm4 f+ 1f
            ecx_3 += 1
        while (ecx_3 s< ebx)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
