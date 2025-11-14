// 函数: sub_5c2d00
// 地址: 0x5c2d00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x12b8) != 0)
    return 0

*(arg1 + 0x12b8) = 1
*(arg1 + 0x12b9) = arg2
sub_5b3f40(arg1 + 0x1278)
int32_t performanceCount
QueryPerformanceCounter(&performanceCount)
*(arg1 + 0x12a0) = performanceCount
int32_t var_4
*(arg1 + 0x12a4) = var_4
int32_t result
result.b = 1
return result
