// 函数: sub_42d7d0
// 地址: 0x42d7d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_2c
sub_425ab0(arg1, &var_2c, arg3)
int32_t var_8_1 = 0
int32_t var_18
int32_t result
int32_t* ebx
long double x87_r0

if (*(arg1 + 0x14) != 5)
    result = sub_42cf90(arg1, arg3, arg4)
    float xmm0_1
    
    if (*(arg1 + 4) == 0)
        xmm0_1 = 1f
    else
        xmm0_1 = -1f
    
    if (result == 2)
        char* eax_4 = &var_2c
        void** var_48_2 = arg2
        
        if (var_18 u>= 0x10)
            eax_4 = var_2c
        
        result = sub_6ca310(eax_4, 0x79394c)
        
        if (result != 1)
            ebx.b = 0
        else
            ebx.b = result.b
            *arg2 = *arg2 * xmm0_1
    else if (result != 1)
        ebx.b = 0
    else
        int32_t var_34
        int32_t* var_48_3 = &var_34
        char* eax_5 = &var_2c
        var_34 = 0
        
        if (var_18 u>= 0x10)
            eax_5 = var_2c
        
        result = sub_6ca310(eax_5, 0x7942e0)
        
        if (result != 1)
            ebx.b = 0
        else
            ebx.b = result.b
            *arg2 = _mm_cvtepi32_ps(zx.o(var_34)) * xmm0_1
else
    ebx.b = sub_42d2a0(arg1, x87_r0, arg2, &var_2c).b

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
