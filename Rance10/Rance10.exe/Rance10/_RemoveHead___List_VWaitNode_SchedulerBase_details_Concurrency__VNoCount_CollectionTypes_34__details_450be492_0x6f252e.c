// 函数: ?RemoveHead@?$List@VWaitNode@SchedulerBase@details@Concurrency@@VNoCount@CollectionTypes@34@@details@Concurrency@@QAEPAVWaitNode@SchedulerBase@23@XZ
// 地址: 0x6f252e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *arg1

if (eax == 0)
    return eax

void** esi = *eax

if (eax != esi)
    *(*esi + 4) = eax
    **arg1 = *esi
else
    *arg1 = 0

return esi
