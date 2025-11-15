// 函数: sub_49ec60
// 地址: 0x49ec60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d6d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HMENU eax_3 = LoadMenuA(*(arg1 + 0x14), 0x66)
*(arg1 + 0x250) = eax_3
char eax_4
int32_t ecx_1
eax_4, ecx_1 = sub_4a3a50()
struct win32only::CMenu::VTable* const var_1c

if (eax_4 == 0)
    int32_t var_2c_1 = ecx_1
    var_1c = &win32only::CMenu::`vftable'
    HMENU var_18_1 = eax_3
    char var_14_1 = eax_4
    sub_6ce2d0(&var_1c)

int32_t var_8_1 = 0
sub_49e330(arg1, sub_49a220(arg1 + 0x270, &var_1c))
sub_417070(&var_1c)
SetMenu(arg2, *(arg1 + 0x250))
HMENU hMenu = GetSystemMenu(arg2, 0)
InsertMenuA(hMenu, 0, 0xc00, 0, nullptr)
InsertMenuA(hMenu, 0, MF_BYPOSITION, 0x9cb0, 0x760fd8)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
