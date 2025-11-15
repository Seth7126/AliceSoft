// 函数: sub_5688b0
// 地址: 0x5688b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a556
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
__seterrormode(&ebx[1])
__seterrormode(&arg1[1])
int32_t* eax_3 = arg1
int32_t* edx = *eax_3
arg2 = edx

if (edx != *ebx)
    int32_t var_8_1 = 0
    
    if (edx != 0)
        *eax_3 = 0
        int32_t ecx = edx[1]
        edx[1] -= 1
        (**edx)(ecx - 1)
    
    *arg1 = *ebx
    *ebx = 0

___crtSetUnhandledExceptionFilter(&arg1[1])
int32_t result = ___crtSetUnhandledExceptionFilter(&ebx[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
