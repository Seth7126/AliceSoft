// 函数: ?NotifyCompletedNode@MultiWaitBlock@details@Concurrency@@QAEXXZ
// 地址: 0x6e995a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x18)
int32_t edx = *(arg1 + 0x24)
*(arg1 + 0x24) += 1
int32_t result = eax + 1

if (edx + 1 == result)
    result = _free(arg1)

return result
