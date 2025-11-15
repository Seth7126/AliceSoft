// 函数: ?ReleaseReservedContexts@SchedulerBase@details@Concurrency@@QAEXXZ
// 地址: 0x6f2241
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* esi = arg1
void* var_8_1 = esi
SLIST_ENTRY* result = InterlockedPopEntrySList(esi + 0x200)
int32_t ebx_1 = neg.d(result)
SLIST_ENTRY* eax_3
int32_t ebx_4

for (void* i = sbb.d(ebx_1, ebx_1, result != 0) & &result[-2]; i != 0; 
        i = sbb.d(ebx_4, ebx_4, eax_3 != 0) & result)
    int32_t esi_1 = *(**(esi + 0x1ac) + 0xc)
    j_sub_4033e0()
    esi_1(i)
    esi = var_8_1
    sub_6f21a9(esi, i, 0)
    eax_3 = InterlockedPopEntrySList(esi + 0x200)
    result = &eax_3[-2]
    ebx_4 = neg.d(eax_3)

return result
