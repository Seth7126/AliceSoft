// 函数: sub_427910
// 地址: 0x427910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4279c0(arg1)
*(arg1 + 0x48) = *(arg1 + 0x44)
int32_t var_8_1 = 0
sub_4290d0(*(*(arg1 + 0x2c) + 4))
void* eax_5 = *(arg1 + 0x2c)
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *(arg1 + 0x2c)
*eax_6 = eax_6
void* eax_7 = *(arg1 + 0x2c)
int32_t var_8_2 = 0xffffffff
*(eax_7 + 8) = eax_7
*(arg1 + 0x30) = 0
*(arg1 + 0x28) = 0
int32_t ebx = *(arg1 + 0x20)

for (int32_t* i = *(arg1 + 0x1c); i != ebx; i = &i[0xa])
    (**i)(0)

*(arg1 + 0x20) = *(arg1 + 0x1c)
int32_t* result = sub_403490(arg1 + 4, 0x75cd42, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
return result
