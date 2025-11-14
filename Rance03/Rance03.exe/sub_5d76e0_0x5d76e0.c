// 函数: sub_5d76e0
// 地址: 0x5d76e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = 0
*(arg1 + 0x3c) = 0
int32_t result = *(arg1 + 0xc) - *(arg1 + 8)

if ((result & 0xfffffffc) s> 0)
    do
        if (*(*(arg1 + 8) + (edi << 2)) == 0)
            int32_t eax_2 = *(arg1 + 0x40)
            int32_t ebx_2 = *(arg1 + 0x3c) + 1
            
            if (ebx_2 u> eax_2)
                int32_t lpMem = *(arg1 + 0x38)
                int32_t eax_3 = eax_2 + ebx_2
                *(arg1 + 0x40) = eax_3
                int32_t dwBytes = eax_3 << 2
                int32_t eax_4
                
                if (lpMem == 0)
                    eax_4 = HeapAlloc(data_75dc34, HEAP_NONE, dwBytes)
                else
                    eax_4 = HeapReAlloc(data_75dc34, HEAP_NONE, lpMem, dwBytes)
                
                *(arg1 + 0x38) = eax_4
            
            int32_t eax_5 = *(arg1 + 0x38)
            *(arg1 + 0x3c) = ebx_2
            *(eax_5 + (ebx_2 << 2) - 4) = edi
        
        edi += 1
        result = (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2
    while (edi s< result)

return result
