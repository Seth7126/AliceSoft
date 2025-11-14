// 函数: sub_4e2060
// 地址: 0x4e2060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c02e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50
int32_t* eax_5 = &var_50
int32_t ecx_1 = *(arg1 + 0xf8) - *(arg1 + 0xfc)
var_50 = ecx_1
int32_t var_54 = 0

if (ecx_1 s<= 0)
    eax_5 = &var_54

void* result

if (*eax_5 != 0)
    int32_t esi_3 = *(arg1 + 0xe8) - *(arg1 + 0xf4) - *(arg1 + 0xf0)
    int32_t* var_34
    sub_4e2c00(&var_34, arg1 + 0x154, 1)
    int32_t var_c_1 = 0
    char var_4c
    sub_4e2c00(&var_4c, arg1 + 0x1cc, 1)
    var_c_1.b = 1
    void* ecx_2 = *(*(arg1 + 0x2d4) + 8)
    char eax_9
    
    if (ecx_2 != 0)
        eax_9 = sub_48d400(ecx_2, &var_4c)
    
    int32_t var_20
    void* result_1
    
    if (ecx_2 == 0 || eax_9 == 0)
        int32_t* eax_11 = &var_34
        
        if (var_20 u>= 0x10)
            eax_11 = var_34
        
        if (sub_44a260(eax_11) == 0)
            void* ecx_4 = &var_54
            float xmm0_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xf8)))
            int32_t edx_1 =
                int.d(_mm_cvtepi32_ps(zx.o(esi_3)) / xmm0_2 * _mm_cvtepi32_ps(zx.o(*(arg1 + 0xfc))))
            bool cond:2_1 = edx_1 s< *(arg1 + 0x9c)
            var_54 = edx_1
            
            if (cond:2_1)
                ecx_4 = arg1 + 0x9c
            
            result_1 = *ecx_4
        else
            void** var_68_4 = &var_34
            
            if (*(arg1 + 0x30) == 0)
                result_1 = sub_5146e0(var_68_4)
            else
                result_1 = sub_5147e0(var_68_4)
    else
        result_1 = sub_4e2210(arg1, &var_4c)
    
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c.d)
    
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    var_4c = 0
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    result = result_1
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return result
