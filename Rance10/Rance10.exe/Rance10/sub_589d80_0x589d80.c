// 函数: sub_589d80
// 地址: 0x589d80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a556
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = &arg1[1]
__seterrormode(esi)
int32_t* ecx = *arg1

if (ecx != arg2)
    int32_t var_8_1 = 0
    
    if (ecx != 0)
        *arg1 = 0
        int32_t edi_1 = ecx[1]
        ecx[1] -= 1
        (**ecx)(edi_1 - 1)
    
    *arg1 = arg2
    
    if (arg2 != 0)
        *(arg2 + 4)
        *(arg2 + 4) += 1

int32_t result = ___crtSetUnhandledExceptionFilter(esi)
fsbase->NtTib.ExceptionList = ExceptionList
return result
