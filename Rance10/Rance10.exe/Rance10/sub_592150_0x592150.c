// 函数: sub_592150
// 地址: 0x592150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73df28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_592410(*(arg1[0x1c] + 4))
void* eax_4 = arg1[0x1c]
*(eax_4 + 4) = eax_4
int32_t* eax_5 = arg1[0x1c]
*eax_5 = eax_5
void* eax_6 = arg1[0x1c]
*(eax_6 + 8) = eax_6
arg1[0x1d] = 0
int32_t var_8_2 = 1
sub_592410(*(arg1[0x1a] + 4))
void* eax_8 = arg1[0x1a]
*(eax_8 + 4) = eax_8
int32_t* eax_9 = arg1[0x1a]
*eax_9 = eax_9
void* eax_10 = arg1[0x1a]
*(eax_10 + 8) = eax_10
arg1[0x1b] = 0
int32_t var_8_3 = 2
sub_592450(*(arg1[0x18] + 4))
void* eax_12 = arg1[0x18]
*(eax_12 + 4) = eax_12
int32_t* eax_13 = arg1[0x18]
*eax_13 = eax_13
void* eax_14 = arg1[0x18]
*(eax_14 + 8) = eax_14
arg1[0x19] = 0
int32_t var_8_4 = 3
sub_592450(*(arg1[0x16] + 4))
void* eax_16 = arg1[0x16]
*(eax_16 + 4) = eax_16
int32_t* eax_17 = arg1[0x16]
*eax_17 = eax_17
void* eax_18 = arg1[0x16]
int32_t var_8_5 = 0xffffffff
*(eax_18 + 8) = eax_18
arg1[0x17] = 0
arg1[0x14] = arg1[0x13]
arg1[0x11] = arg1[0x10]
arg1[0xe] = arg1[0xd]
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_591140(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
