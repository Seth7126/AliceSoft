// 函数: sub_621ee0
// 地址: 0x621ee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0
*(arg1 + 0x24) = 0

if (*(arg1 + 0x14) u<= 0)
    return 

do
    void var_18
    void var_c
    int32_t* eax_2 = sub_622260(sub_44a580(arg1 + 4, &var_c), &var_18, i)
    int32_t* edi_1 = *eax_2
    
    if (edi_1 != 0)
        edi_1 = *edi_1
    
    int32_t edx_1 = eax_2[2]
    
    if (*(*(edi_1[1] + ((edx_1 u>> 2 & (edi_1[2] - 1)) << 2)) + ((edx_1 & 3) << 2)) == 0)
        int32_t eax_6 = *(arg1 + 0x28)
        int32_t edi_3 = *(arg1 + 0x24) + 1
        
        if (edi_3 u> eax_6)
            int32_t lpMem = *(arg1 + 0x20)
            int32_t eax_7 = eax_6 + edi_3
            *(arg1 + 0x28) = eax_7
            int32_t dwBytes = eax_7 << 2
            int32_t eax_8
            
            if (lpMem == 0)
                eax_8 = HeapAlloc(data_7fcbf0, HEAP_NONE, dwBytes)
            else
                eax_8 = HeapReAlloc(data_7fcbf0, HEAP_NONE, lpMem, dwBytes)
            
            *(arg1 + 0x20) = eax_8
        
        int32_t eax = *(arg1 + 0x20)
        *(arg1 + 0x24) = edi_3
        *(eax + (edi_3 << 2) - 4) = i
    
    i += 1
while (i u< *(arg1 + 0x14))
