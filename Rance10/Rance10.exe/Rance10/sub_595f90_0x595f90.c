// 函数: sub_595f90
// 地址: 0x595f90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e082
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__seterrormode(arg1 + 0x270)
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 0x26c)

if (ecx != 0)
    *(arg1 + 0x26c) = 0
    (*(*ecx + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x270)
*(arg1 + 0x274) = 0
int32_t ebx = *(arg1 + 0x254)

for (int32_t* i = *(arg1 + 0x250); i != ebx; i = &i[0x15])
    (*(*i + 0x1c))(0)

*(arg1 + 0x254) = *(arg1 + 0x250)
*(arg1 + 0x260) = *(arg1 + 0x25c)
*(arg1 + 0x18) = *(arg1 + 0x14)
*(arg1 + 0x244) = *(arg1 + 0x240)
__seterrormode(arg1 + 0x6c)
int32_t var_8_2 = 1
int32_t* ecx_2 = *(arg1 + 0x68)

if (ecx_2 != 0)
    *(arg1 + 0x68) = 0
    int32_t edx_1 = ecx_2[1]
    ecx_2[1] -= 1
    (**ecx_2)(edx_1 - 1)

___crtSetUnhandledExceptionFilter(arg1 + 0x6c)
sub_58ee40(arg1 + 0x74)
*(arg1 + 0x70) = 0
*(arg1 + 0x2c0) = 0
*(arg1 + 0x2c4) = 0
*(arg1 + 0x2c8) = 0
*(arg1 + 0x2cc) = 0
*(arg1 + 0x24c) = 0
__seterrormode(arg1 + 0xc)
int32_t var_8_3 = 2
int32_t* ecx_4 = *(arg1 + 8)

if (ecx_4 != 0)
    *(arg1 + 8) = 0
    int32_t ebx_1 = ecx_4[1]
    ecx_4[1] -= 1
    (**ecx_4)(ebx_1 - 1)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 0xc)
*(arg1 + 4) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
