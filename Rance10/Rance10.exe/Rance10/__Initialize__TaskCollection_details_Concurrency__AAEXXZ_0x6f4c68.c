// 函数: ?_Initialize@_TaskCollection@details@Concurrency@@AAEXXZ
// 地址: 0x6f4c68
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t (* var_c)(void* arg1) = sub_74abab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
void* const var_2c = &data_6f4c74
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1
int32_t* result = nullptr
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x7c) = 0
void* var_18 = arg1 + 0x1c
int32_t var_8 = 0

if (arg1 != 0xffffffe4)
    *(arg1 + 0x1c) = 0
    result = TI_OFF::TI_OFF(arg1 + 0x20)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f4c9c
return result
