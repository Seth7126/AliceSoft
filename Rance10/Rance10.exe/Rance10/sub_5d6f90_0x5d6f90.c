// 函数: sub_5d6f90
// 地址: 0x5d6f90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c362
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5d84e0(arg1)
sub_56a620(arg1 + 0x1c)
__seterrormode(arg1 + 0xc)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg1 + 8)

if (ecx_1 != 0)
    *(arg1 + 8) = 0
    (*(*ecx_1 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0xc)
__seterrormode(arg1 + 0x264)
int32_t var_8_2 = 1
int32_t* ecx_2 = *(arg1 + 0x260)

if (ecx_2 != 0)
    *(arg1 + 0x260) = 0
    (*(*ecx_2 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x264)
__seterrormode(arg1 + 0x26c)
int32_t var_8_3 = 2
int32_t* ecx_3 = *(arg1 + 0x268)

if (ecx_3 != 0)
    *(arg1 + 0x268) = 0
    (*(*ecx_3 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 0x26c)
*(arg1 + 0x28c) = 0
*(arg1 + 0x18) = 0
*(arg1 + 4) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
