// 函数: sub_4fdd30
// 地址: 0x4fdd30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x28) == 0)
    return 

float eax_1 = *(arg1 + 0x28)
void* edi_1 = arg1 + 0x24
void* var_d4 = edi_1
void* esi_1 = arg1 + 0x44
void* var_dc = esi_1
float var_cc = eax_1

if (eax_1 != 0)
    int32_t ecx = *(esi_1 + 8)
    int32_t edx_1 = *(esi_1 + 0xc)
    float edi_2 = var_cc
    int32_t esi_2 = *(esi_1 + 0x10)
    *(edi_2 i+ 0xc8) = *(esi_1 + 4)
    edi_1 = var_d4
    *(edi_2 i+ 0xd4) = esi_2
    esi_1 = var_dc
    *(edi_2 i+ 0xcc) = ecx
    *(edi_2 i+ 0xd0) = edx_1

void* eax_4 = *(edi_1 + 4)
int32_t ecx_1

if (eax_4 != 0)
    ecx_1 = *(eax_4 + 0x1c)
else
    ecx_1 = 0

if (eax_4 != 0)
    eax_4 = *(eax_4 + 0x18)

struct partsengine::CRect::VTable* var_c4
sub_4fdcb0(&var_c4, eax_4, ecx_1, esi_1)
int32_t ecx_2 = int.d(fconvert.t(arg7))
float xmm0_2 = _mm_cvtepi32_ps(zx.o(ecx_2))
xmm0_2 - arg7
int32_t* eax
eax:1.b = (xmm0_2 == arg7 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, arg7) ? 1 : 0) << 2
    | (xmm0_2 < arg7 ? 1 : 0)
bool p_2 = unimplemented  {test ah, 0x44}

if (p_2)
    eax.b = 1
else if (ecx_2 s>= 0)
    if (ecx_2 != ecx_2 s/ 0x168 * 0x168)
        eax.b = 1
    else
    label_4fdeb9:
        int32_t ecx_7 = int.d(fconvert.t(arg8))
        float xmm0_10 = _mm_cvtepi32_ps(zx.o(ecx_7))
        xmm0_10 - arg8
        eax:1.b = (xmm0_10 == arg8 ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, arg8) ? 1 : 0) << 2
            | (xmm0_10 < arg8 ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        
        if (p_8)
            eax.b = 1
        else if (sub_4a1f10(ecx_7).b != 0)
            eax.b = 1
        else
            int32_t ecx_8 = int.d(fconvert.t(arg9))
            float xmm0_12 = _mm_cvtepi32_ps(zx.o(ecx_8))
            xmm0_12 - arg9
            eax:1.b = (xmm0_12 == arg9 ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, arg9) ? 1 : 0) << 2
                | (xmm0_12 < arg9 ? 1 : 0)
            bool p_10 = unimplemented  {test ah, 0x44}
            
            if (p_10)
                eax.b = 1
            else if (sub_4a1f10(ecx_8).b != 0)
                eax.b = 1
else
    if (mods.dp.d(sx.q(neg.d(ecx_2)), 0x168) == 0)
        goto label_4fdeb9
    
    eax.b = 1

arg5 - 1f
eax:1.b = (arg5 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg5, 1f) ? 1 : 0) << 2 | (arg5 < 1f ? 1 : 0)
bool p_4 = unimplemented  {test ah, 0x44}
bool p_6

if (not(p_4))
    arg6 - 1f
    eax:1.b =
        (arg6 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg6, 1f) ? 1 : 0) << 2 | (arg6 < 1f ? 1 : 0)
    p_6 = unimplemented  {test ah, 0x44}

int32_t var_b8
int32_t var_b4

if (not(p_4) && not(p_6) && eax.b == 0)
    void* eax_7 = *(edi_1 + 4)
    
    if (eax_7 != 0)
        *(eax_7 + 0x30) = 0
    
    void* esi_3 = *(edi_1 + 4)
    var_d4 = &partsengine::COriginPosMode::`vftable'
    int32_t* var_d0_1 = arg4
    var_dc = &partsengine::COriginPosMode::`vftable'
    int32_t* var_d8_1 = arg4
    
    if (esi_3 != 0)
        *(esi_3 + 0xc) = _mm_cvtepi32_ps(zx.o(sub_50feb0(&var_dc, var_b8))) + arg2
        *(*(edi_1 + 4) + 0x10) = _mm_cvtepi32_ps(zx.o(sub_50ff00(&var_d4, var_b4))) + arg3
else if (var_b8 s> 0 && var_b4 s> 0)
    int32_t var_c0
    float xmm0_14 = _mm_cvtepi32_ps(zx.o(var_c0))
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(var_b8))
    int32_t var_bc
    float xmm3_2 = _mm_cvtepi32_ps(zx.o(var_bc))
    float xmm5_2 = _mm_cvtepi32_ps(zx.o(var_b4))
    float xmm1_3 = xmm1_2 + xmm0_14
    float var_a0 = xmm0_14
    var_cc = xmm0_14
    float xmm0_16 = xmm5_2 + xmm3_2
    float var_9c_1 = xmm3_2
    float var_8c_1 = xmm3_2
    float var_90 = xmm1_3
    var_d4 = xmm1_3
    float var_c8_1 = xmm0_16
    float var_d0_2 = xmm0_16
    void var_48
    sub_48d630(&var_48, arg5, arg6)
    arg8 f- 0
    int32_t* eax_15
    eax_15:1.b =
        (arg8 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg8, 0f) ? 1 : 0) << 2 | (arg8 < 0f ? 1 : 0)
    bool p_12 = unimplemented  {test ah, 0x44}
    void var_88
    
    if (p_12)
        void* ecx_10 = &var_88
        EnumC13Lines::EnumC13Lines(ecx_10)
        sub_47b7f0(ecx_10, 0x80000000 ^ arg8)
        sub_47b440(&var_48, &var_88)
    
    arg7 f- 0
    eax_15:1.b =
        (arg7 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg7, 0f) ? 1 : 0) << 2 | (arg7 < 0f ? 1 : 0)
    bool p_14 = unimplemented  {test ah, 0x44}
    
    if (p_14)
        void* ecx_12 = &var_88
        EnumC13Lines::EnumC13Lines(ecx_12)
        sub_47b8b0(ecx_12, 0x80000000 ^ arg7)
        sub_47b440(&var_48, &var_88)
    
    arg9 f- 0
    eax_15:1.b =
        (arg9 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg9, 0f) ? 1 : 0) << 2 | (arg9 < 0f ? 1 : 0)
    bool p_16 = unimplemented  {test ah, 0x44}
    
    if (p_16)
        void* ecx_14 = &var_88
        EnumC13Lines::EnumC13Lines(ecx_14)
        sub_47b960(ecx_14, arg9 ^ (data_7094c0).d)
        sub_47b440(&var_48, &var_88)
    
    var_dc = &partsengine::COriginPosMode::`vftable'
    int32_t* var_d8_2 = arg4
    int32_t eax_16 = sub_50feb0(&var_dc, var_b8)
    var_dc = &partsengine::COriginPosMode::`vftable'
    int32_t* var_d8_3 = arg4
    float xmm1_9 = _mm_cvtepi32_ps(zx.o(eax_16))
    uint128_t xmm0_21 = zx.o(sub_50ff00(&var_dc, var_b4))
    float xmm2_3 = _mm_cvtepi32_ps(zx.o(var_b8))
    float var_a8 = xmm1_9
    float xmm2_4 = xmm2_3 + xmm1_9
    float var_b0 = xmm1_9
    float xmm0_22 = _mm_cvtepi32_ps(xmm0_21)
    float xmm1_11 = _mm_cvtepi32_ps(zx.o(var_b4))
    float var_98 = xmm2_4
    float xmm1_12 = xmm1_11 + xmm0_22
    var_dc = xmm2_4
    float var_a4_1 = xmm0_22
    float var_94_1 = xmm0_22
    float var_ac_1 = xmm1_12
    float var_d8_4 = xmm1_12
    sub_506850(edi_1, arg2, arg3, &var_48, &var_a8, &var_98, &var_b0, &var_dc, &var_a0, &var_90, 
        &var_cc, &var_d4, arg10)
