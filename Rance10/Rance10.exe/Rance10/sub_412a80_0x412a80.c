// 函数: sub_412a80
// 地址: 0x412a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_104 = 0xffffffff
int32_t (* var_108)(void* arg1) = sub_727f32
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_110 = arg1
void var_100
int32_t eax_2 = __security_cookie ^ &var_100
int32_t var_11c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_110_1 = 0
int32_t eax_3 = *(arg1 + 4)
char eax_4

if (eax_3 != 0xa && eax_3 != 2 && eax_3 != 0x12 && eax_3 != 0x5c && eax_3 != 0x5b && eax_3 != 0x5d)
    eax_4 = sub_41a7b0(arg1)

void var_84
void* eax_5
int32_t ebx

if (eax_3 == 0xa || eax_3 == 2 || eax_3 == 0x12 || eax_3 == 0x5c || eax_3 == 0x5b || eax_3 == 0x5d
        || eax_4 != 0)
    sub_414510(&var_100, not.d(sub_41a840(arg1)))
    eax_5 = &var_100
    int32_t var_104_2 = 0
    ebx = 1
else
    sub_414340(&var_84)
    eax_5 = &var_84
    int32_t var_104_1 = 1
    ebx = 2

int32_t var_110_2 = ebx
sub_414740(arg2, eax_5)
int32_t ebx_1 = ebx | 4

if ((ebx_1.b & 2) != 0)
    ebx_1 &= 0xfffffffd
    sub_40ad50(&var_84)

if ((ebx_1.b & 1) != 0)
    sub_40ad50(&var_100)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_100)
return arg2
