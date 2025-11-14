// 函数: sub_5f48f0
// 地址: 0x5f48f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_5f4980(arg1)
HANDLE hEvent = *(arg1 + 0x18)

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(*(arg1 + 0x18))
    *(arg1 + 0x18) = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
*(arg1 + 0x18) = hEvent_1

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    HANDLE hEvent_2 = *(arg1 + 0x20)
    
    if (hEvent_2 != 0)
        ResetEvent(hEvent_2)
        CloseHandle(*(arg1 + 0x20))
        *(arg1 + 0x20) = 0
    
    hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
    *(arg1 + 0x20) = hEvent_1
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)
        return sub_5f44a0(arg1 + 0x24, sub_5f4790, arg1) != 0

hEvent_1.b = 0
return hEvent_1
