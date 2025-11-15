// 函数: ??1MultiWaitBlockHolder@details@Concurrency@@QAE@XZ
// 地址: 0x6e966c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

while (true)
    result = *(arg1 + 0x14)
    bool cond:0_1 = result u< *(arg1 + 0x18)
    *(arg1 + 0x14) += 1
    
    if (not(cond:0_1))
        break
    
    Concurrency::details::MultiWaitBlock::NotifyCompletedNode(*(arg1 + 0x10))

return result
