// 函数: sub_489590
// 地址: 0x489590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hHandle = *(arg1 + 0x44)

if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
    HANDLE hEvent = *(arg1 + 0x4c)
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    HANDLE hHandle_1 = *(arg1 + 0x44)
    
    if (hHandle_1 != 0)
        WaitForSingleObject(hHandle_1, 0x1388)
    
    HANDLE hEvent_1 = *(arg1 + 0x4c)
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)

BOOL hHandle_2 = *(arg1 + 0x44)

if (hHandle_2 != 0)
    WaitForSingleObject(hHandle_2, 0xffffffff)
    CloseHandle(*(arg1 + 0x44))
    *(arg1 + 0x44) = 0

hHandle_2.b = 1
return hHandle_2
