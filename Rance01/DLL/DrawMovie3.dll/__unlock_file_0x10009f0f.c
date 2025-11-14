// 函数: __unlock_file
// 地址: 0x10009f0f
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg1 u< &data_10020a90 || arg1 u> 0x10020cf0)
    return LeaveCriticalSection(arg1 + 0x20)

*(arg1 + 0xc) &= 0xffff7fff
return __unlock(((arg1 - &data_10020a90) s>> 5) + 0x10)
