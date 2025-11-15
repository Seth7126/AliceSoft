// 函数: sub_612c30
// 地址: 0x612c30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x1290) != 0)
    return 0

*(arg1 + 0x1290) = 1
*(arg1 + 0x1291) = arg2
sub_5fc0e0(arg1 + 0x1258)
int32_t performanceCount
QueryPerformanceCounter(&performanceCount)
*(arg1 + 0x1278) = performanceCount
int32_t var_4
*(arg1 + 0x127c) = var_4
int32_t result
result.b = 1
return result
