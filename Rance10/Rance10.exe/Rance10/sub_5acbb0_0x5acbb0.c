// 函数: sub_5acbb0
// 地址: 0x5acbb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_3 = arg1 + 0x534
*(arg1 + 0x54c) = 0
bool cond:0 = eax_3[5] u< 0x10
eax_3[4] = 0

if (not(cond:0))
    eax_3 = *eax_3

void* var_24 = arg1
*eax_3 = nullptr
void* var_28 = arg1
sub_56b630(*(arg1 + 0x528), *(arg1 + 0x52c))
*(arg1 + 0x52c) = *(arg1 + 0x528)
*(arg1 + 0x524) = 0
*(arg1 + 0x51c) = *(arg1 + 0x518)
*(arg1 + 0x510) = *(arg1 + 0x50c)
*(arg1 + 0x554) = *(arg1 + 0x550)
*(arg1 + 0x560) = 0
__seterrormode(arg1 + 0x508)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg1 + 0x504)

if (ecx_1 != 0)
    *(arg1 + 0x504) = 0
    int32_t edi_1 = ecx_1[1]
    ecx_1[1] -= 1
    (**ecx_1)(edi_1 - 1)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 0x508)
fsbase->NtTib.ExceptionList = ExceptionList
return result
