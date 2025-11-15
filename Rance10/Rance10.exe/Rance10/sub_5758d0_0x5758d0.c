// 函数: sub_5758d0
// 地址: 0x5758d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a526
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__seterrormode(&arg1[0x1d])
int32_t var_8_1 = 0
int32_t* ecx = arg1[0x1c]

if (ecx != 0)
    arg1[0x1c] = 0
    (*(*ecx + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&arg1[0x1d])
arg1[0x25].b = 0
int32_t result = sub_56a620(&arg1[2])
*arg1 = 0
arg1[1] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
