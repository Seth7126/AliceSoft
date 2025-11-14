// 函数: sub_100112e0
// 地址: 0x100112e0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (data_100224c5 == 0)
    data_100224c4 = sub_10011270()
    data_100224c5 = 1

if (data_100224c4 != 0)
    arg5 |= 0x100

return timeSetEvent(arg1, arg2, arg3, arg4, arg5)
