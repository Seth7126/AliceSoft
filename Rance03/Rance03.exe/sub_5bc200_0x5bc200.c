// 函数: sub_5bc200
// 地址: 0x5bc200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x20)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0

if (*(arg1 + 0x18) u>= 0x10)
    j__free(*(arg1 + 4))

*(arg1 + 0x18) = 0xf
*(arg1 + 0x14) = 0
*(arg1 + 4) = 0
return arg1
