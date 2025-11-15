// 函数: sub_56a500
// 地址: 0x56a500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734898
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_56a620(arg1)
char eax_3 = sub_5ca560(&arg1[8], arg3, arg4, arg2, 0, 0, arg6)
char eax_4

if (eax_3 != 0)
    eax_4 = sub_5ca560(&arg1[0x24], arg3, arg4, arg2, 0, 0, arg6)

int32_t result

if (eax_3 == 0 || eax_4 == 0)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403490(&var_30, "CBlurBuffer::Create()\n", 0x8f)
    int32_t var_8_1 = 0
    sub_5e01e0(&var_30)
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    result.b = 0
else
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(arg4))
    
    if (sub_5dc7a0(&arg1[0x40], (zx.o(0)).d, (zx.o(0)).d, arg6, _mm_cvtepi32_ps(zx.o(arg3)), xmm0_2)
            .b == 0)
        result.b = 0
    else
        result.b = arg7
        *arg1 = result.b
        result.b = arg8
        arg1[1] = result.b
        *(arg1 + 4) = arg5
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
