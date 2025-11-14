// 函数: sub_1000c2d0
// 地址: 0x1000c2d0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (*(arg1[0x1e] + 0x18) == 0)
    SetEvent(arg1[0x17])
    return 0

if (arg1[0x1c] == 1)
    SetEvent(arg1[0x17])
    return 0

if ((*(*arg1 + 0xa0))() == 1 && arg2 != 0)
    SetEvent(arg1[0x17])
    return 0

ResetEvent(arg1[0x17])
return 1
