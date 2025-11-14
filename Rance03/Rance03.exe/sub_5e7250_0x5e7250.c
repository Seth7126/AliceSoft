// 函数: sub_5e7250
// 地址: 0x5e7250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x1c0) += sx.d((arg2 u>> 0x10).w)

while (*(arg1 + 0x1c0) s>= 0x78)
    *(arg1 + 0x1c0) -= 0x78
    *(arg1 + 0x11c) += 1

while (*(arg1 + 0x1c0) s<= 0xffffff88)
    *(arg1 + 0x1c0) += 0x78
    *(arg1 + 0x120) += 1

return 0
