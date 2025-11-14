// 函数: sub_1000f3e0
// 地址: 0x1000f3e0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_100193f3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10_1 = arg1
int32_t var_1c = *(arg1 + 0x14)
int32_t var_4 = 1
sub_10001d52()
var_4.b = 0
sub_100129f0(arg1 + 0x34)
int32_t var_4_1 = 0xffffffff
int32_t result = sub_1000e7e0()
fsbase->NtTib.ExceptionList = ExceptionList
return result
