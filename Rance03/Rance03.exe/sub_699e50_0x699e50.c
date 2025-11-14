// 函数: sub_699e50
// 地址: 0x699e50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
HWND hWnd = GetDesktopWindow()
HDC eax_2 = GetDC(hWnd)
int32_t eax_3 = GetDeviceCaps(eax_2, 0xc)
int32_t eax_4 = GetSystemMetrics(SM_CXSCREEN)
int32_t eax_5 = GetSystemMetrics(SM_CYSCREEN)
ReleaseDC(hWnd, eax_2)
int32_t var_40_2 = eax_3
int32_t var_44_2 = eax_5
int32_t var_48 = eax_4
int32_t var_20
int32_t* result = sub_4691f0(&var_20, "%d x %d (%dbpp)")

if (arg1 != result)
    if (arg1[5] u>= 0x10)
        j__free(*arg1)
    
    arg1[5] = 0xf
    arg1[4] = 0
    *arg1 = 0
    result = sub_4030b0(arg1, result)

int32_t var_c

if (var_c u>= 0x10)
    result = j__free(var_20)

sub_69a5bc(eax_1 ^ &var_2c)
return result
