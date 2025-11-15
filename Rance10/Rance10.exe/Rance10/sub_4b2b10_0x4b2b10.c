// 函数: sub_4b2b10
// 地址: 0x4b2b10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731f80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *(arg1 + 0xe8)
int32_t ebx = 0x18
*(arg1 + 0x156) = 0
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = *(arg1 + 0x154)

if (result.b == 0)
    ebx = *(arg1 + 0xec)

if (esi s> 0 && ebx s> 0)
    sub_4b32a0(arg1)
    struct 
        common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable**
         eax_3 = sub_4ef940(*(arg1 + 0xa0))
    
    if (eax_3[0x2a] != esi || eax_3[0x2b] != ebx)
        eax_3[0x2a] = esi
        eax_3[0x2b] = ebx
        eax_3[0x34].b = 1
    
    sub_4b4d80(eax_3, *(arg1 + 0x13c), *(arg1 + 0x140), *(arg1 + 0x144), 0xff)
    void* eax_4 = sub_4efcc0(*(arg1 + 0xa8))
    void* ecx_3 = *(arg1 + 0xa8)
    int128_t var_64_1 = data_79a8d0
    struct textsurface::CTextSurfaceProperty::VTable* const var_70 =
        &textsurface::CTextSurfaceProperty::`vftable'
    int128_t xmm0_2 = data_79a8b0
    *(ecx_3 + 0xa4) = 4
    int32_t var_6c_1 = 0
    int32_t var_68_1 = 0xe
    int32_t var_54_1 = 0
    int32_t var_50_1 = 0
    int128_t var_4c_1 = xmm0_2
    int32_t var_8_1 = 0
    void* esi_1 = *(eax_4 + 0x44)
    sub_555e00(esi_1, 0x13, 1)
    sub_55f4d0(*(esi_1 + 0x80), &var_70)
    int32_t var_8_2 = 0xffffffff
    void* esi_2 = *(eax_4 + 0x44)
    sub_555e00(esi_2, 0x13, 1)
    sub_55d4d0(*(esi_2 + 0x80), arg1 + 0x124)
    void* eax_6 = *(arg1 + 0xa8)
    void* esi_3 = *(eax_4 + 0x44)
    float xmm0_3 = *(eax_6 + 0x94)
    int32_t edi_1 = int.d(_mm_cvtepi32_ps(zx.o(esi)) f- *(eax_6 + 0x90) - _mm_cvtepi32_ps(0x14))
    sub_555e00(esi_3, 0x13, 1)
    sub_55f2e0(*(esi_3 + 0x80), 0, 0, edi_1, int.d(_mm_cvtepi32_ps(zx.o(ebx)) - xmm0_3))
    *(*(arg1 + 0xb4) + 0x1a8) = 1
    void* esi_4 = *(sub_4efcc0(*(arg1 + 0xb4)) + 0x44)
    sub_555e00(esi_4, 0x17, 1)
    void* eax_10 = *(esi_4 + 0x80)
    *(eax_10 + 0x44) = 1
    *(eax_10 + 8) = 0
    *(eax_10 + 0xc) = 0
    int32_t xmm0_11 = _mm_cvtepi32_ps(0x14)
    *(eax_10 + 0x14) = 0
    int32_t xmm1_5 = _mm_cvtepi32_ps(zx.o(esi))
    *(eax_10 + 0x10) = xmm1_5
    *(eax_10 + 0x18) = 0
    *(eax_10 + 0x1c) = xmm0_11
    *(eax_10 + 0x20) = xmm1_5
    *(eax_10 + 0x24) = xmm0_11
    *(*(arg1 + 0xb8) + 0xa4) = 3
    void* esi_5 = *(arg1 + 0xb8)
    sub_4eec50(esi_5, nullptr, 1)
    void* esi_7 = *(esi_5 + 0x74) + 0xa4
    
    if (*(esi_7 + 4) != 0x14 || *(esi_7 + 8) != 0x14)
        *(esi_7 + 4) = 0x14
        *(esi_7 + 8) = 0x14
        *(esi_7 + 0x174) = 1
    
    if (*(esi_7 + 0x10) != 0x78 || *(esi_7 + 0x14) != 0x78 || *(esi_7 + 0x18) != 0x78)
        *(esi_7 + 0x10) = 0x78
        *(esi_7 + 0x14) = 0x78
        *(esi_7 + 0x18) = 0x78
        *(esi_7 + 0x174) = 1
    
    char var_2c
    sub_403360(&var_2c, 0x761a54)
    int32_t var_8_3 = 1
    sub_4dfcd0(esi_7, &var_2c)
    int32_t var_8_4 = 0xffffffff
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    void* ecx_17 = *(arg1 + 0xbc)
    var_2c = 0
    void* esi_8 = *(sub_4efcc0(ecx_17) + 0x44)
    sub_555e00(esi_8, 0x17, 1)
    void* eax_15 = *(esi_8 + 0x80)
    *(eax_15 + 0x44) = 1
    *(eax_15 + 8) = 0
    *(eax_15 + 0xc) = 0
    int32_t xmm1_7 = _mm_cvtepi32_ps(8)
    *(eax_15 + 0x14) = 0
    int32_t xmm0_13 = _mm_cvtepi32_ps(zx.o(ebx + 8))
    *(eax_15 + 0x10) = xmm1_7
    *(eax_15 + 0x18) = 0
    *(eax_15 + 0x1c) = xmm0_13
    *(eax_15 + 0x20) = xmm1_7
    *(eax_15 + 0x24) = xmm0_13
    void* esi_9 = *(sub_4efcc0(*(arg1 + 0xc0)) + 0x44)
    sub_555e00(esi_9, 0x17, 1)
    void* eax_18 = *(esi_9 + 0x80)
    *(eax_18 + 0x44) = 1
    *(eax_18 + 8) = 0
    *(eax_18 + 0xc) = 0
    int32_t xmm1_9 = _mm_cvtepi32_ps(8)
    *(eax_18 + 0x14) = 0
    int32_t xmm0_15 = _mm_cvtepi32_ps(zx.o(ebx + 8))
    *(eax_18 + 0x10) = xmm1_9
    *(eax_18 + 0x18) = 0
    *(eax_18 + 0x1c) = xmm0_15
    *(eax_18 + 0x20) = xmm1_9
    *(eax_18 + 0x24) = xmm0_15
    void* esi_10 = *(sub_4efcc0(*(arg1 + 0xc4)) + 0x44)
    sub_555e00(esi_10, 0x17, 1)
    void* eax_21 = *(esi_10 + 0x80)
    int32_t xmm1_11 = _mm_cvtepi32_ps(zx.o(esi + 8))
    *(eax_21 + 0x44) = 1
    *(eax_21 + 8) = 0
    *(eax_21 + 0xc) = 0
    int32_t xmm0_17 = _mm_cvtepi32_ps(8)
    *(eax_21 + 0x14) = 0
    *(eax_21 + 0x10) = xmm1_11
    *(eax_21 + 0x18) = 0
    *(eax_21 + 0x1c) = xmm0_17
    *(eax_21 + 0x20) = xmm1_11
    *(eax_21 + 0x24) = xmm0_17
    void* esi_11 = *(sub_4efcc0(*(arg1 + 0xc8)) + 0x44)
    sub_555e00(esi_11, 0x17, 1)
    void* eax_24 = *(esi_11 + 0x80)
    *(eax_24 + 0x44) = 1
    int32_t xmm1_13 = _mm_cvtepi32_ps(zx.o(esi + 8))
    *(eax_24 + 8) = 0
    *(eax_24 + 0xc) = 0
    *(eax_24 + 0x14) = 0
    int32_t xmm0_19 = _mm_cvtepi32_ps(8)
    *(eax_24 + 0x10) = xmm1_13
    *(eax_24 + 0x18) = 0
    *(eax_24 + 0x1c) = xmm0_19
    *(eax_24 + 0x20) = xmm1_13
    *(eax_24 + 0x24) = xmm0_19
    char eax_25 = sub_407560(arg1 + 0x10c, 0x75cfe3)
    void* ecx_26 = *(arg1 + 0xcc)
    
    if (eax_25 != 0)
        sub_4b4d50(sub_4ef940(ecx_26), 0xc, 0xc)
        sub_4b4d80(sub_4ef940(*(arg1 + 0xcc)), 0xff, 0xff, 0xff, 0xff)
    else
        int32_t* eax_26 = sub_4efcc0(ecx_26)
        void* esi_12 = eax_26[0x11]
        sub_555e00(esi_12, 0x11, 1)
        sub_547af0(*(esi_12 + 0x80), arg1 + 0x10c, nullptr)
        int32_t eax_28 = *eax_26
        float xmm0_21 = _mm_cvtepi32_ps(0xc)
        float xmm0_23 = _mm_cvtepi32_ps(zx.o((*(eax_28 + 0x24))(1)))
        void* eax_30 = *(arg1 + 0xcc)
        float xmm0_25 = _mm_cvtepi32_ps(0xc)
        *(eax_30 + 0xd4) = xmm0_21 / xmm0_23
        *(*(arg1 + 0xcc) + 0xd8) = xmm0_25 / _mm_cvtepi32_ps(zx.o((*(*eax_26 + 0x28))(1)))
    
    struct 
        common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable**
         eax_36 = sub_4ef940(*(arg1 + 0xd0))
    *(*(arg1 + 0xd0) + 0xa4) = 4
    
    if (eax_36[0x2a] != 1 || eax_36[0x2b] != 3)
        eax_36[0x2a] = 1
        eax_36[0x2b] = 3
        eax_36[0x34].b = 1
    
    if (eax_36[0x2c] != 0xff || eax_36[0x2d] != 0 || eax_36[0x2e] != 0 || eax_36[0x2f] != 0x96)
        eax_36[0x2c] = 0xff
        eax_36[0x2d] = 0
        eax_36[0x2e] = 0
        eax_36[0x2f] = 0x96
        eax_36[0x34].b = 1
    
    struct 
        common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable**
         eax_37 = sub_4ef940(*(arg1 + 0xd4))
    
    if (eax_37[0x2a] != 8 || eax_37[0x2b] != ebx + 8)
        eax_37[0x2a] = 8
        eax_37[0x2b] = ebx + 8
        eax_37[0x34].b = 1
    
    struct 
        common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable**
         eax_38 = sub_4ef940(*(arg1 + 0xd8))
    
    if (eax_38[0x2a] != esi + 8 || eax_38[0x2b] != 8)
        eax_38[0x2a] = esi + 8
        eax_38[0x2b] = 8
        eax_38[0x34].b = 1
    
    void* eax_40 = &sub_4ef940(*(arg1 + 0xd4))[0x29]
    
    if (*(eax_40 + 0xc) != 0x64 || *(eax_40 + 0x10) != 0x64 || *(eax_40 + 0x14) != 0xff
            || *(eax_40 + 0x18) != 0x96)
        *(eax_40 + 0xc) = 0x64
        *(eax_40 + 0x10) = 0x64
        *(eax_40 + 0x14) = 0xff
        *(eax_40 + 0x18) = 0x96
        *(eax_40 + 0x2c) = 1
    
    result = &sub_4ef940(*(arg1 + 0xd8))[0x29]
    
    if (result[3] != 0x64 || result[4] != 0x64 || result[5] != 0xff || result[6] != 0x96)
        result[3] = 0x64
        result[4] = 0x64
        result[5] = 0xff
        result[6] = 0x96
        result[0xb].b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
