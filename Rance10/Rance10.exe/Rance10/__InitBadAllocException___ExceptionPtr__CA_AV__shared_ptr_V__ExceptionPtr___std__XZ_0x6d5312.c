// 函数: ?_InitBadAllocException@__ExceptionPtr@@CA?AV?$shared_ptr@V__ExceptionPtr@@@std@@XZ
// 地址: 0x6d5312
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x10
int32_t (* var_c)(void* arg1) = sub_749518
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
void* const var_34 = &data_6d531e
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
char const* const var_1c = "bad allocation"
int32_t var_14 = 0
int32_t var_18 = 0
struct std::exception::std::bad_alloc::VTable* const var_20 =
    &std::bad_alloc::`vftable'{for `std::exception'}
int32_t var_8 = 0
__ExceptionPtr::_CopyException(arg1, &var_20, &data_7db4ec, 0)
var_20 = &std::exception::`vftable'
___std_exception_destroy(&var_1c)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d5364
return arg1
