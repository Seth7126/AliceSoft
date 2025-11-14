// 函数: sub_580fc0
// 地址: 0x580fc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x18)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = 0

int32_t result = *(arg1 + 0xc)

if (result != 0)
    result = j__free(result)
    *(arg1 + 0xc) = 0
    *(arg1 + 0x10) = 0
    *(arg1 + 0x14) = 0

return result
