// 函数: sub_6a7d20
// 地址: 0x6a7d20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = sub_6a4240()

if (result == 0)
    return result

*(result + 0x78) |= 0x300000
*(result + 0x74) = 0x8000
*(result + 0x2c0) = 0x2000
bool cond:0_1 = *(result + 0x58) == 0
*(result + 0x60) = 0
*(result + 0x5c) = sub_6a89f0

if (not(cond:0_1))
    *(result + 0x58) = 0
    sub_6a7530(result, "Can't set both read_data_fn and write_data_fn in the same structure")

*(result + 0x17c) = 0
return result
