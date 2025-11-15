// 函数: sub_5d4560
// 地址: 0x5d4560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0x24)
void* esi = arg1 + 0x10

if (eax_3 u>= 0x10)
    sub_403160(*esi, eax_3 + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
__seterrormode(arg1 + 0xc)
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 8)

if (ecx != 0)
    *(arg1 + 8) = 0
    (*(*ecx + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 0xc)
fsbase->NtTib.ExceptionList = ExceptionList
return result
