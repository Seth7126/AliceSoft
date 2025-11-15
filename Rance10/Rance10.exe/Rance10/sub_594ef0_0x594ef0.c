// 函数: sub_594ef0
// 地址: 0x594ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b5c1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14_1 = arg1
int32_t var_8_1 = 0

if (arg1 != 0)
    void** eax_4 = *arg2
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    result = sub_403590(arg1, eax_4, 0, 0xffffffff)
    *(arg1 + 0x18) = 0
    *(arg1 + 0x20) = 0
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
