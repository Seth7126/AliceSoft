// 函数: sub_530310
// 地址: 0x530310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3a96
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_ac
int32_t eax_2 = __security_cookie ^ &var_ac
int32_t __saved_edi
int32_t var_c0 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg4 s< 0)
    result.b = 0
else if (arg4 s>= (*(arg3 + 0x2c) - *(arg3 + 0x28)) s/ 0xbc)
    result.b = 0
else
    int32_t ebx_1 = arg4 * 0xbc
    void* ebx_2 = ebx_1 + *(arg3 + 0x28)
    
    if (ebx_1 == neg.d(*(arg3 + 0x28)))
        result.b = 0
    else
        int64_t* var_a0
        sub_52ada0(&var_a0, 3)
        int32_t var_4 = 0
        int64_t* edi_2 = var_a0
        int32_t ecx_3 = *(ebx_2 + 8) * 9
        int32_t eax_9 = *(arg2 + 0x58)
        float xmm0_2 = *(eax_9 + (ecx_3 << 2) + 8) + arg5[2]
        *edi_2 =
            _mm_unpacklo_ps(*(eax_9 + (ecx_3 << 2)) + *arg5, *(eax_9 + (ecx_3 << 2) + 4) + arg5[1])
        edi_2[1].d = xmm0_2
        int32_t ecx_4 = *(ebx_2 + 0x44) * 9
        int32_t eax_12 = *(arg2 + 0x58)
        float xmm0_4 = *(eax_12 + (ecx_4 << 2) + 8) + arg5[2]
        *(edi_2 + 0xc) = _mm_unpacklo_ps(*(eax_12 + (ecx_4 << 2)) + *arg5, 
            *(eax_12 + (ecx_4 << 2) + 4) + arg5[1])
        *(edi_2 + 0x14) = xmm0_4
        int32_t ecx_5 = *(ebx_2 + 0x80) * 9
        int32_t eax_15 = *(arg2 + 0x58)
        float xmm0_6 = *(eax_15 + (ecx_5 << 2) + 8) + arg5[2]
        edi_2[3] = _mm_unpacklo_ps(*(eax_15 + (ecx_5 << 2)) + *arg5, 
            *(eax_15 + (ecx_5 << 2) + 4) + arg5[1])
        edi_2[4].d = xmm0_6
        float xmm7_1 = *(edi_2 + 0x14)
        float xmm3_2 = edi_2[4].d f- xmm7_1
        float xmm7_2 = xmm7_1 f- edi_2[1].d
        float xmm6_2 = edi_2[2].d f- *(edi_2 + 4)
        float xmm2_11 = *(edi_2 + 0x1c) f- edi_2[2].d
        float xmm4_1 = *(edi_2 + 0xc)
        float xmm1_8 = edi_2[3].d f- xmm4_1
        float xmm4_2 = xmm4_1 f- *edi_2
        float xmm5_3 = xmm6_2 * xmm3_2 - xmm7_2 * xmm2_11
        float xmm4_4 = xmm4_2 * xmm2_11 - xmm6_2 * xmm1_8
        float xmm7_4 = xmm7_2 * xmm1_8 - xmm4_2 * xmm3_2
        float xmm2_12 = _mm_sqrt_ss(0, xmm7_4 * xmm7_4 + xmm5_3 * xmm5_3 + xmm4_4 * xmm4_4)
        xmm2_12 f- 0
        float eax_16
        eax_16:1.b = (xmm2_12 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_12, 0f) ? 1 : 0) << 2
            | (xmm2_12 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        float xmm0_15
        
        if (p_2)
            xmm0_15 = 1f / xmm2_12
        else
            xmm0_15 = (zx.o(0)).d
        
        if (not(0 f>= xmm0_15 * xmm7_4))
            struct sealengine::CDetectPolygon::VTable* var_94
            struct sealengine::CDetectPolygon::VTable** ecx_6 = &var_94
            sub_52fb20(ecx_6)
            var_4.b = 1
            sub_52fc40(ecx_6, &var_a0)
            sub_530640(arg1 + 4, &var_94)
        
        j__free(edi_2)
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_ac)
return result
