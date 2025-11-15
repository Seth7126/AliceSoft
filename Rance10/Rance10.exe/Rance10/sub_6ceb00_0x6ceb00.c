// 函数: sub_6ceb00
// 地址: 0x6ceb00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL uIDEvent = arg1[1]
*arg1 = &win32only::CTimer::`vftable'

if (uIDEvent != 0)
    uIDEvent = KillTimer(arg1[2], uIDEvent)
    arg1[1] = 0

return uIDEvent
