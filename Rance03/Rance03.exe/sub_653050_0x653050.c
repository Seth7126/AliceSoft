// 函数: sub_653050
// 地址: 0x653050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_30
int32_t eax_1 = __security_cookie ^ &var_30
POINT point
GetCursorPos(&point)
RECT rect
GetWindowRect(arg2, &rect)

if (*(arg1 + 0xd8) == 0)
    TRACKMOUSEEVENT eventTrack
    eventTrack.cbSize = 0x10
    eventTrack.dwFlags = 2
    eventTrack.hwndTrack = arg2
    TrackMouseEvent(&eventTrack)

ScreenToClient(arg2, &point)
*(arg1 + 0xd0) = *(arg1 + 0xc8)
*(arg1 + 0xd4) = *(arg1 + 0xcc)
*(arg1 + 0xc8) = point.x
*(arg1 + 0xcc) = point.y
*(arg1 + 0xd8) = 1
sub_69a5bc(eax_1 ^ &var_30)
return 0
