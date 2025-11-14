// 函数: sub_6987b0
// 地址: 0x6987b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t uIDEvent = arg1[1]
*arg1 = &win32only::CTimer::`vftable'

if (uIDEvent != 0)
    KillTimer(arg1[2], uIDEvent)
    arg1[1] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
