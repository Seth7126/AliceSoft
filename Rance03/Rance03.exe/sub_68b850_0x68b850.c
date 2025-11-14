// 函数: sub_68b850
// 地址: 0x68b850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_30
int32_t eax_1 = __security_cookie ^ &var_30
POINT point
GetCursorPos(&point)
RECT rect
GetWindowRect(arg2, &rect)

if (*(arg1 + 0x238) == 0)
    TRACKMOUSEEVENT eventTrack
    eventTrack.cbSize = 0x10
    eventTrack.dwFlags = 2
    eventTrack.hwndTrack = arg2
    TrackMouseEvent(&eventTrack)

ScreenToClient(arg2, &point)
*(arg1 + 0x230) = *(arg1 + 0x228)
*(arg1 + 0x234) = *(arg1 + 0x22c)
*(arg1 + 0x228) = point.x
*(arg1 + 0x22c) = point.y
*(arg1 + 0x238) = 1
sub_69a5bc(eax_1 ^ &var_30)
return 0
