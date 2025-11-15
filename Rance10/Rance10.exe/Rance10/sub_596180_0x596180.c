// 函数: sub_596180
// 地址: 0x596180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_Makexloc@_Locimp@locale@std@@CAXABV_Locinfo@3@HPAV123@PBV23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    sub_58e6e0(arg1 + 0x70, arg4)
    int32_t eax_4
    eax_4.b = (**(arg1 + 0x10))(eax_2) == (arg2[1] - *arg2) s>> 6
    arg4:3.b = eax_4.b
    
    if (eax_4.b != 0)
        sub_596930(arg1, arg2)
    
    void* eax_5 = sub_5b7570(arg1 + 0x80)
    *(arg1 + 0x24) = *eax_5
    *(arg1 + 0x34) = *(eax_5 + 0x10)
    *(arg1 + 0x44) = *(eax_5 + 0x20)
    *(arg1 + 0x54) = *(eax_5 + 0x30)
    float xmm1_1 = *(arg1 + 0xe0)
    float xmm2_1 = *(arg1 + 0xdc)
    float xmm3_1 = *(arg1 + 0xe4)
    float xmm4_5 =
        *(arg3 + 0x18) * xmm1_1 + *(arg3 + 8) * xmm2_1 + *(arg3 + 0x28) * xmm3_1 f+ *(arg3 + 0x38)
    float xmm5_5 =
        *(arg3 + 0x1c) * xmm1_1 + *(arg3 + 0xc) * xmm2_1 + *(arg3 + 0x2c) * xmm3_1 f+ *(arg3 + 0x3c)
    xmm5_5 - 1f
    void* eax_6
    eax_6:1.b = (xmm5_5 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm5_5, 1f) ? 1 : 0) << 2
        | (xmm5_5 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm5_5 f- 0
        eax_6:1.b = (xmm5_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_5, 0f) ? 1 : 0) << 2
            | (xmm5_5 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            xmm4_5 = xmm4_5 * 1f / xmm5_5
    
    int32_t ecx_4 = *(arg1 + 0x230)
    *(arg1 + 0x22c) = xmm4_5
    int32_t var_14
    int32_t eax_10
    
    if (ecx_4 s< 0 || ecx_4 s>= (arg2[1] - *arg2) s>> 6)
        *(arg1 + 0x234) = data_7fd4d8.q
        eax_10 = data_7fd4e0
    else
        void* ecx_6 = (ecx_4 << 6) + *arg2
        var_14 = *(ecx_6 + 0x38)
        eax_10 = var_14
        *(arg1 + 0x234) = _mm_unpacklo_ps(*(ecx_6 + 0x30), *(ecx_6 + 0x34))
    
    *(arg1 + 0x23c) = eax_10
    eax_10.b = *(arg1 + 0x21)
    
    if (eax_10.b == 0)
        *(arg1 + 0x2c0) = 0
        *(arg1 + 0x2c4) = 0
        *(arg1 + 0x2c8) = 0
        *(arg1 + 0x2cc) = 0
    else
        struct sealengine::CSphereVolume::VTable* var_24
        struct sealengine::CSphereVolume::VTable** eax_11 = sub_5964e0(arg1, arg5, &var_24, arg2)
        *(arg1 + 0x2c0) = *(eax_11 + 4)
        *(arg1 + 0x2c8) = eax_11[3]
        *(arg1 + 0x2cc) = eax_11[4]
    
    float (* var_1c)[0x4]
    
    if (*(arg6 + 0x18) == 0 || arg4:3.b == 0)
        var_1c = nullptr
        int32_t var_18_1 = 0
        var_14 = 0
        int32_t var_8_2 = 1
    else
        sub_56e1f0(&var_1c, arg1 + 0x14)
        int32_t var_8_1 = 0
        float (* esi_4)[0x4] = var_1c
        int32_t var_18
        int32_t edi_4 = (var_18 - esi_4) s>> 6
        arg2 = nullptr
        
        if (edi_4 s> 0)
            void* eax_15 = nullptr
            arg3 = nullptr
            void* ecx_14
            
            do
                void var_64
                int32_t* eax_16 = sub_6cb130(*(arg1 + 0x240) + eax_15, &var_64)
                float var_a4[0x4][0x4]
                float (* eax_17)[0x4] = sub_6cb020(eax_16, eax_16, &var_a4, esi_4)
                ecx_14 = arg2 + 1
                arg2 = ecx_14
                *esi_4 = *eax_17
                esi_4[1] = eax_17[1]
                esi_4[2] = eax_17[2]
                eax_15 = arg3 + 0x40
                esi_4[3] = eax_17[3]
                esi_4 = &esi_4[4]
                arg3 = eax_15
            while (ecx_14 s< edi_4)
    
    __Smtx_lock_shared(arg1 + 0xc)
    void* esi_5 = *(arg1 + 8)
    __Smtx_unlock_shared(arg1 + 0xc)
    sub_570c60(arg1 + 0x250, &var_1c, esi_5, arg1 + 0x24)
    int32_t var_8_3 = 0xffffffff
    float (* ecx_16)[0x4] = var_1c
    
    if (ecx_16 != 0)
        sub_403160(ecx_16, (var_14 - ecx_16) s>> 6, 0x40)
    
    if (*(arg1 + 0x24c) != 0 && arg4:3.b != 0)
        __Smtx_lock_shared(arg1 + 0xc)
        int32_t* edi_6 = *(arg1 + 8)
        __Smtx_unlock_shared(arg1 + 0xc)
        char result = sub_571960(arg1 + 0x268, arg1 + 0x24, arg1 + 0x14, edi_6, arg7)
        
        if (result == 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result

fsbase->NtTib.ExceptionList = ExceptionList
return 1
