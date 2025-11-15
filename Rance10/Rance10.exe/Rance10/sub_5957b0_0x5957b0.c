// 函数: sub_5957b0
// 地址: 0x5957b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d3b2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__seterrormode(arg1 + 0x270)
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 0x26c)

if (ecx != 0)
    *(arg1 + 0x26c) = 0
    (*(*ecx + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x270)
void* ecx_1 = *(arg1 + 0x25c)

if (ecx_1 != 0)
    sub_403160(ecx_1, (*(arg1 + 0x264) - ecx_1) s>> 6, 0x40)
    *(arg1 + 0x25c) = 0
    *(arg1 + 0x260) = 0
    *(arg1 + 0x264) = 0

sub_571090(arg1 + 0x250)
void* ecx_3 = *(arg1 + 0x240)

if (ecx_3 != 0)
    sub_403160(ecx_3, (*(arg1 + 0x248) - ecx_3) s>> 6, 0x40)
    *(arg1 + 0x240) = 0
    *(arg1 + 0x244) = 0
    *(arg1 + 0x248) = 0

sub_58ee80(arg1 + 0x74)
__seterrormode(arg1 + 0x6c)
int32_t var_8_2 = 1
int32_t* ecx_5 = *(arg1 + 0x68)

if (ecx_5 != 0)
    *(arg1 + 0x68) = 0
    int32_t edx_1 = ecx_5[1]
    ecx_5[1] -= 1
    (**ecx_5)(edx_1 - 1)

___crtSetUnhandledExceptionFilter(arg1 + 0x6c)
void* ecx_6 = *(arg1 + 0x14)

if (ecx_6 != 0)
    sub_403160(ecx_6, (*(arg1 + 0x1c) - ecx_6) s>> 6, 0x40)
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0

__seterrormode(arg1 + 0xc)
int32_t var_8_3 = 2
int32_t* ecx_7 = *(arg1 + 8)

if (ecx_7 != 0)
    *(arg1 + 8) = 0
    int32_t ebx_1 = ecx_7[1]
    ecx_7[1] -= 1
    (**ecx_7)(ebx_1 - 1)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 0xc)
fsbase->NtTib.ExceptionList = ExceptionList
return result
