// 函数: sub_68caa0
// 地址: 0x68caa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7474fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void var_260
void* ecx = &var_260
sub_683180(ecx)
int32_t var_8_1 = 0
struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CVertexShader::VTable** result

if (sub_6835c0(ecx).b == 0)
    result.b = 0
else
    if (sub_683350(arg1 + 0x50, &var_260) != 0)
        goto label_68cb80
    
    int32_t* ecx_2 = *(arg1 + 0x4c)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))(eax_2)
        *(arg1 + 0x4c) = 0
    
    int32_t* ecx_3 = *(arg1 + 0x48)
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 4))(eax_2)
        *(arg1 + 0x48) = 0
    
    sub_683600(arg1 + 0x50)
    void* var_270_2 = arg1 + 0x50
    
    if (sub_68cd00(arg1, &var_260).b == 0)
        result.b = 0
    else if (sub_68cda0(arg1, &var_260, 0).b == 0)
        result.b = 0
    else
        sub_683440(arg1 + 0x50, &var_260)
    label_68cb80:
        float xmm0_2 = _mm_cvtepi32_ps(zx.o(arg2))
        void* eax_6 = *(arg1 + 4)
        int32_t var_1c_1 = 0xbf800000
        int32_t var_18_1 = 0x3f800000
        float xmm1_1 = 1f / xmm0_2
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(arg3))
        float var_24 = xmm1_1 + xmm1_1
        float var_20_1 = -2f / xmm0_4
        
        if (sub_684cb0(arg1 + 0x14c, &var_24, *(eax_6 + 0x38)).b == 0)
            result.b = 0
        else
            float xmm0_6 = _mm_cvtepi32_ps(zx.o(arg4))
            float xmm3_1 = 1f / xmm0_6
            float xmm1_5 = _mm_cvtepi32_ps(zx.o(arg5))
            float var_224
            __builtin_memset(&var_224, 0, 0x200)
            float var_220_1 = xmm1_5
            void var_200
            void* eax_7 = &var_200
            int32_t i = 0xffffffff
            var_224 = xmm0_6
            int32_t xmm4_2 = xmm3_1 ^ (data_79aad0).d
            
            do
                eax_7 += 0x40
                float xmm0_8 = _mm_cvtepi32_ps(zx.o(i))
                i += 1
                *(eax_7 - 0x34) = 0
                *(eax_7 - 0x44) = xmm4_2
                float xmm0_9 = xmm0_8 * 1f / xmm1_5
                *(eax_7 - 0x24) = xmm3_1
                *(eax_7 - 0x14) = xmm3_1 * 2f
                *(eax_7 - 0x40) = xmm0_9
                *(eax_7 - 0x30) = xmm0_9
                *(eax_7 - 0x20) = xmm0_9
                *(eax_7 - 0x10) = xmm0_9
            while (i s<= 2)
            
            if (sub_684cb0(arg1 + 0x160, &var_224, *(*(arg1 + 4) + 0x38)).b == 0)
                result.b = 0
            else
                result = *(arg1 + 0x150)
                void* edi_1 = *(arg1 + 4)
                
                if (result == 0)
                    result.b = 0
                else
                    struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CVertexShader::VTable
                        ** result_1 = result
                    
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
