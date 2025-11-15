// 函数: ?GetNextGlobalCore@GlobalNode@details@Concurrency@@QAEPAUGlobalCore@23@PBU423@@Z
// 地址: 0x6ed6da
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(arg2 - *(arg1 + 0x20))

if (divs.dp.d(edx:eax_2, 0x24) + 1 u>= *(arg1 + 4))
    return 0

return (divs.dp.d(edx:eax_2, 0x24) + 1) * 0x24 + *(arg1 + 0x20)
