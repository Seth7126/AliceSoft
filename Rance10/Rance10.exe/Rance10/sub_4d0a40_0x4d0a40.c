// 函数: sub_4d0a40
// 地址: 0x4d0a40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729b31
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14_1 = arg1
int32_t var_8_1 = 0

if (arg1 != 0)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_403590(arg1, arg2, 0, 0xffffffff)
    *(arg1 + 0x18) = arg2[6]
    *(arg1 + 0x1c) = &common::CRect::`vftable'
    *(arg1 + 0x20) = &common::CPoint::`vftable'
    *(arg1 + 0x24) = arg2[9]
    *(arg1 + 0x28) = arg2[0xa]
    *(arg1 + 0x2c) = &common::CSize::`vftable'
    *(arg1 + 0x30) = arg2[0xc]
    result = arg2[0xd]
    *(arg1 + 0x34) = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
