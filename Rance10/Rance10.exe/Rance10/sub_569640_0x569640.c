// 函数: sub_569640
// 地址: 0x569640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_24 = arg1
void* var_28 = arg1
int32_t ecx_1 = sub_568960(*(arg1 + 0x44), *(arg1 + 0x48))
*(arg1 + 0x48) = *(arg1 + 0x44)
void* var_24_1 = arg1
int32_t var_28_1 = ecx_1
Concurrency::details::Etw::Etw(*(arg1 + 0x38), *(arg1 + 0x3c))
*(arg1 + 0x3c) = *(arg1 + 0x38)
__seterrormode(arg1 + 0x34)
int32_t var_8_1 = 0
int32_t* ecx_3 = *(arg1 + 0x30)

if (ecx_3 != 0)
    *(arg1 + 0x30) = 0
    (*(*ecx_3 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x34)
void* result = arg1 + 0x50
*(arg1 + 0x6c) = 0xffffffff
*(result + 0x10) = 0

if (*(result + 0x14) u>= 0x10)
    result = *result

*result = 0
*(arg1 + 0x68) = 0
*(arg1 + 4) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
