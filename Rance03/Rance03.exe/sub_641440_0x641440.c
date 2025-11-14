// 函数: sub_641440
// 地址: 0x641440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = arg3
float edi
float var_60 = edi
int32_t var_1c = ebx
int32_t esi = ebx << 2
__alloca_probe_16(esi)
int32_t* edi_1 = &var_60
int32_t* var_28 = &var_60
__alloca_probe_16(esi)
int32_t* var_24 = &var_60
__alloca_probe_16(esi)
int32_t* var_2c = &var_60
__alloca_probe_16(esi)
int32_t* var_30 = &var_60
__alloca_probe_16(esi)
int32_t xmm4 = (zx.o(0)).d
int32_t xmm1 = (zx.o(0)).d
int32_t xmm6 = (zx.o(0)).d
float var_c = 0f
int32_t var_14 = 0
float xmm7 = 1f
float xmm5_1 = *arg4 + arg6
float var_34 = 0f

if (not(1f <= xmm5_1))
    xmm5_1 = 1f

float var_3c = 1f
float xmm0_2 = xmm5_1 * xmm5_1 * 0.5f
var_60 = xmm0_2
float xmm2_1 = xmm0_2 * xmm5_1
*var_24 = xmm0_2
*var_2c = 0
float var_18 = xmm2_1
float xmm2_2 = arg6
*var_30 = xmm2_1
var_60 = 0f

if (ebx s> 1)
    int32_t __saved_esi
    int32_t* eax_7 = &__saved_esi
    float xmm6_1 = xmm0_2
    float xmm7_1 = xmm6_1
    int32_t i_3 = ebx - 1
    int32_t i
    
    do
        float xmm5_3 = *(arg4 - &var_60 + eax_7) + xmm2_2
        
        if (not(1f <= xmm5_3))
            xmm5_3 = 1f
        
        float xmm2_4 = xmm5_3 * xmm5_3
        float xmm1_2 = var_3c * xmm2_4
        xmm6_1 = xmm6_1 + xmm2_4
        xmm7_1 = xmm7_1 + xmm1_2
        float xmm2_6 = xmm2_4 * xmm5_3 + var_18
        float xmm1_4 = xmm1_2 * xmm5_3 + var_34
        xmm4 = xmm4 f+ xmm1_2 * var_3c
        *eax_7 = xmm6_1
        *(var_24 - &var_60 + eax_7) = xmm7_1
        xmm2_2 = arg6
        var_18 = xmm2_6
        *(var_2c - &var_60 + eax_7) = xmm4
        *(var_30 - &var_60 + eax_7) = xmm2_6
        *eax_7 = xmm1_4
        eax_7 = &eax_7[1]
        var_34 = xmm1_4
        i = i_3
        i_3 -= 1
        var_3c = var_3c + 1f
    while (i != 1)
    xmm6 = var_14
    xmm4 = (zx.o(0)).d
    ebx = var_1c
    xmm7 = 1f
    edi_1 = var_28
    xmm1 = xmm6

int32_t i_2 = 0
int32_t esi_4 = arg5
int32_t xmm5_4 = (zx.o(0)).d
int32_t eax_9 = *arg2
int32_t i_1 = eax_9 s>> 0x10

if (i_1 s< 0)
    float* edi_4 = nullptr
    
    do
        int32_t edx_4 = neg.d(i_1)
        uint32_t eax_10 = zx.d(eax_9.w)
        float xmm3_2 = var_24[eax_10] f- var_24[edx_4]
        float xmm2_8 = var_28[edx_4] f+ var_28[eax_10]
        float xmm7_3 = var_2c[edx_4] f+ var_2c[eax_10]
        float xmm1_6 = var_30[edx_4] f+ var_30[eax_10]
        float xmm6_3 = (&var_60)[eax_10] - (&var_60)[edx_4]
        esi_4 = arg5
        float xmm4_2 = xmm1_6 * xmm7_3 - xmm6_3 * xmm3_2
        xmm6 = xmm6_3 * xmm2_8 - xmm1_6 * xmm3_2
        xmm1 = xmm4_2
        var_c = xmm4_2
        xmm7 = xmm7_3 * xmm2_8 - xmm3_2 * xmm3_2
        xmm4 = (zx.o(0)).d
        float xmm0_17 = (xmm5_4 f* xmm6 f+ xmm1) / xmm7
        
        if (not(0 f<= xmm0_17))
            xmm0_17 = (zx.o(0)).d
        
        xmm2_2 = arg6
        i_2 += 1
        xmm5_4 = xmm5_4 f+ 1f
        *(edi_4 + esi_4) = xmm0_17 - xmm2_2
        edi_4 = i_2 << 2
        eax_9 = *(edi_4 + arg2)
        i_1 = eax_9 s>> 0x10
    while (i_1 s< 0)
    
    ebx = var_1c
    edi_1 = var_28

int32_t eax_13 = arg2[i_2]
uint32_t result = zx.d(eax_13.w)
int32_t edx_7 = eax_13 s>> 0x10

while (result s< ebx)
    float xmm2_10 = edi_1[result] f- edi_1[edx_7]
    float xmm3_5 = var_24[result] f- var_24[edx_7]
    float xmm7_6 = var_2c[result] f- var_2c[edx_7]
    float xmm1_9 = var_30[result] f- var_30[edx_7]
    float xmm6_6 = (&var_60)[result] - (&var_60)[edx_7]
    ebx = var_1c
    float xmm4_4 = xmm1_9 * xmm7_6 - xmm6_6 * xmm3_5
    xmm6 = xmm6_6 * xmm2_10 - xmm1_9 * xmm3_5
    xmm1 = xmm4_4
    var_c = xmm4_4
    xmm7 = xmm7_6 * xmm2_10 - xmm3_5 * xmm3_5
    xmm4 = (zx.o(0)).d
    float xmm0_26 = (xmm5_4 f* xmm6 f+ xmm1) / xmm7
    
    if (not(0 f<= xmm0_26))
        xmm0_26 = (zx.o(0)).d
    
    xmm2_2 = arg6
    xmm5_4 = xmm5_4 f+ 1f
    *(esi_4 + (i_2 << 2)) = xmm0_26 - xmm2_2
    i_2 += 1
    int32_t eax_15 = arg2[i_2]
    result = zx.d(eax_15.w)
    edx_7 = eax_15 s>> 0x10

for (; i_2 s< ebx; i_2 += 1)
    float xmm0_32 = (xmm5_4 f* xmm6 f+ xmm1) * 1f / xmm7
    
    if (not(0 f<= xmm0_32))
        xmm0_32 = (zx.o(0)).d
    
    xmm5_4 = xmm5_4 f+ 1f
    *(esi_4 + (i_2 << 2)) = xmm0_32 - xmm2_2

int32_t edi_5 = arg7

if (edi_5 s> 0)
    int32_t ecx_6 = 0
    int32_t eax_17
    int32_t edx_9
    edx_9:eax_17 = sx.q(edi_5)
    result = (eax_17 - edx_9) s>> 1
    float xmm5_7
    
    if (result - edi_5 s>= 0)
        xmm5_7 = var_c
    else
        uint32_t ebx_6 = result << 2
        float* edx_13 = neg.d(result - edi_5) << 2
        int32_t var_10_1 = result - arg7
        uint32_t eax_19 = result << 2
        int32_t edi_11 = (arg7 - result) << 2
        int32_t temp2_1
        
        do
            float xmm2_12 = *(edx_13 + var_28) f+ *(eax_19 + var_28)
            float xmm3_8 = *(eax_19 + var_24) f- *(edx_13 + var_24)
            float xmm7_9 = *(edx_13 + var_2c) f+ *(eax_19 + var_2c)
            float xmm1_12 = *(edx_13 + var_30) f+ *(eax_19 + var_30)
            float xmm6_9 = *(eax_19 + &var_60) f- *(edx_13 + &var_60)
            esi_4 = arg5
            xmm6 = xmm6_9 * xmm2_12 - xmm1_12 * xmm3_8
            xmm2_2 = arg6
            xmm5_7 = xmm1_12 * xmm7_9 - xmm6_9 * xmm3_8
            xmm7 = xmm7_9 * xmm2_12 - xmm3_8 * xmm3_8
            float xmm1_18 = (xmm4 f* xmm6 + xmm5_7) / xmm7 - xmm2_2
            
            if (not(*(esi_4 + (ecx_6 << 2)) f<= xmm1_18))
                *(esi_4 + (ecx_6 << 2)) = xmm1_18
            
            edi_11 -= 4
            ebx_6 += 4
            xmm4 = xmm4 f+ 1f
            ecx_6 += 1
            eax_19 = ebx_6
            temp2_1 = var_10_1
            var_10_1 += 1
            edx_13 = edi_11
        while (temp2_1 + 1 s< 0)
        ebx = var_1c
        edi_5 = arg7
    
    int32_t edx_14 = result + ecx_6
    
    if (edx_14 s< ebx)
        result = (result - arg7 + ecx_6) << 2
        float* result_1 = (edx_14 - edi_5) << 2
        int32_t var_34_1 = edx_14 << 2
        int32_t var_10_2 = edx_14 << 2
        
        do
            float xmm2_14 = *(var_34_1 + var_28) f- *(result_1 + var_28)
            float xmm3_11 = *(var_34_1 + var_24) f- *(result_1 + var_24)
            float xmm7_12 = *(var_34_1 + var_2c) f- *(result_1 + var_2c)
            float xmm1_20 = *(var_34_1 + var_30) f- *(result_1 + var_30)
            float xmm6_12 = *(var_34_1 + &var_60) f- *(result_1 + &var_60)
            esi_4 = arg5
            ebx = var_1c
            xmm6 = xmm6_12 * xmm2_14 - xmm1_20 * xmm3_11
            xmm2_2 = arg6
            xmm5_7 = xmm1_20 * xmm7_12 - xmm6_12 * xmm3_11
            xmm7 = xmm7_12 * xmm2_14 - xmm3_11 * xmm3_11
            float xmm1_26 = (xmm4 f* xmm6 + xmm5_7) / xmm7 - xmm2_2
            
            if (not(*(esi_4 + (ecx_6 << 2)) f<= xmm1_26))
                *(esi_4 + (ecx_6 << 2)) = xmm1_26
            
            result += 4
            int32_t edi_13 = var_10_2 + 4
            edx_14 += 1
            var_10_2 = edi_13
            ecx_6 += 1
            var_34_1 = edi_13
            xmm4 = xmm4 f+ 1f
            result_1 = result
        while (edx_14 s< ebx)
    
    if (ecx_6 s< ebx)
        float xmm0_40 = 1f / xmm7
        float var_14_3 = xmm0_40
        
        do
            float xmm1_31 = (xmm4 f* xmm6 + xmm5_7) * xmm0_40 - xmm2_2
            
            if (not(*(esi_4 + (ecx_6 << 2)) f<= xmm1_31))
                *(esi_4 + (ecx_6 << 2)) = xmm1_31
            
            xmm0_40 = var_14_3
            xmm4 = xmm4 f+ 1f
            ecx_6 += 1
        while (ecx_6 s< ebx)

sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
