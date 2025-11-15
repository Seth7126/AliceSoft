// 函数: sub_56c4c0
// 地址: 0x56c4c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c3fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::CSize::VTable** var_14 = arg1
*arg1 = &common::CSize::`vftable'
arg1[1] = *(arg2 + 4)
arg1[2] = *(arg2 + 8)
int32_t var_8_1 = 0
arg1[3].w = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
struct common::CPoint::VTable* const var_20 = &common::CPoint::`vftable'
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_28 = *(arg2 + 4)
int32_t eax_6 = *(arg2 + 8)
struct common::CRect::VTable* const var_3c = &common::CRect::`vftable'
struct common::CPoint::VTable* const var_38 = &common::CPoint::`vftable'
int32_t var_34 = 0
int32_t var_30 = 0
struct common::CSize::VTable* const var_2c = &common::CSize::`vftable'
int32_t var_24 = eax_6
var_8_1.b = 4
sub_56cf50(&arg1[4], &var_3c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
