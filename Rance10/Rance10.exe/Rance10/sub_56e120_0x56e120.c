// 函数: sub_56e120
// 地址: 0x56e120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c5ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_120 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
bool result = sub_58f1b0(*(arg1 + 4))

if (result == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

void var_10c
sub_56dd00(&var_10c, arg3)
int32_t var_8_1 = 0
int32_t* esi = *(arg1 + 4)
__Smtx_lock_shared(&esi[1])
int32_t* esi_1 = *esi
__Smtx_unlock_shared(&esi[1])
void* ebx
ebx.b = sub_57cec0(arg1 + 0x20, arg2, arg4, esi_1, *(arg1 + 0x50), &var_10c) != 0
void* var_24
int32_t var_1c

if (var_24 != 0)
    sub_403160(var_24, (var_1c - var_24) s>> 6, 0x40)
fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
