// 函数: sub_458a00
// 地址: 0x458a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x14)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0

return j__free(arg1)
