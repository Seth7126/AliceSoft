// 函数: sub_683330
// 地址: 0x683330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

POINT point
GetCursorPos(&point)
HWND hWnd = arg2
ScreenToClient(hWnd, &point)

if (*(arg1 + 0xec) != 0)
    int32_t ebp_1 = *(arg1 + 0xf4) - point.y
    int32_t nPos = GetScrollPos(*(arg1 + 0x124), *(arg1 + 0x12c)) + *(arg1 + 0xf0) - point.x
    SetScrollPos(*(arg1 + 0x124), *(arg1 + 0x12c), nPos, 1)
    int32_t nPos_1 = GetScrollPos(*(arg1 + 0x108), *(arg1 + 0x110)) + ebp_1
    SetScrollPos(*(arg1 + 0x108), *(arg1 + 0x110), nPos_1, 1)
    sub_670600(arg1 + 0x120)
    sub_670600(arg1 + 0x104)
    hWnd = arg2

if (*(arg1 + 0x100) == 0)
    TRACKMOUSEEVENT eventTrack
    eventTrack.cbSize = 0x10
    eventTrack.dwFlags = 2
    eventTrack.hwndTrack = hWnd
    TrackMouseEvent(&eventTrack)

*(arg1 + 0xf8) = *(arg1 + 0xf0)
*(arg1 + 0xfc) = *(arg1 + 0xf4)
*(arg1 + 0xf0) = point.x
*(arg1 + 0xf4) = point.y
*(arg1 + 0x100) = 1
return 0
