// 函数: sub_49e2d0
// 地址: 0x49e2d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

SetMenu(**(arg1 + 0x10), nullptr)
int32_t dwNewLong = GetWindowLongA(**(arg1 + 0x10), 0xfffffff0) & 0xff3bffff
SetWindowLongA(**(arg1 + 0x10), 0xfffffff0, dwNewLong)
int32_t cx = GetSystemMetrics(SM_CXSCREEN)
int32_t cy = GetSystemMetrics(SM_CYSCREEN)
return SetWindowPos(**(arg1 + 0x10), nullptr, 0, 0, cx, cy, SWP_SHOWWINDOW)
