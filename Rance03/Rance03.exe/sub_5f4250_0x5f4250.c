// 函数: sub_5f4250
// 地址: 0x5f4250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL hEvent = arg1[1]
*arg1 = &thread::CEvent::`vftable'

if (hEvent != 0)
    ResetEvent(hEvent)
    hEvent = CloseHandle(arg1[1])
    arg1[1] = 0

return hEvent
