// 函数: sub_4065e0
// 地址: 0x4065e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_406670(arg1)
HANDLE hEvent = *(arg1 + 0x1c)

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(*(arg1 + 0x1c))
    *(arg1 + 0x1c) = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
*(arg1 + 0x1c) = hEvent_1

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    HANDLE hEvent_2 = *(arg1 + 0x24)
    
    if (hEvent_2 != 0)
        ResetEvent(hEvent_2)
        CloseHandle(*(arg1 + 0x24))
        *(arg1 + 0x24) = 0
    
    hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
    *(arg1 + 0x24) = hEvent_1
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)
        return sub_4061b0(arg1 + 0x28, sub_4064b0, arg1) != 0

hEvent_1.b = 0
return hEvent_1
