// 函数: sub_562c70
// 地址: 0x562c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5750
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
int32_t var_4 = 0
int32_t eax_5 = arg2[1]
int32_t result
void* const var_5c_1
void* var_58_1

if (eax_5 == 0)
    var_58_1 = 4
    var_5c_1 = &data_6e4cd8
label_562cf8:
    sub_402110(&var_40, var_5c_1, var_58_1)
    char* eax_8 = &var_40
    int64_t xmm0_2 = _mm_cvtps_pd(arg2[7])
    
    if (var_2c u>= 0x10)
        eax_8 = var_40.d
    
    var_5c_1.q = xmm0_2
    int64_t var_64_1 = _mm_cvtps_pd(arg2[6])
    char* var_68_1 = eax_8
    int64_t var_70_1 = _mm_cvtps_pd(arg2[5])
    int64_t var_78_1 = _mm_cvtps_pd(arg2[4])
    int64_t var_80_1 = _mm_cvtps_pd(arg2[3])
    int32_t var_84_1 = *arg2
    int32_t var_28
    void** ecx_2 = sub_4691f0(&var_28, "\t\t{ %d, %f, %f, %f, %s, %f, %f }")
    var_4.b = 1
    int32_t edx_1 = ecx_2[5]
    int32_t esi_1 = ecx_2[4]
    void** eax_10
    
    if (edx_1 u< 0x10)
        eax_10 = ecx_2
    else
        eax_10 = *ecx_2
    
    if (edx_1 u>= 0x10)
        ecx_2 = *ecx_2
    
    var_64_1:4.d = ecx_2
    var_64_1.d = *(arg1 + 8)
    sub_468ff0(arg1 + 4, var_64_1, eax_10 + esi_1, var_44)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    if (var_2c u>= 0x10)
        j__free(var_40.d)
    
    result.b = 1
else
    if (eax_5 == 1)
        var_58_1 = 4
        var_5c_1 = &data_6e4cbc
        goto label_562cf8
    
    if (eax_5 == 2)
        var_58_1 = 8
        var_5c_1 = &data_6e4cc4
        goto label_562cf8
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
