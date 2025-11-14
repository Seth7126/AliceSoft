// 函数: sub_40b3f0
// 地址: 0x40b3f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3524
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_100
int32_t eax_2 = __security_cookie ^ &var_100
int32_t __saved_esi
int32_t var_108 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_100 = 0
int32_t eax_5 = *(arg1 + 4)
void var_f8
void var_84
int32_t eax_7
int32_t* ecx

if (eax_5 == 0xb || eax_5 == 3 || eax_5 == 0x13)
    ecx = &var_84
    sub_40d9b0(ecx, sub_421f70(arg1) ^ (data_7094c0).d)
    int32_t var_4_1 = 0
    eax_7 = 1
else
    ecx = sub_40c8c0(arg1, &var_f8)
    int32_t var_4 = 1
    eax_7 = 2

var_100 = eax_7
sub_40db10(arg2, ecx)
int32_t eax_9 = eax_7 | 4

if ((eax_9.b & 2) != 0)
    sub_405be0(&var_f8)
    eax_9 &= 0xfffffffd

if ((eax_9.b & 1) != 0)
    sub_405be0(&var_84)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_100)
return arg2
