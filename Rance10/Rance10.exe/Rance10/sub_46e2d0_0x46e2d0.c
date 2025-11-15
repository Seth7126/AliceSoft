// 函数: sub_46e2d0
// 地址: 0x46e2d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72addc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4274a0(arg1 + 8, arg2 + 8)
sub_4274a0(arg1 + 0x14, arg2 + 0x14)

if (arg1 + 0x20 != arg2 + 0x20)
    int32_t var_8_1 = 0
    sub_42e7b0(*(*(arg1 + 0x20) + 4))
    void* eax_7 = *(arg1 + 0x20)
    *(eax_7 + 4) = eax_7
    int32_t* eax_8 = *(arg1 + 0x20)
    *eax_8 = eax_8
    void* eax_9 = *(arg1 + 0x20)
    int32_t var_8_2 = 0xffffffff
    *(eax_9 + 8) = eax_9
    *(arg1 + 0x24) = 0
    sub_46e560(arg1 + 0x20, arg2 + 0x20, arg2)

if (arg1 + 0x28 != arg2 + 0x28)
    int32_t var_8_3 = 1
    sub_432200(*(*(arg1 + 0x28) + 4))
    void* eax_12 = *(arg1 + 0x28)
    *(eax_12 + 4) = eax_12
    int32_t* eax_13 = *(arg1 + 0x28)
    *eax_13 = eax_13
    void* eax_14 = *(arg1 + 0x28)
    int32_t var_8_4 = 0xffffffff
    *(eax_14 + 8) = eax_14
    *(arg1 + 0x2c) = 0
    sub_46e4e0(arg1 + 0x28, arg2 + 0x28, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
