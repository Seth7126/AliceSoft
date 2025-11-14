// 函数: sub_4e1cc0
// 地址: 0x4e1cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c02b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = arg1[0x3a] - arg1[0x3d] - arg1[0x3c]
float xmm0_1 = _mm_cvtepi32_ps(zx.o(arg1[0x81]))
struct partsengine::COriginPosMode::VTable* const var_14 = nullptr
int32_t var_18
int32_t* eax_6 = &var_18
int32_t ecx = int.d((_mm_cvtepi32_ps(zx.o(eax_5)) - xmm0_1) f* arg1[0x41])
var_18 = ecx

if (ecx s<= 0)
    eax_6 = &var_14

var_18 = *eax_6
void* eax_8 = arg1[0x80]
var_14 = &partsengine::COriginPosMode::`vftable'
int32_t esi = *(eax_8 + 0x88)
int32_t var_10 = esi
int32_t var_4 = 0
int32_t ebp = (*(*arg1 + 0x28))(1)
int32_t ebp_1

if (esi - 1 u> 8)
    ebp_1 = 0
else
    switch (esi + &jump_table_4e2030[2]:3)
        case &lookup_table_4e203c, &lookup_table_4e203c[3], &lookup_table_4e203c[6]
            ebp_1 = 0
        case &lookup_table_4e203c[1], &lookup_table_4e203c[4], &lookup_table_4e203c[7]
            int32_t eax_13
            int32_t edx_1
            edx_1:eax_13 = sx.q(ebp)
            ebp_1 = neg.d((eax_13 - edx_1) s>> 1)
        case &lookup_table_4e203c[2], &lookup_table_4e203c[5], &lookup_table_4e203c[8]
            ebp_1 = neg.d(ebp)

void* eax_16 = arg1[0x80]
var_14 = &partsengine::COriginPosMode::`vftable'
int32_t esi_2 = *(eax_16 + 0x88)
int32_t var_10_1 = esi_2
int32_t var_4_1 = 1
int32_t ebx = (*(*arg1 + 0x2c))(1)
int32_t ebx_1

if (esi_2 - 1 u> 8)
    ebx_1 = 0
else
    switch (esi_2 + &jump_table_4e2048[2]:3)
        case &lookup_table_4e2054, &lookup_table_4e2054[1], &lookup_table_4e2054[2]
            ebx_1 = 0
        case &lookup_table_4e2054[3], &lookup_table_4e2054[4], &lookup_table_4e2054[5]
            int32_t eax_21
            int32_t edx_2
            edx_2:eax_21 = sx.q(ebx)
            ebx_1 = neg.d((eax_21 - edx_2) s>> 1)
        case &lookup_table_4e2054[6], &lookup_table_4e2054[7], &lookup_table_4e2054[8]
            ebx_1 = neg.d(ebx)

int32_t var_4_2 = 0xffffffff
float xmm0_2 = sub_4a1c10(arg1[0x80])
void* ecx_4 = arg1[0x80]
var_14 = xmm0_2 + _mm_cvtepi32_ps(zx.o(ebp_1))
int32_t result
float xmm0_4
result, xmm0_4 = sub_4a1cf0(ecx_4)
void* ecx_5 = arg1[0x24]
struct partsengine::COriginPosMode::VTable* const xmm3 = var_14
float xmm2_1 = xmm0_4 + _mm_cvtepi32_ps(zx.o(ebx_1))
float xmm1_8 = *(ecx_5 + 0x7c)
xmm1_8 f- xmm3
result:1.b = (xmm1_8 f== xmm3 ? 1 : 0) << 6 | (is_unordered.d(xmm1_8, xmm3) ? 1 : 0) << 2
    | (xmm1_8 f< xmm3 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
bool p_3

if (not(p_1))
    float xmm0_5 = *(ecx_5 + 0x80)
    xmm0_5 - xmm2_1
    result:1.b = (xmm0_5 == xmm2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, xmm2_1) ? 1 : 0) << 2
        | (xmm0_5 < xmm2_1 ? 1 : 0)
    p_3 = unimplemented  {test ah, 0x44}

if (p_1 || p_3)
    *(ecx_5 + 0x7c) = xmm3
    *(ecx_5 + 0x80) = xmm2_1
    *(ecx_5 + 0x70) = 1

bool cond:1 = arg1[0xc].b == 0
uint128_t xmm0_6 = zx.o(arg1[0x3d])
void* ecx_6 = arg1[0x25]
float xmm1_10 = _mm_cvtepi32_ps(zx.o(arg1[0x3a]))
float xmm0_7 = _mm_cvtepi32_ps(xmm0_6)
void* ecx_8

if (cond:1)
    float xmm1_21 = xmm1_10 f+ xmm3 - xmm0_7
    float xmm0_16 = *(ecx_6 + 0x7c)
    xmm0_16 - xmm1_21
    result:1.b = (xmm0_16 == xmm1_21 ? 1 : 0) << 6 | (is_unordered.d(xmm0_16, xmm1_21) ? 1 : 0) << 2
        | (xmm0_16 < xmm1_21 ? 1 : 0)
    bool p_17 = unimplemented  {test ah, 0x44}
    bool p_19
    
    if (not(p_17))
        float xmm0_17 = *(ecx_6 + 0x80)
        xmm0_17 - xmm2_1
        result:1.b = (xmm0_17 == xmm2_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_17, xmm2_1) ? 1 : 0) << 2 | (xmm0_17 < xmm2_1 ? 1 : 0)
        p_19 = unimplemented  {test ah, 0x44}
    
    if (p_17 || p_19)
        *(ecx_6 + 0x7c) = xmm1_21
        *(ecx_6 + 0x80) = xmm2_1
        *(ecx_6 + 0x70) = 1
    
    void* ecx_9 = arg1[0x26]
    float xmm1_25 = _mm_cvtepi32_ps(zx.o(arg1[0x3c])) f+ xmm3 + _mm_cvtepi32_ps(zx.o(var_18))
    float xmm0_20 = *(ecx_9 + 0x7c)
    xmm0_20 - xmm1_25
    result:1.b = (xmm0_20 == xmm1_25 ? 1 : 0) << 6 | (is_unordered.d(xmm0_20, xmm1_25) ? 1 : 0) << 2
        | (xmm0_20 < xmm1_25 ? 1 : 0)
    bool p_21 = unimplemented  {test ah, 0x44}
    bool p_23
    
    if (not(p_21))
        float xmm0_21 = *(ecx_9 + 0x80)
        xmm0_21 - xmm2_1
        result:1.b = (xmm0_21 == xmm2_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_21, xmm2_1) ? 1 : 0) << 2 | (xmm0_21 < xmm2_1 ? 1 : 0)
        p_23 = unimplemented  {test ah, 0x44}
    
    if (p_21 || p_23)
        *(ecx_9 + 0x7c) = xmm1_25
        *(ecx_9 + 0x80) = xmm2_1
        *(ecx_9 + 0x70) = 1
    
    ecx_8 = arg1[0x23]
    float xmm1_27 = _mm_cvtepi32_ps(zx.o(arg1[0x3c]))
    float xmm0_22 = *(ecx_8 + 0x7c)
    float xmm1_28 = xmm1_27 f+ xmm3
    xmm0_22 - xmm1_28
    result:1.b = (xmm0_22 == xmm1_28 ? 1 : 0) << 6 | (is_unordered.d(xmm0_22, xmm1_28) ? 1 : 0) << 2
        | (xmm0_22 < xmm1_28 ? 1 : 0)
    bool p_25 = unimplemented  {test ah, 0x44}
    bool p_27
    
    if (not(p_25))
        float xmm0_23 = *(ecx_8 + 0x80)
        xmm0_23 - xmm2_1
        result:1.b = (xmm0_23 == xmm2_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_23, xmm2_1) ? 1 : 0) << 2 | (xmm0_23 < xmm2_1 ? 1 : 0)
        p_27 = unimplemented  {test ah, 0x44}
    
    if (p_25 || p_27)
        *(ecx_8 + 0x7c) = xmm1_28
        *(ecx_8 + 0x80) = xmm2_1
        *(ecx_8 + 0x70) = 1
else
    float xmm1_12 = xmm1_10 + xmm2_1 - xmm0_7
    float xmm0_8 = *(ecx_6 + 0x7c)
    xmm0_8 f- xmm3
    result:1.b = (xmm0_8 f== xmm3 ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, xmm3) ? 1 : 0) << 2
        | (xmm0_8 f< xmm3 ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    bool p_7
    
    if (not(p_5))
        float xmm0_9 = *(ecx_6 + 0x80)
        xmm0_9 - xmm1_12
        result:1.b = (xmm0_9 == xmm1_12 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_9, xmm1_12) ? 1 : 0) << 2 | (xmm0_9 < xmm1_12 ? 1 : 0)
        p_7 = unimplemented  {test ah, 0x44}
    
    if (p_5 || p_7)
        *(ecx_6 + 0x7c) = xmm3
        *(ecx_6 + 0x80) = xmm1_12
        *(ecx_6 + 0x70) = 1
    
    void* ecx_7 = arg1[0x26]
    float xmm1_16 = _mm_cvtepi32_ps(zx.o(arg1[0x3c])) + xmm2_1 + _mm_cvtepi32_ps(zx.o(var_18))
    float xmm0_12 = *(ecx_7 + 0x7c)
    xmm0_12 f- xmm3
    result:1.b = (xmm0_12 f== xmm3 ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, xmm3) ? 1 : 0) << 2
        | (xmm0_12 f< xmm3 ? 1 : 0)
    bool p_9 = unimplemented  {test ah, 0x44}
    bool p_11
    
    if (not(p_9))
        float xmm0_13 = *(ecx_7 + 0x80)
        xmm0_13 - xmm1_16
        result:1.b = (xmm0_13 == xmm1_16 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_13, xmm1_16) ? 1 : 0) << 2 | (xmm0_13 < xmm1_16 ? 1 : 0)
        p_11 = unimplemented  {test ah, 0x44}
    
    if (p_9 || p_11)
        *(ecx_7 + 0x7c) = xmm3
        *(ecx_7 + 0x80) = xmm1_16
        *(ecx_7 + 0x70) = 1
    
    ecx_8 = arg1[0x23]
    float xmm1_18 = _mm_cvtepi32_ps(zx.o(arg1[0x3c]))
    float xmm0_14 = *(ecx_8 + 0x7c)
    xmm0_14 f- xmm3
    float xmm1_19 = xmm1_18 + xmm2_1
    result:1.b = (xmm0_14 f== xmm3 ? 1 : 0) << 6 | (is_unordered.d(xmm0_14, xmm3) ? 1 : 0) << 2
        | (xmm0_14 f< xmm3 ? 1 : 0)
    bool p_13 = unimplemented  {test ah, 0x44}
    bool p_15
    
    if (not(p_13))
        float xmm0_15 = *(ecx_8 + 0x80)
        xmm0_15 - xmm1_19
        result:1.b = (xmm0_15 == xmm1_19 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_15, xmm1_19) ? 1 : 0) << 2 | (xmm0_15 < xmm1_19 ? 1 : 0)
        p_15 = unimplemented  {test ah, 0x44}
    
    if (p_13 || p_15)
        *(ecx_8 + 0x7c) = xmm3
        *(ecx_8 + 0x80) = xmm1_19
        *(ecx_8 + 0x70) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
