// 函数: sub_565ae0
// 地址: 0x565ae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_24 = arg1
int32_t var_28 = sub_4063f0(arg1 + 0x1c)
sub_568960(*(arg1 + 0x54), *(arg1 + 0x58))
*(arg1 + 0x58) = *(arg1 + 0x54)
int32_t* ecx_3 = *(arg1 + 0x50)
int32_t edx_2 = neg.d(arg1)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))(sbb.d(edx_2, edx_2, arg1 != 0) & (arg1 + 4))

*(arg1 + 0x50) = 0
void* esi = *(arg1 + 0x18)
*(arg1 + 0x18) = 0

if (esi != 0)
    sub_5cadc0(esi)
    int32_t var_24_2 = 0xcc
    operator new(esi)

__seterrormode(arg1 + 0x14)
int32_t var_8_1 = 0
int32_t* ecx_5 = *(arg1 + 0x10)

if (ecx_5 != 0)
    *(arg1 + 0x10) = 0
    (*(*ecx_5 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 0x14)
fsbase->NtTib.ExceptionList = ExceptionList
return result
