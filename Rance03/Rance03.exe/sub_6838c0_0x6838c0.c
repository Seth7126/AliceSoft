// 函数: sub_6838c0
// 地址: 0x6838c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_48
int32_t eax_1 = __security_cookie ^ &var_48
sub_684be0(arg1)
sub_6972e0(arg1 + 0x6c, 0xc8, 0xc8, 0xc8)

if (*(arg1 + 0x68) != 0)
    if (*(arg1 + 0x38) != 0 || *(arg1 + 0xe0) s< 0)
        sub_683990(arg1)
    else
        sub_683c20(arg1)

sub_684400(arg1)
RECT rect
rect.top = *(arg1 + 0x2c)
rect.left = 0
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(*(arg1 + 8), &lpwndpl)
rect.right = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
GetWindowPlacement(*(arg1 + 8), &lpwndpl)
rect.bottom = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
InvalidateRect(*(arg1 + 8), &rect, 0)
BOOL result = UpdateWindow(*(arg1 + 8))
sub_69a5bc(eax_1 ^ &var_48)
return result
