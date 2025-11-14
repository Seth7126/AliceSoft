// 函数: sub_611f90
// 地址: 0x611f90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cd60e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void var_88
sub_608f00(&var_88)
int32_t var_c_1 = 0
struct IShaderParam::graphengine::CShaderParam::VTable* var_50
sub_609200(&var_88, sub_608f00(&var_50))
int32_t var_84 = 0x14
int32_t var_80 = 3

if (sub_608f90(arg1 + 0x50, &var_88) != 0)
    int32_t* ecx_4 = *(arg1 + 0x4c)
    
    if (ecx_4 != 0)
        (*(*ecx_4 + 4))(eax_2)
        *(arg1 + 0x4c) = 0
    
    int32_t* ecx_5 = *(arg1 + 0x48)
    
    if (ecx_5 != 0)
        (*(*ecx_5 + 4))(eax_2)
        *(arg1 + 0x48) = 0
    
    sub_6093d0(arg1 + 0x50)
    void* var_c8_2 = arg1 + 0x50
    
    if (sub_612900(arg1, &var_88) == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (sub_612940(arg1, &var_88, 0) == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    sub_609200(arg1 + 0x50, &var_88)

float* var_94
sub_42f420(&var_94, 4)
var_c_1.b = 1
float* ecx_11 = var_94
*ecx_11 = 2f / arg6
ecx_11[1] = -2f / arg7
ecx_11[2] = 0xbf800000
ecx_11[3] = 0x3f800000
int32_t edx = *(arg1 + 0xbc)
int32_t* edi = *(*(arg1 + 4) + 0x38)
void* ebx

if (edx == 0)
    ebx.b = 0
else
    (*(*edi + 0xc0))(edi, edx, 0, 0, ecx_11, 0, 0)
    int32_t var_a4 = 0
    int32_t* var_a0 = nullptr
    int32_t var_9c_1 = 0
    int32_t var_98_1 = 0
    sub_42f4d0(&var_a0, 0x80, &var_a4)
    int32_t xmm0_2 = (zx.o(0)).d
    var_c_1.b = 2
    float xmm1_1 = arg3 * arg4
    xmm1_1 f- 0
    void* eax_10
    eax_10:1.b = (xmm1_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 0f) ? 1 : 0) << 2
        | (xmm1_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm0_2 = arg5 * arg5 / xmm1_1 * arg6 * 27.7777767f
    
    int32_t* edi_1 = var_a0
    *edi_1 = arg2
    edi_1[1] = arg3
    edi_1[2] = xmm0_2
    int32_t ecx_13 = *(arg1 + 0xc4)
    int32_t* edx_1 = *(*(arg1 + 4) + 0x38)
    
    if (ecx_13 == 0)
    label_6121f1:
        ebx.b = 0
        j__free(edi_1)
        ecx_11 = var_94
    else
        (*(*edx_1 + 0xc0))(edx_1, ecx_13, 0, 0, edi_1, 0, 0)
        
        if (sub_60a7a0(arg1 + 0xb8, *(arg1 + 4)) == 0)
            goto label_6121f1
        
        if (sub_60a7f0(arg1 + 0xc0, *(arg1 + 4)) == 0)
            goto label_6121f1
        
        ebx.b = 1
        j__free(edi_1)
        ecx_11 = var_94

j__free(ecx_11)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
