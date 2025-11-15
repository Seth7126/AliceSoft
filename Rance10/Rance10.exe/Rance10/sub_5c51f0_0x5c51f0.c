// 函数: sub_5c51f0
// 地址: 0x5c51f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740040
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x5d4) = &thread::CCriticalSection::`vftable'
int32_t* ecx = *(arg1 + 0x5d8)

if (ecx != 0)
    (**ecx)(1)

int32_t* eax_4 = *(arg1 + 0x5cc)
int32_t* var_24 = eax_4
sub_5c5680(arg1 + 0x5cc, &var_14, *eax_4)
sub_403160(*(arg1 + 0x5cc), 1, 0x20)
__seterrormode(arg1 + 0x574)
int32_t var_8_1 = 0
int32_t* ecx_2 = *(arg1 + 0x570)

if (ecx_2 != 0)
    *(arg1 + 0x570) = 0
    (*(*ecx_2 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x574)
sub_5c5520(arg1 + 0x4b0)
__seterrormode(arg1 + 0x494)
int32_t var_8_2 = 1
int32_t* ecx_4 = *(arg1 + 0x490)

if (ecx_4 != 0)
    *(arg1 + 0x490) = 0
    (*(*ecx_4 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x494)
__seterrormode(arg1 + 0x468)
int32_t var_8_3 = 2
int32_t* ecx_5 = *(arg1 + 0x464)

if (ecx_5 != 0)
    *(arg1 + 0x464) = 0
    (*(*ecx_5 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x468)
sub_575790(arg1 + 0x3fc)
__seterrormode(arg1 + 0x3dc)
int32_t var_8_4 = 3
int32_t* ecx_7 = *(arg1 + 0x3d8)

if (ecx_7 != 0)
    *(arg1 + 0x3d8) = 0
    (*(*ecx_7 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x3dc)
__seterrormode(arg1 + 0x3d4)
int32_t var_8_5 = 4
int32_t* ecx_8 = *(arg1 + 0x3d0)

if (ecx_8 != 0)
    *(arg1 + 0x3d0) = 0
    (*(*ecx_8 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x3d4)
int32_t var_8_6 = 5
sub_5ab840(arg1 + 0x32c)
int32_t* ecx_10 = *(arg1 + 0x24c)

if (ecx_10 != 0)
    int32_t* var_24_8 = ecx_10
    sub_5dc6a0(ecx_10, *(arg1 + 0x250))
    void* ecx_11 = *(arg1 + 0x24c)
    sub_403160(ecx_11, (*(arg1 + 0x254) - ecx_11) s>> 2, 4)
    *(arg1 + 0x24c) = 0
    *(arg1 + 0x250) = 0
    *(arg1 + 0x254) = 0

sub_40a220(arg1 + 0x228)
int32_t* ecx_13 = *(arg1 + 0x218)

if (ecx_13 != 0)
    int32_t var_8_7 = 6
    (**ecx_13)(1)

sub_5c55c0(arg1 + 0xc)
__seterrormode(arg1 + 8)
int32_t var_8_8 = 7
int32_t* ecx_15 = *(arg1 + 4)

if (ecx_15 != 0)
    *(arg1 + 4) = 0
    (*(*ecx_15 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 8)
fsbase->NtTib.ExceptionList = ExceptionList
return result
