// 函数: sub_612600
// 地址: 0x612600
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cd68e
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
int32_t var_84 = 0x1e
int32_t var_80 = 5

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
    void* var_b8_2 = arg1 + 0x50
    
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
float xmm0_1 = _mm_cvtepi32_ps(zx.o(arg2))
float* edi = var_94
*edi = 2f / xmm0_1
edi[1] = -2f / _mm_cvtepi32_ps(zx.o(arg3))
edi[2] = 0xbf800000
edi[3] = 0x3f800000
int32_t ecx_11 = *(arg1 + 0xbc)
int32_t* edx = *(*(arg1 + 4) + 0x38)
int32_t* ebx

if (ecx_11 == 0)
    ebx.b = 0
else
    (*(*edx + 0xc0))(edx, ecx_11, 0, 0, edi, 0, 0)
    int32_t var_a4 = 0
    int32_t* var_a0 = nullptr
    int32_t var_9c_1 = 0
    int32_t var_98_1 = 0
    sub_42f4d0(&var_a0, 0x80, &var_a4)
    int32_t i = 0xffffffff
    var_c_1.b = 2
    float xmm0_5 = _mm_cvtepi32_ps(zx.o(arg4))
    ebx = var_a0
    *ebx = xmm0_5
    void* eax_10 = &ebx[9]
    float xmm3_1 = 1f / xmm0_5
    float xmm1_3 = _mm_cvtepi32_ps(zx.o(arg5))
    ebx[1] = xmm1_3
    
    do
        eax_10 += 0x40
        float xmm0_7 = _mm_cvtepi32_ps(zx.o(i))
        i += 1
        *(eax_10 - 0x44) = xmm3_1 * -1f
        float xmm0_8 = xmm0_7 * 1f / xmm1_3
        *(eax_10 - 0x40) = xmm0_8
        *(eax_10 - 0x34) = xmm3_1 * 0f
        *(eax_10 - 0x30) = xmm0_8
        *(eax_10 - 0x24) = xmm3_1
        *(eax_10 - 0x20) = xmm0_8
        *(eax_10 - 0x14) = xmm3_1 * 2f
        *(eax_10 - 0x10) = xmm0_8
    while (i s<= 2)
    
    int32_t ecx_13 = *(arg1 + 0xc4)
    int32_t* edx_1 = *(*(arg1 + 4) + 0x38)
    
    if (ecx_13 == 0)
        ebx.b = 0
        j__free(var_a0)
    else
        (*(*edx_1 + 0xc0))(edx_1, ecx_13, 0, 0, ebx, 0, 0)
        int32_t eax_13 = *(arg1 + 0xbc)
        ebx = *(arg1 + 4)
        
        if (eax_13 == 0)
            ebx.b = 0
            j__free(var_a0)
        else
            var_a4 = eax_13
            
            if (ebx[0x51] != eax_13)
                int32_t* eax_14 = ebx[0xe]
                (*(*eax_14 + 0x1c))(eax_14, 0, 1, &var_a4)
                ebx[0x51] = var_a4
            
            if (sub_60a7f0(arg1 + 0xc0, *(arg1 + 4)) == 0)
                ebx.b = 0
                j__free(var_a0)
            else
                ebx.b = 1
                j__free(var_a0)

j__free(edi)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
