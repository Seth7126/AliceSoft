// 函数: sub_4823b0
// 地址: 0x4823b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e9f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = *(arg1 + 0xc)
uint32_t ebx_2 = *arg4 u>> (*(arg1 + 0x1c) == 0)
int32_t __saved_ebp
uint32_t ecx_2 = (*(*edi + 0x18))(__security_cookie ^ &__saved_ebp)

if (ecx_2 == 0)
    ecx_2 = 4
    uint32_t esi_3 = ((*(*edi + 0x1c))() * (*(*edi + 0xc))()) u>> 3
    
    if (esi_3 != 0)
        ecx_2 = esi_3

void* var_38
__builtin_memset(&var_38, 0, 0x18)
int32_t var_8_1 = 0
var_8_1.b = 1
sub_42c9c0(&var_38, ebx_2)
void* var_2c
sub_42c9c0(&var_2c, ebx_2)
void* i = nullptr
void* edi_1 = arg2

if (*(arg1 + 0x1c) == 0)
    if (ebx_2 u>= 4)
        void* esi_6 = var_38
        void* edx_6 = edi_1 + 2
        void* edi_2 = var_2c
        
        do
            int32_t eax_24 = sx.d(*(edx_6 - 2))
            edx_6 += 8
            *(esi_6 + (i << 2)) = _mm_cvtepi32_ps(zx.o(eax_24))
            *(edi_2 + (i << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_6 - 9))))
            *(esi_6 + (i << 2) + 4) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_6 - 8))))
            *(edi_2 + (i << 2) + 4) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_6 - 7))))
            *(esi_6 + (i << 2) + 8) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_6 - 6))))
            *(edi_2 + (i << 2) + 8) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_6 - 5))))
            *(esi_6 + (i << 2) + 0xc) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_6 - 4))))
            *(edi_2 + (i << 2) + 0xc) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_6 - 3))))
            i += 4
        while (i u< ebx_2 - 3)
        
        edi_1 = arg2
    
    if (i u< ebx_2)
        void* edx_7 = var_38
        void* esi_7 = var_2c
        
        do
            *(edx_7 + (i << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + (i << 1)))))
            *(esi_7 + (i << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + (i << 1) + 1))))
            i += 1
        while (i u< ebx_2)
else
    if (ebx_2 u>= 4)
        void* edx_4 = var_38
        void* esi_4 = var_2c
        
        do
            *(edx_4 + (i << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + i))))
            *(esi_4 + (i << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + i))))
            *(edx_4 + (i << 2) + 4) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + i + 1))))
            *(esi_4 + (i << 2) + 4) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + i + 1))))
            *(edx_4 + (i << 2) + 8) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + i + 2))))
            *(esi_4 + (i << 2) + 8) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + i + 2))))
            *(edx_4 + (i << 2) + 0xc) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + i + 3))))
            *(esi_4 + (i << 2) + 0xc) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + i + 3))))
            i += 4
        while (i u< ebx_2 - 3)
    
    if (i u< ebx_2)
        void* edx_5 = var_38
        void* esi_5 = var_2c
        
        do
            *(edx_5 + (i << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(i + edi_1))))
            *(esi_5 + (i << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(i + edi_1))))
            i += 1
        while (i u< ebx_2)

int32_t* esi_8 = *(arg1 + 0x10)
int32_t result = *(arg1 + 0x14)
uint32_t ebx_8 = (result - esi_8 + 3) u>> 2

if (esi_8 u> result)
    ebx_8 = 0

if (ebx_8 != 0)
    int32_t edi_3 = 0
    
    do
        (*(**esi_8 + 0xc))(&var_38, &var_2c, divu.dp.d(0:arg3, ecx_2))
        edi_3 += 1
        esi_8 = &esi_8[1]
    while (edi_3 != ebx_8)
    
    edi_1 = arg2

void* ebx_9 = var_38
void* esi_9 = var_2c
int32_t var_34

if (ebx_9 != var_34)
    int32_t var_28
    int32_t i_3 = (var_28 - esi_9) s>> 2
    
    if (i_3 != 0)
        void* ecx_8 = esi_9
        void* ebx_11 = var_38 - esi_9
        int32_t i_2 = i_3
        int32_t i_1
        
        do
            edi_1 += 2
            ecx_8 += 4
            *(edi_1 - 2) = (int.d(fconvert.t(*(ebx_11 + ecx_8 - 4)))).b
            *(edi_1 - 1) = (int.d(fconvert.t(*(ecx_8 - 4)))).b
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        ebx_9 = var_38
        esi_9 = var_2c
    
    arg2:3.b = 1
    *arg4 = i_3 * 2
else
    arg2:3.b = 0

if (esi_9 != 0)
    int32_t var_24
    sub_403160(esi_9, (var_24 - esi_9) s>> 2, 4)
    ebx_9 = var_38
    var_2c = nullptr
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0

int32_t var_30

if (ebx_9 != 0)
    sub_403160(ebx_9, (var_30 - ebx_9) s>> 2, 4)
result.b = arg2:3.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
