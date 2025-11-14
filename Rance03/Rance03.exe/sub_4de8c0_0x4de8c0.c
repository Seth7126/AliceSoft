// 函数: sub_4de8c0
// 地址: 0x4de8c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0010
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t var_64 = __security_cookie ^ &var_60
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CCharSpriteProperty::VTable* var_5c
sub_4ff2c0(&var_5c)
int32_t var_4 = 0
sub_4e0140(arg1, &var_5c)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
var_4.b = 1
int32_t* var_6c
void* var_68_1
int32_t var_58
char* ecx_2

if (var_58 == 0)
    var_68_1 = 0xd
    var_6c = &data_6e1ca8
    ecx_2 = &var_28
else if (var_58 == 1)
    var_68_1 = 9
    var_6c = &data_6e1c9c
    ecx_2 = &var_28
else
    ecx_2 = &var_28
    
    if (var_58 == 0x100)
        var_68_1 = 0xc
        var_6c = &data_6e1cc8
    else
        var_68_1 = 0xd
        var_6c = &data_6e1cb8

int32_t var_68_2 = sub_402110(ecx_2, var_6c, var_68_1)
int32_t* result = sub_4e3390(sub_4ff540(&var_5c), &var_28)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
