// 函数: sub_5f6130
// 地址: 0x5f6130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc268
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CWriteVB::VTable* const var_10 = &viewtrans::CWriteVB::`vftable'
int32_t var_4 = 0
int32_t i_1 = 0
int32_t* ecx = *(arg1 + 8)
void* i_3 = ((int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x40) + 0xe0)) * arg2) + 0xf) & 0xfffffff0) - 0xe0
void* i

if (ecx == 0)
    i.b = 0
else
    void* ecx_1 = (*(*ecx + 0x18))(eax_2)
    
    if (ecx_1 == 0)
        i.b = 0
    else
        i = 0xf
        void* var_18_1 = nullptr
        void* i_2 = 0xf
        void* i_5 = i_3
        void* var_14_1 = i_3 + 0xf
        void* i_4
        
        do
            if (i_5 s< 0)
                i_4.b = arg3
            else
                int32_t eax_5 = *(arg1 + 0x40)
                
                if (i_5 s>= eax_5)
                    i_4.b = arg3
                else
                    i_4 = i_2
                    
                    if (var_14_1 s> eax_5)
                        i_4 = eax_5 - var_18_1 - i_3
                    
                    uint128_t xmm0_3 = zx.o(*(arg1 + 0x34))
                    float xmm4_2 = _mm_cvtepi32_ps(zx.o(i_5))
                    float xmm0_4 = _mm_cvtepi32_ps(xmm0_3)
                    float xmm1 = xmm4_2
                    
                    if (arg3 != 0)
                        xmm0_4 = xmm0_4 - 0.5f
                        xmm1 = xmm1 - 0.5f
                    
                    *ecx_1 = xmm0_4
                    *(ecx_1 + 4) = xmm1
                    *(ecx_1 + 8) = 0x3f000000
                    *(ecx_1 + 0xc) = 0x3f800000
                    *(ecx_1 + 0x10) = 0xffffffff
                    float xmm0_6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                    *(ecx_1 + 0x14) = 0
                    *(ecx_1 + 0x18) = xmm4_2 / xmm0_6
                    float xmm1_3 = xmm4_2
                    float xmm0_8 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
                    
                    if (arg3 != 0)
                        xmm0_8 = xmm0_8 - 0.5f
                        xmm1_3 = xmm1_3 - 0.5f
                    
                    *(ecx_1 + 0x20) = xmm1_3
                    *(ecx_1 + 0x1c) = xmm0_8
                    *(ecx_1 + 0x24) = 0x3f000000
                    *(ecx_1 + 0x28) = 0x3f800000
                    *(ecx_1 + 0x2c) = 0xffffffff
                    float xmm0_10 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                    void* eax_9 = var_18_1 + i_4
                    *(ecx_1 + 0x30) = 0x3f800000
                    i_4.b = arg3
                    float xmm3_2 = _mm_cvtepi32_ps(zx.o(eax_9 + i_3))
                    *(ecx_1 + 0x34) = xmm4_2 / xmm0_10
                    float xmm1_6 = xmm3_2
                    float xmm0_12 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
                    
                    if (i_4.b != 0)
                        xmm0_12 = xmm0_12 - 0.5f
                        xmm1_6 = xmm1_6 - 0.5f
                    
                    *(ecx_1 + 0x3c) = xmm1_6
                    *(ecx_1 + 0x38) = xmm0_12
                    *(ecx_1 + 0x40) = 0x3f000000
                    *(ecx_1 + 0x44) = 0x3f800000
                    *(ecx_1 + 0x48) = 0xffffffff
                    uint128_t xmm0_13 = zx.o(*(arg1 + 0x40))
                    *(ecx_1 + 0x4c) = 0
                    *(ecx_1 + 0x50) = xmm3_2 / _mm_cvtepi32_ps(xmm0_13)
                    float xmm1_9 = xmm3_2
                    float xmm0_16 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
                    
                    if (i_4.b != 0)
                        xmm0_16 = xmm0_16 - 0.5f
                        xmm1_9 = xmm1_9 - 0.5f
                    
                    *(ecx_1 + 0x54) = xmm0_16
                    *(ecx_1 + 0x58) = xmm1_9
                    *(ecx_1 + 0x5c) = 0x3f000000
                    *(ecx_1 + 0x60) = 0x3f800000
                    *(ecx_1 + 0x64) = 0xffffffff
                    float xmm0_18 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                    *(ecx_1 + 0x68) = 0
                    *(ecx_1 + 0x6c) = xmm3_2 / xmm0_18
                    float xmm1_12 = xmm4_2
                    float xmm0_20 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
                    
                    if (i_4.b != 0)
                        xmm0_20 = xmm0_20 - 0.5f
                        xmm1_12 = xmm1_12 - 0.5f
                    
                    *(ecx_1 + 0x70) = xmm0_20
                    *(ecx_1 + 0x74) = xmm1_12
                    float xmm1_13 = xmm3_2
                    *(ecx_1 + 0x78) = 0x3f000000
                    *(ecx_1 + 0x7c) = 0x3f800000
                    *(ecx_1 + 0x80) = 0xffffffff
                    float xmm0_22 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                    *(ecx_1 + 0x84) = 0x3f800000
                    *(ecx_1 + 0x88) = xmm4_2 / xmm0_22
                    float xmm0_24 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
                    
                    if (i_4.b != 0)
                        xmm0_24 = xmm0_24 - 0.5f
                        xmm1_13 = xmm1_13 - 0.5f
                    
                    *(ecx_1 + 0x8c) = xmm0_24
                    *(ecx_1 + 0x90) = xmm1_13
                    *(ecx_1 + 0x94) = 0x3f000000
                    *(ecx_1 + 0x98) = 0x3f800000
                    *(ecx_1 + 0x9c) = 0xffffffff
                    float xmm0_26 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                    *(ecx_1 + 0xa0) = 0x3f800000
                    *(ecx_1 + 0xa4) = xmm3_2 / xmm0_26
                    ecx_1 += 0xa8
                    i_1 += 6
                
                i = i_2
            
            var_14_1 += 0xf
            i -= 1
            var_18_1 += 0x10
            i_5 += 0x10
            i_2 = i
        while (i s> 0)
        
        if (i_3 s> 0)
            i = *(arg1 + 0x40)
            
            if (i s> 0)
                int32_t xmm1_14 = (zx.o(0)).d
                
                if (i_3 s> i)
                    i_3 = i
                
                float xmm0_28 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
                
                if (i_4.b != 0)
                    xmm0_28 = xmm0_28 - 0.5f
                    xmm1_14 = -0x41000000
                
                *ecx_1 = xmm0_28
                *(ecx_1 + 4) = xmm1_14
                *(ecx_1 + 8) = 0x3f000000
                *(ecx_1 + 0xc) = 0x3f800000
                *(ecx_1 + 0x10) = 0xffffffff
                float xmm0_30 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                *(ecx_1 + 0x14) = 0
                *(ecx_1 + 0x18) = 0f / xmm0_30
                int32_t xmm1_16 = (zx.o(0)).d
                float xmm0_32 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
                
                if (i_4.b != 0)
                    xmm0_32 = xmm0_32 - 0.5f
                    xmm1_16 = -0x41000000
                
                *(ecx_1 + 0x20) = xmm1_16
                *(ecx_1 + 0x1c) = xmm0_32
                *(ecx_1 + 0x24) = 0x3f000000
                *(ecx_1 + 0x28) = 0x3f800000
                *(ecx_1 + 0x2c) = 0xffffffff
                uint128_t xmm0_33 = zx.o(*(arg1 + 0x40))
                *(ecx_1 + 0x30) = 0x3f800000
                float xmm0_34 = _mm_cvtepi32_ps(xmm0_33)
                float xmm3_5 = _mm_cvtepi32_ps(zx.o(i_3))
                *(ecx_1 + 0x34) = 0f / xmm0_34
                float xmm1_18 = xmm3_5
                float xmm0_36 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
                
                if (i_4.b != 0)
                    xmm0_36 = xmm0_36 - 0.5f
                    xmm1_18 = xmm1_18 - 0.5f
                
                *(ecx_1 + 0x3c) = xmm1_18
                *(ecx_1 + 0x38) = xmm0_36
                *(ecx_1 + 0x40) = 0x3f000000
                *(ecx_1 + 0x44) = 0x3f800000
                *(ecx_1 + 0x48) = 0xffffffff
                uint128_t xmm0_37 = zx.o(*(arg1 + 0x40))
                *(ecx_1 + 0x4c) = 0
                *(ecx_1 + 0x50) = xmm3_5 / _mm_cvtepi32_ps(xmm0_37)
                float xmm1_21 = xmm3_5
                float xmm0_40 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
                
                if (i_4.b != 0)
                    xmm0_40 = xmm0_40 - 0.5f
                    xmm1_21 = xmm1_21 - 0.5f
                
                *(ecx_1 + 0x54) = xmm0_40
                *(ecx_1 + 0x58) = xmm1_21
                *(ecx_1 + 0x5c) = 0x3f000000
                *(ecx_1 + 0x60) = 0x3f800000
                *(ecx_1 + 0x64) = 0xffffffff
                float xmm0_42 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                *(ecx_1 + 0x68) = 0
                *(ecx_1 + 0x6c) = xmm3_5 / xmm0_42
                int32_t xmm1_24 = (zx.o(0)).d
                float xmm0_44 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
                
                if (i_4.b != 0)
                    xmm0_44 = xmm0_44 - 0.5f
                    xmm1_24 = -0x41000000
                
                *(ecx_1 + 0x70) = xmm0_44
                *(ecx_1 + 0x74) = xmm1_24
                float xmm1_25 = xmm3_5
                *(ecx_1 + 0x78) = 0x3f000000
                *(ecx_1 + 0x7c) = 0x3f800000
                *(ecx_1 + 0x80) = 0xffffffff
                float xmm0_46 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                *(ecx_1 + 0x84) = 0x3f800000
                *(ecx_1 + 0x88) = 0f / xmm0_46
                float xmm0_48 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
                
                if (i_4.b != 0)
                    xmm0_48 = xmm0_48 - 0.5f
                    xmm1_25 = xmm1_25 - 0.5f
                
                *(ecx_1 + 0x8c) = xmm0_48
                *(ecx_1 + 0x90) = xmm1_25
                *(ecx_1 + 0x94) = 0x3f000000
                *(ecx_1 + 0x98) = 0x3f800000
                *(ecx_1 + 0x9c) = 0xffffffff
                float xmm0_50 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                *(ecx_1 + 0xa0) = 0x3f800000
                *(ecx_1 + 0xa4) = xmm3_5 / xmm0_50
                ecx_1 += 0xa8
                i_1 += 6
        
        while (i_1 s< *(arg1 + 0xc))
            int32_t xmm0_51 = -0x3b800000
            int32_t xmm1_26 = -0x3b800000
            
            if (i_4.b != 0)
                xmm0_51 = -0x3b7ff000
                xmm1_26 = -0x3b7ff000
            
            *ecx_1 = xmm0_51
            i_1 += 1
            *(ecx_1 + 4) = xmm1_26
            *(ecx_1 + 8) = 0x3f000000
            *(ecx_1 + 0xc) = 0x3f800000
            *(ecx_1 + 0x10) = 0xffffffff
            *(ecx_1 + 0x14) = 0
            *(ecx_1 + 0x18) = 0
            ecx_1 += 0x1c
        
        int32_t* ecx_2 = *(arg1 + 8)
        
        if (ecx_2 == 0)
            i.b = 0
        else if ((*(*ecx_2 + 0x1c))().b == 0)
            i.b = 0
        else
            i.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return i
