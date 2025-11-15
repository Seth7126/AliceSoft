// 函数: sub_4bd620
// 地址: 0x4bd620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7329f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::CRect::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::CRect::VTable** var_14_1 = arg1
*arg1 = &common::CRect::`vftable'
arg1[1] = &common::CPoint::`vftable'
arg1[2] = *(arg2 + 8)
arg1[3] = *(arg2 + 0xc)
arg1[4] = &common::CSize::`vftable'
arg1[5] = *(arg2 + 0x14)
arg1[6] = *(arg2 + 0x18)
int32_t var_8_1 = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
sub_4bd7b0(arg1, arg3)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
