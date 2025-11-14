// 函数: sub_411e80
// 地址: 0x411e80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = (*(**(arg1 + 0x50) + 0x2c))()
bool cond:0 = data_75d4b4 == 0
*(arg1 + 0x68) = eax_1

if (not(cond:0))
    (*(**(arg1 + 0x48) + 8))()
    data_75d4b4 = 0

(*(*(arg1 + 8) + 4))(arg2, 1)
*(arg1 + 0x5c) = 3
return sub_404e00(arg1 + 0x70, 0)
