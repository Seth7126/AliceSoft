// 函数: sub_6987f0
// 地址: 0x6987f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL uIDEvent = arg1[1]
*arg1 = &win32only::CTimer::`vftable'

if (uIDEvent != 0)
    uIDEvent = KillTimer(arg1[2], uIDEvent)
    arg1[1] = 0

return uIDEvent
