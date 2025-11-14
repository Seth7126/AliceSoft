// 函数: sub_403410
// 地址: 0x403410
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

EnterCriticalSection(*(arg1 + 0xc) + 4)
int32_t result = *(arg1 + 0x10) + 1
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0xc) + 4
*(arg1 + 0x10) = result
LeaveCriticalSection(lpCriticalSection)
return result
