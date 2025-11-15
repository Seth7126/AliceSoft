// 函数: sub_4ce410
// 地址: 0x4ce410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733ce0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403590(&var_30, arg2, 0, 0xffffffff)
int32_t var_8_1 = 0
void* eax_4 = sub_4ce2b0(arg1, arg2)

if (eax_4 != 0 && &var_30 != eax_4 + 8)
    sub_403590(&var_30, eax_4 + 8, 0, 0xffffffff)

struct common::CRect::VTable* const var_50 = &common::CRect::`vftable'
struct common::CPoint::VTable* const var_4c = &common::CPoint::`vftable'
int32_t var_48 = 0
int32_t var_44 = 0
struct common::CSize::VTable* const var_40 = &common::CSize::`vftable'
int32_t var_3c = 0
int32_t var_38 = 0
var_8_1.b = 1

if (sub_4ce540(arg1, &var_30, &var_50) == 0)
    int32_t* eax_9 = sub_4ce060(arg1, &var_30)
    
    if (eax_9 != 0)
        *arg3 = (*(*eax_9 + 0x10))(eax_2)
        *arg4 = (*(*eax_9 + 0x14))()
else
    *arg3 = var_3c
    *arg4 = var_38

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_30.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
