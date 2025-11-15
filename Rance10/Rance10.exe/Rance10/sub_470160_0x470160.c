// 函数: sub_470160
// 地址: 0x470160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (*arg2 != 0)
    char* ecx_1 = arg2
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_2c, arg2, ecx)
int32_t var_8_1 = 0
void* eax_3 = sub_46eb40(arg1 + 8, &var_2c)

if (eax_3 == 0)
    eax_3 = arg1 + 0x7c

int32_t ecx_4 = *(eax_3 + 0x34)
float xmm0_1

if (ecx_4 == 1)
    xmm0_1 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x3c)) ^ 0x65656565)
else if (ecx_4 == 2)
    xmm0_1 = sub_462f40(*(eax_3 + 0x40))
else
    xmm0_1 = arg3

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return fconvert.t(xmm0_1)
