// 函数: sub_472010
// 地址: 0x472010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72da28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_403490(arg1 + 4, 0x75ce7e, nullptr)
sub_473920(arg1 + 0x1c)
*(arg1 + 0x24) = **(arg1 + 0x1c)

if (arg1 + 4 != arg2)
    sub_403590(arg1 + 4, arg2, 0, 0xffffffff)

void* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
void* ebx

if (sub_67edf0(arg1 + 4, &var_1c) != 0)
    ebx.b = sub_4720e0(arg1, &var_1c)
else
    ebx.b = 0

void* edx_1 = var_1c

if (edx_1 != 0)
    sub_403160(edx_1, var_14 - edx_1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
