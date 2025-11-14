// 函数: sub_40b2f0
// 地址: 0x40b2f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b34a4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_fc
int32_t eax_2 = __security_cookie ^ &var_fc
int32_t __saved_esi
int32_t var_108 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_fc = 0
int32_t eax_5 = *(arg1 + 4)
void var_f8
void var_84
int32_t* eax_6
int32_t ebx

if (eax_5 == 0xb || eax_5 == 3 || eax_5 == 0x13)
    sub_40d9b0(&var_f8, sub_421f70(arg1))
    eax_6 = &var_f8
    int32_t var_4_1 = 0
    ebx = 1
else
    eax_6 = sub_40c7b0(arg1, &var_84)
    int32_t var_4 = 1
    ebx = 2

var_fc = ebx
sub_40db10(arg2, eax_6)
int32_t ebx_1 = ebx | 4

if ((ebx_1.b & 2) != 0)
    ebx_1 &= 0xfffffffd
    sub_405be0(&var_84)

if ((ebx_1.b & 1) != 0)
    sub_405be0(&var_f8)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_fc)
return arg2
