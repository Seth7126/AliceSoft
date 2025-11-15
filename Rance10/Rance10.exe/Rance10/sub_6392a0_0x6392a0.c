// 函数: sub_6392a0
// 地址: 0x6392a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745bc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
struct std::_Node_base::std::_Node_assert::VTable** result = sub_6e810c(0x18)
int32_t var_8_1 = 0
struct std::_Node_base::std::_Node_assert::VTable** result_1 = result
int32_t edx
edx.b = arg2 != 0
result[2] = 0
result[3] = 0
result[1] = edx + 0xa
result[4] = 0
*result = &std::_Node_assert::`vftable'{for `std::_Node_base'}
result[5] = 0
struct std::_Node_base::VTable** eax_3 = sub_6e810c(0x14)
*eax_3 = &std::_Node_base::`vftable'
eax_3[1] = 1
eax_3[2] = 0
eax_3[3] = 0
eax_3[4] = 0
result[4] = *(arg1 + 4)
int32_t eax_6 = *(*(arg1 + 4) + 0xc)

if (eax_6 != 0)
    result[3] = eax_6
    *(*(*(arg1 + 4) + 0xc) + 0x10) = result

*(*(arg1 + 4) + 0xc) = result
result[5] = eax_3
eax_3[4] = result
*(arg1 + 4) = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return result
