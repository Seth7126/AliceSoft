// 函数: __malloc_base
// 地址: 0x70d7ea
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t dwBytes = arg1

if (dwBytes u<= 0xffffffe0)
    if (dwBytes == 0)
        dwBytes += 1
    
    int32_t i
    
    do
        int32_t result = HeapAlloc(data_7fcae4, HEAP_NONE, dwBytes)
        
        if (result != 0)
            return result
        
        if (sub_712660() == 0)
            break
        
        i = __callnewh(dwBytes)
    while (i != 0)

*__errno() = 0xc
return 0
