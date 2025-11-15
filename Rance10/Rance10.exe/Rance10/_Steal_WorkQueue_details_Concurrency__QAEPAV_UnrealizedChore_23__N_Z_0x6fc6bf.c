// 函数: ?Steal@WorkQueue@details@Concurrency@@QAEPAV_UnrealizedChore@23@_N@Z
// 地址: 0x6fc6bf
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74adf4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6fc6cb
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &arg1[0x1c]
std::function<void __cdecl (uint8_t)>::~function<void __cdecl (uint8_t)>(&arg1[0x1c])
int32_t var_8 = 0
void* result = sub_6fc932(arg1, arg2)
int32_t var_8_1 = 1
sub_6eb703(&arg1[0x1c])
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fc6ff
return result
