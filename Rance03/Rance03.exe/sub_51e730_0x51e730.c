// 函数: sub_51e730
// 地址: 0x51e730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x2c) == 0)
    return 

void* eax_1 = *(arg1 + 0x2c)
int32_t ecx

if (eax_1 != 0)
    ecx = *(eax_1 + 0x1c)
else
    ecx = 0

int32_t edx_1

if (eax_1 != 0)
    edx_1 = *(eax_1 + 0x18)
else
    edx_1 = 0

struct partsengine::CRect::VTable* var_d8
sub_4fbef0(&var_d8, edx_1, ecx, arg1 + 0x44)
float var_c8
float var_f0 = var_c8
void* var_e0
int32_t var_cc
float xmm2_1

if (var_cc s> 0 && var_c8 s> 0)
    xmm2_1 = *(arg1 + 0x24)
    var_e0 = arg1 + 0x24

int32_t var_d4
int32_t var_d0
int32_t* eax
float esi_2

if (var_cc s<= 0 || var_c8 s<= 0 || xmm2_1 <= 0f)
    eax = *(arg1 + 0x2c)
    
    if (eax == 0)
        esi_2 = var_c8
    else
        esi_2 = var_f0
        eax[0x32] = var_d4
        eax[0x33] = var_d0
        eax[0x34] = var_cc
        eax[0x35] = 0
else
    float xmm0_1 = *(arg1 + 0x20)
    xmm0_1 - xmm2_1
    void* eax_3
    eax_3:1.b = (xmm0_1 == xmm2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, xmm2_1) ? 1 : 0) << 2
        | (xmm0_1 < xmm2_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        void* eax_4 = &var_f0
        var_f0 = 0f
        struct partsengine::CRect::VTable* const var_9c = &partsengine::CRect::`vftable'
        int32_t var_90_1 = var_cc
        
        if (xmm0_1 > 0f)
            eax_4 = arg1 + 0x20
        
        void* esi_3 = var_e0
        bool cond:2_1 = *eax_4 f> *esi_3
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(var_c8))
        
        if (cond:2_1)
            eax_4 = esi_3
        
        int32_t var_98_1 = var_d4
        esi_2 = int.d(xmm0_4 f* *eax_4 / xmm2_1)
        var_f0 = esi_2
        float var_8c_1 = esi_2
        int32_t var_94_1 = var_d0 i- esi_2 i+ var_c8
        sub_506810(arg1 + 0x28, &var_9c)
    else
        sub_506810(arg1 + 0x28, &var_d8)
        esi_2 = var_f0

arg5 - 1f
eax:1.b = (arg5 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg5, 1f) ? 1 : 0) << 2 | (arg5 < 1f ? 1 : 0)
bool p_4 = unimplemented  {test ah, 0x44}
struct partsengine::COriginPosMode::VTable* const var_e8

if (p_4)
label_51e995:
    
    if (var_cc s> 0 && var_c8 s> 0)
        float xmm3_2 = _mm_cvtepi32_ps(zx.o(var_c8))
        float xmm4_3 = _mm_cvtepi32_ps(zx.o(var_d0)) + xmm3_2
        float xmm1_7 = _mm_cvtepi32_ps(zx.o(esi_2))
        float xmm0_21 = _mm_cvtepi32_ps(zx.o(var_d4))
        float xmm3_4 = _mm_cvtepi32_ps(zx.o(var_cc))
        float xmm4_4 = xmm4_3 - xmm1_7
        float var_c4 = xmm0_21
        void* xmm3_5 = xmm3_4 + xmm0_21
        float var_b4 = xmm0_21
        float xmm0_23 = xmm1_7 + xmm4_4
        float var_c0_1 = xmm4_4
        void* var_bc = xmm3_5
        float var_b8_1 = xmm4_4
        var_e0 = xmm3_5
        float var_b0_1 = xmm0_23
        float var_dc_2 = xmm0_23
        void var_48
        sub_48d630(&var_48, arg5, arg6)
        arg8 f- 0
        int32_t* eax_13
        eax_13:1.b = (arg8 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg8, 0f) ? 1 : 0) << 2
            | (arg8 < 0f ? 1 : 0)
        bool p_14 = unimplemented  {test ah, 0x44}
        void var_88
        
        if (p_14)
            void* ecx_12 = &var_88
            EnumC13Lines::EnumC13Lines(ecx_12)
            sub_47b7f0(ecx_12, arg8 ^ 0x80000000)
            sub_47b440(&var_48, &var_88)
        
        arg7 f- 0
        eax_13:1.b = (arg7 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg7, 0f) ? 1 : 0) << 2
            | (arg7 < 0f ? 1 : 0)
        bool p_16 = unimplemented  {test ah, 0x44}
        
        if (p_16)
            void* ecx_14 = &var_88
            EnumC13Lines::EnumC13Lines(ecx_14)
            sub_47b8b0(ecx_14, arg7 ^ 0x80000000)
            sub_47b440(&var_48, &var_88)
        
        arg9 f- 0
        eax_13:1.b = (arg9 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg9, 0f) ? 1 : 0) << 2
            | (arg9 < 0f ? 1 : 0)
        bool p_18 = unimplemented  {test ah, 0x44}
        
        if (p_18)
            void* ecx_16 = &var_88
            EnumC13Lines::EnumC13Lines(ecx_16)
            sub_47b960(ecx_16, arg9 ^ (data_7094c0).d)
            sub_47b440(&var_48, &var_88)
        
        var_e8 = &partsengine::COriginPosMode::`vftable'
        int32_t* var_e4_2 = arg4
        int32_t eax_14 = sub_50feb0(&var_e8, var_cc)
        var_e8 = &partsengine::COriginPosMode::`vftable'
        int32_t* var_e4_3 = arg4
        float xmm1_13 = _mm_cvtepi32_ps(zx.o(eax_14))
        uint128_t xmm0_30 = zx.o(sub_50ff00(&var_e8, var_c8))
        float eax_16 = var_f0
        float xmm2_4 = _mm_cvtepi32_ps(zx.o(var_c8))
        float xmm0_31 = _mm_cvtepi32_ps(xmm0_30)
        float xmm3_7 = _mm_cvtepi32_ps(zx.o(var_cc))
        float var_ac = xmm1_13
        struct partsengine::COriginPosMode::VTable* xmm3_8 = xmm3_7 + xmm1_13
        var_f0 = xmm1_13
        float xmm2_6 = _mm_cvtepi32_ps(zx.o(eax_16))
        struct partsengine::COriginPosMode::VTable* var_a4 = xmm3_8
        float xmm0_33 = xmm0_31 + xmm2_4 - xmm2_6
        var_e8 = xmm3_8
        float xmm2_7 = xmm2_6 + xmm0_33
        float var_a8_1 = xmm0_33
        float var_a0_1 = xmm0_33
        float var_ec_1 = xmm2_7
        float var_e4_4 = xmm2_7
        sub_506850(arg1 + 0x28, arg2, arg3, &var_48, &var_ac, &var_a4, &var_f0, &var_e8, &var_c4, 
            &var_bc, &var_b4, &var_e0, arg10)
else
    arg6 - 1f
    eax:1.b =
        (arg6 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg6, 1f) ? 1 : 0) << 2 | (arg6 < 1f ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    
    if (p_6)
        goto label_51e995
    
    int32_t ecx_6 = int.d(fconvert.t(arg7))
    float xmm0_8 = _mm_cvtepi32_ps(zx.o(ecx_6))
    xmm0_8 - arg7
    eax:1.b = (xmm0_8 == arg7 ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, arg7) ? 1 : 0) << 2
        | (xmm0_8 < arg7 ? 1 : 0)
    bool p_8 = unimplemented  {test ah, 0x44}
    
    if (p_8)
        goto label_51e995
    
    if (sub_4a1f10(ecx_6).b != 0)
        goto label_51e995
    
    int32_t ecx_7 = int.d(fconvert.t(arg8))
    float xmm0_10 = _mm_cvtepi32_ps(zx.o(ecx_7))
    xmm0_10 - arg8
    eax:1.b = (xmm0_10 == arg8 ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, arg8) ? 1 : 0) << 2
        | (xmm0_10 < arg8 ? 1 : 0)
    bool p_10 = unimplemented  {test ah, 0x44}
    
    if (p_10)
        goto label_51e995
    
    if (sub_4a1f10(ecx_7).b != 0)
        goto label_51e995
    
    int32_t ecx_8 = int.d(fconvert.t(arg9))
    float xmm0_12 = _mm_cvtepi32_ps(zx.o(ecx_8))
    xmm0_12 - arg9
    eax:1.b = (xmm0_12 == arg9 ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, arg9) ? 1 : 0) << 2
        | (xmm0_12 < arg9 ? 1 : 0)
    bool p_12 = unimplemented  {test ah, 0x44}
    
    if (p_12)
        goto label_51e995
    
    if (sub_4a1f10(ecx_8).b != 0)
        goto label_51e995
    
    void* esi_4 = *(arg1 + 0x2c)
    var_e8 = &partsengine::COriginPosMode::`vftable'
    int32_t* var_e4_1 = arg4
    var_e0 = &partsengine::COriginPosMode::`vftable'
    int32_t* var_dc_1 = arg4
    
    if (esi_4 != 0)
        *(esi_4 + 0xc) = _mm_cvtepi32_ps(zx.o(sub_50feb0(&var_e0, var_cc))) + arg2
        int32_t eax_10 = sub_50ff00(&var_e8, var_c8)
        float xmm0_17 = _mm_cvtepi32_ps(zx.o(var_c8))
        *(*(arg1 + 0x2c) + 0x10) =
            _mm_cvtepi32_ps(zx.o(eax_10)) + arg3 + xmm0_17 - _mm_cvtepi32_ps(zx.o(var_f0))
