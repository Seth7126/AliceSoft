// 函数: sub_64b450
// 地址: 0x64b450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b55b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34
sub_410930(&ExceptionList, arg1 + 0xc, &var_34, 0x700750)
int32_t var_c_1 = 0

for (void** i = *(arg1 + 0x24); i != *(arg1 + 0x28); i = &i[6])
    sub_403110(&var_34, i, nullptr, 0xffffffff)
    sub_4057c0(&var_34, 0x70076c, 1)

struct win32only::CClipboard::VTable* const var_3c = &win32only::CClipboard::`vftable'
char var_38 = 0
BOOL result = sub_696f50(&var_3c, &var_34)
int32_t var_20

if (var_20 u>= 0x10)
    result = j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
