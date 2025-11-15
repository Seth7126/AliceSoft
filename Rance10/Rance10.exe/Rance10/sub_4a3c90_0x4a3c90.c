// 函数: sub_4a3c90
// 地址: 0x4a3c90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731338
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 0 || arg3 == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

struct common::CPoint::VTable* const var_1c = &common::CPoint::`vftable'
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
BOOL eax_4 = sub_4a2160(*(arg1 + 4), &var_1c)
*arg2 = var_18
*arg3 = var_14
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
