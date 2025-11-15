// 函数: sub_41ae80
// 地址: 0x41ae80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7288a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x38e38e39, *(arg1 + 0xc) - *(arg1 + 8))
int32_t var_48 = 0xf
int32_t edx_1 = edx s>> 4
int32_t var_4c = 0
char var_5c = 0
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
void* eax_4

if (*arg2 != 0)
    char* eax_5 = arg2
    int32_t ecx_1
    
    do
        ecx_1.b = *eax_5
        eax_5 = &eax_5[1]
    while (ecx_1.b != 0)
    eax_4 = eax_5 - &eax_5[1]
else
    eax_4 = nullptr

sub_403490(&var_5c, arg2, eax_4)
sub_403490(&var_44, 0x75ccfb, nullptr)
sub_403490(&var_2c, 0x75ccff, nullptr)
sub_41bb00(arg1 + 8, &var_5c)
sub_41af80(&var_5c)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return (edx_1 u>> 0x1f) + edx_1
