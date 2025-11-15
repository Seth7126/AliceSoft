// 函数: sub_5c75f0
// 地址: 0x5c75f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7402aa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
EnterCriticalSection(*(arg1 + 0x5d8) + 4)
int32_t var_8_1 = 0
sub_5c5b30(*(*(arg1 + 0x5cc) + 4))
void* eax_6 = *(arg1 + 0x5cc)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg1 + 0x5cc)
*eax_7 = eax_7
void* eax_8 = *(arg1 + 0x5cc)
*(eax_8 + 8) = eax_8
*(arg1 + 0x5d0) = 0
LeaveCriticalSection(*(arg1 + 0x5d8) + 4)
*(arg1 + 0x5c5) = 0
__seterrormode(arg1 + 0x574)
int32_t var_8_2 = 1
int32_t* ecx_1 = *(arg1 + 0x570)

if (ecx_1 != 0)
    *(arg1 + 0x570) = 0
    (*(*ecx_1 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x574)
*(arg1 + 0x578) = 0
sub_5dce70(arg1 + 0x4b0)
*(arg1 + 0x4ac) = 0
__seterrormode(arg1 + 0x494)
int32_t var_8_3 = 2
int32_t* ecx_3 = *(arg1 + 0x490)

if (ecx_3 != 0)
    *(arg1 + 0x490) = 0
    (*(*ecx_3 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x494)
*(arg1 + 0x498) = 0
*(arg1 + 0x49c) = 0
*(arg1 + 0x4a0) = 0
*(arg1 + 0x4a4) = 0
*(arg1 + 0x4a8) = 0
*(arg1 + 0x48c) = 0
sub_5758d0(arg1 + 0x3f4)
__seterrormode(arg1 + 0x3dc)
int32_t var_8_4 = 3
int32_t* ecx_5 = *(arg1 + 0x3d8)

if (ecx_5 != 0)
    *(arg1 + 0x3d8) = 0
    (*(*ecx_5 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x3dc)
*(arg1 + 0x3e0) = 0
*(arg1 + 0x3e4) = 0
*(arg1 + 0x3e8) = 0
*(arg1 + 0x3ec) = 0
*(arg1 + 0x3f0) = 0
__seterrormode(arg1 + 0x3d4)
int32_t var_8_5 = 4
int32_t* ecx_6 = *(arg1 + 0x3d0)

if (ecx_6 != 0)
    *(arg1 + 0x3d0) = 0
    (*(*ecx_6 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x3d4)
sub_5dc6a0(*(arg1 + 0x24c), *(arg1 + 0x250))
*(arg1 + 0x250) = *(arg1 + 0x24c)
*(arg1 + 0x248) = 0xffffffff
*(arg1 + 0x244) = 0
sub_40a100(arg1 + 0x228)
int32_t* ecx_9 = *(arg1 + 0x218)
*(arg1 + 0x218) = 0

if (ecx_9 != 0)
    int32_t var_8_6 = 5
    (**ecx_9)(1)

*(arg1 + 0x21c) = 1
*(arg1 + 0x220) = 0
*(arg1 + 0x224) = 0
__seterrormode(arg1 + 8)
int32_t var_8_7 = 6
int32_t* ecx_10 = *(arg1 + 4)

if (ecx_10 != 0)
    *(arg1 + 4) = 0
    (*(*ecx_10 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 8)
fsbase->NtTib.ExceptionList = ExceptionList
return result
