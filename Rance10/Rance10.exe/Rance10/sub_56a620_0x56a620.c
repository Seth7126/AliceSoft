// 函数: sub_56a620
// 地址: 0x56a620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c362
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__seterrormode(arg1 + 0x44)
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 0x40)

if (ecx != 0)
    *(arg1 + 0x40) = 0
    (*(*ecx + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x44)
*(arg1 + 0x64) = 0
__seterrormode(arg1 + 0x28)
int32_t var_8_2 = 1
int32_t* ecx_1 = *(arg1 + 0x24)

if (ecx_1 != 0)
    *(arg1 + 0x24) = 0
    (*(*ecx_1 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x28)
*(arg1 + 0x2c) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x3c) = 0
__seterrormode(arg1 + 0xc)
int32_t var_8_3 = 2
int32_t* ecx_2 = *(arg1 + 8)

if (ecx_2 != 0)
    *(arg1 + 8) = 0
    (*(*ecx_2 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 0xc)
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
