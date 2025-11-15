// 函数: sub_44f250
// 地址: 0x44f250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx_2 = *(arg1 + 0x10)

if (ecx_2 != 0)
    jump(**ecx_2)

uint32_t eax_1 = timeGetTime()
EnterCriticalSection(data_7e70bc + 4)
int32_t esi = data_7fd50c
CRITICAL_SECTION* lpCriticalSection = data_7e70bc + 4

if (eax_1 u< esi)
    LeaveCriticalSection(lpCriticalSection)
    return esi

data_7fd50c = eax_1
LeaveCriticalSection(lpCriticalSection)
return eax_1
