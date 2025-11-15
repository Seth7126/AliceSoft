// 函数: sub_68c740
// 地址: 0x68c740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7474bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float result_2
float result_1 = result_2
void var_264
void* ecx = &var_264
sub_683180(ecx)
int32_t var_8_1 = 0
struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CVertexShader::VTable** result

if (sub_683580(ecx).b == 0)
    result.b = 0
else
    if (sub_683350(arg1 + 0x50, &var_264) != 0)
        goto label_68c829
    
    int32_t* ecx_2 = *(arg1 + 0x4c)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))(eax_2)
        *(arg1 + 0x4c) = 0
    
    int32_t* ecx_3 = *(arg1 + 0x48)
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 4))(eax_2)
        *(arg1 + 0x48) = 0
    
    sub_683600(arg1 + 0x50)
    void* var_278_2 = arg1 + 0x50
    
    if (sub_68cd00(arg1, &var_264).b == 0)
        result.b = 0
    else if (sub_68cda0(arg1, &var_264, 0).b == 0)
        result.b = 0
    else
        sub_683440(arg1 + 0x50, &var_264)
    label_68c829:
        float xmm0_2 = _mm_cvtepi32_ps(zx.o(arg12))
        void* eax_6 = *(arg1 + 4)
        int32_t var_1c_1 = 0xbf800000
        int32_t var_18_1 = 0x3f800000
        float xmm1_1 = 1f / xmm0_2
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(arg13))
        float var_24 = xmm1_1 + xmm1_1
        float var_20_1 = -2f / xmm0_4
        
        if (sub_684cb0(arg1 + 0x14c, &var_24, *(eax_6 + 0x38)).b == 0)
            result.b = 0
        else
            float xmm0_6 = arg11 - arg10
            int32_t xmm1_4 = (zx.o(0)).d
            int32_t var_224
            __builtin_memset(&var_224, 0, 0x200)
            xmm0_6 f- 0
            int32_t eax_7
            eax_7:1.b = (xmm0_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, 0f) ? 1 : 0) << 2
                | (xmm0_6 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                xmm1_4 = 1f / xmm0_6
            
            var_224 = arg6
            int32_t var_220_1 = xmm1_4
            float var_21c_1 = arg11
            float xmm0_11 = sub_4a78e0()
            void var_1f0
            void* ebx_1 = &var_1f0
            int32_t var_214_1 = arg4
            int32_t i = 0
            int32_t var_210_1 = arg5
            float xmm1_8 = _mm_cvtepi32_ps(zx.o(arg3))
            float xmm3_1 = _mm_cvtepi32_ps(zx.o(arg2))
            float xmm1_9 = xmm1_8 * xmm0_11
            float xmm5_1 = arg8
            float var_204_1 = xmm0_11
            float var_200_1 = xmm1_9 / xmm3_1
            float xmm4_2 = arg9 - xmm5_1
            float var_1f8_1 = xmm3_1 / xmm1_9
            float var_1fc_1 = 1f / xmm0_11
            arg9 = xmm4_2
            
            do
                float xmm1_11 = _mm_cvtepi32_ps(zx.o(i))
                float xmm1_13 = xmm1_11 * 0.0416666679f * arg7
                result_1 = xmm1_11 * xmm4_2 * 0.0416666679f + xmm5_1
                float var_22c_1 = xmm1_13 * 3.14159274f + xmm1_13 * 3.14159274f
                *(ebx_1 - 4) = sub_484cb0() * result_1
                i += 1
                xmm4_2 = arg9
                xmm5_1 = arg8
                *ebx_1 = sub_48ca30() * result_1
                ebx_1 += 0x10
            while (i s< 0x18)
            
            if (sub_684cb0(arg1 + 0x160, &var_224, *(*(arg1 + 4) + 0x38)).b == 0)
                result.b = 0
            else
                result = *(arg1 + 0x150)
                void* edi_1 = *(arg1 + 4)
                
                if (result == 0)
                    result.b = 0
                else
                    result_1 = result
                    
                    if (*(edi_1 + 0x164) != result)
                        int32_t* eax_9 = *(edi_1 + 0x38)
                        (*(*eax_9 + 0x1c))(eax_9, 0, 1, &result_1)
                        *(edi_1 + 0x164) = result_1
                    
                    if (sub_684c60(arg1 + 0x160, *(arg1 + 4)).b == 0)
                        result.b = 0
                    else
                        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
