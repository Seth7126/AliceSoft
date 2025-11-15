// 函数: sub_51e320
// 地址: 0x51e320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73905b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
*(ebx[0x2a] + 0xaa) = 0
void* eax_4
eax_4.b = *(arg2 + 0xa8)

if (eax_4.b != 0)
    void* var_2c
    char eax_6 = sub_4090e0(&ebx[0x54], sub_4079d0(eax_4, &ebx[0x30], &var_2c, &ebx[0x36]))
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    if (eax_6 != 0)
        sub_403490(&ebx[0x30], &data_75d346, nullptr)
        
        if (&ebx[0x36] != &ebx[0x54])
            sub_403590(&ebx[0x36], &ebx[0x54], 0, 0xffffffff)
    
    int32_t eax_8 = (*(*ebx + 0x24))(1)
    int32_t eax_9 = (*(*ebx + 0x28))(1)
    struct textsurface::CTextSurfaceProperty::VTable* var_8c
    sub_6437f0(&var_8c)
    int32_t var_8_1 = 0
    sub_520410(ebx, &var_8c)
    int32_t ecx_11 = *(ebx[0x6f] + 0xa4) - 1
    int32_t edi_3
    
    switch (ecx_11)
        case 1, 4, 7
            int32_t eax_13
            int32_t edx_4
            edx_4:eax_13 = sx.q(eax_8)
            edi_3 = neg.d((eax_13 - edx_4) s>> 1)
        case 2, 5, 8
            edi_3 = neg.d(eax_8)
        default
            edi_3 = 0
    
    int32_t eax_21
    
    switch (ecx_11)
        case 3, 4, 5
            int32_t eax_18
            int32_t edx_5
            edx_5:eax_18 = sx.q(eax_9)
            eax_21 = neg.d((eax_18 - edx_5) s>> 1)
        case 6, 7, 8
            eax_21 = neg.d(eax_9)
        default
            eax_21 = 0
    
    void* ecx_12 = ebx[0x29]
    float var_50 = _mm_cvtepi32_ps(zx.o(eax_21))
    sub_4efcc0(ecx_12)
    int32_t* var_c4 = &std::_Func_impl<class <lambda_117375ce643fba54d0f2c1e635574073>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    int32_t* var_c0_1 = ebx
    int32_t** var_a0_8 = &var_c4
    sub_4c2b20(&ebx[0x10], var_c4)
    void* eax_23 = ebx[0x28]
    float xmm1_1 = var_50
    float xmm0_4 = _mm_cvtepi32_ps(zx.o(edi_3))
    *(eax_23 + 0x94) = xmm1_1
    float xmm1_2 = xmm1_1 + 3f
    *(eax_23 + 0x90) = xmm0_4
    void* eax_24 = ebx[0x29]
    var_50 = xmm1_2
    *(eax_24 + 0x94) = xmm1_2
    *(eax_24 + 0x90) = xmm0_4 + 3f
    struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable*
        * var_a0_9 = 1
    int32_t var_a4_4 = 0x13
    void* esi_3 = *(sub_4efcc0(ebx[0x29]) + 0x44)
    sub_555e00(esi_3, var_a4_4, var_a0_9)
    sub_55f4d0(*(esi_3 + 0x80), &var_8c)
    void* ecx_17 = ebx[0x29]
    float var_48 = ebx[0x6d]
    struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable*
        * var_a0_11 = 1
    int32_t var_a4_5 = 0x13
    void* esi_4 = *(sub_4efcc0(ecx_17) + 0x44)
    sub_555e00(esi_4, var_a4_5, var_a0_11)
    void* esi_5 = *(esi_4 + 0x80)
    float eax_28 = var_48
    
    if (*(esi_5 + 0x40) != eax_28)
        *(esi_5 + 0x40) = eax_28
        sub_55d550(esi_5)
        *(esi_5 + 0xd4) = 1
    
    if ((*(*ebx + 0x18))(eax_2) != 0)
        void* eax_32 = sub_4ee010(ebx[0x6f])
        
        if (eax_32 != 0)
            void* eax_33
            eax_33.b = *(eax_32 + 0x40) == sub_4f46e0(data_7fcba4 + 0x124)
            
            if (eax_33.b != 0)
                var_48.b = ebx[0x3a] == 0
                int32_t eax_35 = sub_51f560(ebx, &ebx[0x30], var_48.b)
                sub_51ec50(ebx, eax_35)
                void* eax_36 = ebx[0x2a]
                float xmm1_7 = _mm_cvtepi32_ps(zx.o(ebx[0x42])) + _mm_cvtepi32_ps(zx.o(edi_3)) + 3f
                    + _mm_cvtepi32_ps(zx.o(eax_35))
                *(eax_36 + 0x94) = var_50
                *(eax_36 + 0x90) = xmm1_7
                char eax_39 = (*(*ebx + 0x18))()
                
                if (sub_51f390(ebx[0x2e], eax_39) != 0)
                    *(ebx[0x2a] + 0xaa) = 1
                
                sub_4ed780(ebx[0x2a], &var_50, &var_48)
                long double x87_r0
                var_48 = sub_63cd20(x87_r0) * var_48
                long double x87_r1
                sub_51ecc0(ebx, sub_63cd20(x87_r1) * var_50, var_48)
    
    int32_t* eax_44 = sub_4079d0(&ebx[0x36], &ebx[0x30], &var_2c, &ebx[0x36])
    var_8_1.b = 1
    struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable*
        * var_a0_17 = 1
    int32_t var_a4_9 = 0x13
    void* esi_8 = *(sub_4efcc0(ebx[0x29]) + 0x44)
    sub_555e00(esi_8, var_a4_9, var_a0_17)
    sub_55d4d0(*(esi_8 + 0x80), eax_44)
    var_8_1.b = 0
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    sub_51f090(ebx)
    int32_t edi_7 = neg.d(ebx[0x42])
    struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable*
        * var_a0_20 = 1
    int32_t var_a4_11 = 0x13
    void* esi_9 = *(sub_4efcc0(ebx[0x29]) + 0x44)
    sub_555e00(esi_9, var_a4_11, var_a0_20)
    sub_55f2e0(*(esi_9 + 0x80), edi_7, 0, eax_8 - 6, eax_9 - 6)
    var_8_1.b = 2
    void* var_44
    sub_51b980(&ebx[0x43], sub_4079d0(&ebx[0x36], &ebx[0x30], &var_44, &ebx[0x36]))
    var_8_1.b = 0
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    arg1 = ebx
    *(ebx[0x2a] + 0x1a9) = 1
    *(ebx[0x29] + 0x1a9) = 1

void* result = sub_51e0f0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
