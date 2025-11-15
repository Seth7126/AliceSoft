// 函数: ?Reset@WorkSearchContext@details@Concurrency@@QAEXPAVVirtualProcessor@23@W4Algorithm@123@@Z
// 地址: 0x6fdd26
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[3] = 0
*arg1 = arg2
arg1[2] = *(arg2 + 0x90)
arg1[1] = **(arg2 + 0x50)
uint32_t result
int32_t edx_1
result, edx_1 = j____crtGetTickCount64()
int32_t temp1 = arg3
arg3 -= 1
arg1[6] = result
arg1[7] = edx_1
arg1[4] = result
arg1[5] = edx_1

if (temp1 == 1)
    arg1[8] = Concurrency::details::WorkSearchContext::SearchCacheLocal
    arg1[9] = sub_6fe0cc
else
    arg1[8] = Concurrency::details::WorkSearchContext::SearchFair
    arg1[9] = Concurrency::details::WorkSearchContext::SearchFairYield

return result
