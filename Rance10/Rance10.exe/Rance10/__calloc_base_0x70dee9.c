// 函数: __calloc_base
// 地址: 0x70dee9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0 || divu.dp.d(0:0xffffffe0, arg1) u>= arg2)
    uint32_t dwBytes = arg1 * arg2
    
    if (dwBytes == 0)
        dwBytes += 1
    
    int32_t i
    
    do
        int32_t result = HeapAlloc(data_7fcae4, HEAP_ZERO_MEMORY, dwBytes)
        
        if (result != 0)
            return result
        
        if (sub_712660() == 0)
            break
        
        i = __callnewh(dwBytes)
    while (i != 0)

*__errno() = 0xc
return 0
