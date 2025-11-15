// 函数: sub_582750
// 地址: 0x582750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

EnterCriticalSection(*(arg1 + 0x70) + 4)
int32_t ecx = *(arg1 + 0x68)
*arg2 = *(arg1 + 0x60)
arg2[1].d = ecx
LeaveCriticalSection(*(arg1 + 0x70) + 4)
return arg2
