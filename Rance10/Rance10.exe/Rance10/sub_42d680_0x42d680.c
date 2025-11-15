// 函数: sub_42d680
// 地址: 0x42d680
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
void* ebx
long double x87_r0

if (*(arg1 + 0x14) != 5)
    result = sub_42cf90(arg1, arg3, arg4)
    int32_t ebx_1
    ebx_1.b = *(arg1 + 4) == 0
    
    if (result == 1)
        char** eax_4 = &var_2c
        int32_t* var_48_2 = arg2
        
        if (var_18 u>= 0x10)
            eax_4 = var_2c
        
        if (sub_6ca310(eax_4, 0x7942e0) != 1)
            ebx.b = 0
        else
            ebx.b = 1
            *arg2 *= (ebx_1 << 1) + 0xffffffff
    else if (result == 2)
        float var_30
        int32_t* var_48_3 = &var_30
        char* eax_6 = &var_2c
        var_30 = 0f
        
        if (var_18 u>= 0x10)
            eax_6 = var_2c
        
        if (sub_6ca310(eax_6, 0x79394c) != 1)
            ebx.b = 0
        else
            ebx.b = 1
            *arg2 = int.d(_mm_cvtepi32_ps(zx.o((ebx_1 << 1) + 0xffffffff)) * var_30)
    else if (result != 3)
        ebx.b = 0
    else
        int32_t ecx_2
        ecx_2.b = sub_407560(&var_2c, "true").b != 0
        ebx.b = 1
        *arg2 = ecx_2 * ((ebx_1 << 1) + 0xffffffff)
else
    ebx.b = sub_42d110(arg1, x87_r0, arg2, &var_2c).b

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
