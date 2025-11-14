// 函数: sub_5b5cd0
// 地址: 0x5b5cd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8fd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sys43vm::CCallFuncCount::VTable* var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5b5970(&var_48, arg1)
int32_t var_4 = 0

if (arg1 + 8 != arg2 + 8)
    sub_401ff0(arg1 + 8, arg2 + 8, 0, 0xffffffff)

*(arg1 + 0x20) = *(arg2 + 0x20)
sub_5b5aa0(arg1 + 0x24, arg2 + 0x24)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x34) = *(arg2 + 0x34)
void* var_40

if (arg2 + 8 != &var_40)
    sub_401ff0(arg2 + 8, &var_40, 0, 0xffffffff)

int32_t var_28
*(arg2 + 0x20) = var_28
void var_24
sub_5b5aa0(arg2 + 0x24, &var_24)
int32_t var_18
*(arg2 + 0x30) = var_18
int32_t var_4_1 = 0xffffffff
int32_t var_14
*(arg2 + 0x34) = var_14
var_48 = &sys43vm::CCallFuncCount::`vftable'
int32_t result = sub_4414b0(&var_24)
int32_t var_2c

if (var_2c u>= 0x10)
    result = j__free(var_40)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
