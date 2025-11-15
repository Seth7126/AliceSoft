// 函数: sub_49c110
// 地址: 0x49c110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (*(arg1 + 4) != 0)
    uint32_t eax = timeGetTime()
    EnterCriticalSection(data_7e70bc + 4)
    uint32_t esi_1 = data_7fd50c
    CRITICAL_SECTION* lpCriticalSection = data_7e70bc + 4
    
    if (eax u>= esi_1)
        data_7fd50c = eax
        LeaveCriticalSection(lpCriticalSection)
        esi_1 = eax
    else
        LeaveCriticalSection(lpCriticalSection)
    
    if (esi_1 - *(arg1 + 8) u>= 0x7530)
        result.b = 0
        return result

result.b = *(arg1 + 4)
return result
