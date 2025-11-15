// 函数: sub_5cb600
// 地址: 0x5cb600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73df28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5cb700(arg1)
__seterrormode(arg1 + 0x4c)
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 0x48)

if (ecx != 0)
    *(arg1 + 0x48) = 0
    (*(*ecx + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x4c)
__seterrormode(arg1 + 0x44)
int32_t var_8_2 = 1
int32_t* ecx_1 = *(arg1 + 0x40)

if (ecx_1 != 0)
    *(arg1 + 0x40) = 0
    (*(*ecx_1 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x44)
__seterrormode(arg1 + 0x3c)
int32_t var_8_3 = 2
int32_t* ecx_2 = *(arg1 + 0x38)

if (ecx_2 != 0)
    *(arg1 + 0x38) = 0
    (*(*ecx_2 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x3c)
__seterrormode(arg1 + 0x54)
int32_t var_8_4 = 3
int32_t* ecx_3 = *(arg1 + 0x50)

if (ecx_3 != 0)
    *(arg1 + 0x50) = 0
    (*(*ecx_3 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 0x54)
fsbase->NtTib.ExceptionList = ExceptionList
return result
