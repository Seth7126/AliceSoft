// 函数: sub_5d0530
// 地址: 0x5d0530
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = *(arg1 + 0x14)

if (eax != 0)
    sub_4107c0(eax, *(arg1 + 0x18))
    j__free(*(arg1 + 0x14))
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0

return j__free(arg1)
