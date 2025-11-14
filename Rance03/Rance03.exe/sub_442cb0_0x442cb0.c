// 函数: sub_442cb0
// 地址: 0x442cb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0xcc) != *(arg1 + 0xd0))
    void* ecx = *(data_75d4e4 + 0x93c)
    
    if (ecx != 0)
        sub_46efc0(ecx + 0x78, *(arg1 + 0x42c))

HANDLE hObject = *(arg1 + 0x24)

if (hObject != 0xffffffff && CloseHandle(hObject) != 0)
    *(arg1 + 0x24) = 0xffffffff

HANDLE hHandle = *(arg1 + 8)

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(*(arg1 + 8))
    *(arg1 + 8) = 0

HANDLE hEvent = *(arg1 + 0x10)

if (hEvent != 0)
    ResetEvent(hEvent)

EnterCriticalSection(*(arg1 + 0x18) + 4)
sub_41fff0(arg1 + 0xa50)
return LeaveCriticalSection(*(arg1 + 0x18) + 4)
