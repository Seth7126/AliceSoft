// 函数: sub_5b69e0
// 地址: 0x5b69e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = arg2
int32_t edi

if (i s>= 0)
    if (i u> 0x15555555)
        sub_6d08ed()
        noreturn
    
    edi = 0
    int32_t eax_7
    int32_t edx
    
    for (; i s> 0; i = (eax_7 - edx) s>> 1)
        int32_t var_24_1 = 0x7fb9d0
        edi = operator new(i * 0xc)
        
        if (edi != 0)
            break
        
        edx:eax_7 = sx.q(i)
else
    i = 0
    edi = 0

*arg1 = edi
arg1[1] = i
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
