// 函数: sub_5e1110
// 地址: 0x5e1110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char eax = arg2
*(arg1 + 4) = eax

if (eax != 0)
    uint32_t eax_1 = timeGetTime()
    EnterCriticalSection(data_74f9b0 + 4)
    int32_t esi_1 = data_75dd3c
    CRITICAL_SECTION* lpCriticalSection = data_74f9b0 + 4
    
    if (eax_1 u< esi_1)
        int32_t eax_3 = LeaveCriticalSection(lpCriticalSection)
        *(arg1 + 8) = esi_1
        return eax_3
    
    data_75dd3c = eax_1
    eax = LeaveCriticalSection(lpCriticalSection)
    *(arg1 + 8) = eax_1

return eax
