// 函数: sub_4dfb10
// 地址: 0x4dfb10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be9e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CClipboardWrapper::VTable* const var_44 =
    &partsengine::CClipboardWrapper::`vftable'
int32_t var_4 = 0
char var_40
sub_47e580(&var_40)
var_4.b = 1
int32_t var_28
char* eax_5 = sub_4df920(&var_28, &var_40)
int32_t var_2c

if (&var_40 != eax_5)
    if (var_2c u>= 0x10)
        j__free(var_40.d)
    
    var_2c = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    sub_4030b0(&var_40, eax_5)

int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

char* result = sub_4df6f0(arg1, &var_40)

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
