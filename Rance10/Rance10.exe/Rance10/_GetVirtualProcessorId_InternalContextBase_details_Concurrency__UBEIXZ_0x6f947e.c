// 函数: ?GetVirtualProcessorId@InternalContextBase@details@Concurrency@@UBEIXZ
// 地址: 0x6f947e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x9c) == 0)
    return 0xffffffff

return *(*(arg1 + 0x9c) + 0x88)
