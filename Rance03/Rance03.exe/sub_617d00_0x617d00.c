// 函数: sub_617d00
// 地址: 0x617d00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_25 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdbc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_esi
int32_t var_50 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_402110(&var_44, "ps_bicubic.fx", 0xd)
int32_t var_4 = 0
int32_t var_4_1 = 0xffffffff
*sub_4535b0(arg1, &var_44) = 1

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
sub_402110(&var_44, "ps_ssao.fx", 0xa)
int32_t var_4_2 = 1
int32_t var_4_3 = 0xffffffff
*sub_4535b0(arg1, &var_44) = 2

if (var_30_1 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_2 = 0xf
int32_t var_34_2 = 0
var_44 = 0
sub_402110(&var_44, "ps_dof.fx", 9)
int32_t var_4_4 = 2
int32_t var_4_5 = 0xffffffff
*sub_4535b0(arg1, &var_44) = 3

if (var_30_2 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_3 = 0xf
int32_t var_34_3 = 0
var_44 = 0
sub_402110(&var_44, "ps_shadeoff3.fx", 0xf)
int32_t var_4_6 = 3
int32_t var_4_7 = 0xffffffff
*sub_4535b0(arg1, &var_44) = 4

if (var_30_3 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_4 = 0xf
int32_t var_34_4 = 0
var_44 = 0
sub_402110(&var_44, "ps_shadeoff3w.fx", 0x10)
int32_t var_4_8 = 4
int32_t var_4_9 = 0xffffffff
*sub_4535b0(arg1, &var_44) = 5

if (var_30_4 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_5 = 0xf
int32_t var_34_5 = 0
var_44 = 0
sub_402110(&var_44, "ps_shadeoff5.fx", 0xf)
int32_t var_4_10 = 5
int32_t var_4_11 = 0xffffffff
*sub_4535b0(arg1, &var_44) = 6

if (var_30_5 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_6 = 0xf
int32_t var_34_6 = 0
var_44 = 0
sub_402110(&var_44, "ps_shadeoff5g.fx", 0x10)
int32_t var_4_12 = 6
int32_t var_4_13 = 0xffffffff
*sub_4535b0(arg1, &var_44) = 7

if (var_30_6 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_7 = 0xf
int32_t var_34_7 = 0
var_44 = 0
sub_402110(&var_44, "ps_shadeoff5w.fx", 0x10)
int32_t var_4_14 = 7
int32_t var_4_15 = 0xffffffff
*sub_4535b0(arg1, &var_44) = 8

if (var_30_7 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_8 = 0xf
int32_t var_34_8 = 0
var_44 = 0
sub_402110(&var_44, "ps_shadeoff7.fx", 0xf)
int32_t var_4_16 = 8
int32_t var_4_17 = 0xffffffff
*sub_4535b0(arg1, &var_44) = 9

if (var_30_8 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_9 = 0xf
int32_t var_34_9 = 0
var_44 = 0
sub_402110(&var_44, "ps_shadeoff9.fx", 0xf)
int32_t var_4_18 = 9
int32_t var_4_19 = 0xffffffff
*sub_4535b0(arg1, &var_44) = 0xa

if (var_30_9 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_10 = 0xf
int32_t var_34_10 = 0
var_44 = 0
sub_402110(&var_44, "ps_shadeoff11.fx", 0x10)
int32_t var_4_20 = 0xa
int32_t var_4_21 = 0xffffffff
*sub_4535b0(arg1, &var_44) = 0xb

if (var_30_10 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_11 = 0xf
int32_t var_34_11 = 0
var_44 = 0
sub_402110(&var_44, "ps_shadeoff11w.fx", 0x11)
int32_t var_4_22 = 0xb
int32_t var_4_23 = 0xffffffff
*sub_4535b0(arg1, &var_44) = 0xc

if (var_30_11 u>= 0x10)
    j__free(var_44.d)

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_402110(&var_2c, "ps_shadeoff15w.fx", 0x11)
int32_t var_4_24 = 0xc
void* result = sub_4535b0(arg1, &var_2c)
*result = 0xd

if (var_18 u>= 0x10)
    result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
