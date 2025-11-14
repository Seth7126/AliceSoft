// 函数: sub_6217d0
// 地址: 0x6217d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

(*(arg1 + 8))[*(arg1 + 0x14)] = (arg2 u>> 8).b
*(arg1 + 0x14) += 1
int32_t result = *(arg1 + 8)
(*(arg1 + 0x14))[result] = arg2.b
*(arg1 + 0x14) += 1
return result
