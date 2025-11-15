// 函数: sub_521360
// 地址: 0x521360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b290
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0xc) = 0

if (*(arg1 + 0x234) != sub_518e50)
    *(arg1 + 0x230) = 1
    *(arg1 + 0x234) = sub_518e50

if (*(arg1 + 0x24c) != sub_518ed0)
    *(arg1 + 0x248) = 1
    *(arg1 + 0x24c) = sub_518ed0

if (*(arg1 + 0x264) != sub_518f50)
    *(arg1 + 0x260) = 1
    *(arg1 + 0x264) = sub_518f50

if (*(arg1 + 0x27c) != sub_518fe0)
    *(arg1 + 0x278) = 1
    *(arg1 + 0x27c) = sub_518fe0

if (*(arg1 + 0x294) != sub_519060)
    *(arg1 + 0x290) = 1
    *(arg1 + 0x294) = sub_519060

if (*(arg1 + 0x2ac) != sub_5190e0)
    *(arg1 + 0x2a8) = 1
    *(arg1 + 0x2ac) = sub_5190e0

if (*(arg1 + 0x2c4) != sub_519160)
    *(arg1 + 0x2c0) = 1
    *(arg1 + 0x2c4) = sub_519160

if (*(arg1 + 0x2dc) != sub_5191f0)
    *(arg1 + 0x2d8) = 1
    *(arg1 + 0x2dc) = sub_5191f0

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x766c3c, 8)
int32_t var_8_1 = 0
sub_4f7b30(arg1 + 0xcc, &var_2c)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result_1 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x766c1c, 8)
int32_t var_8_3 = 1
sub_4f7ba0(arg1 + 0xcc, &var_44)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
