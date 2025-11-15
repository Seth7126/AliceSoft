// 函数: sub_44d130
// 地址: 0x44d130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a526
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_44dca0(*(*(arg1 + 8) + 4))
void* eax_4 = *(arg1 + 8)
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *(arg1 + 8)
*eax_5 = eax_5
void* result = *(arg1 + 8)
int32_t var_8_2 = 0xffffffff
*(result + 8) = result
result.b = arg2
*(arg1 + 0xc) = 0
*(arg1 + 4) = result.b

if (result.b != 0)
    int32_t var_20_1 = arg3
    sub_44d1c0(arg1)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
