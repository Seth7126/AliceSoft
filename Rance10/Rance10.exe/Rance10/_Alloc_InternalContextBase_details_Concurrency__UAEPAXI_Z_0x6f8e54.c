// 函数: ?Alloc@InternalContextBase@details@Concurrency@@UAEPAXI@Z
// 地址: 0x6f8e54
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74ae1d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6f8e60
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi_1 = neg.d(arg1 - 4)
void* var_14 = sbb.d(edi_1, edi_1, arg1 != 4) & arg1
int32_t var_8 = 0
void* result = Concurrency::details::SubAllocator::Alloc(sub_6f7b37(*(arg1 + 0x9c)), arg2)
int32_t var_8_1 = 1
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f8ea5
return result
