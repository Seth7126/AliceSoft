// 函数: sub_5f6950
// 地址: 0x5f6950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc298
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CWriteVB::VTable* const var_10 = &viewtrans::CWriteVB::`vftable'
int32_t var_4 = 0
int32_t* ecx = *(arg1 + 8)
int32_t i_2 = 0
void* i_8 = ((int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c) + 0xe0)) * arg2) + 0xf) & 0xfffffff0) - 0xe0
void* i_10 =
    ((int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x40) + 0xe0)) * arg2) + 0xf) & 0xfffffff0) - 0xe0
void* i_7 = i_10
void* i

if (ecx == 0)
    i.b = 0
else
    void* ecx_1 = (*(*ecx + 0x18))(eax_2)
    
    if (ecx_1 == 0)
        i.b = 0
    else
        void* var_24_1 = i_10 + 0xf
        void* i_12 = i_10
        i = 0xf
        void* edx_3 = i_8 - i_10
        void* var_30_1 = nullptr
        i_10.b = arg3
        void* edx_4 = nullptr
        void* i_3 = 0xf
        void* i_13 = i_12
        int32_t i_1
        
        do
            void* ebp_1 = i_12 + edx_3
            i_1 = i_2
            void* i_14
            
            if (i_12 + edx_3 s< 0)
                i_14 = i_13
            else if (ebp_1 s>= *(arg1 + 0x3c))
                i_1 = i_2
                i_14 = i_13
            else
                int32_t edi_1 = *(arg1 + 0x3c)
                void* i_4 = i
                void* i_11
                
                if (var_24_1 + edx_3 s<= edi_1)
                    i_11 = i_8
                else
                    i_11 = i_8
                    i_4 = edi_1 - var_30_1 - i_11
                
                uint128_t xmm1 = zx.o(*(arg1 + 0x38))
                float xmm3_2 = _mm_cvtepi32_ps(zx.o(ebp_1))
                float xmm1_1 = _mm_cvtepi32_ps(xmm1)
                float xmm0_6 = xmm3_2
                
                if (i_10.b != 0)
                    xmm0_6 = xmm0_6 - 0.5f
                    xmm1_1 = xmm1_1 - 0.5f
                
                *(ecx_1 + 4) = xmm1_1
                *ecx_1 = xmm0_6
                *(ecx_1 + 8) = 0x3f000000
                *(ecx_1 + 0xc) = 0x3f800000
                *(ecx_1 + 0x10) = 0xffffffff
                uint128_t xmm0_7 = zx.o(*(arg1 + 0x3c))
                *(ecx_1 + 0x18) = 0
                float xmm0_8 = _mm_cvtepi32_ps(xmm0_7)
                float xmm4_2 = _mm_cvtepi32_ps(zx.o(var_30_1 + i_4 + i_11))
                float xmm0_9 = xmm4_2
                *(ecx_1 + 0x14) = xmm3_2 / xmm0_8
                float xmm1_5 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
                
                if (i_10.b != 0)
                    xmm0_9 = xmm0_9 - 0.5f
                    xmm1_5 = xmm1_5 - 0.5f
                
                *(ecx_1 + 0x20) = xmm1_5
                *(ecx_1 + 0x1c) = xmm0_9
                *(ecx_1 + 0x24) = 0x3f000000
                *(ecx_1 + 0x28) = 0x3f800000
                *(ecx_1 + 0x2c) = 0xffffffff
                float xmm0_11 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                *(ecx_1 + 0x34) = 0
                float xmm0_12 = xmm3_2
                *(ecx_1 + 0x30) = xmm4_2 / xmm0_11
                float xmm1_9 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40) + *(arg1 + 0x38)))
                
                if (i_10.b != 0)
                    xmm0_12 = xmm0_12 - 0.5f
                    xmm1_9 = xmm1_9 - 0.5f
                
                *(ecx_1 + 0x3c) = xmm1_9
                *(ecx_1 + 0x38) = xmm0_12
                *(ecx_1 + 0x40) = 0x3f000000
                *(ecx_1 + 0x44) = 0x3f800000
                *(ecx_1 + 0x48) = 0xffffffff
                int32_t xmm0_13[0x4] = zx.o(*(arg1 + 0x3c))
                *(ecx_1 + 0x50) = 0x3f800000
                float xmm0_15 = xmm4_2
                *(ecx_1 + 0x4c) = xmm3_2 / _mm_cvtepi32_ps(xmm0_13)
                float xmm1_13 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
                
                if (i_10.b != 0)
                    xmm0_15 = xmm0_15 - 0.5f
                    xmm1_13 = xmm1_13 - 0.5f
                
                *(ecx_1 + 0x58) = xmm1_13
                *(ecx_1 + 0x54) = xmm0_15
                *(ecx_1 + 0x5c) = 0x3f000000
                *(ecx_1 + 0x60) = 0x3f800000
                *(ecx_1 + 0x64) = 0xffffffff
                float xmm0_17 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                *(ecx_1 + 0x6c) = 0
                float xmm0_18 = xmm4_2
                *(ecx_1 + 0x68) = xmm4_2 / xmm0_17
                float xmm1_17 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40) + *(arg1 + 0x38)))
                
                if (i_10.b != 0)
                    xmm0_18 = xmm0_18 - 0.5f
                    xmm1_17 = xmm1_17 - 0.5f
                
                *(ecx_1 + 0x70) = xmm0_18
                *(ecx_1 + 0x74) = xmm1_17
                *(ecx_1 + 0x78) = 0x3f000000
                *(ecx_1 + 0x7c) = 0x3f800000
                *(ecx_1 + 0x80) = 0xffffffff
                float xmm0_20 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                *(ecx_1 + 0x88) = 0x3f800000
                float xmm0_21 = xmm3_2
                *(ecx_1 + 0x84) = xmm4_2 / xmm0_20
                float xmm1_19 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40) + *(arg1 + 0x38)))
                
                if (i_10.b != 0)
                    xmm0_21 = xmm0_21 - 0.5f
                    xmm1_19 = xmm1_19 - 0.5f
                
                *(ecx_1 + 0x8c) = xmm0_21
                *(ecx_1 + 0x90) = xmm1_19
                *(ecx_1 + 0x94) = 0x3f000000
                *(ecx_1 + 0x98) = 0x3f800000
                *(ecx_1 + 0x9c) = 0xffffffff
                float xmm0_23 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                i_14 = i_13
                i_1 = i_2 + 6
                *(ecx_1 + 0xa4) = 0x3f800000
                i_2 = i_1
                *(ecx_1 + 0xa0) = xmm3_2 / xmm0_23
                ecx_1 += 0xa8
                
                if (i_14 s>= 0)
                    int32_t eax_21 = *(arg1 + 0x40)
                    
                    if (i_14 s< eax_21)
                        void* i_9 = i_3
                        
                        if (var_24_1 s> eax_21)
                            i_9 = eax_21 - var_30_1 - i_7
                        
                        uint128_t xmm0_24 = zx.o(*(arg1 + 0x34))
                        float xmm4_5 = _mm_cvtepi32_ps(zx.o(i_14))
                        float xmm0_25 = _mm_cvtepi32_ps(xmm0_24)
                        float xmm1_20 = xmm4_5
                        
                        if (i_10.b != 0)
                            xmm0_25 = xmm0_25 - 0.5f
                            xmm1_20 = xmm1_20 - 0.5f
                        
                        *ecx_1 = xmm0_25
                        *(ecx_1 + 4) = xmm1_20
                        *(ecx_1 + 8) = 0x3f000000
                        *(ecx_1 + 0xc) = 0x3f800000
                        *(ecx_1 + 0x10) = 0xffffffff
                        float xmm0_27 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                        *(ecx_1 + 0x14) = 0
                        *(ecx_1 + 0x18) = xmm4_5 / xmm0_27
                        float xmm1_23 = xmm4_5
                        float xmm0_29 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
                        
                        if (i_10.b != 0)
                            xmm0_29 = xmm0_29 - 0.5f
                            xmm1_23 = xmm1_23 - 0.5f
                        
                        *(ecx_1 + 0x20) = xmm1_23
                        *(ecx_1 + 0x1c) = xmm0_29
                        *(ecx_1 + 0x24) = 0x3f000000
                        *(ecx_1 + 0x28) = 0x3f800000
                        *(ecx_1 + 0x2c) = 0xffffffff
                        float xmm0_31 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                        *(ecx_1 + 0x30) = 0x3f800000
                        float xmm3_5 = _mm_cvtepi32_ps(zx.o(var_30_1 + i_9 + i_7))
                        *(ecx_1 + 0x34) = xmm4_5 / xmm0_31
                        float xmm1_26 = xmm3_5
                        float xmm0_33 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
                        
                        if (i_10.b != 0)
                            xmm0_33 = xmm0_33 - 0.5f
                            xmm1_26 = xmm1_26 - 0.5f
                        
                        *(ecx_1 + 0x3c) = xmm1_26
                        *(ecx_1 + 0x38) = xmm0_33
                        *(ecx_1 + 0x40) = 0x3f000000
                        *(ecx_1 + 0x44) = 0x3f800000
                        *(ecx_1 + 0x48) = 0xffffffff
                        uint128_t xmm0_34 = zx.o(*(arg1 + 0x40))
                        *(ecx_1 + 0x4c) = 0
                        *(ecx_1 + 0x50) = xmm3_5 / _mm_cvtepi32_ps(xmm0_34)
                        float xmm1_29 = xmm3_5
                        float xmm0_37 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
                        
                        if (i_10.b != 0)
                            xmm0_37 = xmm0_37 - 0.5f
                            xmm1_29 = xmm1_29 - 0.5f
                        
                        *(ecx_1 + 0x54) = xmm0_37
                        *(ecx_1 + 0x58) = xmm1_29
                        *(ecx_1 + 0x5c) = 0x3f000000
                        *(ecx_1 + 0x60) = 0x3f800000
                        *(ecx_1 + 0x64) = 0xffffffff
                        float xmm0_39 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                        *(ecx_1 + 0x68) = 0
                        *(ecx_1 + 0x6c) = xmm3_5 / xmm0_39
                        float xmm1_32 = xmm4_5
                        float xmm0_41 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
                        
                        if (i_10.b != 0)
                            xmm0_41 = xmm0_41 - 0.5f
                            xmm1_32 = xmm1_32 - 0.5f
                        
                        *(ecx_1 + 0x70) = xmm0_41
                        *(ecx_1 + 0x74) = xmm1_32
                        float xmm1_33 = xmm3_5
                        *(ecx_1 + 0x78) = 0x3f000000
                        *(ecx_1 + 0x7c) = 0x3f800000
                        *(ecx_1 + 0x80) = 0xffffffff
                        float xmm0_43 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                        *(ecx_1 + 0x84) = 0x3f800000
                        *(ecx_1 + 0x88) = xmm4_5 / xmm0_43
                        float xmm0_45 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
                        
                        if (i_10.b != 0)
                            xmm0_45 = xmm0_45 - 0.5f
                            xmm1_33 = xmm1_33 - 0.5f
                        
                        *(ecx_1 + 0x8c) = xmm0_45
                        *(ecx_1 + 0x90) = xmm1_33
                        *(ecx_1 + 0x94) = 0x3f000000
                        *(ecx_1 + 0x98) = 0x3f800000
                        *(ecx_1 + 0x9c) = 0xffffffff
                        float xmm0_47 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                        *(ecx_1 + 0xa0) = 0x3f800000
                        *(ecx_1 + 0xa4) = xmm3_5 / xmm0_47
                        ecx_1 += 0xa8
                        i_1 += 6
                        i_2 = i_1
                
                i = i_3
                edx_4 = var_30_1
            
            var_24_1 += 0xf
            i -= 1
            edx_4 += 0x10
            i_3 = i
            i_12 = i_14 + 0x10
            var_30_1 = edx_4
            i_13 = i_12
        while (i s> 0)
        
        void* i_5 = i_8
        
        if (i_5 s> 0)
            i = *(arg1 + 0x3c)
            
            if (i s> 0)
                int32_t xmm1_34 = (zx.o(0)).d
                
                if (i_5 s> i)
                    i_5 = i
                
                float xmm0_49 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
                
                if (i_10.b != 0)
                    xmm1_34 = -0x41000000
                    xmm0_49 = xmm0_49 - 0.5f
                
                *ecx_1 = xmm1_34
                *(ecx_1 + 4) = xmm0_49
                *(ecx_1 + 8) = 0x3f000000
                *(ecx_1 + 0xc) = 0x3f800000
                *(ecx_1 + 0x10) = 0xffffffff
                uint128_t xmm0_50 = zx.o(*(arg1 + 0x3c))
                *(ecx_1 + 0x18) = 0
                float xmm0_51 = _mm_cvtepi32_ps(xmm0_50)
                float xmm3_8 = _mm_cvtepi32_ps(zx.o(i_5))
                float xmm0_52 = xmm3_8
                *(ecx_1 + 0x14) = 0f / xmm0_51
                float xmm1_37 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
                
                if (i_10.b != 0)
                    xmm0_52 = xmm0_52 - 0.5f
                    xmm1_37 = xmm1_37 - 0.5f
                
                *(ecx_1 + 0x1c) = xmm0_52
                *(ecx_1 + 0x20) = xmm1_37
                *(ecx_1 + 0x24) = 0x3f000000
                *(ecx_1 + 0x28) = 0x3f800000
                *(ecx_1 + 0x2c) = 0xffffffff
                float xmm0_54 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                *(ecx_1 + 0x34) = 0
                *(ecx_1 + 0x30) = xmm3_8 / xmm0_54
                int32_t xmm1_40 = (zx.o(0)).d
                float xmm0_56 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40) + *(arg1 + 0x38)))
                
                if (i_10.b != 0)
                    xmm1_40 = -0x41000000
                    xmm0_56 = xmm0_56 - 0.5f
                
                *(ecx_1 + 0x38) = xmm1_40
                *(ecx_1 + 0x3c) = xmm0_56
                *(ecx_1 + 0x40) = 0x3f000000
                *(ecx_1 + 0x44) = 0x3f800000
                *(ecx_1 + 0x48) = 0xffffffff
                uint128_t xmm0_57 = zx.o(*(arg1 + 0x3c))
                *(ecx_1 + 0x50) = 0x3f800000
                float xmm0_59 = xmm3_8
                *(ecx_1 + 0x4c) = 0f / _mm_cvtepi32_ps(xmm0_57)
                float xmm1_43 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
                
                if (i_10.b != 0)
                    xmm0_59 = xmm0_59 - 0.5f
                    xmm1_43 = xmm1_43 - 0.5f
                
                *(ecx_1 + 0x58) = xmm1_43
                *(ecx_1 + 0x54) = xmm0_59
                *(ecx_1 + 0x5c) = 0x3f000000
                *(ecx_1 + 0x60) = 0x3f800000
                *(ecx_1 + 0x64) = 0xffffffff
                float xmm0_61 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                *(ecx_1 + 0x6c) = 0
                float xmm0_62 = xmm3_8
                *(ecx_1 + 0x68) = xmm3_8 / xmm0_61
                float xmm1_47 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40) + *(arg1 + 0x38)))
                
                if (i_10.b != 0)
                    xmm0_62 = xmm0_62 - 0.5f
                    xmm1_47 = xmm1_47 - 0.5f
                
                *(ecx_1 + 0x70) = xmm0_62
                *(ecx_1 + 0x74) = xmm1_47
                int32_t xmm1_48 = (zx.o(0)).d
                *(ecx_1 + 0x78) = 0x3f000000
                *(ecx_1 + 0x7c) = 0x3f800000
                *(ecx_1 + 0x80) = 0xffffffff
                float xmm0_64 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                *(ecx_1 + 0x88) = 0x3f800000
                *(ecx_1 + 0x84) = xmm3_8 / xmm0_64
                float xmm0_66 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40) + *(arg1 + 0x38)))
                
                if (i_10.b != 0)
                    xmm1_48 = -0x41000000
                    xmm0_66 = xmm0_66 - 0.5f
                
                *(ecx_1 + 0x8c) = xmm1_48
                *(ecx_1 + 0x90) = xmm0_66
                *(ecx_1 + 0x94) = 0x3f000000
                *(ecx_1 + 0x98) = 0x3f800000
                *(ecx_1 + 0x9c) = 0xffffffff
                float xmm0_68 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                *(ecx_1 + 0xa4) = 0x3f800000
                *(ecx_1 + 0xa0) = 0f / xmm0_68
                ecx_1 += 0xa8
                i_1 += 6
        
        void* i_6 = i_7
        
        if (i_6 s> 0)
            i = *(arg1 + 0x40)
            
            if (i s> 0)
                float xmm0_70 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
                
                if (i_6 s> i)
                    i_6 = i
                
                int32_t xmm1_50 = (zx.o(0)).d
                
                if (i_10.b != 0)
                    xmm0_70 = xmm0_70 - 0.5f
                    xmm1_50 = -0x41000000
                
                *ecx_1 = xmm0_70
                *(ecx_1 + 4) = xmm1_50
                *(ecx_1 + 8) = 0x3f000000
                *(ecx_1 + 0xc) = 0x3f800000
                *(ecx_1 + 0x10) = 0xffffffff
                float xmm0_72 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                *(ecx_1 + 0x14) = 0
                *(ecx_1 + 0x18) = 0f / xmm0_72
                int32_t xmm1_52 = (zx.o(0)).d
                float xmm0_74 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
                
                if (i_10.b != 0)
                    xmm0_74 = xmm0_74 - 0.5f
                    xmm1_52 = -0x41000000
                
                *(ecx_1 + 0x20) = xmm1_52
                *(ecx_1 + 0x1c) = xmm0_74
                *(ecx_1 + 0x24) = 0x3f000000
                *(ecx_1 + 0x28) = 0x3f800000
                *(ecx_1 + 0x2c) = 0xffffffff
                uint128_t xmm0_75 = zx.o(*(arg1 + 0x40))
                *(ecx_1 + 0x30) = 0x3f800000
                float xmm0_76 = _mm_cvtepi32_ps(xmm0_75)
                float xmm3_11 = _mm_cvtepi32_ps(zx.o(i_6))
                *(ecx_1 + 0x34) = 0f / xmm0_76
                float xmm1_54 = xmm3_11
                float xmm0_78 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
                
                if (i_10.b != 0)
                    xmm0_78 = xmm0_78 - 0.5f
                    xmm1_54 = xmm1_54 - 0.5f
                
                *(ecx_1 + 0x3c) = xmm1_54
                *(ecx_1 + 0x38) = xmm0_78
                *(ecx_1 + 0x40) = 0x3f000000
                *(ecx_1 + 0x44) = 0x3f800000
                *(ecx_1 + 0x48) = 0xffffffff
                uint128_t xmm0_79 = zx.o(*(arg1 + 0x40))
                *(ecx_1 + 0x4c) = 0
                *(ecx_1 + 0x50) = xmm3_11 / _mm_cvtepi32_ps(xmm0_79)
                float xmm1_57 = xmm3_11
                float xmm0_82 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
                
                if (i_10.b != 0)
                    xmm0_82 = xmm0_82 - 0.5f
                    xmm1_57 = xmm1_57 - 0.5f
                
                *(ecx_1 + 0x54) = xmm0_82
                *(ecx_1 + 0x58) = xmm1_57
                *(ecx_1 + 0x5c) = 0x3f000000
                *(ecx_1 + 0x60) = 0x3f800000
                *(ecx_1 + 0x64) = 0xffffffff
                float xmm0_84 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                *(ecx_1 + 0x68) = 0
                *(ecx_1 + 0x6c) = xmm3_11 / xmm0_84
                int32_t xmm1_60 = (zx.o(0)).d
                float xmm0_86 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
                
                if (i_10.b != 0)
                    xmm0_86 = xmm0_86 - 0.5f
                    xmm1_60 = -0x41000000
                
                *(ecx_1 + 0x70) = xmm0_86
                *(ecx_1 + 0x74) = xmm1_60
                float xmm1_61 = xmm3_11
                *(ecx_1 + 0x78) = 0x3f000000
                *(ecx_1 + 0x7c) = 0x3f800000
                *(ecx_1 + 0x80) = 0xffffffff
                float xmm0_88 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                *(ecx_1 + 0x84) = 0x3f800000
                *(ecx_1 + 0x88) = 0f / xmm0_88
                float xmm0_90 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34) + *(arg1 + 0x3c)))
                
                if (i_10.b != 0)
                    xmm0_90 = xmm0_90 - 0.5f
                    xmm1_61 = xmm1_61 - 0.5f
                
                *(ecx_1 + 0x8c) = xmm0_90
                *(ecx_1 + 0x90) = xmm1_61
                *(ecx_1 + 0x94) = 0x3f000000
                *(ecx_1 + 0x98) = 0x3f800000
                *(ecx_1 + 0x9c) = 0xffffffff
                float xmm0_92 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
                *(ecx_1 + 0xa0) = 0x3f800000
                *(ecx_1 + 0xa4) = xmm3_11 / xmm0_92
                ecx_1 += 0xa8
                i_1 += 6
        
        while (i_1 s< *(arg1 + 0xc))
            int32_t xmm0_93 = -0x3b800000
            int32_t xmm1_62 = -0x3b800000
            
            if (i_10.b != 0)
                xmm0_93 = -0x3b7ff000
                xmm1_62 = -0x3b7ff000
            
            *ecx_1 = xmm0_93
            i_1 += 1
            *(ecx_1 + 4) = xmm1_62
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
