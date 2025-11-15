// 函数: sub_521bd0
// 地址: 0x521bd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7392e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx_1 = *(arg1 + 0x110) - *(arg1 + 0x114)
int32_t var_78
int32_t* eax_3 = &var_78
var_78 = ecx_1
int32_t var_7c = 0

if (ecx_1 s<= 0)
    eax_3 = &var_7c

uint32_t result

if (*eax_3 != 0)
    int32_t esi_3 = *(arg1 + 0x100) - *(arg1 + 0x10c) - *(arg1 + 0x108)
    int32_t var_8_1 = 0
    char var_5c
    char* var_44
    sub_5227c0(&var_44, sub_4f82b0(arg1 + 0xcc, &var_5c), 1)
    var_8_1.b = 2
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    var_8_1.b = 3
    char var_74
    char var_2c
    sub_5227c0(&var_2c, sub_4f8a80(arg1 + 0xcc, &var_74), 1)
    var_8_1.b = 5
    int32_t var_60
    
    if (var_60 u>= 0x10)
        sub_403160(var_74.d, var_60 + 1, 1)
    
    void* eax_10 = *(arg1 + 0x2ec)
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    var_74 = 0
    void* ecx_4 = *(eax_10 + 8)
    char eax_11
    
    if (ecx_4 != 0)
        eax_11 = sub_4d62f0(ecx_4, &var_2c)
    
    int32_t var_30
    uint32_t result_1
    
    if (ecx_4 == 0 || eax_11 == 0)
        char* eax_13 = &var_44
        
        if (var_30 u>= 0x10)
            eax_13 = var_44
        
        if (sub_44c4e0(eax_13) == 0)
            float xmm0_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x110)))
            uint32_t result_2 = *(arg1 + 0xb4)
            result_1 = int.d(_mm_cvtepi32_ps(zx.o(esi_3)) / xmm0_2
                * _mm_cvtepi32_ps(zx.o(*(arg1 + 0x114))))
            
            if (result_1 s< result_2)
                result_1 = result_2
        else
            result_1 = sub_521e20(arg1, &var_44)
    else
        result_1 = sub_521db0(arg1, &var_2c)
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
