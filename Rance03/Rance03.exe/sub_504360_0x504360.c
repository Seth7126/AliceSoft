// 函数: sub_504360
// 地址: 0x504360
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

struct partsengine::CRect::VTable* var_e0
sub_4fbef0(&var_e0, edx_1, ecx, arg1 + 0x44)
struct partsengine::COriginPosMode::VTable* var_d4
struct partsengine::COriginPosMode::VTable* const var_e8 = var_d4
void* var_f0
int32_t var_d0
float xmm2_1

if (var_d4 s> 0 && var_d0 s> 0)
    xmm2_1 = *(arg1 + 0x24)
    var_f0 = arg1 + 0x24

int32_t var_dc
void* eax_4
int32_t esi_2
int32_t var_d8

if (var_d4 s<= 0 || var_d0 s<= 0 || xmm2_1 <= 0f)
    eax_4 = *(arg1 + 0x2c)
    
    if (eax_4 == 0)
        esi_2 = var_d8
    else
        esi_2 = var_d8
        *(eax_4 + 0xc8) = var_dc
        *(eax_4 + 0xcc) = esi_2
        *(eax_4 + 0xd0) = 0
        *(eax_4 + 0xd4) = var_d0
else
    float xmm0_1 = *(arg1 + 0x20)
    xmm0_1 - xmm2_1
    void* eax_3
    eax_3:1.b = (xmm0_1 == xmm2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, xmm2_1) ? 1 : 0) << 2
        | (xmm0_1 < xmm2_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        void* eax_12 = &var_e8
        var_e8 = nullptr
        int32_t var_8c_1 = var_d0
        struct partsengine::CRect::VTable* const var_9c = &partsengine::CRect::`vftable'
        
        if (xmm0_1 > 0f)
            eax_12 = arg1 + 0x20
        
        void* esi_4 = var_f0
        bool cond:2_1 = *eax_12 f> *esi_4
        float xmm0_16 = _mm_cvtepi32_ps(zx.o(var_d4))
        
        if (cond:2_1)
            eax_12 = esi_4
        
        esi_2 = var_d8
        int32_t var_98_1 = var_dc
        int32_t var_94_1 = esi_2
        struct partsengine::COriginPosMode::VTable* eax_13 = int.d(xmm0_16 f* *eax_12 / xmm2_1)
        var_e8 = eax_13
        struct partsengine::COriginPosMode::VTable* var_90_1 = eax_13
        sub_506810(arg1 + 0x28, &var_9c)
    else
        sub_506810(arg1 + 0x28, &var_e0)
        esi_2 = var_d8
arg5 - 1f
eax_4:1.b =
    (arg5 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg5, 1f) ? 1 : 0) << 2 | (arg5 < 1f ? 1 : 0)
bool p_4 = unimplemented  {test ah, 0x44}

if (p_4)
label_5045ae:
    
    if (var_d4 s> 0 && var_d0 s> 0)
        uint128_t xmm3_1 = zx.o(var_e8)
        float xmm0_20 = _mm_cvtepi32_ps(zx.o(var_dc))
        float xmm3_2 = _mm_cvtepi32_ps(xmm3_1)
        float xmm1_2 = _mm_cvtepi32_ps(zx.o(var_d0))
        float xmm3_3 = xmm3_2 + xmm0_20
        float xmm4_2 = _mm_cvtepi32_ps(zx.o(esi_2))
        float var_cc = xmm0_20
        float var_bc = xmm0_20
        float xmm0_22 = xmm1_2 + xmm4_2
        float var_c8_1 = xmm4_2
        float var_ac = xmm3_3
        float var_a8_1 = xmm4_2
        float var_b4 = xmm3_3
        float var_b8_1 = xmm0_22
        float var_b0_1 = xmm0_22
        void var_48
        sub_48d630(&var_48, arg5, arg6)
        arg8 f- 0
        int32_t* eax_14
        eax_14:1.b = (arg8 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg8, 0f) ? 1 : 0) << 2
            | (arg8 < 0f ? 1 : 0)
        bool p_14 = unimplemented  {test ah, 0x44}
        void var_88
        
        if (p_14)
            void* ecx_10 = &var_88
            EnumC13Lines::EnumC13Lines(ecx_10)
            sub_47b7f0(ecx_10, arg8 ^ 0x80000000)
            sub_47b440(&var_48, &var_88)
        
        arg7 f- 0
        eax_14:1.b = (arg7 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg7, 0f) ? 1 : 0) << 2
            | (arg7 < 0f ? 1 : 0)
        bool p_16 = unimplemented  {test ah, 0x44}
        
        if (p_16)
            void* ecx_12 = &var_88
            EnumC13Lines::EnumC13Lines(ecx_12)
            sub_47b8b0(ecx_12, arg7 ^ 0x80000000)
            sub_47b440(&var_48, &var_88)
        
        arg9 f- 0
        eax_14:1.b = (arg9 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg9, 0f) ? 1 : 0) << 2
            | (arg9 < 0f ? 1 : 0)
        bool p_18 = unimplemented  {test ah, 0x44}
        
        if (p_18)
            void* ecx_14 = &var_88
            EnumC13Lines::EnumC13Lines(ecx_14)
            sub_47b960(ecx_14, arg9 ^ (data_7094c0).d)
            sub_47b440(&var_48, &var_88)
        
        var_f0 = &partsengine::COriginPosMode::`vftable'
        int32_t* var_ec_2 = arg4
        int32_t eax_15 = sub_50feb0(&var_f0, var_d4)
        var_f0 = &partsengine::COriginPosMode::`vftable'
        int32_t* var_ec_3 = arg4
        struct partsengine::COriginPosMode::VTable* xmm1_8 = _mm_cvtepi32_ps(zx.o(eax_15))
        uint128_t xmm0_29 = zx.o(sub_50ff00(&var_f0, var_d0))
        struct partsengine::COriginPosMode::VTable* const eax_17 = var_e8
        struct partsengine::COriginPosMode::VTable* var_c4 = xmm1_8
        var_e8 = xmm1_8
        float xmm0_30 = _mm_cvtepi32_ps(xmm0_29)
        float var_c0_1 = xmm0_30
        float xmm2_5 = _mm_cvtepi32_ps(zx.o(eax_17)) f+ xmm1_8
        float var_a0_1 = xmm0_30
        float xmm1_10 = _mm_cvtepi32_ps(zx.o(var_d0))
        float var_a4 = xmm2_5
        float xmm1_11 = xmm1_10 + xmm0_30
        var_f0 = xmm2_5
        float var_e4_2 = xmm1_11
        float var_ec_4 = xmm1_11
        sub_506850(arg1 + 0x28, arg2, arg3, &var_48, &var_c4, &var_a4, &var_e8, &var_f0, &var_cc, 
            &var_ac, &var_bc, &var_b4, arg10)
else
    arg6 - 1f
    eax_4:1.b =
        (arg6 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg6, 1f) ? 1 : 0) << 2 | (arg6 < 1f ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    
    if (p_6)
        goto label_5045ae
    
    int32_t ecx_3 = int.d(fconvert.t(arg7))
    float xmm0_3 = _mm_cvtepi32_ps(zx.o(ecx_3))
    xmm0_3 - arg7
    eax_4:1.b = (xmm0_3 == arg7 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, arg7) ? 1 : 0) << 2
        | (xmm0_3 < arg7 ? 1 : 0)
    bool p_8 = unimplemented  {test ah, 0x44}
    
    if (p_8)
        goto label_5045ae
    
    if (sub_4a1f10(ecx_3) != 0)
        goto label_5045ae
    
    int32_t ecx_4 = int.d(fconvert.t(arg8))
    _mm_cvtepi32_ps(zx.o(ecx_4)) - arg8
    bool p_10 = unimplemented  {test ah, 0x44}
    
    if (p_10)
        goto label_5045ae
    
    if (sub_4a1f10(ecx_4) != 0)
        goto label_5045ae
    
    int32_t ecx_5 = int.d(fconvert.t(arg9))
    _mm_cvtepi32_ps(zx.o(ecx_5)) - arg9
    bool p_12 = unimplemented  {test ah, 0x44}
    
    if (p_12)
        goto label_5045ae
    
    if (sub_4a1f10(ecx_5) != 0)
        goto label_5045ae
    
    void* esi_3 = *(arg1 + 0x2c)
    var_e8 = &partsengine::COriginPosMode::`vftable'
    int32_t* var_e4_1 = arg4
    var_f0 = &partsengine::COriginPosMode::`vftable'
    int32_t* var_ec_1 = arg4
    
    if (esi_3 != 0)
        *(esi_3 + 0xc) = _mm_cvtepi32_ps(zx.o(sub_50feb0(&var_f0, var_d4))) + arg2
        *(*(arg1 + 0x2c) + 0x10) = _mm_cvtepi32_ps(zx.o(sub_50ff00(&var_e8, var_d0))) + arg3
