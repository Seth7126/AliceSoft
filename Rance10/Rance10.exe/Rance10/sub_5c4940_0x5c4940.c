// 函数: sub_5c4940
// 地址: 0x5c4940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1[0x70]

if (esi != 0)
    sub_5c51f0(esi)
    int32_t var_20_1 = 0x5dc
    operator new(esi)

__seterrormode(&arg1[0x6f])
int32_t var_8_1 = 0
int32_t* ecx_1 = arg1[0x6e]

if (ecx_1 != 0)
    arg1[0x6e] = 0
    (*(*ecx_1 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&arg1[0x6f])
int32_t result = sub_5c6090(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
