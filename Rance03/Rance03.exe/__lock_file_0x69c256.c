// 函数: __lock_file
// 地址: 0x69c256
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 u< 0x74a178 || arg1 u> 0x74a3d8)
    return EnterCriticalSection(arg1 + 0x20)

int32_t result = __lock(((arg1 - 0x74a178) s>> 5) + 0x10)
*(arg1 + 0xc) |= 0x8000
return result
