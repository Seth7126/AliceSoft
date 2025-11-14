// 函数: sub_45f000
// 地址: 0x45f000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x20)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0

int32_t result = *(arg1 + 0x14)

if (result != 0)
    result = j__free(result)
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0

return result
