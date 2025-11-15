// 函数: sub_406130
// 地址: 0x406130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hHandle = arg1[1]
*arg1 = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(arg1[1])
    arg1[1] = 0

if ((arg2 & 1) != 0)
    int32_t var_8_2 = 8
    operator new(arg1)

return arg1
