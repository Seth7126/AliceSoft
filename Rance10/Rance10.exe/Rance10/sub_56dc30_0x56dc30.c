// 函数: sub_56dc30
// 地址: 0x56dc30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c2eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_114 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
bool result = sub_58f1b0(*(arg1 + 4))

if (result == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

void var_104
sub_56dd00(&var_104, arg2)
int32_t var_8_1 = 0
int32_t* esi = *(arg1 + 4)
__Smtx_lock_shared(&esi[1])
int32_t esi_1 = *esi
int32_t* ecx_4 = __Smtx_unlock_shared(&esi[1])
int32_t var_118_2 = esi_1
int32_t* var_11c_1 = ecx_4
void* ebx
ebx.b = sub_57cd00(arg1 + 0x20, ecx_4, arg3, &var_104) != 0
void* var_1c
int32_t var_14

if (var_1c != 0)
    sub_403160(var_1c, (var_14 - var_1c) s>> 6, 0x40)
fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
