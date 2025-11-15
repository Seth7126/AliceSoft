// 函数: sub_69e220
// 地址: 0x69e220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

(*(arg1 + 8))[*(arg1 + 0x14)] = (arg2 u>> 8).b
*(arg1 + 0x14) += 1
int32_t result = *(arg1 + 8)
(*(arg1 + 0x14))[result] = arg2.b
*(arg1 + 0x14) += 1
return result
