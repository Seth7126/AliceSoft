// 函数: sub_434df0
// 地址: 0x434df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
arg1[0x23] = 0
int32_t* var_14_2 = &arg1[0x24]
arg1[0x24] = 0
arg1[0x25] = 0
arg1[0x24] = sub_42e780()
_memset(&arg1[3], 0, 0x80)
int32_t var_8_1 = 0
sub_42e7b0(*(arg1[0x24] + 4))
void* eax_6 = arg1[0x24]
*(eax_6 + 4) = eax_6
int32_t* eax_7 = arg1[0x24]
*eax_7 = eax_7
void* eax_8 = arg1[0x24]
*(eax_8 + 8) = eax_8
arg1[0x25] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
