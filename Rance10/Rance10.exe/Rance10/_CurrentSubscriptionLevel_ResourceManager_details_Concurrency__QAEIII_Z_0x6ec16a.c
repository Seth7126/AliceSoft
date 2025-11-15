// 函数: ?CurrentSubscriptionLevel@ResourceManager@details@Concurrency@@QAEIII@Z
// 地址: 0x6ec16a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74a6b9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28 = &data_6ec176
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
sub_6eaa5e(arg1 + 0x2c)
void* ecx_1 = *(arg1 + 0x64)
void* const i

if (ecx_1 == 0)
    i = nullptr
else
    i = *(ecx_1 + 0x18)

while (i != 0)
    result += *(*(arg2 * 0x34 + *(i + 0x10) + 0x30) + arg3 * 0x34 + 0x18)
    
    if (i == *(arg1 + 0x64))
        i = nullptr
    else
        i = *(i + 0x18)

int32_t var_8 = 0
sub_6eabaa(arg1 + 0x2c)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ec1d1
return result
