// 函数: sub_44cf40
// 地址: 0x44cf40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__seterrormode(arg1 + 0xc)
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 8)

if (ecx != 0)
    *(arg1 + 8) = 0
    (*(*ecx + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0xc)

if ((arg2 & 1) != 0)
    int32_t var_20_2 = 0x14
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
