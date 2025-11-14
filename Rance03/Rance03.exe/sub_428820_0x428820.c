// 函数: sub_428820
// 地址: 0x428820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4408
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x34) = arg4
HWND hWnd =
    CreateWindowExA(WS_EX_LEFT, "EDIT", 0x6da089, 0x50800080, 0, 0, 1, 1, arg2, 0xc9, arg3, nullptr)
*(arg1 + 4) = hWnd
ShowWindow(hWnd, SW_SHOW)
*(arg1 + 0x10) = 0xc
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
sub_402110(&var_2c, 0x6dac1c, 0xc)
int32_t var_4 = 0

if (arg1 + 0x14 != &var_2c)
    sub_401ff0(arg1 + 0x14, &var_2c, 0, 0xffffffff)

if (var_18 u>= 0x10)
    j__free(var_2c.d)

sub_697f40(arg1 + 8)
SendMessageA(*(arg1 + 4), 0x30, *(arg1 + 0xc), 0)
LRESULT result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
