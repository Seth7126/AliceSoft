// 函数: sub_515850
// 地址: 0x515850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2470
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* ecx = &var_34
var_34 = 0x5c81
char var_32 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
char i

do
    i = *ecx
    ecx += 1
while (i != 0)
sub_402110(&var_2c, &var_34, ecx - &var_34:1)
int32_t var_4 = 0
struct partsengine::CSpriteEngineWrapper::VTable* const var_30 =
    &partsengine::CSpriteEngineWrapper::`vftable'
var_4.b = 1
int32_t eax_5 = sub_514630(&var_2c)

if (var_18 u>= 0x10)
    j__free(var_2c.d)

*arg2 = eax_5
int32_t result = sub_4ff540(arg1 + 0x3c)
*arg3 = result
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
