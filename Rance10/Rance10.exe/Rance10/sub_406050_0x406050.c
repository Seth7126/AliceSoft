// 函数: sub_406050
// 地址: 0x406050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hEvent = *(arg1 + 4)

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(*(arg1 + 4))
    *(arg1 + 4) = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
*(arg1 + 4) = hEvent_1

if (hEvent_1 == 0)
    hEvent_1.b = 0
    return hEvent_1

ResetEvent(hEvent_1)
BOOL eax
eax.b = 1
return eax
