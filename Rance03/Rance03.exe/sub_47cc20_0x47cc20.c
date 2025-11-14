// 函数: sub_47cc20
// 地址: 0x47cc20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 4) += 1

if (*(arg1 + 4) s>= 0x209)
    sub_47cac0(arg1)
    *(arg1 + 4) = 0

return *(arg1 + (*(arg1 + 4) << 2) + 8)
