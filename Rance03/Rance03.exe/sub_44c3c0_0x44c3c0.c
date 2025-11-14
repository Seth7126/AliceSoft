// 函数: sub_44c3c0
// 地址: 0x44c3c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx_2 = *(arg1 + 0x10)

if (ecx_2 != 0)
    jump(**ecx_2)

uint32_t eax_1 = timeGetTime()
EnterCriticalSection(data_74f9b0 + 4)
int32_t esi = data_75dd3c
CRITICAL_SECTION* lpCriticalSection = data_74f9b0 + 4

if (eax_1 u< esi)
    LeaveCriticalSection(lpCriticalSection)
    return esi

data_75dd3c = eax_1
LeaveCriticalSection(lpCriticalSection)
return eax_1
