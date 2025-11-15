// 函数: sub_405fe0
// 地址: 0x405fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hEvent = arg1[1]
*arg1 = &thread::CEvent::`vftable'

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[1])
    arg1[1] = 0

if ((arg2 & 1) != 0)
    int32_t var_8_3 = 8
    operator new(arg1)

return arg1
