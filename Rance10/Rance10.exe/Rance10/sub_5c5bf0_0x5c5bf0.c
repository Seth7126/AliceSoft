// 函数: sub_5c5bf0
// 地址: 0x5c5bf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7273dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* esi = arg1[3]

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (**esi)(eax_2)
        int32_t ebx_1 = esi[2]
        esi[2] -= 1
        
        if (ebx_1 == 1)
            (*(*esi + 4))()

__seterrormode(&arg1[1])
int32_t var_8_2 = 1
int32_t* ecx_2 = *arg1

if (ecx_2 != 0)
    *arg1 = 0
    (*(*ecx_2 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
