// 函数: sub_5ec4b0
// 地址: 0x5ec4b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = timeGetTime()
EnterCriticalSection(data_74f9b0 + 4)
int32_t ebx = data_75dd3c
CRITICAL_SECTION* lpCriticalSection = data_74f9b0 + 4

if (eax u< ebx)
    int32_t eax_2 = LeaveCriticalSection(lpCriticalSection)
    *(arg1 + 4) = ebx
    return eax_2

data_75dd3c = eax
int32_t eax_3 = LeaveCriticalSection(lpCriticalSection)
*(arg1 + 4) = eax
return eax_3
