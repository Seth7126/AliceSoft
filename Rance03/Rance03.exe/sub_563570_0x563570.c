// 函数: sub_563570
// 地址: 0x563570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5750
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
int32_t var_4 = 0
int32_t eax_5 = arg2[1]
int32_t result

if (eax_5 == 0)
    int32_t var_58_3 = 4
    void* const var_5c_3 = &data_6e4cd8
label_5635f8:
    sub_402110(&var_40)
    char* eax_8 = &var_40
    
    if (var_2c u>= 0x10)
        eax_8 = var_40.d
    
    char* var_58_4 = eax_8
    void** var_60_1 = _mm_cvtps_pd(arg2[3])
    int32_t var_64_1 = *arg2
    char const* const var_68_1 = "\t\t{ %d, %f, %s }"
    int32_t var_28
    void** ecx_2 = sub_4691f0(&var_28, "\t\t{ %d, %f, %s }")
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
    
    int32_t var_58_5 = var_44
    sub_468ff0(arg1 + 4, *(arg1 + 8), ecx_2, eax_10 + esi_1)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    if (var_2c u>= 0x10)
        j__free(var_40.d)
    
    result.b = 1
else
    if (eax_5 == 1)
        int32_t var_58_2 = 4
        void* const var_5c_2 = &data_6e4cbc
        goto label_5635f8
    
    if (eax_5 == 2)
        int32_t var_58_1 = 8
        void* const var_5c_1 = &data_6e4cc4
        goto label_5635f8
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
