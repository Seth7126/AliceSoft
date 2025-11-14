// 函数: sub_456210
// 地址: 0x456210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** result = *arg1
void** result_1 = result[1]

while (*(result_1 + 0xd) == 0)
    if (sub_4560c0(&result_1[4], arg2) == 0)
        result = result_1
        result_1 = *result_1
    else
        result_1 = result_1[2]

return result
