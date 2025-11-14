// 函数: sub_61f3a0
// 地址: 0x61f3a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE hHandle = *(arg1 + 0x38)

if (hHandle != 0)
    enum WAIT_EVENT eax
    eax.b = WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT
    return eax

hHandle.b = 0
return hHandle
