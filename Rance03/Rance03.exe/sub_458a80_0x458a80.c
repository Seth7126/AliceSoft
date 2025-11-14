// 函数: sub_458a80
// 地址: 0x458a80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x28)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x28) = 0
    *(arg1 + 0x2c) = 0
    *(arg1 + 0x30) = 0

if (*(arg1 + 0x24) u>= 0x10)
    j__free(*(arg1 + 0x10))

*(arg1 + 0x24) = 0xf
*(arg1 + 0x20) = 0
*(arg1 + 0x10) = 0
return j__free(arg1)
