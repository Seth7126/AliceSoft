// 函数: sub_41cff0
// 地址: 0x41cff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x30)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x30) = 0
    *(arg1 + 0x34) = 0
    *(arg1 + 0x38) = 0

int32_t result = *(arg1 + 0x24)

if (result != 0)
    result = j__free(result)
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0
    *(arg1 + 0x2c) = 0

if (*(arg1 + 0x20) u>= 0x10)
    result = j__free(*(arg1 + 0xc))

*(arg1 + 0x20) = 0xf
*(arg1 + 0x1c) = 0
*(arg1 + 0xc) = 0
return result
