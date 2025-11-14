// 函数: sub_667290
// 地址: 0x667290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_30
int32_t eax_1 = __security_cookie ^ &var_30
POINT point
GetCursorPos(&point)
RECT rect
GetWindowRect(arg2, &rect)

if (*(arg1 + 0x164) == 0)
    TRACKMOUSEEVENT eventTrack
    eventTrack.cbSize = 0x10
    eventTrack.dwFlags = 2
    eventTrack.hwndTrack = arg2
    TrackMouseEvent(&eventTrack)

ScreenToClient(arg2, &point)
*(arg1 + 0x15c) = *(arg1 + 0x154)
*(arg1 + 0x160) = *(arg1 + 0x158)
*(arg1 + 0x154) = point.x
*(arg1 + 0x158) = point.y
*(arg1 + 0x164) = 1
sub_69a5bc(eax_1 ^ &var_30)
return 0
