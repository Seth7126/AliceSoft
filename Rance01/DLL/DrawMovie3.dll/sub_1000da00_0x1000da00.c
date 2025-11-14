// 函数: sub_1000da00
// 地址: 0x1000da00
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg2 == 0)
    return 0x80004003

EnterCriticalSection(arg1 - 0x64)

if (*(arg1 - 0xc8) != 0)
    int32_t eax_2 = *(arg1 + 0x44)
    
    if (eax_2 s> 1)
        int32_t eax_5
        uint32_t edx
        edx:eax_5 = sx.q(eax_2 - 1)
        *arg2 = __alldiv(*(arg1 + 0x48), *(arg1 + 0x4c), eax_5, edx)
        LeaveCriticalSection(arg1 - 0x64)
        return 0

*arg2 = 0
LeaveCriticalSection(arg1 - 0x64)
return 0
