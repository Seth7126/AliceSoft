// 函数: ?Cancel@ThreadProxy@details@Concurrency@@QAEXXZ
// 地址: 0x6fd4d4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hEvent = *(arg1 + 0xc)
*(arg1 + 0x24) = 1
return SetEvent(hEvent)
