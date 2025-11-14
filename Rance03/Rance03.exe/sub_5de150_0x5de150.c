// 函数: sub_5de150
// 地址: 0x5de150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = 0
*(arg2 + 8) = 0
int32_t edx = *(arg1 + 8)
int32_t result = *(arg1 + 0x14) - edx

if ((result & 0xfffffffc) s> 0)
    do
        void* eax_1 = *(edx + (ebx << 2))
        int32_t edi_2 = *(arg2 + 8) + 1
        int32_t eax_2 = *(arg2 + 0xc)
        
        if (edi_2 u> eax_2)
            int32_t lpMem = *(arg2 + 4)
            int32_t eax_3 = eax_2 + edi_2
            *(arg2 + 0xc) = eax_3
            int32_t dwBytes = eax_3 << 2
            int32_t eax_4
            
            if (lpMem == 0)
                eax_4 = HeapAlloc(data_75dc34, HEAP_NONE, dwBytes)
            else
                eax_4 = HeapReAlloc(data_75dc34, HEAP_NONE, lpMem, dwBytes)
            
            *(arg2 + 4) = eax_4
        
        int32_t eax_5 = *(arg2 + 4)
        ebx += 1
        *(arg2 + 8) = edi_2
        *(eax_5 + (edi_2 << 2) - 4) = eax_1
        edx = *(arg1 + 8)
        result = (*(arg1 + 0x14) - edx) s>> 2
    while (ebx s< result)

return result
