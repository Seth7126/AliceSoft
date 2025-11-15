// 函数: sub_49c2c0
// 地址: 0x49c2c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &mainwindow::CFullScreenMenu::`vftable'{for `win32only::CWindowCallback'}
uint32_t uIDEvent = arg1[4]
arg1[3] = &win32only::CTimer::`vftable'

if (uIDEvent != 0)
    KillTimer(arg1[5], uIDEvent)
    arg1[4] = 0

sub_6cee20(&arg1[1])

if ((arg2 & 1) != 0)
    int32_t var_8_2 = 0x38
    operator new(arg1)

return arg1
