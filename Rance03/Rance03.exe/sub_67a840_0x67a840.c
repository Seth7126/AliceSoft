// 函数: sub_67a840
// 地址: 0x67a840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0a98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CCharSpriteProperty::VTable* var_5c
sub_47fa90(arg1, &var_5c)
int32_t var_4 = 0
void* esi = arg1 + 0x8c
int32_t ebp = *(arg1 + 0x50)
var_60 = *(arg1 + 0x54)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, 0x702b7c, 0x1d)
var_4.b = 1
sub_412d60(arg2, &var_28)
var_4.b = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_78_3 = *(arg1 + 0x1c)
var_4.b = 2
sub_412d60(arg2, sub_4691f0(&var_28, 0x702bbc))
var_4.b = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_78_6 = *(arg1 + 0x20)
var_4.b = 3
sub_412d60(arg2, sub_4691f0(&var_28, 0x702bac))
var_4.b = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

if (*(esi + 0x14) u>= 0x10)
    esi = *esi

void* var_78_9 = esi
var_4.b = 4
sub_412d60(arg2, sub_4691f0(&var_28, 0x702be8))
var_4.b = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_58
int32_t var_54
int32_t var_50
int32_t var_4c
int32_t var_48
int32_t var_40
int32_t var_3c
int32_t var_38
int32_t var_34
int32_t var_30
int32_t result = sub_677bc0(arg2, var_58, var_54, var_50, var_4c, var_48, var_40, var_3c, var_38, 
    var_34, var_30, ebp, var_60)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
