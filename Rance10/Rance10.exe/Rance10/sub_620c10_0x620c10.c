// 函数: sub_620c10
// 地址: 0x620c10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_6222a0(arg1 + 4)
*(arg1 + 0x24) = 0
int32_t lpMem = *(arg1 + 0x20)
*(arg1 + 0x1c) = &memory::CFastIntVector::`vftable'

if (lpMem != 0)
    HeapFree(data_7fcbf0, HEAP_NONE, lpMem)

sub_6222a0(arg1 + 4)
int32_t result = sub_403160(*(arg1 + 4), 1, 8)
*(arg1 + 4) = 0
return result
