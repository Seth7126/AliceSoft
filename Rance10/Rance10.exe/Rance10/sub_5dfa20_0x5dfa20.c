// 函数: sub_5dfa20
// 地址: 0x5dfa20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** result = *arg1
void** result_1 = result[1]

while (*(result_1 + 0xd) == 0)
    if (sub_5df310(&result_1[4], arg2) == 0)
        result = result_1
        result_1 = *result_1
    else
        result_1 = result_1[2]

return result
