// 函数: sub_6189e0
// 地址: 0x6189e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdd08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = arg2 != 0
char arg_4
int32_t eax_3
eax_3.b = arg_4 != 0
int32_t* ebx_3 = ((ebx | 0x80) * 2) | eax_3
arg_4.d = ebx_3
int32_t* var_28
sub_420040(arg1 + 0x40, &var_28, &arg_4)
int32_t* eax_4 = var_28
int32_t* result
int32_t* var_18
struct IInterface::graphengined3d11::CVertexShader::VTable** esi_1

if (eax_4 != *(arg1 + 0x40))
    esi_1 = eax_4[5]
label_618b63:
    
    if (sub_61b050(esi_1).b == 0)
        result.b = 0
    else if (sub_60a7a0(arg1 + 0x50, *(arg1 + 4)).b == 0)
        result.b = 0
    else if (arg2 == 0)
        result.b = 1
    else
        sub_42f420(&var_18, 4)
        int32_t var_4_2 = 2
        int32_t* edx_1 = var_18
        float xmm1_2 = _mm_cvtepi32_ps(zx.o(arg4))
        float xmm2_3 = _mm_cvtepi32_ps(zx.o(arg3)) * 0.5f
        *edx_1 = xmm2_3
        edx_1[1] = xmm1_2 * -0.5f
        edx_1[2] = xmm2_3
        edx_1[3] = xmm1_2 * 0.5f
        int32_t** ecx_17 = &var_18
        
        if (sub_60a840(arg1 + 0x50, edx_1, *(*(arg1 + 4) + 0x38)) != 0)
            sub_403510(ecx_17)
            result.b = 1
        else
            sub_403510(ecx_17)
            result.b = 0
else
    var_18 = nullptr
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    int32_t* var_40_1 = &var_18
    result = sub_6086f0(arg1 + 8, ebx_3)
    int32_t* edi_1 = var_18
    
    if (result.b != 0)
        int32_t* result_1 = nullptr
        int32_t var_20_1 = 0
        int32_t var_1c_1 = 0
        var_4.b = 1
        var_28 = 1
        sub_412de0(&result_1, &var_28)
        var_28 = 6
        sub_412de0(&result_1, &var_28)
        var_28 = 7
        sub_412de0(&result_1, &var_28)
        esi_1 = sub_60c0a0(*(arg1 + 4))
        
        if (esi_1 != 0)
            int32_t* var_40_5 = &result_1
            
            if (sub_61af80(esi_1, edi_1, var_14_1 - edi_1) != 0)
                *sub_41ff70(arg1 + 0x40, &arg_4) = esi_1
                sub_403510(&result_1)
                int32_t var_4_1 = 0xffffffff
                sub_403510(&var_18)
                goto label_618b63
            
            (*esi_1)->__offset(0x4).d(eax_2)
        
        result = result_1
        
        if (result != 0)
            j__free(result)
    
    if (edi_1 == 0)
        result.b = 0
    else
        j__free(edi_1)
        result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
