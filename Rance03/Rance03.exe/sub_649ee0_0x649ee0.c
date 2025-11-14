// 函数: sub_649ee0
// 地址: 0x649ee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

EnterCriticalSection(*(arg1 + 8) + 4)
int32_t result = *(arg1 + 0xc) + 1
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 8) + 4
*(arg1 + 0xc) = result
LeaveCriticalSection(lpCriticalSection)
return result
