// 函数: sub_5eecf0
// 地址: 0x5eecf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0xd0) = *(arg1 + 0xcc)
*(arg1 + 0xd8) = 0
*(arg1 + 0xa4) = *(arg1 + 0xa0)
__builtin_memset(arg1 + 0xac, 0, 0x1c)
*(arg1 + 0x88) = *(arg1 + 0x84)
*(arg1 + 0x90) = 0
*(arg1 + 0x5c) = *(arg1 + 0x58)
__builtin_memset(arg1 + 0x64, 0, 0x1c)
int32_t result = (*(*(arg1 + 0xc) + 4))()
int32_t* ecx_1 = *(arg1 + 8)
*(arg1 + 0x3c) = 0
*(arg1 + 0x40) = 0

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))()
    *(arg1 + 8) = 0

int32_t* ecx_2 = *(arg1 + 4)

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))()
    *(arg1 + 4) = 0

return result
