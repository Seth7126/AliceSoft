// 函数: sub_49c000
// 地址: 0x49c000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &mainwindow::CDisableScreensaver::`vftable'{for `IDisableScreensaver'}
arg1[1].b = 0
uint32_t eax = timeGetTime()
EnterCriticalSection(data_7e70bc + 4)
int32_t ebx = data_7fd50c
CRITICAL_SECTION* lpCriticalSection = data_7e70bc + 4

if (eax u< ebx)
    LeaveCriticalSection(lpCriticalSection)
    arg1[2] = ebx
    return arg1

data_7fd50c = eax
LeaveCriticalSection(lpCriticalSection)
arg1[2] = eax
return arg1
