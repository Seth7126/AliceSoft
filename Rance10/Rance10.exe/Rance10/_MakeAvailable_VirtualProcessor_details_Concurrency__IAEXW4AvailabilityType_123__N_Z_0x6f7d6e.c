// 函数: ?MakeAvailable@VirtualProcessor@details@Concurrency@@IAEXW4AvailabilityType@123@_N@Z
// 地址: 0x6f7d6e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x80) = *(arg1 + 0x7c)

if (arg3 != 0 && (arg2 == 1 || arg2 == 4))
    sub_6f2ef2(**(arg1 + 0x50), 0)

int32_t* eax_3 = **(arg1 + 0x50) + 0x1b4
*eax_3 += 1
int32_t* eax_5 = *(arg1 + 0x50) + 0x1c
*eax_5 += 1

if (arg2 == 4 || arg2 == 8)
    int32_t* eax_8 = **(arg1 + 0x50) + 0x1b8
    *eax_8 += 1
    int32_t* eax_10 = *(arg1 + 0x50) + 0x20
    *eax_10 += 1

*(arg1 + 8) = arg2
return arg1 + 8
