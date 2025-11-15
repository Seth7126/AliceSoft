// 函数: sub_695530
// 地址: 0x695530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[5] != 0)
    EnterCriticalSection(arg1[0x20] + 4)
    int32_t ebx
    ebx.b = arg1[6] != 0
    LeaveCriticalSection(arg1[0x20] + 4)
    
    if (ebx.b == 0)
        int32_t result
        result.b = 0
        return result

(*(*arg1 + 0x14))()
HANDLE hEvent = arg1[0x1a]

if (hEvent != 0)
    ResetEvent(hEvent)

HANDLE hEvent_1 = arg1[0x1c]

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)

HANDLE hEvent_2 = arg1[0x1e]

if (hEvent_2 != 0)
    ResetEvent(hEvent_2)

int32_t ecx_1
ecx_1.b = 0
arg1[0x15].b = 0
ecx_1.b = arg1[0x15].b
return (*(*arg1 + 0x50))() != 0
