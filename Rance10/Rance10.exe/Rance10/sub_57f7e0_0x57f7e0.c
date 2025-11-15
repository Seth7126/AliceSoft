// 函数: sub_57f7e0
// 地址: 0x57f7e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72fe6c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg1[9]
void* esi = &arg1[4]

if (eax_3 u>= 0x10)
    sub_403160(*esi, eax_3 + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
__seterrormode(&arg1[3])
int32_t var_8_1 = 0
int32_t* ecx = arg1[2]

if (ecx != 0)
    arg1[2] = 0
    (*(*ecx + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&arg1[3])
__seterrormode(&arg1[1])
int32_t var_8_2 = 1
int32_t* ecx_1 = *arg1

if (ecx_1 != 0)
    *arg1 = 0
    (*(*ecx_1 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
