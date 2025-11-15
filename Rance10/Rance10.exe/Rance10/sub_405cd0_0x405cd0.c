// 函数: sub_405cd0
// 地址: 0x405cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0xc)

if (arg2 u> eax)
    int32_t lpMem = *(arg1 + 4)
    int32_t eax_1 = eax + arg2
    *(arg1 + 0xc) = eax_1
    int32_t dwBytes = eax_1 << 2
    
    if (lpMem != 0)
        int32_t eax_2 = HeapReAlloc(data_7fcbf0, HEAP_NONE, lpMem, dwBytes)
        *(arg1 + 8) = arg2
        *(arg1 + 4) = eax_2
        return eax_2
    
    eax = HeapAlloc(data_7fcbf0, HEAP_NONE, dwBytes)
    *(arg1 + 4) = eax

*(arg1 + 8) = arg2
return eax
