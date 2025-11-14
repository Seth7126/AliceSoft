// 函数: sub_5f4210
// 地址: 0x5f4210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE hEvent = arg1[1]
*arg1 = &thread::CEvent::`vftable'

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[1])
    arg1[1] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
