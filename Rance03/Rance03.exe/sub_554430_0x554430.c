// 函数: sub_554430
// 地址: 0x554430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_9c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = 0
int32_t var_44 = 0
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_4 = 0
int32_t eax_5 = (arg4[1] - *arg4) s>> 6

if (eax_5 != 0)
    if (eax_5 u> 0x15555555)
        sub_69a551("vector<T> too long")
        noreturn
    
    sub_533900(&var_34, eax_5)
    edx = var_34

float xmm7 = 3.40282347e+38f
float xmm5 = -3.40282347e+38f
struct sealengine::CClipBox::VTable* const var_28 = &sealengine::CClipBox::`vftable'
int128_t var_24
__builtin_memcpy(&var_24, 
    "\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\xff", 
    0x18)
float var_74 = 3.40282347e+38f
float var_70 = -3.40282347e+38f
var_4.b = 1
int32_t* i = *arg4
float xmm4_43
float xmm6_8

if (i == arg4[1])
    xmm6_8 = var_24:0xc.d
    xmm4_43 = var_24:4.d
else
    float var_78_1 = var_24:0xc.d
    float var_7c_1 = var_24:4.d
    
    do
        float xmm3 = i[1]
        float xmm6_1 = *i
        float xmm2_1 = i[2]
        float xmm1_1 = i[3]
        float xmm7_1 = *(arg1 + 0xa4)
        float xmm5_1 = *(arg1 + 0x98)
        float xmm6_2 = *(arg1 + 0xb8)
        float xmm4_16 = *(arg1 + 0xa8)
        float xmm3_2 = i[7]
        float xmm2_3 = i[5]
        float xmm1_3 = i[6]
        float xmm2_15 = i[4] f* *(arg1 + 0x84) + i[5] f* *(arg1 + 0x94)
        float var_8c_2 = xmm2_15
        float xmm4_17 = i[0xb]
        float xmm2_18 = i[0xa]
        float xmm1_5 = i[8]
        float xmm3_4 = i[9]
        float xmm2_19 = i[0xd]
        float xmm5_11 = *(arg1 + 0x88) * xmm1_5 + *(arg1 + 0x98) * xmm3_4 + *(arg1 + 0xa8) * xmm2_18
            + *(arg1 + 0xb8) * xmm4_17
        float xmm0_79 = i[0xc]
        float xmm1_6 = i[0xe]
        float xmm3_5 = i[0xf]
        float xmm7_23 = *(arg1 + 0x84) * xmm0_79 + *(arg1 + 0x94) * xmm2_19
            + *(arg1 + 0xa4) * xmm1_6 + *(arg1 + 0xb4) * xmm3_5
        float var_80_3 = xmm7_23
        float xmm1_8 = xmm2_3 f* *(arg1 + 0x8c) + i[4] f* *(arg1 + 0x7c) + xmm1_3 f* *(arg1 + 0x9c)
            + xmm3_2 f* *(arg1 + 0xac) + xmm6_1 f* *(arg1 + 0x7c) + xmm3 f* *(arg1 + 0x8c)
            + xmm2_1 f* *(arg1 + 0x9c) + xmm1_1 f* *(arg1 + 0xac)
        float xmm3_7 = xmm2_15 + xmm1_3 * xmm7_1 + xmm3_2 f* *(arg1 + 0xb4)
            + xmm6_1 f* *(arg1 + 0x84) + xmm3 f* *(arg1 + 0x94) + xmm2_1 * xmm7_1
            + xmm1_1 f* *(arg1 + 0xb4)
        float xmm2_22 = i[4] f* *(arg1 + 0x80) + i[5] f* *(arg1 + 0x90) + xmm1_3 f* *(arg1 + 0xa0)
            + xmm3_2 f* *(arg1 + 0xb0) + xmm6_1 f* *(arg1 + 0x80) + xmm3 f* *(arg1 + 0x90)
            + xmm2_1 f* *(arg1 + 0xa0) + xmm1_1 f* *(arg1 + 0xb0) + *(arg1 + 0x80) * xmm1_5
            + *(arg1 + 0x90) * xmm3_4 + *(arg1 + 0xa0) * xmm2_18 + *(arg1 + 0xb0) * xmm4_17
        float xmm4_42 = *(arg1 + 0x88) * xmm0_79 + *(arg1 + 0x98) * xmm2_19
            + *(arg1 + 0xa8) * xmm1_6 + *(arg1 + 0xb8) * xmm3_5
        float xmm1_11 = (xmm1_8 + *(arg1 + 0x7c) * xmm1_5 + *(arg1 + 0x8c) * xmm3_4
            + *(arg1 + 0x9c) * xmm2_18 + *(arg1 + 0xac) * xmm4_17) * 0f + *(arg1 + 0x7c) * xmm0_79
            + *(arg1 + 0x8c) * xmm2_19 + *(arg1 + 0x9c) * xmm1_6 + *(arg1 + 0xac) * xmm3_5
        float xmm2_24 = xmm2_22 * 0f + *(arg1 + 0x80) * xmm0_79 + *(arg1 + 0x90) * xmm2_19
            + *(arg1 + 0xa0) * xmm1_6 + *(arg1 + 0xb0) * xmm3_5
        float xmm3_10 = (xmm3_7 + *(arg1 + 0x84) * xmm1_5 + *(arg1 + 0x94) * xmm3_4
            + *(arg1 + 0xa4) * xmm2_18 + *(arg1 + 0xb4) * xmm4_17) * 0f + xmm7_23
        float xmm7_25 = i[4] f* *(arg1 + 0x88) + xmm2_3 * xmm5_1 + xmm1_3 * xmm4_16
            + xmm3_2 * xmm6_2 + *i f* *(arg1 + 0x88) + xmm3 * xmm5_1 + xmm2_1 * xmm4_16
            + xmm1_1 * xmm6_2
        float var_40 = xmm1_11
        float var_3c_1 = xmm2_24
        float var_38_1 = xmm3_10
        float xmm7_28 = (xmm7_25 + xmm5_11) * 0f + xmm4_42
        xmm7_28 - 1f
        eax_5:1.b = (xmm7_28 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_28, 1f) ? 1 : 0) << 2
            | (xmm7_28 < 1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            xmm7_28 f- 0
            eax_5:1.b = (xmm7_28 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_28, 0f) ? 1 : 0) << 2
                | (xmm7_28 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                float xmm0_86 = 1f / xmm7_28
                var_40 = xmm1_11 * xmm0_86
                var_3c_1 = xmm2_24 * xmm0_86
                var_38_1 = xmm3_10 * xmm0_86
        
        sub_533630(&var_34, &var_40)
        float xmm0_87 = var_40
        
        if (not(var_24.d f<= xmm0_87))
            var_24.d = xmm0_87
        
        xmm4_43 = var_7c_1
        
        if (not(xmm0_87 <= xmm4_43))
            xmm4_43 = xmm0_87
            var_7c_1 = xmm4_43
            var_24:4.d = xmm4_43
        
        if (not(var_24:8.d f<= var_3c_1))
            var_24:8.d = var_3c_1
        
        xmm6_8 = var_78_1
        
        if (not(var_3c_1 <= xmm6_8))
            xmm6_8 = var_3c_1
            var_78_1 = xmm6_8
            var_24:0xc.d = xmm6_8
        
        xmm7 = var_74
        
        if (not(xmm7 <= var_38_1))
            xmm7 = var_38_1
            var_74 = xmm7
            float var_14_1 = xmm7
        
        xmm5 = var_70
        
        if (not(var_38_1 <= xmm5))
            xmm5 = var_38_1
            var_70 = xmm5
            float var_10_1 = xmm5
        
        i = &i[0x10]
    while (i != arg4[1])
    
    edx = var_34

float xmm4_44 = xmm4_43 f- var_24.d
*arg3 = &sealengine::CSphereVolume::`vftable'
float xmm5_13 = (xmm5 - xmm7) * 0.5f
float xmm4_45 = xmm4_44 * 0.5f
float xmm6_10 = (xmm6_8 f- var_24:8.d) * 0.5f
float xmm0_94 = *(arg1 + 0x64) * arg2
int64_t xmm2_29 = _mm_unpacklo_ps((xmm4_43 f+ var_24.d) * 0.5f, (xmm6_8 f+ var_24:8.d) * 0.5f)
float xmm1_18 = _mm_sqrt_ss(0, xmm4_45 * xmm4_45 + xmm6_10 * xmm6_10 + xmm5_13 * xmm5_13)
*(arg3 + 4) = xmm2_29
arg3[3] = (xmm5 + xmm7) * 0.5f
arg3[4] = xmm1_18 + xmm0_94

if (edx != 0)
    j__free(edx)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
