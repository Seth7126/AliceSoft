// 函数: sub_54c7e0
// 地址: 0x54c7e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x2c) != 0)
    void* ecx = *(arg1 + 0x2c)
    int32_t esi_1
    
    if (ecx == 0)
        esi_1 = 0
    else if (*(arg1 + 0x42) == 0)
        int32_t* ecx_1 = *(ecx + 0x118)
        
        if (ecx_1 != 0)
            esi_1 = (*(*ecx_1 + 0x14))(eax_2)
        else
            esi_1 = 0
    else
        esi_1 = *(arg1 + 0x5c)
    
    void* ecx_2 = *(arg1 + 0x2c)
    int32_t eax_5
    
    if (ecx_2 == 0)
        eax_5 = 0
    else if (*(arg1 + 0x42) == 0)
        int32_t* ecx_3 = *(ecx_2 + 0x118)
        
        if (ecx_3 != 0)
            eax_5 = (*(*ecx_3 + 0x10))(eax_2)
        else
            eax_5 = 0
    else
        eax_5 = *(arg1 + 0x58)
    
    struct common::CRect::VTable* var_38
    sub_545fb0(&var_38, eax_5, esi_1, arg1 + 0x98)
    int32_t var_8_1 = 0
    int32_t var_24
    int32_t ecx_5 = var_24
    int32_t var_1c_1 = ecx_5
    bool cond:0_1 = ecx_5 == 0
    int32_t var_30
    int32_t var_20
    
    if (ecx_5 s> 0)
        if (var_20 s> 0)
            float xmm1_1 = *(arg1 + 0x24)
            
            if (not(xmm1_1 f<= 0))
                float xmm0_1 = *(arg1 + 0x20)
                xmm0_1 - xmm1_1
                void* var_18_1 = arg1 + 0x20
                void* eax_7
                eax_7:1.b = (xmm0_1 == xmm1_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_1, xmm1_1) ? 1 : 0) << 2 | (xmm0_1 < xmm1_1 ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    int32_t var_14
                    void* eax_8 = &var_14
                    bool cond:1_1 = *(arg1 + 0x20) > 0f
                    var_14 = 0
                    
                    if (cond:1_1)
                        eax_8 = var_18_1
                    
                    bool cond:2_1 = *eax_8 > xmm1_1
                    float xmm0_5 = _mm_cvtepi32_ps(zx.o(ecx_5))
                    
                    if (cond:2_1)
                        eax_8 = arg1 + 0x24
                    
                    int32_t eax_9 = int.d(xmm0_5 f* *eax_8 / xmm1_1)
                    
                    if (*(arg1 + 0x28) != 0)
                        var_30 += ecx_5 - eax_9
                    
                    ecx_5 = eax_9
                    int32_t var_24_1 = ecx_5
        
        cond:0_1 = ecx_5 == 0
    
    void* esi_3
    
    if (cond:0_1 || var_20 == 0)
        esi_3 = arg2
        *(esi_3 + 0xa8) = 0
    else
        esi_3 = arg2
        *(esi_3 + 0x58) = var_30
        int32_t var_2c
        *(esi_3 + 0x5c) = var_2c
        *(esi_3 + 0x60) = ecx_5
        *(esi_3 + 0x64) = var_20
    
    if (*(arg1 + 0x28) != 0)
        _mm_cvtepi32_ps(zx.o(var_1c_1 - ecx_5))
    
    void* eax_14 = *(esi_3 + 0xbc)
    void* eax_15
    
    if (eax_14 != 0)
        eax_15 = *(eax_14 + 8)
    else
        eax_15 = data_7fcba0
    
    sub_4b9f80(esi_3, eax_15)
    void* var_4c_3 = esi_3
    result = sub_54e2e0(arg1 + 0x2c)

fsbase->NtTib.ExceptionList = ExceptionList
return result
