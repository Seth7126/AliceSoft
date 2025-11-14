// 函数: sub_4b7cf0
// 地址: 0x4b7cf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x48)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x48) = 0
    *(arg1 + 0x4c) = 0
    *(arg1 + 0x50) = 0

int32_t result = *(arg1 + 0x3c)

if (result != 0)
    result = j__free(result)
    *(arg1 + 0x3c) = 0
    *(arg1 + 0x40) = 0
    *(arg1 + 0x44) = 0

if (*(arg1 + 0x34) u>= 0x10)
    result = j__free(*(arg1 + 0x20))

*(arg1 + 0x34) = 0xf
*(arg1 + 0x30) = 0
*(arg1 + 0x20) = 0

if (*(arg1 + 0x1c) u>= 0x10)
    result = j__free(*(arg1 + 8))

*(arg1 + 0x1c) = 0xf
*(arg1 + 0x18) = 0
*(arg1 + 8) = 0
return result
