// 函数: sub_5e5870
// 地址: 0x5e5870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SetMenu(**(arg1 + 0xc), nullptr)
int32_t dwNewLong = GetWindowLongA(**(arg1 + 0xc), 0xfffffff0) & 0xff3bffff
SetWindowLongA(**(arg1 + 0xc), 0xfffffff0, dwNewLong)
int32_t cx = GetSystemMetrics(SM_CXSCREEN)
int32_t cy = GetSystemMetrics(SM_CYSCREEN)
return SetWindowPos(**(arg1 + 0xc), nullptr, 0, 0, cx, cy, SWP_SHOWWINDOW)
