// 函数: sub_482000
// 地址: 0x482000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e9b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = *(arg1 + 0xc)
int32_t ebx_1 = *arg4
int32_t __saved_ebp
uint32_t ecx_1 = (*(*edi + 0x18))(__security_cookie ^ &__saved_ebp)

if (ecx_1 == 0)
    ecx_1 = 4
    uint32_t esi_3 = ((*(*edi + 0x1c))() * (*(*edi + 0xc))()) u>> 3
    
    if (esi_3 != 0)
        ecx_1 = esi_3

void* var_24 = nullptr
int32_t* var_20 = nullptr
int32_t var_1c = 0
int32_t var_8_1 = 0
sub_42c9c0(&var_24, ebx_1)
void* edi_1 = arg2
void* i = nullptr

if (ebx_1 u>= 4)
    void* edx_4 = var_24
    
    do
        *(edx_4 + (i << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + i))))
        *(edx_4 + (i << 2) + 4) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + i + 1))))
        *(edx_4 + (i << 2) + 8) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + i + 2))))
        *(edx_4 + (i << 2) + 0xc) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + i + 3))))
        i += 4
    while (i u< ebx_1 - 3)

if (i u< ebx_1)
    void* edx_5 = var_24
    
    do
        *(edx_5 + (i << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(i + edi_1))))
        i += 1
    while (i u< ebx_1)

int32_t ebx_2 = 0
int32_t* esi_5 = *(arg1 + 0x10)
int32_t eax_17 = *(arg1 + 0x14)
uint32_t ecx_8 = (eax_17 - esi_5 + 3) u>> 2

if (esi_5 u> eax_17)
    ecx_8 = 0

if (ecx_8 != 0)
    do
        (*(**esi_5 + 8))(&var_24, divu.dp.d(0:arg3, ecx_1))
        ebx_2 += 1
        esi_5 = &esi_5[1]
    while (ebx_2 != ecx_8)
    
    edi_1 = arg2

void* ebx_3 = var_24
int32_t* result

if (ebx_3 != var_20)
    int32_t edx_6 = 0
    int32_t ecx_11 = var_20 - ebx_3
    uint32_t esi_7 = (ecx_11 + 3) u>> 2
    void* eax_19 = ebx_3
    
    if (ebx_3 u> var_20)
        esi_7 = 0
    
    if (esi_7 != 0)
        do
            char ecx_12 = (int.d(fconvert.t(*eax_19))).b
            edx_6 += 1
            edi_1 += 1
            eax_19 += 4
            *(edi_1 - 1) = ecx_12
        while (edx_6 != esi_7)
    
    *arg4 = ecx_11 s>> 2
    result.b = 1
else
    result.b = 0

arg2:3.b = result.b

if (ebx_3 != 0)
    sub_403160(ebx_3, (var_1c - ebx_3) s>> 2, 4)
    result.b = arg2:3.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
