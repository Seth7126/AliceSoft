// 函数: sub_59d240
// 地址: 0x59d240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2ad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_esi
int32_t var_40 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
char* result_1
char* result
int32_t ebx

if (sub_59ce30(&var_2c, &result_1).b == 0)
    ebx.b = 0
else
    result = result_1
    
    if (result == 2)
        int32_t* var_44_3 = &var_34
        char* eax_6 = &var_2c
        
        if (var_18 u>= 0x10)
            eax_6 = var_2c.d
        
        if (sub_69b31c(eax_6, 0x6dcf3c) != 1)
            ebx.b = 0
        else
            *arg1 = _mm_cvtepi32_ps(zx.o(var_34))
            ebx.b = 1
    else if (result != 3)
        ebx.b = 0
    else
        char* eax_5 = &var_2c
        int32_t* var_44_1 = arg1
        
        if (var_18 u>= 0x10)
            eax_5 = var_2c.d
        
        if (sub_69b31c(eax_5, 0x6dcf38) == 1)
            ebx.b = 1
        else
            ebx.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
