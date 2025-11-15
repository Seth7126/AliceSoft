// 函数: sub_626d80
// 地址: 0x626d80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 0x2c)

if (result != 0x12 && result != 0x33 && result != 0x13 && result != 0x59 && result != 0x5d)
    *(arg1 + 0x3c) = 1
    return result

*(arg1 + 0x3c) = 2
return result
