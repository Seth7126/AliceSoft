// 函数: sub_618c20
// 地址: 0x618c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdd40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_14
int32_t* arg_18
int32_t* eax_3 = sub_618f70(arg2, arg3, arg4, arg5, arg_14.b, arg_18.b)
arg_18 = eax_3
sub_420040(arg1 + 0x48, &arg_14, &arg_18)
int32_t* eax_4 = arg_14
int32_t* result
int32_t* var_18
int32_t* esi_1

if (eax_4 != *(arg1 + 0x48))
    esi_1 = eax_4[5]
label_618d22:
    int32_t ebx_2 = esi_1[3]
    void* esi_2 = esi_1[2]
    
    if (*(esi_2 + 0x150) != ebx_2)
        int32_t* eax_8 = *(esi_2 + 0x38)
        (*(*eax_8 + 0x24))(eax_8, ebx_2, 0, 0)
        *(esi_2 + 0x150) = ebx_2
    
    if (sub_60a7f0(arg1 + 0x58, *(arg1 + 4)).b == 0)
        result.b = 0
    else
        sub_42f420(&var_18, 0x10)
        int32_t var_4_2 = 1
        uint32_t eax_11 = zx.d((arg4 u>> 0x10).b)
        int32_t* esi_3 = var_18
        uint32_t eax_15 = zx.d((arg4 u>> 8).b)
        *esi_3 =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_11)) f+ *((eax_11 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        uint32_t eax_17 = zx.d(arg4.b)
        uint32_t ecx_13 = arg4 u>> 0x18
        esi_3[1] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_15)) f+ *((eax_15 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        esi_3[2] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_17)) f+ *((eax_17 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        uint32_t eax_21 = zx.d((arg5 u>> 0x10).b)
        esi_3[3] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(ecx_13)) f+ *((ecx_13 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        uint32_t eax_25 = zx.d((arg5 u>> 8).b)
        esi_3[4] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_21)) f+ *((eax_21 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        uint32_t eax_27 = zx.d(arg5.b)
        esi_3[5] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_25)) f+ *((eax_25 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        esi_3[6] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_27)) f+ *((eax_27 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        esi_3[7] = 0
        esi_3[8] = arg6
        esi_3[9] = arg7
        esi_3[0xa] = arg8
        arg10 f- 0
        esi_3[0xb] = arg9
        uint32_t eax_28
        eax_28:1.b = (arg10 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg10, 0f) ? 1 : 0) << 2
            | (arg10 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        float xmm1_1
        
        if (not(p_2))
            xmm1_1 = (zx.o(0)).d
        else
            xmm1_1 = 1f / arg10
        
        esi_3[0xc] = xmm1_1
        arg11 f- 0
        eax_28:1.b = (arg11 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg11, 0f) ? 1 : 0) << 2
            | (arg11 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        float xmm0_40
        
        if (not(p_4))
            xmm0_40 = (zx.o(0)).d
        else
            xmm0_40 = 1f / arg11
        
        esi_3[0xd] = xmm0_40
        esi_3[0xe] = 0
        esi_3[0xf] = 0
        int32_t edx_1 = *(arg1 + 0x5c)
        int32_t* ecx_16 = *(*(arg1 + 4) + 0x38)
        void* ebx_3
        
        if (edx_1 == 0)
            ebx_3.b = 0
        else
            (*(*ecx_16 + 0xc0))(ecx_16, edx_1, 0, 0, esi_3, 0, 0)
            ebx_3.b = 1
        
        j__free(esi_3)
        result.b = ebx_3.b
else
    var_18 = nullptr
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    int32_t* var_30_2 = &var_18
    result = sub_6086f0(arg1 + 8, eax_3)
    int32_t* ebx_1 = var_18
    
    if (result.b != 0)
        esi_1 = sub_60bf20(*(arg1 + 4))
        
        if (esi_1 != 0)
            void* var_30_3 = var_14_1 - ebx_1
            
            if (sub_60eb10(esi_1, ebx_1) != 0)
                int32_t var_4_1 = 0xffffffff
                *sub_41ff70(arg1 + 0x48, &arg_18) = esi_1
                sub_403510(&var_18)
                goto label_618d22
            
            (*(*esi_1 + 4))(eax_2)
    
    if (ebx_1 == 0)
        result.b = 0
    else
        j__free(ebx_1)
        result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
