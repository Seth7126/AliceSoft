// 函数: sub_5dce70
// 地址: 0x5dce70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ba8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_56a620(&arg1[0x15])
__seterrormode(&arg1[5])
int32_t var_8_1 = 0
int32_t* ecx_1 = arg1[4]

if (ecx_1 != 0)
    arg1[4] = 0
    (*(*ecx_1 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&arg1[5])
arg1[0xd].b = 0
__seterrormode(&arg1[0xf])
int32_t var_8_2 = 1
int32_t* ecx_2 = arg1[0xe]

if (ecx_2 != 0)
    arg1[0xe] = 0
    (*(*ecx_2 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(&arg1[0xf])
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12].b = 0
arg1[0x13] = 0
arg1[0x14].b = 0
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
