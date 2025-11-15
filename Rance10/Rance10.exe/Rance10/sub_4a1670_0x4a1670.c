// 函数: sub_4a1670
// 地址: 0x4a1670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730f60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x5c) = arg2
*(arg1 + 0x60) = arg3
*(arg1 + 0x128) = *(arg1 + 0x5c)
*(arg1 + 0x12c) = *(arg1 + 0x60)

if (*(arg1 + 0x10c) != 0)
    (*(**(arg1 + 0x10c) + 0x24))(*(arg1 + 0x5c), *(arg1 + 0x60))

struct common::CPoint::VTable* var_1c = &common::CPoint::`vftable'
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
struct common::CSize::VTable* const var_28 = &common::CSize::`vftable'
int32_t var_24 = 0
int32_t var_20 = 0
var_8_1.b = 1
int32_t result = sub_49dbe0(arg1 - 4, 0, 0, &var_28, &var_1c, 0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
