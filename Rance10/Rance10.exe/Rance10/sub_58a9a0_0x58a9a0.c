// 函数: sub_58a9a0
// 地址: 0x58a9a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_58a760(arg1)
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_8_1 = 0
void* result
int32_t* ebx

if (sub_6c9360(arg2, &var_30, 4).b == 0)
    ebx.b = 0
else
    uint32_t var_34
    
    if (sub_407560(&var_30, "LITP").b == 0)
        ebx.b = 0
    else if (sub_61ec90(arg2, &var_34).b == 0 || var_34 != 0 || *(arg2 + 4) + 0xa4 u> *(arg2 + 8))
        ebx.b = 0
    else
        for (int32_t i = 0; i s< 0x29; i += 1)
            int32_t xmm0_1
            result, xmm0_1 = sub_6c9520(arg2)
            arg1[i] = xmm0_1
        
        ebx.b = 1

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
