// 函数: sub_599e00
// 地址: 0x599e00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__seterrormode(arg1 + 0x1c)
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 0x18)

if (ecx != 0)
    *(arg1 + 0x18) = 0
    (*(*ecx + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x1c)
int32_t ebx = *(arg1 + 8)

for (void* i = *(arg1 + 4); i != ebx; i += 0x34c)
    sub_59b2c0(i)

int32_t result = *(arg1 + 4)
*(arg1 + 8) = result
*(arg1 + 0x10) = 0xffffffff
*(arg1 + 0x14) = 0xffffffff
fsbase->NtTib.ExceptionList = ExceptionList
return result
