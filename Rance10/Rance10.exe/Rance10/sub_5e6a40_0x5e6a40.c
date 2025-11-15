// 函数: sub_5e6a40
// 地址: 0x5e6a40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741968
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_5665c0(data_7fd4cc, arg1, arg2)

if (eax_3 == 0)
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t var_8_1 = 0
void var_40
sub_56b360(eax_3 + 0x13c, sub_56aa80(&var_40))
void* var_1c
int32_t var_14

if (var_1c != 0)
    sub_403160(var_1c, (var_14 - var_1c) s>> 2, 4)
struct _EXCEPTION_REGISTRATION_RECORD** eax_5
eax_5.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
