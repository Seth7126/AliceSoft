// 函数: ??_GSubAllocator@details@Concurrency@@QAEPAXI@Z
// 地址: 0x6eff11
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74a819
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
`eh vector vbase constructor iterator'(arg1 + 4, 8, 0x60, sub_6f8983)

if ((arg2 & 1) != 0)
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
