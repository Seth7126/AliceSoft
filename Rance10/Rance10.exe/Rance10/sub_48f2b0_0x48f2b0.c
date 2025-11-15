// 函数: sub_48f2b0
// 地址: 0x48f2b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f430
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_ebp
int32_t result_3 = (*(*arg1 + 0x10))(__security_cookie ^ &__saved_ebp)
int32_t result_1 = result_3
int32_t* eax_6 = &result_1
int32_t ecx_1 = arg4 - ((arg2[1] - *arg2) s>> 2)
uint32_t var_1c = ecx_1

if (result_3 u>= ecx_1)
    eax_6 = &var_1c

int32_t result_4 = *eax_6
result_1 = result_4

if (result_4 != 0)
    var_1c = 0
    void var_20
    sub_48c850(arg2, &var_20, arg2[1], result_4, &var_1c)
    var_1c = 0
    sub_48c850(arg3, &var_20, arg3[1], result_1, &var_1c)

int32_t* var_50
sub_4275f0(&var_50, arg2)
int32_t var_8_1 = 0
uint32_t var_44
sub_4275f0(&var_44, arg3)
var_8_1.b = 1
int32_t* var_38
sub_4275f0(&var_38, arg2)
var_8_1.b = 2
int32_t result_2
sub_4275f0(&result_2, arg3)
var_8_1.b = 3
int32_t result = arg1[3]
int32_t* esi_2 = arg1[2]
int32_t edi_1 = 0
uint32_t ecx_11 = (result - esi_2 + 3) u>> 2

if (esi_2 u> result)
    ecx_11 = 0

var_1c = ecx_11

if (ecx_11 != 0)
    do
        result = (*(**esi_2 + 0xc))(&var_50, &var_44, arg4)
        edi_1 += 1
        esi_2 = &esi_2[1]
    while (edi_1 != var_1c)

int32_t* ecx_14 = arg1
result_1 = 0
int32_t* esi_3 = ecx_14[5]
uint32_t edi_5 = (ecx_14[6] - esi_3 + 3) u>> 2

if (esi_3 u> ecx_14[6])
    edi_5 = 0

if (edi_5 != 0)
    do
        (*(**esi_3 + 0xc))(&var_38, &result_2, arg4)
        esi_3 = &esi_3[1]
        result = result_1 + 1
        result_1 = result
    while (result != edi_5)
    
    ecx_14 = arg1

int32_t* edi_6 = arg2
int32_t esi_4 = ecx_14[9]
float xmm1[0x4] = 1f f- ecx_14[8]
int32_t edx_5 = (edi_6[1] - *edi_6) s>> 2
arg4 = edx_5

if (edx_5 u< esi_4)
    esi_4 = edx_5

float xmm2_1[0x4] = _mm_shuffle_ps(xmm1, xmm1, 0)
int32_t ecx_15 = 0

if (esi_4 != 0)
    if (esi_4 u>= 8)
        int32_t edi_7 = *edi_6
        int32_t result_5 = *arg3
        result_1 = result_5
        var_1c = result_5 + (esi_4 << 2) - 4
        result = edi_7 - 4 + (esi_4 << 2)
        edx_5 = arg4
        
        if (*arg3 u> result || var_1c u< edi_7)
            var_1c = esi_4 & 0xfffffff8
            result = result_1
            
            do
                *(edi_7 + (ecx_15 << 2)) = _mm_mul_ps(*(edi_7 + (ecx_15 << 2)), xmm2_1)
                *(result + (ecx_15 << 2)) = _mm_mul_ps(*(result + (ecx_15 << 2)), xmm2_1)
                *(edi_7 + (ecx_15 << 2) + 0x10) =
                    _mm_mul_ps(*(edi_7 + (ecx_15 << 2) + 0x10), xmm2_1)
                *(result + (ecx_15 << 2) + 0x10) =
                    _mm_mul_ps(*(result + (ecx_15 << 2) + 0x10), xmm2_1)
                ecx_15 += 8
            while (ecx_15 u< var_1c)
        
        edi_6 = arg2
    
    if (ecx_15 u< esi_4)
        result = esi_4 - ecx_15
        
        if (result u>= 4)
            result = *edi_6
            var_1c = *arg3
            uint32_t edi_8 = var_1c
            result_1 = esi_4 - 3
            edx_5 = arg4
            
            do
                *(result + (ecx_15 << 2)) = *(result + (ecx_15 << 2)) f* xmm1
                *(edi_8 + (ecx_15 << 2)) = *(edi_8 + (ecx_15 << 2)) f* xmm1
                *(result + (ecx_15 << 2) + 4) = *(result + (ecx_15 << 2) + 4) f* xmm1
                *(edi_8 + (ecx_15 << 2) + 4) = *(edi_8 + (ecx_15 << 2) + 4) f* xmm1
                *(result + (ecx_15 << 2) + 8) = xmm1[0] f* *(result + (ecx_15 << 2) + 8)
                *(edi_8 + (ecx_15 << 2) + 8) = xmm1[0] f* *(edi_8 + (ecx_15 << 2) + 8)
                *(result + (ecx_15 << 2) + 0xc) = xmm1[0] f* *(result + (ecx_15 << 2) + 0xc)
                *(edi_8 + (ecx_15 << 2) + 0xc) = xmm1[0] f* *(edi_8 + (ecx_15 << 2) + 0xc)
                ecx_15 += 4
            while (ecx_15 u< result_1)
            
            edi_6 = arg2
        
        if (ecx_15 u< esi_4)
            result = *edi_6
            int32_t edi_10 = *arg3
            
            do
                *(result + (ecx_15 << 2)) = *(result + (ecx_15 << 2)) f* xmm1
                *(edi_10 + (ecx_15 << 2)) = *(edi_10 + (ecx_15 << 2)) f* xmm1
                ecx_15 += 1
            while (ecx_15 u< esi_4)

if (esi_4 u< edx_5)
    int32_t edx_10 = 0
    int32_t* ecx_16 = var_38
    int32_t* ecx_17 = var_50
    int32_t eax_20 = *arg3
    float* edi_12 = *arg2 - eax_20
    result_1 = result_2
    var_1c = var_44
    float* ecx_20 = eax_20 + (esi_4 << 2)
    result = arg4 - esi_4
    int32_t i
    
    do
        *(edi_12 + ecx_20) = *(edi_12 + ecx_20) f* xmm1
        *ecx_20 = *ecx_20 f* xmm1
        float* esi_8 = var_1c
        *(edi_12 + ecx_20) =
            (*(ecx_17 + edx_10) f+ *(ecx_16 + edx_10)) f* arg1[8] f+ *(edi_12 + ecx_20)
        float xmm0_38 = *(esi_8 + edx_10) f+ *(result_1 + edx_10)
        edx_10 += 4
        *ecx_20 = xmm0_38 f* arg1[8] + *ecx_20
        ecx_20 = &ecx_20[1]
        i = result
        result -= 1
    while (i != 1)

int32_t result_6 = result_2

if (result_6 != 0)
    int32_t var_24
    result = sub_403160(result_6, (var_24 - result_6) s>> 2, 4)
    result_2 = 0
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0

int32_t* ecx_21 = var_38

if (ecx_21 != 0)
    int32_t var_30
    result = sub_403160(ecx_21, (var_30 - ecx_21) s>> 2, 4)
    var_38 = nullptr
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0

uint32_t ecx_22 = var_44

if (ecx_22 != 0)
    int32_t var_3c
    result = sub_403160(ecx_22, (var_3c - ecx_22) s>> 2, 4)
    var_44 = 0
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0

int32_t* ecx_23 = var_50
int32_t var_48

if (ecx_23 != 0)
    result = sub_403160(ecx_23, (var_48 - ecx_23) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
