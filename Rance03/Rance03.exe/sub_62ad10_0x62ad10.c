// 函数: sub_62ad10
// 地址: 0x62ad10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_627390()

if (result == 0)
    return result

*(result + 0x78) |= 0x300000
bool cond:0_1 = *(result + 0x58) == 0
*(result + 0x74) = 0x8000
*(result + 0x2c0) = 0x2000
*(result + 0x60) = 0
*(result + 0x5c) = sub_62ba50

if (not(cond:0_1))
    *(result + 0x58) = 0
    sub_62a550(result, "Can't set both read_data_fn and write_data_fn in the same structure")

*(result + 0x17c) = 0
return result
