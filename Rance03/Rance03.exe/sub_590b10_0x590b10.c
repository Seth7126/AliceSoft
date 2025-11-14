// 函数: sub_590b10
// 地址: 0x590b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

EnterCriticalSection(*(arg1 + 8) + 4)
void** eax_2 = sub_417ed0(arg1 + 0xc, arg2)
char eax_4

if (eax_2 != *(arg1 + 0xc))
    eax_4 = sub_40c3a0(arg2, &eax_2[4])

if (eax_2 == *(arg1 + 0xc) || eax_4 != 0)
    arg2 = *(arg1 + 0xc)
else
    arg2 = eax_2

if (arg2 == *(arg1 + 0xc))
    LeaveCriticalSection(*(arg1 + 8) + 4)
    return 0

void* result = arg2[0xa]
EnterCriticalSection(*(result + 0xc) + 4)
*(result + 4) += 1
LeaveCriticalSection(*(result + 0xc) + 4)
LeaveCriticalSection(*(arg1 + 8) + 4)
return result
