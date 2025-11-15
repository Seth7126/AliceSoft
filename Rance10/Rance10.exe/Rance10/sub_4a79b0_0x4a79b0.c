// 函数: sub_4a79b0
// 地址: 0x4a79b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax = timeGetTime()
EnterCriticalSection(data_7e70bc + 4)
int32_t esi = data_7fd50c
CRITICAL_SECTION* lpCriticalSection = data_7e70bc + 4

if (eax u< esi)
    LeaveCriticalSection(lpCriticalSection)
    return sub_4a7790(data_7fcb94, esi)

data_7fd50c = eax
LeaveCriticalSection(lpCriticalSection)
return sub_4a7790(data_7fcb94, eax)
