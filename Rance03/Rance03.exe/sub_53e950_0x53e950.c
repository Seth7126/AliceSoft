// 函数: sub_53e950
// 地址: 0x53e950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

EnterCriticalSection(*(arg1 + 0x40) + 4)
int32_t ecx = *(arg1 + 0x38)
*arg2 = *(arg1 + 0x30)
arg2[1].d = ecx
LeaveCriticalSection(*(arg1 + 0x40) + 4)
return arg2
