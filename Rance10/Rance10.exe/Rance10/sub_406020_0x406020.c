// 函数: sub_406020
// 地址: 0x406020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL hEvent = arg1[1]
*arg1 = &thread::CEvent::`vftable'

if (hEvent != 0)
    ResetEvent(hEvent)
    hEvent = CloseHandle(arg1[1])
    arg1[1] = 0

return hEvent
