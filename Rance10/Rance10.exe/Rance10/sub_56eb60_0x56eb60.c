// 函数: sub_56eb60
// 地址: 0x56eb60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72addc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_24 = arg1
int32_t var_28 = sub_57de70(arg1 + 0x4c)
sub_570210(*(arg1 + 0x38), *(arg1 + 0x3c))
*(arg1 + 0x3c) = *(arg1 + 0x38)
int32_t var_8_1 = 0
sub_56ff20(*(*(arg1 + 0x44) + 4))
void* eax_5 = *(arg1 + 0x44)
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *(arg1 + 0x44)
*eax_6 = eax_6
void* eax_7 = *(arg1 + 0x44)
*(eax_7 + 8) = eax_7
*(arg1 + 0x48) = 0
sub_56f150(arg1 + 0x2c)
int32_t var_8_2 = 1
sub_56ff90(*(*(arg1 + 0x24) + 4))
void* eax_9 = *(arg1 + 0x24)
*(eax_9 + 4) = eax_9
int32_t* eax_10 = *(arg1 + 0x24)
*eax_10 = eax_10
void* result = *(arg1 + 0x24)
*(result + 8) = result
*(arg1 + 0x28) = 0
*(arg1 + 0x5c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
