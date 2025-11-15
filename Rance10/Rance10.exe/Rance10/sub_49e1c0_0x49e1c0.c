// 函数: sub_49e1c0
// 地址: 0x49e1c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730c28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
SetMenu(**(arg1 + 0x10), *(arg1 + 0x250))
int32_t esi = *(arg1 + 0x250)
char eax_4
int32_t ecx_1
eax_4, ecx_1 = sub_4a3a50()
struct win32only::CMenu::VTable* const var_24

if (eax_4 == 0)
    int32_t var_38_1 = ecx_1
    var_24 = &win32only::CMenu::`vftable'
    int32_t var_20_1 = esi
    char var_1c_1 = eax_4
    sub_6ce2d0(&var_24)

int32_t var_8_1 = 0
sub_49e330(arg1, sub_49a220(arg1 + 0x270, &var_24))
sub_417070(&var_24)
DrawMenuBar(**(arg1 + 0x10))
int32_t dwNewLong = GetWindowLongA(**(arg1 + 0x10), 0xfffffff0) | 0xc40000
SetWindowLongA(**(arg1 + 0x10), 0xfffffff0, dwNewLong)
int32_t eax_10 = GetSystemMetrics(SM_CXSCREEN)
int32_t eax_11 = GetSystemMetrics(SM_CYSCREEN)
int32_t eax_12 = GetSystemMetrics(SM_CXDLGFRAME)
int32_t eax_13 = GetSystemMetrics(SM_CYDLGFRAME)
BOOL result = SetWindowPos(**(arg1 + 0x10), nullptr, neg.d(eax_12), neg.d(eax_13), 
    eax_10 + (eax_12 << 1), eax_11 + (eax_13 << 1), SWP_SHOWWINDOW)
fsbase->NtTib.ExceptionList = ExceptionList
return result
