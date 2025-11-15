// 函数: sub_4e83f0
// 地址: 0x4e83f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_2c
char* eax_3 = sub_4e2f70(arg1 + 0xe4, &var_2c)
int32_t var_8_1 = 0
bool cond:0 = *(eax_3 + 0x14) u< 0x10
int32_t var_34 = 0
uint32_t result_1 = 0

if (not(cond:0))
    eax_3 = *eax_3

sub_44c5f0(eax_3, &var_34, &result_1)
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

uint32_t result = result_1

if (result == 0)
    result = *(arg1 + 0xec)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
