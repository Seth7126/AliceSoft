// 函数: sub_5a84c0
// 地址: 0x5a84c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x74)

if (ecx != 0)
    (*(*ecx + 0x1c))(1)

__seterrormode(arg1 + 0x6c)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg1 + 0x68)

if (ecx_1 != 0)
    *(arg1 + 0x68) = 0
    (*(*ecx_1 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x6c)
void* ecx_2 = *(arg1 + 0x48)

if (ecx_2 != 0)
    sub_403160(ecx_2, (*(arg1 + 0x50) - ecx_2) s>> 2, 4)
    *(arg1 + 0x48) = 0
    *(arg1 + 0x4c) = 0
    *(arg1 + 0x50) = 0

sub_5a85c0(arg1 + 0x34)
sub_57c2e0(arg1 + 0x28)
int32_t eax_8 = *(arg1 + 0x1c)

if (eax_8 u>= 0x10)
    eax_8 = sub_403160(*(arg1 + 8), eax_8 + 1, 1)

*(arg1 + 0x1c) = 0xf
bool cond:0 = *(arg1 + 0x1c) u< 0x10
*(arg1 + 0x18) = 0

if (cond:0)
    *(arg1 + 8) = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8

char* eax_10 = *(arg1 + 8)
*eax_10 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_10
