// 函数: sub_692990
// 地址: 0x692990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7290a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char arg_8
void** arg_14
int32_t* eax_4 = sub_692cf0(&ExceptionList, arg_8, arg2, arg3, arg4, arg_14.b, arg5, arg8)
arg_8.d = eax_4
sub_4cedf0(arg1 + 0x48, &arg_14, &arg_8)
void** eax_5 = arg_14
struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CPixelShader::VTable** eax_6
struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CPixelShader::VTable** esi_1

if (eax_5 != *(arg1 + 0x48))
    esi_1 = eax_5[5]
label_692a21:
    int32_t ebx_1 = esi_1[3]
    void* esi_2 = esi_1[2]
    
    if (*(esi_2 + 0x15c) != ebx_1)
        int32_t* eax_8 = *(esi_2 + 0x38)
        (*(*eax_8 + 0x24))(eax_8, ebx_1, 0, 0)
        *(esi_2 + 0x15c) = ebx_1
    
    eax_6 = *(arg1 + 0x68)
    void* esi_3 = *(arg1 + 4)
    
    if (eax_6 != 0)
        arg_14 = eax_6
        
        if (*(esi_3 + 0x154) != eax_6)
            int32_t* eax_9 = *(esi_3 + 0x38)
            (*(*eax_9 + 0x40))(eax_9, 0, 1, &arg_14)
            *(esi_3 + 0x154) = arg_14
        
        float* var_1c
        sub_422370(&var_1c, 0x10)
        uint32_t eax_13 = zx.d((arg3 u>> 0x10).b)
        int32_t var_8_1 = 0
        float* esi_4 = var_1c
        double xmm0_1 = _mm_cvtepi32_pd(zx.q(eax_13))
        float arg_20
        float xmm2 = arg_20
        float arg_1c
        float xmm3 = arg_1c
        uint32_t eax_17 = zx.d((arg3 u>> 8).b)
        *esi_4 = _mm_cvtpd_ps(xmm0_1 f+ *((eax_13 u>> 0x1f << 3) + &data_79aa70)) * 0.00392156886f
        uint32_t eax_19 = zx.d(arg3.b)
        uint32_t ecx_8 = arg3 u>> 0x18
        esi_4[1] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_17)) f+ *((eax_17 u>> 0x1f << 3) + &data_79aa70))
            * 0.00392156886f
        esi_4[2] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_19)) f+ *((eax_19 u>> 0x1f << 3) + &data_79aa70))
            * 0.00392156886f
        uint32_t eax_23 = zx.d((arg4 u>> 0x10).b)
        esi_4[3] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(ecx_8)) f+ *((ecx_8 u>> 0x1f << 3) + &data_79aa70))
            * 0.00392156886f
        uint32_t eax_27 = zx.d((arg4 u>> 8).b)
        esi_4[4] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_23)) f+ *((eax_23 u>> 0x1f << 3) + &data_79aa70))
            * 0.00392156886f
        uint32_t eax_29 = zx.d(arg4.b)
        esi_4[5] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_27)) f+ *((eax_27 u>> 0x1f << 3) + &data_79aa70))
            * 0.00392156886f
        esi_4[6] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_29)) f+ *((eax_29 u>> 0x1f << 3) + &data_79aa70))
            * 0.00392156886f
        esi_4[7] = 0
        float arg_24
        float arg_28
        
        if (arg5 != 0)
            if (arg8 != 0)
                goto label_692c21
            
            float xmm0_35 = arg_24
            esi_4[8] = xmm3
            esi_4[9] = xmm2
            esi_4[0xa] = xmm0_35
            esi_4[0xb] = arg_28
        else
            float arg_38
            float arg_3c
            float arg_40
            float arg_44
            
            if (arg8 == 0)
            label_692c21:
                int32_t* eax_32 = &arg_38
                
                if (arg_38 <= xmm3)
                    eax_32 = &arg_1c
                
                bool cond:2_1 = arg_3c <= xmm2
                esi_4[8] = *eax_32
                int32_t* eax_34 = &arg_3c
                
                if (cond:2_1)
                    eax_34 = &arg_20
                
                bool cond:3_1 = arg_24 <= arg_40
                esi_4[9] = *eax_34
                float* eax_36 = &arg_40
                
                if (cond:3_1)
                    eax_36 = &arg_24
                
                bool cond:4_1 = arg_28 <= arg_44
                esi_4[0xa] = *eax_36
                float* eax_38 = &arg_44
                
                if (cond:4_1)
                    eax_38 = &arg_28
                
                esi_4[0xb] = *eax_38
            else
                esi_4[8] = arg_38
                esi_4[9] = arg_3c
                esi_4[0xa] = arg_40
                esi_4[0xb] = arg_44
        esi_4[0xc] = 1f / arg6
        esi_4[0xd] = 1f / arg7
        esi_4[0xe] = xmm3
        esi_4[0xf] = xmm2
        ebx_1.b = sub_684cb0(arg1 + 0x64, esi_4, *(*(arg1 + 4) + 0x38)) != 0
        int32_t var_14
        sub_403160(esi_4, (var_14 - esi_4) s>> 2, 4)
        int32_t eax_42
        eax_42.b = ebx_1.b
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_42
else
    esi_1 = sub_6928e0(arg1, eax_4)
    
    if (esi_1 != 0)
        void* var_18
        sub_4cfa60(arg1 + 0x48, &var_18, &arg_8)
        *(var_18 + 0x14) = esi_1
        goto label_692a21
eax_6.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
