// 函数: sub_59c5e0
// 地址: 0x59c5e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg2 << 2
int32_t* ecx = *(ebx + *(arg1 + 4))

if (ecx != 0)
    sub_53a360(ecx)

EnterCriticalSection(*(arg3 + 0xc) + 4)
*(arg3 + 4) += 1
LeaveCriticalSection(*(arg3 + 0xc) + 4)
int32_t result = *(arg1 + 4)
*(ebx + result) = arg3
return result
