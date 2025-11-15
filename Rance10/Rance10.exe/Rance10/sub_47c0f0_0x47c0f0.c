// 函数: sub_47c0f0
// 地址: 0x47c0f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hHandle = *(arg1 + 4)

if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
    HANDLE hEvent = *(arg1 + 0xc)
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    HANDLE hHandle_1 = *(arg1 + 4)
    
    if (hHandle_1 != 0)
        WaitForSingleObject(hHandle_1, 0xffffffff)

HANDLE hHandle_2 = *(arg1 + 4)

if (hHandle_2 != 0)
    WaitForSingleObject(hHandle_2, 0xffffffff)
    CloseHandle(*(arg1 + 4))
    *(arg1 + 4) = 0

BOOL hEvent_1 = *(arg1 + 0xc)

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    hEvent_1 = CloseHandle(*(arg1 + 0xc))
    *(arg1 + 0xc) = 0

return hEvent_1
