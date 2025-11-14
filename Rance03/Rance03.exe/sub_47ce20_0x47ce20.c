// 函数: sub_47ce20
// 地址: 0x47ce20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = timeGetTime()
EnterCriticalSection(data_74f9b0 + 4)
int32_t esi = data_75dd3c
CRITICAL_SECTION* lpCriticalSection = data_74f9b0 + 4

if (eax u< esi)
    LeaveCriticalSection(lpCriticalSection)
    return sub_47c5b0(data_75d4f4, esi)

data_75dd3c = eax
LeaveCriticalSection(lpCriticalSection)
return sub_47c5b0(data_75d4f4, eax)
