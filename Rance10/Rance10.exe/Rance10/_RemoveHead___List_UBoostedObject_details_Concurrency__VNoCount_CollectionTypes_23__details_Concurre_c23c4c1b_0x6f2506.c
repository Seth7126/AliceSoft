// 函数: ?RemoveHead@?$List@UBoostedObject@details@Concurrency@@VNoCount@CollectionTypes@23@@details@Concurrency@@QAEPAUBoostedObject@23@XZ
// 地址: 0x6f2506
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = *arg1

if (eax == 0)
    return eax

void* esi = *(eax + 4)

if (eax != esi)
    *(*(esi + 4) + 8) = eax
    *(*arg1 + 4) = *(esi + 4)
else
    *arg1 = 0

return esi
