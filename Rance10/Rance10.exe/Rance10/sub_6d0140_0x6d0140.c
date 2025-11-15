// 函数: sub_6d0140
// 地址: 0x6d0140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = arg1
int32_t var_3c = 0
HWND hWnd = GetDesktopWindow()
HDC eax_4 = GetDC(hWnd)
int32_t eax_5 = GetDeviceCaps(eax_4, 0xc)
var_30 = GetSystemMetrics(SM_CXSCREEN)
int32_t eax_7 = GetSystemMetrics(SM_CYSCREEN)
ReleaseDC(hWnd, eax_4)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "%d x %d (%dbpp)", 0xf)
int32_t var_8_1 = 0
sub_422a40(&var_30, &var_2c, arg1, &var_30, eax_7, eax_5)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
