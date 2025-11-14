// 函数: sub_5d5100
// 地址: 0x5d5100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t ecx_1 = *(arg1 + 0xc) u>> 2

if (ecx_1 s< 3)
    int32_t eax
    eax.b = 1
    return eax

int32_t edx

if (*(arg1 + 0xc) != 0)
    edx = *(arg1 + 8)
else
    edx = 0

uint32_t dwBytes = 0

if (ecx_1 s> 0)
    while (*(edx + (dwBytes << 2)) != arg2 || *(edx + (dwBytes << 2) + 4) != arg3)
        dwBytes += 3
        
        if (dwBytes s>= ecx_1)
            dwBytes.b = 1
            return dwBytes
    
    if (dwBytes s< ecx_1 - 3)
        void* ecx_3 = edx + 0x10 + (dwBytes << 2)
        int32_t i_1 = (ecx_1 - 3 - dwBytes - 1) u/ 3 + 1
        int32_t i
        
        do
            int32_t eax_2 = *(ecx_3 - 4)
            ecx_3 += 0xc
            *(ecx_3 - 0x1c) = eax_2
            *(ecx_3 - 0x18) = *(ecx_3 - 0xc)
            *(ecx_3 - 0x14) = *(ecx_3 - 8)
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    dwBytes = *(arg1 + 0x10)
    int32_t edi_6 = *(arg1 + 0xc) - 0xc
    
    if (edi_6 u>= dwBytes)
        uint32_t dwBytes_1 = dwBytes
        dwBytes += edi_6
        *(arg1 + 0x10) = dwBytes
        
        if (dwBytes_1 != neg.d(edi_6))
            int32_t lpMem = *(arg1 + 8)
            
            if (lpMem == 0)
                dwBytes = HeapAlloc(data_75dc38, HEAP_NONE, dwBytes)
            else
                dwBytes = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, dwBytes)
            
            *(arg1 + 8) = dwBytes
            
            if (dwBytes == 0)
                dwBytes.b = 0
                return dwBytes
    
    *(arg1 + 0xc) = edi_6

dwBytes.b = 1
return dwBytes
