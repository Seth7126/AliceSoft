// 函数: sub_523220
// 地址: 0x523220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

EnterCriticalSection(*(arg1 + 0x18) + 4)

if (*(arg1 + 0x20) == 0 && *(arg1 + 0x40) == 0)
    LeaveCriticalSection(*(arg1 + 0x18) + 4)
    int32_t eax_2
    eax_2.b = 0
    return eax_2

LeaveCriticalSection(*(arg1 + 0x18) + 4)
int32_t eax_3
eax_3.b = 1
return eax_3
