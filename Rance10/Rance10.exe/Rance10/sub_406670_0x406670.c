// 函数: sub_406670
// 地址: 0x406670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hHandle = *(arg1 + 0x2c)

if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
    HANDLE hEvent = *(arg1 + 0x1c)
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    HANDLE hHandle_1 = *(arg1 + 0x2c)
    
    if (hHandle_1 != 0)
        WaitForSingleObject(hHandle_1, 0xffffffff)

HANDLE hHandle_2 = *(arg1 + 0x2c)

if (hHandle_2 != 0)
    WaitForSingleObject(hHandle_2, 0xffffffff)
    CloseHandle(*(arg1 + 0x2c))
    *(arg1 + 0x2c) = 0

HANDLE hEvent_1 = *(arg1 + 0x24)

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(*(arg1 + 0x24))
    *(arg1 + 0x24) = 0

BOOL hEvent_2 = *(arg1 + 0x1c)

if (hEvent_2 != 0)
    ResetEvent(hEvent_2)
    hEvent_2 = CloseHandle(*(arg1 + 0x1c))
    *(arg1 + 0x1c) = 0

return hEvent_2
