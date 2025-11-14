// 函数: sub_619ff0
// 地址: 0x619ff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdde8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0x20
void* const var_28
sub_420040(arg1 + 0x40, &var_28, &var_2c)
void* const eax_3 = var_28
int32_t* result
int32_t* var_18
struct IInterface::graphengined3d11::CVertexShader::VTable** esi_1

if (eax_3 != *(arg1 + 0x40))
    esi_1 = *(eax_3 + 0x14)
label_61a164:
    
    if (sub_61b050(esi_1).b == 0)
        result.b = 0
    else if (sub_60a7a0(arg1 + 0x50, *(arg1 + 4)).b == 0)
        result.b = 0
    else
        sub_42f420(&var_18, 4)
        int32_t var_4_2 = 2
        float xmm0_2 = _mm_cvtepi32_ps(zx.o(arg2))
        int32_t* esi_2 = var_18
        *esi_2 = 2f / xmm0_2
        esi_2[1] = -2f / _mm_cvtepi32_ps(zx.o(arg3))
        esi_2[2] = 0xbf800000
        esi_2[3] = 0x3f800000
        int32_t edx_1 = *(arg1 + 0x54)
        int32_t* ecx_16 = *(*(arg1 + 4) + 0x38)
        void* ebx
        
        if (edx_1 == 0)
            ebx.b = 0
        else
            (*(*ecx_16 + 0xc0))(ecx_16, edx_1, 0, 0, esi_2, 0, 0)
            ebx.b = 1
        
        j__free(esi_2)
        result.b = ebx.b
else
    var_18 = nullptr
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    int32_t* var_44_1 = &var_18
    result = sub_6086f0(arg1 + 8, 0x20)
    int32_t* edi_1 = var_18
    
    if (result.b != 0)
        int32_t* result_1 = nullptr
        int32_t var_20_1 = 0
        int32_t var_1c_1 = 0
        var_4.b = 1
        var_28 = nullptr
        sub_412de0(&result_1, &var_28)
        var_28 = 4
        sub_412de0(&result_1, &var_28)
        var_28 = 6
        sub_412de0(&result_1, &var_28)
        esi_1 = sub_60c0a0(*(arg1 + 4))
        
        if (esi_1 != 0)
            int32_t* var_44_5 = &result_1
            
            if (sub_61af80(esi_1, edi_1, var_14_1 - edi_1) != 0)
                var_28 = 0x20
                *sub_41ff70(arg1 + 0x40, &var_28) = esi_1
                sub_403510(&result_1)
                int32_t var_4_1 = 0xffffffff
                sub_403510(&var_18)
                goto label_61a164
            
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
