// 函数: ?SetAsCurrent@ExecutionResource@details@Concurrency@@QAEXXZ
// 地址: 0x6f555b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t esi = *(*(*(arg1 + 0x14) + 0xc) + 0x70)
*(arg1 + 0x20) = Concurrency::details::platform::__TlsGetValue(esi)
return sub_6eb375(esi, arg1)
