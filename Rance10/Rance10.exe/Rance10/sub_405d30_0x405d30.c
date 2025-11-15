// 函数: sub_405d30
// 地址: 0x405d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0xc)
int32_t edi_1 = *(arg1 + 8) + 1

if (edi_1 u> eax)
    int32_t lpMem = *(arg1 + 4)
    int32_t eax_1 = eax + edi_1
    *(arg1 + 0xc) = eax_1
    int32_t dwBytes = eax_1 << 2
    int32_t eax_2
    
    if (lpMem == 0)
        eax_2 = HeapAlloc(data_7fcbf0, HEAP_NONE, dwBytes)
    else
        eax_2 = HeapReAlloc(data_7fcbf0, HEAP_NONE, lpMem, dwBytes)
    
    *(arg1 + 4) = eax_2

int32_t ecx = *(arg1 + 4)
*(arg1 + 8) = edi_1
*(ecx + (edi_1 << 2) - 4) = arg2
return arg2
