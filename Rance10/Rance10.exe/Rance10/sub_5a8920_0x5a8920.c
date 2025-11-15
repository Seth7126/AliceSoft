// 函数: sub_5a8920
// 地址: 0x5a8920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ba8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__seterrormode(arg1 + 0x6c)
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 0x68)

if (ecx != 0)
    *(arg1 + 0x68) = 0
    (*(*ecx + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x6c)
int32_t* ecx_1 = *(arg1 + 0x74)
*(arg1 + 0x70) = 0x7f7fffff
*(arg1 + 0x58) = 0
*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x64) = 0
*(arg1 + 0x74) = 0

if (ecx_1 != 0)
    (*(*ecx_1 + 0x1c))(1)

bool cond:0 = *(arg1 + 0x1c) u< 0x10
void* eax_5 = arg1 + 8
*(eax_5 + 0x10) = 0

if (not(cond:0))
    eax_5 = *eax_5

*eax_5 = 0
sub_57c210(arg1 + 0x28)
__seterrormode(arg1 + 0x44)
int32_t var_8_2 = 1
int32_t* ecx_3 = *(arg1 + 0x40)

if (ecx_3 != 0)
    *(arg1 + 0x40) = 0
    (*(*ecx_3 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 0x44)
*(arg1 + 4) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
