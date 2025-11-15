// 函数: sub_632690
// 地址: 0x632690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7457c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_1c = arg1
int32_t var_8_1 = 0
int32_t esi = arg1[3]
char* edx_3 = arg1[6] & ((((zx.d(*arg3) ^ 0x811c9dc5) * 0x1000193) ^ zx.d(arg3[1])) * 0x1000193)
int32_t eax_7 = *(esi + (edx_3 << 3))
void* esi_1

if (eax_7 != arg1[1])
    esi_1 = **(esi + (edx_3 << 3) + 4)
else
    esi_1 = arg1[1]

while (esi_1 != eax_7)
    esi_1 = *(esi_1 + 4)
    
    if (*arg3 == *(esi_1 + 8))
        *arg4[1] = *arg4
        *(*arg4 + 4) = arg4[1]
        arg1[2] -= 1
        sub_403160(arg4, 1, 0xc)
        *arg2 = esi_1
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2

int32_t* var_18 = arg4
void* eax_8 = *arg4

if (esi_1 != eax_8)
    *arg4[1] = eax_8
    **(eax_8 + 4) = esi_1
    **(esi_1 + 4) = arg4
    int32_t edx_4 = *(esi_1 + 4)
    *(esi_1 + 4) = *(eax_8 + 4)
    *(eax_8 + 4) = arg4[1]
    arg4[1] = edx_4

int32_t ecx_7 = arg1[3]
int32_t eax_9 = *(ecx_7 + (edx_3 << 3))

if (eax_9 == arg1[1])
    *(ecx_7 + (edx_3 << 3)) = arg4
    *(arg1[3] + (edx_3 << 3) + 4) = arg4
else if (eax_9 != esi_1)
    int32_t eax_15 = **(ecx_7 + (edx_3 << 3) + 4)
    *(ecx_7 + (edx_3 << 3) + 4) = eax_15
    
    if (eax_15 != arg4)
        int32_t ecx_12 = arg1[3]
        *(ecx_12 + (edx_3 << 3) + 4) = *(*(ecx_12 + (edx_3 << 3) + 4) + 4)
else
    *(ecx_7 + (edx_3 << 3)) = arg4

int32_t var_8_2 = 2
int32_t eax_18 = arg1[2]
int32_t ecx_13 = arg1[7]

if (not(_mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_18)) f+ *((eax_18 u>> 0x1f << 3) + &data_79aa70))
        / _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(ecx_13)) f+ *((ecx_13 u>> 0x1f << 3) + &data_79aa70))
        f<= *arg1))
    if (ecx_13 u< 0x200)
        ecx_13 <<= 3
    else if (ecx_13 u< 0x1fffffff)
        ecx_13 *= 2
    
    int32_t var_30_1 = ecx_13
    sub_490d70(arg1)
    sub_631960(arg1)

*arg2 = arg4
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
