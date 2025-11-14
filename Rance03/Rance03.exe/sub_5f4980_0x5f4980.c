// 函数: sub_5f4980
// 地址: 0x5f4980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE hHandle = *(arg1 + 0x28)

if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
    HANDLE hEvent = *(arg1 + 0x18)
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    HANDLE hHandle_1 = *(arg1 + 0x28)
    
    if (hHandle_1 != 0)
        WaitForSingleObject(hHandle_1, 0xffffffff)

HANDLE hHandle_2 = *(arg1 + 0x28)

if (hHandle_2 != 0)
    WaitForSingleObject(hHandle_2, 0xffffffff)
    CloseHandle(*(arg1 + 0x28))
    *(arg1 + 0x28) = 0

HANDLE hEvent_1 = *(arg1 + 0x20)

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(*(arg1 + 0x20))
    *(arg1 + 0x20) = 0

BOOL hEvent_2 = *(arg1 + 0x18)

if (hEvent_2 != 0)
    ResetEvent(hEvent_2)
    hEvent_2 = CloseHandle(*(arg1 + 0x18))
    *(arg1 + 0x18) = 0

return hEvent_2
