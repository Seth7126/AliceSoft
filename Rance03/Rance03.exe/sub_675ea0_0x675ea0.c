// 函数: sub_675ea0
// 地址: 0x675ea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0348
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x18c) = arg2
*(arg1 + 0x1a8) = arg2
*(arg1 + 0x148) = *(arg1 + 0x2c)
*(arg1 + 0x124) = *(arg1 + 0x30)
sub_697f40(arg1 + 0x11c)
*(arg1 + 0xb4) = *(arg1 + 0x2c)
int32_t eax_9 = *(arg1 + 0x30)
*(arg1 + 0x164) = 0xffffff
*(arg1 + 0xb0) = eax_9
*(arg1 + 0xc0) = eax_9
sub_697f40(arg1 + 0xb8)
*(arg1 + 0x78) = 0xb4b4b4
int32_t var_30 = 0xf
int32_t var_34 = 0
var_44 = 0
sub_402110(&var_44, 0x701cf4, 6)
int32_t var_4 = 0
sub_671170(arg1 + 0x68, &var_44)
int32_t var_4_1 = 0xffffffff

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
sub_402110(&var_44, 0x701f40, 8)
int32_t var_4_2 = 1
sub_671170(arg1 + 0x68, &var_44)
int32_t var_4_3 = 0xffffffff

if (var_30_1 u>= 0x10)
    j__free(var_44.d)

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_402110(&var_2c, 0x701f34, 8)
int32_t var_4_4 = 2
sub_671170(arg1 + 0x68, &var_2c)

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return 0
