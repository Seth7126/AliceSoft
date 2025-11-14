// 函数: sub_5ec500
// 地址: 0x5ec500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = timeGetTime()
EnterCriticalSection(data_74f9b0 + 4)
int32_t esi = data_75dd3c
CRITICAL_SECTION* lpCriticalSection = data_74f9b0 + 4

if (eax u< esi)
    LeaveCriticalSection(lpCriticalSection)
    return esi - *(arg1 + 4)

data_75dd3c = eax
LeaveCriticalSection(lpCriticalSection)
return eax - *(arg1 + 4)
