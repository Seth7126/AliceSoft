// 函数: sub_61b910
// 地址: 0x61b910
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE hHandle = *(arg1 + 8)

if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
    HANDLE hEvent = *(arg1 + 0x10)
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    HANDLE hHandle_1 = *(arg1 + 8)
    
    if (hHandle_1 != 0)
        WaitForSingleObject(hHandle_1, 0xffffffff)

if (*(arg1 + 0x90) != 0)
    bool cond:0_1 = *(arg1 + 0x94) u< 0x10
    void* eax_1 = arg1 + 0x80
    *(eax_1 + 0x10) = 0
    
    if (not(cond:0_1))
        eax_1 = *eax_1
    
    *eax_1 = 0

HANDLE hHandle_2 = *(arg1 + 8)

if (hHandle_2 != 0)
    WaitForSingleObject(hHandle_2, 0xffffffff)
    CloseHandle(*(arg1 + 8))
    *(arg1 + 8) = 0

BOOL hEvent_1 = *(arg1 + 0x10)

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    hEvent_1 = CloseHandle(*(arg1 + 0x10))
    *(arg1 + 0x10) = 0

bool cond:1 = *(arg1 + 0x94) u< 0x10
*(arg1 + 0x90) = 0

if (cond:1)
    *(arg1 + 0x80) = 0
    return hEvent_1

char* eax_2 = *(arg1 + 0x80)
*eax_2 = 0
return eax_2
