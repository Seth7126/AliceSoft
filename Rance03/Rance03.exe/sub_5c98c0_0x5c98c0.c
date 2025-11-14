// 函数: sub_5c98c0
// 地址: 0x5c98c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = *(arg2 + 0xc)

if (eax u< 1)
    int32_t ecx_1 = *(arg1 + 0x22c)
    int32_t edi_2 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
    
    if (edi_2 + 1 u>= ecx_1)
        sub_64ad90(arg1 + 0x224, ecx_1 * 2)
        *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_2 << 2)
    
    **(arg1 + 0x234) = 0xffffffff
    int32_t* eax_5
    eax_5.b = 1
    *(arg1 + 0x234) += 4
    return eax_5

int32_t edx

if (eax != 0)
    edx = *(arg2 + 8)
else
    edx = 0

int32_t edi_3 = arg3

if (edi_3 s< 0)
    edi_3 = 0

if (arg6 == 0)
    uint32_t eax_6
    
    if (*(arg2 + 0x48) != 0)
        eax_6 = eax u>> 2
    else
        eax_6 = 0
    
    if (edi_3 s< arg4)
        while (edi_3 s< eax_6)
            if (*(edx + (edi_3 << 2)) == arg5)
                int32_t ecx_5 = *(arg1 + 0x22c)
                int32_t ebx_6 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
                
                if (ebx_6 + 1 u>= ecx_5)
                    sub_64ad90(arg1 + 0x224, ecx_5 * 2)
                    *(arg1 + 0x234) = *(arg1 + 0x228) + (ebx_6 << 2)
                
                **(arg1 + 0x234) = edi_3
                int32_t* eax_15
                eax_15.b = 1
                *(arg1 + 0x234) += 4
                return eax_15
            
            edi_3 += 1
            
            if (edi_3 s>= arg4)
                break
    
    int32_t ebx_2 = *(arg1 + 0x22c)
    int32_t edi_6 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
    
    if (edi_6 + 1 u>= ebx_2)
        int32_t eax_8 = *(arg1 + 0x230)
        int32_t ebx_3 = ebx_2 * 2
        
        if (ebx_3 u> eax_8)
            int32_t lpMem = *(arg1 + 0x228)
            int32_t eax_9 = eax_8 + ebx_3
            *(arg1 + 0x230) = eax_9
            int32_t dwBytes = eax_9 << 2
            int32_t eax_10
            
            if (lpMem == 0)
                eax_10 = HeapAlloc(data_75dc34, HEAP_NONE, dwBytes)
            else
                eax_10 = HeapReAlloc(data_75dc34, HEAP_NONE, lpMem, dwBytes)
            
            *(arg1 + 0x228) = eax_10
        
        *(arg1 + 0x22c) = ebx_3
        *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_6 << 2)
    
    **(arg1 + 0x234) = 0xffffffff
    *(arg1 + 0x234) += 4

eax.b = 1
return eax
