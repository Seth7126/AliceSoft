// 函数: sub_1000bdba
// 地址: 0x1000bdba
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

char result = (arg1[3]).b

if ((result & 0x83) != 0 && (result & 8) != 0)
    sub_10003602(arg1[2])
    arg1[3] &= 0xfffffbf7
    result = 0
    *arg1 = 0
    arg1[2] = 0
    arg1[1] = 0

return result
