// 函数: sub_4995b0
// 地址: 0x4995b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax = timeGetTime()
EnterCriticalSection(data_7e70bc + 4)
int32_t ebx = data_7fd50c
CRITICAL_SECTION* lpCriticalSection = data_7e70bc + 4

if (eax u< ebx)
    int32_t eax_2 = LeaveCriticalSection(lpCriticalSection)
    *(arg1 + 4) = ebx
    return eax_2

data_7fd50c = eax
int32_t eax_3 = LeaveCriticalSection(lpCriticalSection)
*(arg1 + 4) = eax
return eax_3
