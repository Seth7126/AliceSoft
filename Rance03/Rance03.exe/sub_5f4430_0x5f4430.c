// 函数: sub_5f4430
// 地址: 0x5f4430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE hHandle = arg1[1]
*arg1 = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(arg1[1])
    arg1[1] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
