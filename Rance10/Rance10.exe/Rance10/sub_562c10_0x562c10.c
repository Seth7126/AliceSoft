// 函数: sub_562c10
// 地址: 0x562c10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ba8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_4f2d00(*(*(arg1 + 0x24) + 4))
void* eax_4 = *(arg1 + 0x24)
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *(arg1 + 0x24)
*eax_5 = eax_5
void* eax_6 = *(arg1 + 0x24)
*(eax_6 + 8) = eax_6
*(arg1 + 0x28) = 0
int32_t var_8_2 = 1
sub_44e450(*(*(arg1 + 0x2c) + 4))
void* eax_8 = *(arg1 + 0x2c)
*(eax_8 + 4) = eax_8
int32_t* eax_9 = *(arg1 + 0x2c)
*eax_9 = eax_9
void* result = *(arg1 + 0x2c)
*(result + 8) = result
*(arg1 + 0x30) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
