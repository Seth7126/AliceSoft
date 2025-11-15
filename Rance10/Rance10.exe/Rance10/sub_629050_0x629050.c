// 函数: sub_629050
// 地址: 0x629050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx_1 = arg3 - 1

if (arg3 - 1 s< 0)
    return 

int32_t temp2_1

do
    int32_t edi_2 = *(arg1 + 8) + 1
    int32_t ebp_1 = *(arg2 + (ebx_1 << 2))
    int32_t eax_2 = *(arg1 + 0xc)
    
    if (edi_2 u> eax_2)
        int32_t lpMem = *(arg1 + 4)
        int32_t eax_3 = eax_2 + edi_2
        *(arg1 + 0xc) = eax_3
        int32_t dwBytes = eax_3 << 2
        int32_t eax_4
        
        if (lpMem == 0)
            eax_4 = HeapAlloc(data_7fcbf0, HEAP_NONE, dwBytes)
        else
            eax_4 = HeapReAlloc(data_7fcbf0, HEAP_NONE, lpMem, dwBytes)
        
        *(arg1 + 4) = eax_4
    
    temp2_1 = ebx_1
    ebx_1 -= 1
    int32_t eax = *(arg1 + 4)
    *(arg1 + 8) = edi_2
    *(eax + (edi_2 << 2) - 4) = ebp_1
while (temp2_1 - 1 s>= 0)
