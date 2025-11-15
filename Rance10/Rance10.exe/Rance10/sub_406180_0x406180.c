// 函数: sub_406180
// 地址: 0x406180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL hHandle = arg1[1]
*arg1 = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    hHandle = CloseHandle(arg1[1])
    arg1[1] = 0

return hHandle
