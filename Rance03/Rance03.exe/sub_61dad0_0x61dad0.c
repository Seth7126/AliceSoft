// 函数: sub_61dad0
// 地址: 0x61dad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = (*(*(arg1 + 0x44) + 0x1c))()
int32_t eax_2 = (*(*(arg1 + 0x44) + 0xc))()
int32_t eax_3 = *(arg1 + 0x54)
int32_t ebp_1 = *(arg1 + 0x30) * ((eax_1 * eax_2) u>> 3)

if (eax_3 == 0)
    eax_3 = 0xac44

int32_t eax_4
uint32_t edx_1
eax_4, edx_1 = __allmul(arg2, 0, eax_3, 0)
uint32_t eax_5 = __aulldiv(eax_4, edx_1, 0x3e8, 0)
uint32_t esi_3 = *(arg1 + 0x5c)
uint32_t ecx_2 = eax_5

if (esi_3 == 0)
    esi_3 = 4
    eax_5 = (*(arg1 + 0x60) * *(arg1 + 0x50)) u>> 3
    
    if (eax_5 != 0)
        esi_3 = eax_5

int32_t esi_4 = esi_3 * ecx_2

if (esi_4 u>= ebp_1)
    eax_5.b = 0
    return eax_5

EnterCriticalSection(*(arg1 + 0xa4) + 4)
*(arg1 + 0x34) = esi_4
HANDLE hEvent = *(arg1 + 0x94)

if (hEvent != 0)
    SetEvent(hEvent)

LeaveCriticalSection(*(arg1 + 0xa4) + 4)
int32_t eax_12
eax_12.b = 1
return eax_12
