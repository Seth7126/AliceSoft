// 函数: sub_1000b0f9
// 地址: 0x1000b0f9
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg1 == 0xfffffffe)
    *___doserrno() = 0
    *__errno() = 9
    return 0xffffffff

if (arg1 s>= 0 && arg1 u< data_10023524)
    int32_t* eax_6 = ((arg1 & 0x1f) << 6) + (&data_10023540)[arg1 s>> 5]
    
    if ((eax_6[1].b & 1) != 0)
        return *eax_6

*___doserrno() = 0
*__errno() = 9
sub_100020e4(0, 0, 0, 0, 0)
return 0xffffffff
