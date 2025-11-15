// 函数: ??__C@YGXPAX0IIP6EX00@ZP6EX0@Z@Z
// 地址: 0x6e898f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x10
int32_t var_8 = 0x7dce78
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7dce78 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_1 = &data_6e899b
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t var_24 = 0
char var_1d = 0
int32_t var_8_1 = 0

while (ebx != arg4)
    j_sub_4033e0()
    arg5(arg2)
    arg1 += arg3
    arg2 += arg3
    ebx += 1
    int32_t var_24_1 = ebx

struct _EXCEPTION_REGISTRATION_RECORD** eax
eax.b = 1
char var_1d_1 = 1
int32_t var_8_2 = 0xfffffffe
int32_t result = $LN11(eax.b, &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e89e1
return result
