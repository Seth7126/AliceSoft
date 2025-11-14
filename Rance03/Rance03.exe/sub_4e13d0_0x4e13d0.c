// 函数: sub_4e13d0
// 地址: 0x4e13d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b3c50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_esi
int32_t var_54 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x30) = 0

if (*(arg1 + 0x218) != sub_4d2b70)
    *(arg1 + 0x214) = 1
    *(arg1 + 0x218) = sub_4d2b70

if (*(arg1 + 0x230) != sub_4d2bf0)
    *(arg1 + 0x22c) = 1
    *(arg1 + 0x230) = sub_4d2bf0

if (*(arg1 + 0x248) != sub_4d2c70)
    *(arg1 + 0x244) = 1
    *(arg1 + 0x248) = sub_4d2c70

if (*(arg1 + 0x260) != sub_4d2d00)
    *(arg1 + 0x25c) = 1
    *(arg1 + 0x260) = sub_4d2d00

if (*(arg1 + 0x278) != sub_4d2d80)
    *(arg1 + 0x274) = 1
    *(arg1 + 0x278) = sub_4d2d80

if (*(arg1 + 0x290) != sub_4d2e00)
    *(arg1 + 0x28c) = 1
    *(arg1 + 0x290) = sub_4d2e00

if (*(arg1 + 0x2a8) != sub_4d2e80)
    *(arg1 + 0x2a4) = 1
    *(arg1 + 0x2a8) = sub_4d2e80

if (*(arg1 + 0x2c0) != sub_4d2f10)
    *(arg1 + 0x2bc) = 1
    *(arg1 + 0x2c0) = sub_4d2f10

int32_t var_38 = 0xf
int32_t var_3c = 0
var_4c = 0
sub_402110(&var_4c, 0x6e1d00, 8)
int32_t var_c_1 = 0
sub_4aa940(arg1 + 0xb4, &var_4c)
int32_t var_c_2 = 0xffffffff

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
sub_402110(&var_34, 0x6e1cf4, 8)
int32_t var_c_3 = 1
int32_t* result = sub_4aa9c0(arg1 + 0xb4, &var_34)

if (var_20 u>= 0x10)
    result = j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
