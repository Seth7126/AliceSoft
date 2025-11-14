// 函数: sub_5e4660
// 地址: 0x5e4660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2ad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0
void* var_2c
sub_5e4750(arg1, &var_2c)
int32_t var_4 = 0
int32_t var_1c

if (var_1c == 0)
    int32_t eax_6 = (*(*(arg1 + 0x468) + 4))(eax_4)
    int32_t var_44_1 = eax_6 s% 0x64
    int32_t var_48_1 = eax_6 s/ 0x64
    sub_4691f0(arg2, "%d.%02d")
else
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_401ff0(arg2, &var_2c, 0, 0xffffffff)

int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return arg2
