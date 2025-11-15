// 函数: ?GetNextGlobalNode@ResourceManager@details@Concurrency@@QAEPAUGlobalNode@23@PBU423@@Z
// 地址: 0x6ed6ff
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(arg2 - *(arg1 + 0x48))

if (divs.dp.d(edx:eax_2, 0x28) + 1 u>= *(arg1 + 0x18))
    return 0

return (divs.dp.d(edx:eax_2, 0x28) + 1) * 0x28 + *(arg1 + 0x48)
