// 函数: sub_6323b0
// 地址: 0x6323b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745769
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg3
int32_t var_14 = 0
arg3[4] = 0
arg3[5] = 0
arg3[5] = 7
bool cond:0 = arg3[5] u< 8
arg3[4] = 0
int16_t* eax_3

if (cond:0)
    eax_3 = arg3
else
    eax_3 = *arg3

*eax_3 = 0
int32_t var_8_1 = 0
int32_t var_14_1 = 1
void* ecx

if (*(arg2 + 0x14) u< 8)
    ecx = arg2
else
    ecx = *arg2

int16_t* eax_5 = ecx + (*(arg2 + 0x10) << 1)

if (*(arg2 + 0x14) u>= 8)
    arg2 = *arg2

void* var_28 = ecx
int32_t* var_1c
sub_634a80(eax_5, arg2, &var_1c, arg3, eax_5, arg4, arg5)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
