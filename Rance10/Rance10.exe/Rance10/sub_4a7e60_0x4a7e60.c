// 函数: sub_4a7e60
// 地址: 0x4a7e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a526
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
var_14:3.b = 0
int32_t eax_5
int32_t edx
edx:eax_5 = sx.q(*(arg1 + 0xc) + 7)
*(arg1 + 0x14) = *(arg1 + 0x10)
sub_4a88f0(arg1 + 0x10, (eax_5 + (edx & 7)) s>> 3, &var_14:3)
int32_t var_8_1 = 0
sub_4a8970(*(*(arg1 + 0x64) + 4))
void* eax_9 = *(arg1 + 0x64)
*(eax_9 + 4) = eax_9
int32_t* eax_10 = *(arg1 + 0x64)
*eax_10 = eax_10
void* result = *(arg1 + 0x64)
*(result + 8) = result
*(arg1 + 0x68) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
