// 函数: sub_5e1180
// 地址: 0x5e1180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (*(arg1 + 4) != 0)
    uint32_t eax = timeGetTime()
    EnterCriticalSection(data_74f9b0 + 4)
    uint32_t esi_1 = data_75dd3c
    CRITICAL_SECTION* lpCriticalSection = data_74f9b0 + 4
    
    if (eax u>= esi_1)
        data_75dd3c = eax
        LeaveCriticalSection(lpCriticalSection)
        esi_1 = eax
    else
        LeaveCriticalSection(lpCriticalSection)
    
    if (esi_1 - *(arg1 + 8) u>= 0x7530)
        result.b = 0
        return result

result.b = *(arg1 + 4)
return result
