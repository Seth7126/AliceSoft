// 函数: sub_5f5690
// 地址: 0x5f5690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc1c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CWriteVB::VTable* const var_10 = &viewtrans::CWriteVB::`vftable'
int32_t var_4 = 0
int32_t i_1 = 0
int32_t* ecx = *(arg1 + 8)
void* i_3 = ((int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c) + 0xe0)) * arg2) + 0xf) & 0xfffffff0) - 0xe0
void* i_4 = i_3
void* i

if (ecx == 0)
    i.b = 0
else
    void* ecx_1 = (*(*ecx + 0x18))(eax_2)
    
    if (ecx_1 == 0)
        i.b = 0
    else
        i = 0xf
        int32_t var_20_1 = 0
        void* i_2 = 0xf
        void* i_5 = i_3
        void* var_1c_1 = i_3 + 0xf
        void* ecx_2 = ecx_1
        void* edx_1
        
        do
            if (i_5 s>= 0)
                edx_1 = *(arg1 + 0x3c)
            
            if (i_5 s< 0 || i_5 s>= edx_1)
                edx_1.b = arg3
            else
                if (var_1c_1 s> edx_1)
                    i = edx_1 - var_20_1 - i_3
                
                edx_1.b = arg3
                uint128_t xmm1 = zx.o(*(arg1 + 0x38))
                float xmm3_2 = _mm_cvtepi32_ps(zx.o(i_5))
                float xmm1_1 = _mm_cvtepi32_ps(xmm1)
                float xmm0_3 = xmm3_2
                
                if (edx_1.b != 0)
                    xmm0_3 = xmm0_3 - 0.5f
                    xmm1_1 = xmm1_1 - 0.5f
                
                *(ecx_2 + 4) = xmm1_1
                *ecx_2 = xmm0_3
                *(ecx_2 + 8) = 0x3f000000
                *(ecx_2 + 0xc) = 0x3f800000
                *(ecx_2 + 0x10) = 0xffffffff
                uint128_t xmm0_4 = zx.o(*(arg1 + 0x3c))
                i_3 = i_4
                *(ecx_2 + 0x18) = 0
                float xmm1_3 = xmm3_2 / _mm_cvtepi32_ps(xmm0_4)
                float xmm4_2 = _mm_cvtepi32_ps(zx.o(i + var_20_1 + i_3))
                *(ecx_2 + 0x14) = xmm1_3
                float xmm0_6 = xmm4_2
                float xmm1_5 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
                
                if (edx_1.b != 0)
                    xmm0_6 = xmm0_6 - 0.5f
                    xmm1_5 = xmm1_5 - 0.5f
                
                *(ecx_2 + 0x20) = xmm1_5
                *(ecx_2 + 0x1c) = xmm0_6
                *(ecx_2 + 0x24) = 0x3f000000
                *(ecx_2 + 0x28) = 0x3f800000
                *(ecx_2 + 0x2c) = 0xffffffff
                float xmm0_8 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                *(ecx_2 + 0x34) = 0
                float xmm0_9 = xmm3_2
                *(ecx_2 + 0x30) = xmm4_2 / xmm0_8
                float xmm1_9 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40) + *(arg1 + 0x38)))
                
                if (edx_1.b != 0)
                    xmm0_9 = xmm0_9 - 0.5f
                    xmm1_9 = xmm1_9 - 0.5f
                
                *(ecx_2 + 0x3c) = xmm1_9
                *(ecx_2 + 0x38) = xmm0_9
                *(ecx_2 + 0x40) = 0x3f000000
                *(ecx_2 + 0x44) = 0x3f800000
                *(ecx_2 + 0x48) = 0xffffffff
                int32_t xmm0_10[0x4] = zx.o(*(arg1 + 0x3c))
                *(ecx_2 + 0x50) = 0x3f800000
                float xmm0_12 = xmm4_2
                *(ecx_2 + 0x4c) = xmm3_2 / _mm_cvtepi32_ps(xmm0_10)
                float xmm1_13 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
                
                if (edx_1.b != 0)
                    xmm0_12 = xmm0_12 - 0.5f
                    xmm1_13 = xmm1_13 - 0.5f
                
                *(ecx_2 + 0x58) = xmm1_13
                *(ecx_2 + 0x54) = xmm0_12
                *(ecx_2 + 0x5c) = 0x3f000000
                *(ecx_2 + 0x60) = 0x3f800000
                *(ecx_2 + 0x64) = 0xffffffff
                float xmm0_14 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                *(ecx_2 + 0x6c) = 0
                float xmm0_15 = xmm4_2
                *(ecx_2 + 0x68) = xmm4_2 / xmm0_14
                float xmm1_17 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40) + *(arg1 + 0x38)))
                
                if (edx_1.b != 0)
                    xmm0_15 = xmm0_15 - 0.5f
                    xmm1_17 = xmm1_17 - 0.5f
                
                *(ecx_2 + 0x70) = xmm0_15
                *(ecx_2 + 0x74) = xmm1_17
                *(ecx_2 + 0x78) = 0x3f000000
                *(ecx_2 + 0x7c) = 0x3f800000
                *(ecx_2 + 0x80) = 0xffffffff
                float xmm0_17 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                *(ecx_2 + 0x88) = 0x3f800000
                float xmm0_18 = xmm3_2
                *(ecx_2 + 0x84) = xmm4_2 / xmm0_17
                float xmm1_19 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40) + *(arg1 + 0x38)))
                
                if (edx_1.b != 0)
                    xmm0_18 = xmm0_18 - 0.5f
                    xmm1_19 = xmm1_19 - 0.5f
                
                *(ecx_2 + 0x8c) = xmm0_18
                *(ecx_2 + 0x90) = xmm1_19
                *(ecx_2 + 0x94) = 0x3f000000
                *(ecx_2 + 0x98) = 0x3f800000
                *(ecx_2 + 0x9c) = 0xffffffff
                float xmm0_20 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                i = i_2
                *(ecx_2 + 0xa4) = 0x3f800000
                *(ecx_2 + 0xa0) = xmm3_2 / xmm0_20
                ecx_2 += 0xa8
                i_1 += 6
            
            var_1c_1 += 0xf
            i -= 1
            var_20_1 += 0x10
            i_5 += 0x10
            i_2 = i
        while (i s> 0)
        
        if (i_3 s> 0)
            i = *(arg1 + 0x3c)
            
            if (i s> 0)
                int32_t xmm1_20 = (zx.o(0)).d
                
                if (i_3 s> i)
                    i_3 = i
                
                float xmm0_22 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
                
                if (edx_1.b != 0)
                    xmm1_20 = -0x41000000
                    xmm0_22 = xmm0_22 - 0.5f
                
                *ecx_2 = xmm1_20
                *(ecx_2 + 4) = xmm0_22
                *(ecx_2 + 8) = 0x3f000000
                *(ecx_2 + 0xc) = 0x3f800000
                *(ecx_2 + 0x10) = 0xffffffff
                uint128_t xmm0_23 = zx.o(*(arg1 + 0x3c))
                *(ecx_2 + 0x18) = 0
                float xmm0_24 = _mm_cvtepi32_ps(xmm0_23)
                float xmm3_5 = _mm_cvtepi32_ps(zx.o(i_3))
                float xmm0_25 = xmm3_5
                *(ecx_2 + 0x14) = 0f / xmm0_24
                float xmm1_23 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
                
                if (edx_1.b != 0)
                    xmm0_25 = xmm0_25 - 0.5f
                    xmm1_23 = xmm1_23 - 0.5f
                
                *(ecx_2 + 0x1c) = xmm0_25
                *(ecx_2 + 0x20) = xmm1_23
                *(ecx_2 + 0x24) = 0x3f000000
                *(ecx_2 + 0x28) = 0x3f800000
                *(ecx_2 + 0x2c) = 0xffffffff
                float xmm0_27 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                *(ecx_2 + 0x34) = 0
                *(ecx_2 + 0x30) = xmm3_5 / xmm0_27
                int32_t xmm1_26 = (zx.o(0)).d
                float xmm0_29 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40) + *(arg1 + 0x38)))
                
                if (edx_1.b != 0)
                    xmm1_26 = -0x41000000
                    xmm0_29 = xmm0_29 - 0.5f
                
                *(ecx_2 + 0x38) = xmm1_26
                *(ecx_2 + 0x3c) = xmm0_29
                *(ecx_2 + 0x40) = 0x3f000000
                *(ecx_2 + 0x44) = 0x3f800000
                *(ecx_2 + 0x48) = 0xffffffff
                uint128_t xmm0_30 = zx.o(*(arg1 + 0x3c))
                *(ecx_2 + 0x50) = 0x3f800000
                float xmm0_32 = xmm3_5
                *(ecx_2 + 0x4c) = 0f / _mm_cvtepi32_ps(xmm0_30)
                float xmm1_29 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
                
                if (edx_1.b != 0)
                    xmm0_32 = xmm0_32 - 0.5f
                    xmm1_29 = xmm1_29 - 0.5f
                
                *(ecx_2 + 0x58) = xmm1_29
                *(ecx_2 + 0x54) = xmm0_32
                *(ecx_2 + 0x5c) = 0x3f000000
                *(ecx_2 + 0x60) = 0x3f800000
                *(ecx_2 + 0x64) = 0xffffffff
                float xmm0_34 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                *(ecx_2 + 0x6c) = 0
                float xmm0_35 = xmm3_5
                *(ecx_2 + 0x68) = xmm3_5 / xmm0_34
                float xmm1_33 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40) + *(arg1 + 0x38)))
                
                if (edx_1.b != 0)
                    xmm0_35 = xmm0_35 - 0.5f
                    xmm1_33 = xmm1_33 - 0.5f
                
                *(ecx_2 + 0x70) = xmm0_35
                *(ecx_2 + 0x74) = xmm1_33
                int32_t xmm1_34 = (zx.o(0)).d
                *(ecx_2 + 0x78) = 0x3f000000
                *(ecx_2 + 0x7c) = 0x3f800000
                *(ecx_2 + 0x80) = 0xffffffff
                float xmm0_37 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                *(ecx_2 + 0x88) = 0x3f800000
                *(ecx_2 + 0x84) = xmm3_5 / xmm0_37
                float xmm0_39 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40) + *(arg1 + 0x38)))
                
                if (edx_1.b != 0)
                    xmm1_34 = -0x41000000
                    xmm0_39 = xmm0_39 - 0.5f
                
                *(ecx_2 + 0x90) = xmm0_39
                *(ecx_2 + 0x8c) = xmm1_34
                *(ecx_2 + 0x94) = 0x3f000000
                *(ecx_2 + 0x98) = 0x3f800000
                *(ecx_2 + 0x9c) = 0xffffffff
                float xmm0_41 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3c)))
                *(ecx_2 + 0xa4) = 0x3f800000
                *(ecx_2 + 0xa0) = 0f / xmm0_41
                ecx_2 += 0xa8
                i_1 += 6
        
        while (i_1 s< *(arg1 + 0xc))
            int32_t xmm0_42 = -0x3b800000
            int32_t xmm1_35 = -0x3b800000
            
            if (edx_1.b != 0)
                xmm0_42 = -0x3b7ff000
                xmm1_35 = -0x3b7ff000
            
            *ecx_2 = xmm0_42
            i_1 += 1
            *(ecx_2 + 4) = xmm1_35
            *(ecx_2 + 8) = 0x3f000000
            *(ecx_2 + 0xc) = 0x3f800000
            *(ecx_2 + 0x10) = 0xffffffff
            *(ecx_2 + 0x14) = 0
            *(ecx_2 + 0x18) = 0
            ecx_2 += 0x1c
        
        int32_t* ecx_3 = *(arg1 + 8)
        
        if (ecx_3 == 0)
            i.b = 0
        else if ((*(*ecx_3 + 0x1c))().b == 0)
            i.b = 0
        else
            i.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return i
