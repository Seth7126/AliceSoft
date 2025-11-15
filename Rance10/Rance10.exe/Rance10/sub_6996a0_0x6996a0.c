// 函数: sub_6996a0
// 地址: 0x6996a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hHandle = *(arg1 + 0x40)

if (hHandle != 0)
    enum WAIT_EVENT eax
    eax.b = WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT
    return eax

hHandle.b = 0
return hHandle
