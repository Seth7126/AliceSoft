// 函数: ??_EGlobalCore@details@Concurrency@@QAEPAXI@Z
// 地址: 0x5c97f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t ebx = *(arg1 + 0x330)

for (int32_t* i = *(arg1 + 0x32c); i != ebx; i = &i[5])
    (**i)(0)

*(arg1 + 0x330) = *(arg1 + 0x32c)
int32_t var_8_2 = 0xffffffff
int32_t result = sub_58a180(arg1 + 0x228, arg1 + 0x328)
fsbase->NtTib.ExceptionList = ExceptionList
return result
