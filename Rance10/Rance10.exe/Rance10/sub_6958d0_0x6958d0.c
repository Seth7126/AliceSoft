// 函数: sub_6958d0
// 地址: 0x6958d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x44) == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t* esi = *(arg1 + 0x44)
int32_t eax_2 = (*(*esi + 0x1c))()
int32_t eax_3 = (*(*esi + 0xc))()
int32_t esi_2 = *(arg1 + 0x30) * ((eax_2 * eax_3) u>> 3)
int32_t eax_4 = sub_484ed0(*(arg1 + 0x44), arg2)

if (eax_4 u>= esi_2)
    eax_4.b = 0
    return eax_4

EnterCriticalSection(*(arg1 + 0x88) + 4)
*(arg1 + 0x34) = eax_4
HANDLE hEvent = *(arg1 + 0x78)

if (hEvent != 0)
    SetEvent(hEvent)

LeaveCriticalSection(*(arg1 + 0x88) + 4)
int32_t eax_9
eax_9.b = 1
return eax_9
