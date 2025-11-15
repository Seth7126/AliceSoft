// 函数: sub_4f1e00
// 地址: 0x4f1e00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736108
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* i_1 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* esi = *(arg1 + 0x1c)
void* i = *esi
i_1 = i
void* arg_8

for (; i != esi; i = i_1)
    sub_526530(*(i + 0x14), &arg_8)
    sub_429080(&i_1)

void* ecx_2 = arg_8

if (ecx_2 != 0)
    i = sub_403160(ecx_2, (arg2 - ecx_2) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return i
