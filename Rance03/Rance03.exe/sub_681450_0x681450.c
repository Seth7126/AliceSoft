// 函数: sub_681450
// 地址: 0x681450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bae40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0xa8) = *(arg1 + 0x30)
int32_t eax_6 = *(arg1 + 0x34)
*(arg1 + 0xa4) = eax_6
*(arg1 + 0xb4) = eax_6
sub_697f40(arg1 + 0xac)
*(arg1 + 0x6c) = 0x646464
sub_681a20(arg1, arg2)
sub_681be0(arg1, arg2)
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_402110(&var_44, 0x7034e4, 6)
int32_t var_4 = 0
sub_671170(arg1 + 0x5c, &var_44)
int32_t var_4_1 = 0xffffffff

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_402110(&var_2c, 0x7034d8, 8)
int32_t var_4_2 = 1
sub_671170(arg1 + 0x5c, &var_2c)

if (var_18 u>= 0x10)
    j__free(var_2c.d)

void* esi_1 = *(arg1 + 0xe0)
HWND hWnd = *(esi_1 + 8)

if (hWnd != 0)
    SetWindowPos(hWnd, nullptr, 0, 0, 0, 0, 0x87)
    *(esi_1 + 0x28) = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return 0
