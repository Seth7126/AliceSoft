// 函数: sub_499600
// 地址: 0x499600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax = timeGetTime()
EnterCriticalSection(data_7e70bc + 4)
int32_t esi = data_7fd50c
CRITICAL_SECTION* lpCriticalSection = data_7e70bc + 4

if (eax u< esi)
    LeaveCriticalSection(lpCriticalSection)
    return esi - *(arg1 + 4)

data_7fd50c = eax
LeaveCriticalSection(lpCriticalSection)
return eax - *(arg1 + 4)
