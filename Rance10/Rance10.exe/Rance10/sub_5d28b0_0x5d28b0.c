// 函数: sub_5d28b0
// 地址: 0x5d28b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0x4c)
void* esi = arg1 + 0x38

if (eax_3 u>= 0x10)
    sub_403160(*esi, eax_3 + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
void* esi_1 = arg1 + 0x20
int32_t eax_5 = *(esi_1 + 0x14)

if (eax_5 u>= 0x10)
    sub_403160(*esi_1, eax_5 + 1, 1)

*(esi_1 + 0x14) = 0xf
bool cond:1 = *(esi_1 + 0x14) u< 0x10
*(esi_1 + 0x10) = 0

if (not(cond:1))
    esi_1 = *esi_1

*esi_1 = 0
__seterrormode(arg1 + 0x1c)
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 0x18)

if (ecx != 0)
    *(arg1 + 0x18) = 0
    (*(*ecx + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x1c)
int32_t result = sub_5a4960(arg1 + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
