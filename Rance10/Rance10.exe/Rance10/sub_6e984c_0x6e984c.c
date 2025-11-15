// 函数: sub_6e984c
// 地址: 0x6e984c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x14)
*(arg1 + 0x14) += 1

if (eax == 0)
    int32_t* ebx_1 = *(arg1 + 4)
    Concurrency::details::platform::__DeleteTimerQueueTimer(
        Concurrency::details::GetSharedTimerQueue(), *(arg1 + 0x10), nullptr)
    *(arg1 + 0x29) = 1
    
    if (ebx_1 != 0)
        *(arg1 + 0xc) = 0
        int32_t esi_1 = *(*ebx_1 + 0xc)
        j_sub_4033e0()
        esi_1()

return Concurrency::details::MultiWaitBlock::NotifyCompletedNode(arg1)
