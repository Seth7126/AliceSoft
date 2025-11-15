// 函数: sub_411d10
// 地址: 0x411d10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727ea4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_11c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_114 = 0
int32_t eax_3 = *(arg1 + 4)
void var_10c
void var_90
int32_t eax_5
int32_t* ecx

if (eax_3 == 0xb || eax_3 == 3 || eax_3 == 0x13)
    ecx = &var_90
    sub_4145b0(ecx, sub_41a970(arg1) ^ (data_79aad0).d)
    int32_t var_8_2 = 0
    eax_5 = 1
else
    ecx = sub_4131d0(arg1, &var_10c)
    int32_t var_8_1 = 1
    eax_5 = 2

int32_t var_114_1 = eax_5
sub_414740(arg2, ecx)
int32_t eax_7 = eax_5 | 4

if ((eax_7.b & 2) != 0)
    sub_40ad50(&var_10c)
    eax_7 &= 0xfffffffd

if ((eax_7.b & 1) != 0)
    sub_40ad50(&var_90)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
