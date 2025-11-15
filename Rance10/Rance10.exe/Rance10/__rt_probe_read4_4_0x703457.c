// 函数: __rt_probe_read4@4
// 地址: 0x703457
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0xc
int32_t var_8 = 0x7de350
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_2 = 0x7de350 ^ __security_cookie_1
int32_t var_30 = __security_cookie_1 ^ &var_4
int32_t* var_1c = &var_30
void* const var_34 = &data_703463
int32_t var_8_3 = 0xfffffffe
int32_t var_c = var_8_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t ecx
int32_t edx
return sub_703489(1, &var_4, edx, ecx, arg1) __tailcall
