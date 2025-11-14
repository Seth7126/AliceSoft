// 函数: sub_4a1f50
// 地址: 0x4a1f50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc578
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_e0 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4a33c0(arg1, 0, 0, 1)
float xmm0 = sub_4a1c10(arg1)
float xmm0_1 = sub_4a1cf0(arg1)
int32_t eax_5 = (*(**(arg1 + 0x5c) + 0x28))(arg10)
int32_t eax_6 = (*(**(arg1 + 0x5c) + 0x2c))(arg10)
int32_t eax_7 = *(arg1 + 0x88)
int32_t eax_8 = *(*(*(arg1 + 0x50) + 0x58) + 0x90)
void* eax_9

if (eax_8 s> 0)
    int32_t var_e4_2 = eax_8
    eax_9 = sub_4a56f0(*(arg1 + 0x54))

float xmm1

if (eax_8 s<= 0 || eax_9 == 0)
    xmm1 = 1f
else
    xmm1 = sub_4a28a0(eax_9)

float xmm0_4 = *(arg1 + 0xb4) * xmm1
int32_t eax_12 = *(*(*(arg1 + 0x50) + 0x58) + 0x90)
void* eax_13

if (eax_12 s> 0)
    int32_t var_e4_3 = eax_12
    eax_13 = sub_4a56f0(*(arg1 + 0x54))

float xmm1_1

if (eax_12 s<= 0 || eax_13 == 0)
    xmm1_1 = 1f
else
    xmm1_1 = sub_4a28f0(eax_13)

float xmm0_7 = *(arg1 + 0xb8) * xmm1_1
int32_t eax_16 = *(*(*(arg1 + 0x50) + 0x58) + 0x90)
void* eax_17

if (eax_16 s> 0)
    int32_t var_e4_4 = eax_16
    eax_17 = sub_4a56f0(*(arg1 + 0x54))

float xmm1_2

if (eax_16 s<= 0 || eax_17 == 0)
    xmm1_2 = (zx.o(0)).d
else
    xmm1_2 = sub_4a2940(eax_17)

float xmm0_10 = *(arg1 + 0xbc) + xmm1_2
int32_t eax_20 = *(*(*(arg1 + 0x50) + 0x58) + 0x90)
void* eax_21

if (eax_20 s> 0)
    int32_t var_e4_5 = eax_20
    eax_21 = sub_4a56f0(*(arg1 + 0x54))

float xmm1_3

if (eax_20 s<= 0 || eax_21 == 0)
    xmm1_3 = (zx.o(0)).d
else
    xmm1_3 = sub_4a2990(eax_21)

float xmm0_13 = *(arg1 + 0xc0) + xmm1_3
int32_t eax_24 = *(*(*(arg1 + 0x50) + 0x58) + 0x90)
void* eax_25

if (eax_24 s> 0)
    int32_t var_e4_6 = eax_24
    eax_25 = sub_4a56f0(*(arg1 + 0x54))

float xmm1_4

if (eax_24 s<= 0 || eax_25 == 0)
    xmm1_4 = (zx.o(0)).d
else
    xmm1_4 = sub_4a29e0(eax_25)

float xmm0_16 = *(arg1 + 0xc4) + xmm1_4
struct partsengine::COriginPosMode::VTable* const var_50 = &partsengine::COriginPosMode::`vftable'
int32_t var_4c = eax_7
int32_t var_4 = 0
char eax_29 = (*(**(arg1 + 0x5c) + 0x58))(arg10)
char eax_30 = (*(**(arg1 + 0x5c) + 0x5c))(arg10)

if (eax_29 == 0)
    arg10:3.b = 0

if (eax_29 != 0 || eax_30 != 0)
    arg10:3.b = 1

xmm0_4 - 1f
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    xmm0_7 - 1f
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        goto label_4a2245
    
    int32_t ecx_18 = int.d(fconvert.t(xmm0_10))
    _mm_cvtepi32_ps(zx.o(ecx_18)) - xmm0_10
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (not(p_5) && sub_4a1f10(ecx_18) == 0)
        int32_t ecx_19 = int.d(fconvert.t(xmm0_13))
        _mm_cvtepi32_ps(zx.o(ecx_19)) - xmm0_13
        bool p_7 = unimplemented  {test ah, 0x44}
        
        if (not(p_7) && sub_4a1f10(ecx_19) == 0)
            int32_t ecx_20 = int.d(fconvert.t(xmm0_16))
            _mm_cvtepi32_ps(zx.o(ecx_20)) - xmm0_16
            bool p_9 = unimplemented  {test ah, 0x44}
            
            if (not(p_9))
                if (sub_4a1f10(ecx_20) == 0 || arg10:3.b == 0)
                    goto label_4a2555
                
                goto label_4a2263

label_4a2245:
float* result

if (arg10:3.b == 0)
label_4a2555:
    int32_t eax_59
    
    if (eax_7 - 1 u> 8)
        eax_59 = 0
    else
        switch (eax_7 + &jump_table_4a2664[2]:3)
            case &lookup_table_4a2670, &lookup_table_4a2670[3], &lookup_table_4a2670[6]
                eax_59 = 0
            case &lookup_table_4a2670[1], &lookup_table_4a2670[4], &lookup_table_4a2670[7]
                int32_t eax_56
                int32_t edx_5
                edx_5:eax_56 = sx.q(eax_5)
                eax_59 = neg.d((eax_56 - edx_5) s>> 1)
            case &lookup_table_4a2670[2], &lookup_table_4a2670[5], &lookup_table_4a2670[8]
                eax_59 = neg.d(eax_5)
    
    *arg2 = _mm_cvtepi32_ps(zx.o(eax_59)) + xmm0
    int32_t eax_66
    
    if (eax_7 - 1 u> 8)
        eax_66 = 0
    else
        switch (eax_7 + &jump_table_4a267c[2]:3)
            case &lookup_table_4a2688, &lookup_table_4a2688[1], &lookup_table_4a2688[2]
                eax_66 = 0
            case &lookup_table_4a2688[3], &lookup_table_4a2688[4], &lookup_table_4a2688[5]
                int32_t eax_63
                int32_t edx_6
                edx_6:eax_63 = sx.q(eax_6)
                eax_66 = neg.d((eax_63 - edx_6) s>> 1)
            case &lookup_table_4a2688[6], &lookup_table_4a2688[7], &lookup_table_4a2688[8]
                eax_66 = neg.d(eax_6)
    
    float xmm0_46 = _mm_cvtepi32_ps(zx.o(eax_66))
    float xmm2_6 = _mm_cvtepi32_ps(zx.o(eax_5))
    float xmm1_15 = _mm_cvtepi32_ps(zx.o(eax_6))
    *arg3 = xmm0_46 + xmm0_1
    *arg4 = xmm2_6 + *arg2
    *arg5 = *arg3
    *arg6 = *arg2
    *arg7 = xmm1_15 + *arg3
    *arg8 = xmm2_6 + *arg2
    result = arg9
    *result = xmm1_15 + *arg3
else
label_4a2263:
    
    if (eax_5 s<= 0 || eax_6 s<= 0)
        *arg8 = xmm0
        *arg6 = xmm0
        *arg4 = xmm0
        *arg2 = xmm0
        *arg9 = xmm0_1
        *arg7 = xmm0_1
        *arg5 = xmm0_1
        result = arg3
        *result = xmm0_1
    else
        void var_d4
        EnumC13Lines::EnumC13Lines(&var_d4)
        void var_94
        
        if (eax_30 != 0)
            sub_47b440(&var_d4, sub_48d630(&var_94, xmm0_4, xmm0_7))
        
        if (eax_29 != 0)
            xmm0_13 f- 0
            int32_t* eax_34
            eax_34:1.b = (xmm0_13 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_13, 0f) ? 1 : 0) << 2
                | (xmm0_13 < 0f ? 1 : 0)
            bool p_11 = unimplemented  {test ah, 0x44}
            
            if (p_11)
                void* ecx_24 = &var_94
                EnumC13Lines::EnumC13Lines(ecx_24)
                sub_47b7f0(ecx_24, xmm0_13 ^ 0x80000000)
                sub_47b440(&var_d4, &var_94)
            
            xmm0_10 f- 0
            eax_34:1.b = (xmm0_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2
                | (xmm0_10 < 0f ? 1 : 0)
            bool p_13 = unimplemented  {test ah, 0x44}
            
            if (p_13)
                void* ecx_26 = &var_94
                EnumC13Lines::EnumC13Lines(ecx_26)
                sub_47b8b0(ecx_26, xmm0_10 ^ 0x80000000)
                sub_47b440(&var_d4, &var_94)
            
            xmm0_16 f- 0
            eax_34:1.b = (xmm0_16 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_16, 0f) ? 1 : 0) << 2
                | (xmm0_16 < 0f ? 1 : 0)
            bool p_15 = unimplemented  {test ah, 0x44}
            
            if (p_15)
                void* ecx_28 = &var_94
                EnumC13Lines::EnumC13Lines(ecx_28)
                sub_47b960(ecx_28, xmm0_16 ^ (data_7094c0).d)
                sub_47b440(&var_d4, &var_94)
        
        struct partsengine::COriginPosMode::VTable* const* ecx_30 = &var_50
        float xmm1_12 = _mm_cvtepi32_ps(zx.o(sub_50feb0(ecx_30, eax_5)))
        float xmm0_30 = _mm_cvtepi32_ps(zx.o(sub_50ff00(ecx_30, eax_6)))
        float xmm2_3 = _mm_cvtepi32_ps(zx.o(eax_5))
        float xmm3_2 = _mm_cvtepi32_ps(zx.o(eax_6))
        float xmm2_4 = xmm2_3 + xmm1_12
        float var_2c = xmm1_12
        float xmm3_3 = xmm3_2 + xmm0_30
        float var_34 = xmm1_12
        float var_40 = xmm2_4
        float var_24 = xmm2_4
        sub_4e8320(&var_40, &var_2c, &var_d4, xmm0, xmm0_1, &var_40, &var_34, &var_24, arg1 + 0x3b4)
        *arg2 = var_2c
        *arg3 = xmm0_30
        *arg4 = var_40
        *arg5 = xmm0_30
        *arg6 = var_34
        *arg7 = xmm3_3
        *arg8 = var_24
        result = arg9
        *result = xmm3_3

fsbase->NtTib.ExceptionList = ExceptionList
return result
