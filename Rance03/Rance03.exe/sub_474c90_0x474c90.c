// 函数: sub_474c90
// 地址: 0x474c90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(*arg1 + 0x48))() != 0)
    HANDLE hEvent = arg1[0xa]
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    HANDLE hHandle = arg1[8]
    
    if (hHandle != 0)
        WaitForSingleObject(hHandle, 0x1388)
    
    HANDLE hEvent_1 = arg1[0xa]
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)

BOOL hHandle_1 = arg1[8]

if (hHandle_1 != 0)
    WaitForSingleObject(hHandle_1, 0xffffffff)
    CloseHandle(arg1[8])
    arg1[8] = 0

hHandle_1.b = 1
return hHandle_1
