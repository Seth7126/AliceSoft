// 函数: sub_5f4470
// 地址: 0x5f4470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL hHandle = arg1[1]
*arg1 = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    hHandle = CloseHandle(arg1[1])
    arg1[1] = 0

return hHandle
