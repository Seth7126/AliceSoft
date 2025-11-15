// 函数: sub_405df0
// 地址: 0x405df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t dwBytes = *(arg1 + 0xc)

if (arg2 u>= dwBytes)
    uint32_t dwBytes_1 = dwBytes
    dwBytes += arg2
    *(arg1 + 0xc) = dwBytes
    
    if (dwBytes_1 != neg.d(arg2))
        int32_t lpMem = *(arg1 + 4)
        
        if (lpMem == 0)
            dwBytes = HeapAlloc(data_7fcbf4, HEAP_NONE, dwBytes)
        else
            dwBytes = HeapReAlloc(data_7fcbf4, HEAP_NONE, lpMem, dwBytes)
        
        *(arg1 + 4) = dwBytes
        
        if (dwBytes == 0)
            dwBytes.b = 0
            return dwBytes

*(arg1 + 8) = arg2
dwBytes.b = 1
return dwBytes
