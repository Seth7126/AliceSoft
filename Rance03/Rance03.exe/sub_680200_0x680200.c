// 函数: sub_680200
// 地址: 0x680200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x10)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x10) = 0
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0

int32_t result = *(arg1 + 4)

if (result != 0)
    result = j__free(result)
    *(arg1 + 4) = 0
    *(arg1 + 8) = 0
    *(arg1 + 0xc) = 0

return result
