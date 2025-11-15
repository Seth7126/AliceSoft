// 函数: sub_49c0a0
// 地址: 0x49c0a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char eax = arg2
*(arg1 + 4) = eax

if (eax != 0)
    uint32_t eax_1 = timeGetTime()
    EnterCriticalSection(data_7e70bc + 4)
    int32_t esi_1 = data_7fd50c
    CRITICAL_SECTION* lpCriticalSection = data_7e70bc + 4
    
    if (eax_1 u< esi_1)
        int32_t eax_3 = LeaveCriticalSection(lpCriticalSection)
        *(arg1 + 8) = esi_1
        return eax_3
    
    data_7fd50c = eax_1
    eax = LeaveCriticalSection(lpCriticalSection)
    *(arg1 + 8) = eax_1

return eax
