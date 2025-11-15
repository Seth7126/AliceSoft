// 函数: sub_4a01a0
// 地址: 0x4a01a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x1f4) += sx.d((arg2 u>> 0x10).w)

while (*(arg1 + 0x1f4) s>= 0x78)
    *(arg1 + 0x1f4) -= 0x78
    *(arg1 + 0x150) += 1

while (*(arg1 + 0x1f4) s<= 0xffffff88)
    *(arg1 + 0x1f4) += 0x78
    *(arg1 + 0x154) += 1

return 0
