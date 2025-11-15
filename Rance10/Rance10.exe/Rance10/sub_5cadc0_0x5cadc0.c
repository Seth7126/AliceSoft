// 函数: sub_5cadc0
// 地址: 0x5cadc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74059a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t** eax_3 = *(arg1 + 0xc4)
sub_5d2130(arg1 + 0xc4, &var_14, *eax_3, eax_3)
sub_403160(*(arg1 + 0xc4), 1, 0x30)
sub_5d1540(arg1 + 0xac)
sub_5d0ee0(arg1 + 0x94)
sub_5d1540(arg1 + 0x7c)
sub_5d1540(arg1 + 0x64)
*(arg1 + 0x5c) = &thread::CCriticalSection::`vftable'
int32_t* ecx_5 = *(arg1 + 0x60)

if (ecx_5 != 0)
    (**ecx_5)(1)

int32_t* eax_5 = *(arg1 + 0x58)

if (eax_5 != 0)
    sub_5d20a0(eax_5)

__seterrormode(arg1 + 0x54)
int32_t var_8_1 = 0
int32_t* ecx_6 = *(arg1 + 0x50)

if (ecx_6 != 0)
    *(arg1 + 0x50) = 0
    (*(*ecx_6 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x54)
__seterrormode(arg1 + 0x4c)
int32_t var_8_2 = 1
int32_t* ecx_7 = *(arg1 + 0x48)

if (ecx_7 != 0)
    *(arg1 + 0x48) = 0
    (*(*ecx_7 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x4c)
__seterrormode(arg1 + 0x44)
int32_t var_8_3 = 2
int32_t* ecx_8 = *(arg1 + 0x40)

if (ecx_8 != 0)
    *(arg1 + 0x40) = 0
    (*(*ecx_8 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x44)
__seterrormode(arg1 + 0x3c)
int32_t var_8_4 = 3
int32_t* ecx_9 = *(arg1 + 0x38)

if (ecx_9 != 0)
    *(arg1 + 0x38) = 0
    (*(*ecx_9 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x3c)
__seterrormode(arg1 + 0x34)
int32_t var_8_5 = 4
int32_t* ecx_10 = *(arg1 + 0x30)

if (ecx_10 != 0)
    *(arg1 + 0x30) = 0
    (*(*ecx_10 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x34)
__seterrormode(arg1 + 0x2c)
int32_t var_8_6 = 5
int32_t* ecx_11 = *(arg1 + 0x28)

if (ecx_11 != 0)
    *(arg1 + 0x28) = 0
    (*(*ecx_11 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x2c)
__seterrormode(arg1 + 0x20)
int32_t var_8_7 = 6
int32_t* ecx_12 = *(arg1 + 0x1c)

if (ecx_12 != 0)
    *(arg1 + 0x1c) = 0
    (*(*ecx_12 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x20)
int32_t eax_13 = *(arg1 + 0x18)

if (eax_13 u>= 0x10)
    eax_13 = sub_403160(*(arg1 + 4), eax_13 + 1, 1)

*(arg1 + 0x18) = 0xf
bool cond:0 = *(arg1 + 0x18) u< 0x10
*(arg1 + 0x14) = 0

if (cond:0)
    *(arg1 + 4) = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_13

char* eax_15 = *(arg1 + 4)
*eax_15 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_15
