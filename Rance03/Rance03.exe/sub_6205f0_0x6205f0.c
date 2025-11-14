// 函数: sub_6205f0
// 地址: 0x6205f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

EnterCriticalSection(*(arg1 + 0xc) + 4)
*(arg1 + 4) += 1
int32_t result = *(arg1 + 4)
LeaveCriticalSection(*(arg1 + 0xc) + 4)
return result
