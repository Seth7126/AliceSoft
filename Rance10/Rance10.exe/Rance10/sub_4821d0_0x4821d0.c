// 函数: sub_4821d0
// 地址: 0x4821d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e9b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = *(arg1 + 0xc)
uint32_t ebx_2 = *arg4 u>> 1
int32_t __saved_ebp
uint32_t ecx_1 = (*(*edi + 0x18))(__security_cookie ^ &__saved_ebp)

if (ecx_1 == 0)
    ecx_1 = 4
    uint32_t esi_3 = ((*(*edi + 0x1c))() * (*(*edi + 0xc))()) u>> 3
    
    if (esi_3 != 0)
        ecx_1 = esi_3

void* result_1 = nullptr
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_8_1 = 0
sub_42c9c0(&result_1, ebx_2)
void* edi_1 = arg2
int32_t i = 0

if (ebx_2 u>= 4)
    void* result_3 = result_1
    void* edx_4 = edi_1 + 4
    
    do
        int32_t eax_11 = sx.d(*(edx_4 - 4))
        edx_4 += 8
        *(result_3 + (i << 2)) = _mm_cvtepi32_ps(zx.o(eax_11))
        *(result_3 + (i << 2) + 4) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_4 - 0xa))))
        *(result_3 + (i << 2) + 8) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_4 - 8))))
        *(result_3 + (i << 2) + 0xc) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_4 - 6))))
        i += 4
    while (i u< ebx_2 - 3)
    
    edi_1 = arg2

if (i u< ebx_2)
    void* result_2 = result_1
    
    do
        *(result_2 + (i << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + (i << 1)))))
        i += 1
    while (i u< ebx_2)

uint32_t ebx_3 = 0
int32_t* esi_4 = *(arg1 + 0x10)
int32_t eax_17 = *(arg1 + 0x14)
uint32_t ecx_8 = (eax_17 - esi_4 + 3) u>> 2

if (esi_4 u> eax_17)
    ecx_8 = 0

if (ecx_8 != 0)
    do
        (*(**esi_4 + 8))(&result_1, divu.dp.d(0:arg3, ecx_1))
        ebx_3 += 1
        esi_4 = &esi_4[1]
    while (ebx_3 != ecx_8)
    
    edi_1 = arg2

void* result = result_1

if (result != var_20)
    int32_t edx_5 = 0
    void* esi_6 = var_20 - result
    ebx_3 = (esi_6 + 3) u>> 2
    
    if (result u> var_20)
        ebx_3 = 0
    
    if (ebx_3 != 0)
        do
            int16_t ecx_11 = (int.d(fconvert.t(*result))).w
            edx_5 += 1
            edi_1 += 2
            result += 4
            *(edi_1 - 2) = ecx_11
        while (edx_5 != ebx_3)
    
    ebx_3.b = 1
    *arg4 = (esi_6 s>> 2) * 2
    result = result_1
else
    ebx_3.b = 0

if (result != 0)
    sub_403160(result, (var_1c - result) s>> 2, 4)

result.b = ebx_3.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
