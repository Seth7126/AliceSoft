// 函数: sub_55cd70
// 地址: 0x55cd70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b530
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_8c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_44 = edi
int32_t var_24 = 0
float var_30 = 0f
sub_55c920(arg1, &var_24, &var_30)
sub_55ca70(edi)
struct common::CRect::VTable* var_60
sub_545fb0(&var_60, var_24, var_30, edi + 0xa8)
int32_t var_8_1 = 0
int32_t ecx_2 = *(arg2 + 0x7c) - 1
int32_t var_4c
int32_t eax_10

switch (ecx_2)
    case 1, 4, 7
        int32_t eax_7
        int32_t edx_1
        edx_1:eax_7 = sx.q(var_4c)
        eax_10 = neg.d((eax_7 - edx_1) s>> 1)
    case 2, 5, 8
        eax_10 = neg.d(var_4c)
    default
        eax_10 = 0

float xmm1_1 = _mm_cvtepi32_ps(zx.o(eax_10))
int32_t var_48
int32_t eax_17
int32_t ebx

switch (ecx_2)
    case 3, 4, 5
        ebx = var_48
        int32_t eax_14
        int32_t edx_2
        edx_2:eax_14 = sx.q(ebx)
        eax_17 = neg.d((eax_14 - edx_2) s>> 1)
    case 6, 7, 8
        ebx = var_48
        eax_17 = neg.d(ebx)
    default
        ebx = var_48
        eax_17 = 0

float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(edi + 0xb0)))
int32_t esi = *(edi + 0xc0)
int32_t edx_3 = *(edi + 0xbc)
struct common::CPoint::VTable* const var_78 = &common::CPoint::`vftable'
struct common::CSize::VTable* const var_6c = &common::CSize::`vftable'
float xmm2_1 = _mm_cvtepi32_ps(zx.o(eax_17))
int32_t var_68 = edx_3
int32_t var_64 = esi
struct common::CRect::VTable* const var_7c = &common::CRect::`vftable'
int32_t var_74 = int.d(xmm0_1 + xmm1_1)
int32_t var_70 = int.d(_mm_cvtepi32_ps(zx.o(*(edi + 0xb4))) + xmm2_1)
int32_t* ecx_4 = 0xffffffff
var_8_1.b = 1
int32_t* i = *(edi + 0x9c)
int32_t eax_20 = 0xffffffff
float var_28 = xmm1_1
var_30 = xmm2_1
int32_t* var_20 = 0xffffffff
int32_t var_14 = 0xffffffff

if (i == *(edi + 0xa0))
    *(edi + 0x94) = var_4c
    *(edi + 0x98) = ebx
    fsbase->NtTib.ExceptionList = ExceptionList
    return var_4c

do
    void* ebx_1 = *i
    
    if (ecx_4 == 0xffffffff)
        int32_t* i_1 = i
        int32_t* eax_21
        eax_21, ecx_4 = sub_55cc70(edi, ecx_4)
        var_20 = eax_21
        eax_20 = var_14
    
    if (eax_20 == 0xffffffff)
        int32_t* i_2 = i
        var_14 = sub_55ccf0(edi, ecx_4)
    
    int32_t ecx_7 = *(ebx_1 + 0xe4)
    void* var_2c_1 = nullptr
    
    if (ecx_7 == 2 || ecx_7 == 5 || ecx_7 == 8)
        var_2c_1 = int.d(_mm_cvtepi32_ps(zx.o(var_24 - var_20)) * 0.5f)
    else if (ecx_7 == 3 || ecx_7 == 6 || ecx_7 == 9)
        var_2c_1 = var_24 - var_20
    
    int32_t edx_4 = 0
    
    if (ecx_7 == 4 || ecx_7 == 5 || ecx_7 == 6)
        edx_4 = int.d(_mm_cvtepi32_ps(zx.o(var_14 - sub_55ab70(ebx_1 + 0xb4, ebx_1 + 0x38))) * 0.5f)
    else if (ecx_7 == 7 || ecx_7 == 8 || ecx_7 == 9)
        edx_4 = var_14 - sub_55ab70(ebx_1 + 0xb4, ebx_1 + 0x38)
    
    int32_t eax_33 = *(edi + 0xc8)
    float xmm0_14 = _mm_cvtepi32_ps(zx.o(var_2c_1)) + var_28
    float xmm0_17 = _mm_cvtepi32_ps(zx.o(edx_4)) + var_30
    int32_t eax_35 = sub_55ab70(ebx_1 + 0xb4, ebx_1 + 0x38)
    int32_t eax_37 = sub_55aaf0(*(ebx_1 + 0x6c), ebx_1 + 0xb4)
    float xmm0_19 = _mm_cvtepi32_ps(zx.o(eax_17))
    sub_55ac70(ebx_1, xmm0_14, eax_35, arg2, xmm0_17, _mm_cvtepi32_ps(zx.o(eax_10)), xmm0_19, 
        &var_7c, eax_33)
    float xmm0_24 = _mm_cvtepi32_ps(zx.o(eax_17))
    sub_55b190(ebx_1, xmm0_17, arg2, _mm_cvtepi32_ps(zx.o(eax_10)), xmm0_24, &var_7c, eax_33)
    void* ecx_12 = ebx_1 + 4
    void* edi_3 = ecx_12 + 0x10
    
    if (*(ebx_1 + 0x18) u>= 0x10)
        ecx_12 = *ecx_12
    
    int32_t edi_4 = *edi_3
    int32_t eax_42 = 1
    
    if (edi_4 u< 1)
        eax_42 = edi_4
    
    if (sub_406ac0(eax_42, &(*U"\n\n\n\n\n")[4], ecx_12, eax_42) != 0 || edi_4 u< 1 || edi_4 u> 1)
        eax_20 = var_14
        ecx_4 = var_20
        var_28 = _mm_cvtepi32_ps(zx.o(eax_37)) + var_28
    else
        ecx_4 = 0xffffffff
        var_20 = 0xffffffff
        int32_t eax_46 = *(ebx_1 + 0x70) + var_14
        var_28 = _mm_cvtepi32_ps(zx.o(eax_10))
        eax_20 = 0xffffffff
        var_14 = 0xffffffff
        var_30 = _mm_cvtepi32_ps(zx.o(eax_46)) + var_30
    
    edi = var_44
    i = &i[1]
while (i != *(edi + 0xa0))

*(edi + 0x94) = var_4c
*(edi + 0x98) = var_48
fsbase->NtTib.ExceptionList = ExceptionList
return var_48
