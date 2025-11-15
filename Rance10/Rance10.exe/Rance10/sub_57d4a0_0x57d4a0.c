// 函数: sub_57d4a0
// 地址: 0x57d4a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72addc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_57de70(arg1)
__seterrormode(&arg1[1])
int32_t* ecx = *arg1

if (ecx != arg2)
    int32_t var_8_1 = 0
    
    if (ecx != 0)
        *arg1 = 0
        (*(*ecx + 4))(eax_2)
    
    *arg1 = arg2
    int32_t var_8_2 = 1
    
    if (arg2 != 0)
        (**arg2)(eax_2)
    
    int32_t var_8_3 = 0xffffffff

___crtSetUnhandledExceptionFilter(&arg1[1])
char eax_5 = sub_57daf0(arg1)

if (eax_5 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

if (&arg1[4] != arg3)
    sub_403590(&arg1[4], arg3, 0, 0xffffffff)

sub_57df00(arg1)
void* eax_7
eax_7.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
