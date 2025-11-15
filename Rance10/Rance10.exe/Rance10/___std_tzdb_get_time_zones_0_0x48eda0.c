// 函数: ___std_tzdb_get_time_zones@0
// 地址: 0x48eda0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f3f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_ebp
int32_t* result_2 = (*(*arg1 + 0x10))(__security_cookie ^ &__saved_ebp)
int32_t* result_1 = result_2
int32_t* eax_6 = &result_1
int32_t ecx_1 = arg4 - ((arg2[1] - *arg2) s>> 2)
uint32_t var_1c = ecx_1

if (result_2 u>= ecx_1)
    eax_6 = &var_1c

int32_t esi_1 = *eax_6

if (esi_1 != 0)
    var_1c = 0
    sub_48c850(arg2, &result_1, arg2[1], esi_1, &var_1c)
    var_1c = 0
    sub_48c850(arg3, &result_1, arg3[1], esi_1, &var_1c)

int32_t* var_34
sub_4275f0(&var_34, arg2)
int32_t var_8_1 = 0
int32_t* var_28
sub_4275f0(&var_28, arg3)
var_8_1.b = 1
int32_t eax_9 = arg1[3]
int32_t* esi_2 = arg1[2]
int32_t edi_1 = 0
uint32_t ecx_9 = (eax_9 - esi_2 + 3) u>> 2

if (esi_2 u> eax_9)
    ecx_9 = 0

var_1c = ecx_9

if (ecx_9 != 0)
    do
        (*(**esi_2 + 0xc))(&var_34, &var_28, arg4)
        edi_1 += 1
        esi_2 = &esi_2[1]
    while (edi_1 != var_1c)

int32_t* edi_3 = arg2
int32_t* result = arg1
int32_t esi_3 = result[6]
float xmm2[0x4] = 1f f- result[5]
int32_t edx_6 = (edi_3[1] - *edi_3) s>> 2
arg4 = edx_6

if (edx_6 u< esi_3)
    esi_3 = edx_6

int32_t ecx_11 = 0
float xmm3_1[0x4] = _mm_shuffle_ps(xmm2, xmm2, 0)

if (esi_3 != 0)
    if (esi_3 u>= 8)
        int32_t edi_2 = *edi_3
        int32_t* result_3 = *arg3
        result_1 = result_3
        var_1c = &result_3[esi_3 - 1]
        result = edi_2 - 4 + (esi_3 << 2)
        edx_6 = arg4
        
        if (*arg3 u> result || var_1c u< edi_2)
            var_1c = esi_3 & 0xfffffff8
            result = result_1
            
            do
                *(edi_2 + (ecx_11 << 2)) = _mm_mul_ps(xmm3_1, *(edi_2 + (ecx_11 << 2)))
                *(result + (ecx_11 << 2)) = _mm_mul_ps(xmm3_1, *(result + (ecx_11 << 2)))
                *(edi_2 + (ecx_11 << 2) + 0x10) =
                    _mm_mul_ps(*(edi_2 + (ecx_11 << 2) + 0x10), xmm3_1)
                *(result + (ecx_11 << 2) + 0x10) =
                    _mm_mul_ps(xmm3_1, *(result + (ecx_11 << 2) + 0x10))
                ecx_11 += 8
            while (ecx_11 u< var_1c)
        
        edi_3 = arg2
    
    if (ecx_11 u< esi_3)
        result = esi_3 - ecx_11
        
        if (result u>= 4)
            result = *edi_3
            var_1c = *arg3
            uint32_t edi_4 = var_1c
            result_1 = esi_3 - 3
            edx_6 = arg4
            
            do
                result[ecx_11] = result[ecx_11] f* xmm2
                *(edi_4 + (ecx_11 << 2)) = *(edi_4 + (ecx_11 << 2)) f* xmm2
                result[ecx_11 + 1] = result[ecx_11 + 1] f* xmm2
                *(edi_4 + (ecx_11 << 2) + 4) = *(edi_4 + (ecx_11 << 2) + 4) f* xmm2
                result[ecx_11 + 2] = result[ecx_11 + 2] f* xmm2
                *(edi_4 + (ecx_11 << 2) + 8) = *(edi_4 + (ecx_11 << 2) + 8) f* xmm2
                result[ecx_11 + 3] = result[ecx_11 + 3] f* xmm2
                *(edi_4 + (ecx_11 << 2) + 0xc) = *(edi_4 + (ecx_11 << 2) + 0xc) f* xmm2
                ecx_11 += 4
            while (ecx_11 u< result_1)
            
            edi_3 = arg2
        
        if (ecx_11 u< esi_3)
            result = *edi_3
            int32_t edi_6 = *arg3
            
            do
                result[ecx_11] = result[ecx_11] f* xmm2
                *(edi_6 + (ecx_11 << 2)) = *(edi_6 + (ecx_11 << 2)) f* xmm2
                ecx_11 += 1
            while (ecx_11 u< esi_3)

if (esi_3 u< edx_6)
    int32_t edi_7 = 0
    int32_t* ecx_12 = var_34
    int32_t eax_19 = *arg3
    int32_t* ecx_13 = var_28
    int32_t* edx_13 = *arg2 - eax_19
    int32_t* ecx_14 = eax_19 + (esi_3 << 2)
    result = arg4 - esi_3
    int32_t* i
    
    do
        *(edx_13 + ecx_14) = *(edx_13 + ecx_14) f* xmm2
        *ecx_14 = *ecx_14 f* xmm2
        *(edx_13 + ecx_14) = *(ecx_12 + edi_7) f* arg1[5] f+ *(edx_13 + ecx_14)
        float xmm0_33 = *(ecx_13 + edi_7)
        edi_7 += 4
        *ecx_14 = xmm0_33 f* arg1[5] f+ *ecx_14
        ecx_14 = &ecx_14[1]
        i = result
        result -= 1
    while (i != 1)

int32_t* ecx_15 = var_28

if (ecx_15 != 0)
    int32_t var_20
    result = sub_403160(ecx_15, (var_20 - ecx_15) s>> 2, 4)
    var_28 = nullptr
    int32_t var_24_1 = 0
    int32_t var_20_1 = 0

int32_t* ecx_16 = var_34
int32_t var_2c

if (ecx_16 != 0)
    result = sub_403160(ecx_16, (var_2c - ecx_16) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
