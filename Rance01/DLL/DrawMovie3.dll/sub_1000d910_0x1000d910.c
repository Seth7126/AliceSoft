// 函数: sub_1000d910
// 地址: 0x1000d910
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg2 == 0)
    return 0x80004003

EnterCriticalSection(arg1 - 0x64)
*arg2 = *(arg1 + 0x40)
LeaveCriticalSection(arg1 - 0x64)
return 0
