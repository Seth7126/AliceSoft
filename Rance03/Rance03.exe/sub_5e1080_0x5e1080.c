// 函数: sub_5e1080
// 地址: 0x5e1080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys40::CDisableScreensaver::`vftable'{for `IDisableScreensaver'}
arg1[1].b = 0
uint32_t eax = timeGetTime()
EnterCriticalSection(data_74f9b0 + 4)
int32_t ebx = data_75dd3c
CRITICAL_SECTION* lpCriticalSection = data_74f9b0 + 4

if (eax u< ebx)
    LeaveCriticalSection(lpCriticalSection)
    arg1[2] = ebx
    return arg1

data_75dd3c = eax
LeaveCriticalSection(lpCriticalSection)
arg1[2] = eax
return arg1
