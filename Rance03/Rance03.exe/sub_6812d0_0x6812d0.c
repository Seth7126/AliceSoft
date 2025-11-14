// 函数: sub_6812d0
// 地址: 0x6812d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

POINT point
GetCursorPos(&point)

if (*(arg1 + 0x50) == 0)
    TRACKMOUSEEVENT eventTrack
    eventTrack.cbSize = 0x10
    eventTrack.dwFlags = 2
    eventTrack.hwndTrack = arg2
    TrackMouseEvent(&eventTrack)

ScreenToClient(arg2, &point)
*(arg1 + 0x48) = *(arg1 + 0x40)
*(arg1 + 0x4c) = *(arg1 + 0x44)
*(arg1 + 0x40) = point.x
*(arg1 + 0x44) = point.y
*(arg1 + 0x50) = 1
return 0
