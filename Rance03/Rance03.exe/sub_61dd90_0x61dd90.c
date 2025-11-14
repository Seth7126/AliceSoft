// 函数: sub_61dd90
// 地址: 0x61dd90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE hHandle = *(arg1 + 0x7c)

if (hHandle != 0)
    enum WAIT_EVENT eax
    eax.b = WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT
    return eax

hHandle.b = 0
return hHandle
