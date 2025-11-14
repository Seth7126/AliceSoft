// 函数: sub_6353f0
// 地址: 0x6353f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

EnterCriticalSection(arg1[3] + 4)
arg1[4] -= 1
int32_t result = arg1[4]

if (result s<= 0)
    result = 0

LeaveCriticalSection(arg1[3] + 4)

if (result s<= 0 && arg1 != 0)
    (*(*arg1 + 0x38))(1)

return result
