// 函数: sub_61d750
// 地址: 0x61d750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[5] != 0)
    EnterCriticalSection(arg1[0x27] + 4)
    int32_t ebx
    ebx.b = arg1[6] != 0
    LeaveCriticalSection(arg1[0x27] + 4)
    
    if (ebx.b == 0)
        int32_t result
        result.b = 0
        return result

(*(*arg1 + 0x14))()
HANDLE hEvent = arg1[0x21]

if (hEvent != 0)
    ResetEvent(hEvent)

HANDLE hEvent_1 = arg1[0x23]

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)

HANDLE hEvent_2 = arg1[0x25]

if (hEvent_2 != 0)
    ResetEvent(hEvent_2)

arg1[0x1c].b = 0
return (*(*arg1 + 0x48))() != 0
