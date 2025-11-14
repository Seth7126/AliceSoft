// 函数: sub_10009e9c
// 地址: 0x10009e9c
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg1 u< &data_10020a90 || arg1 u> 0x10020cf0)
    return EnterCriticalSection(arg1 + 0x20)

int32_t result = sub_10007437(((arg1 - &data_10020a90) s>> 5) + 0x10)
*(arg1 + 0xc) |= 0x8000
return result
