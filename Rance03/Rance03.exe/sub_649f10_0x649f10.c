// 函数: sub_649f10
// 地址: 0x649f10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

EnterCriticalSection(arg1[2] + 4)
arg1[3] -= 1
int32_t result = arg1[3]

if (result s> 0)
    LeaveCriticalSection(arg1[2] + 4)
    return result

LeaveCriticalSection(arg1[2] + 4)
(*(*arg1 + 0xc))(1)
return 0
