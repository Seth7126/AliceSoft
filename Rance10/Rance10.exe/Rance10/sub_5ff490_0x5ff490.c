// 函数: sub_5ff490
// 地址: 0x5ff490
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg2

if (*(esi + 0x14) != 0)
    void* eax_2 = (*(*(esi + 0x20) + 0x10))()
    arg2 = eax_2
    
    if (eax_2 s> 0)
        int32_t* ebx_1 = nullptr
        void* i
        
        do
            int32_t eax_3 = *(esi + 0x14)
            int32_t ecx_1
            
            if (eax_3 != 0)
                ecx_1 = *(esi + 0x10)
            else
                ecx_1 = 0
            
            int32_t ebp_1 = *(ebx_1 + ecx_1 + 8)
            
            if (eax_3 != 0)
                eax_3 = *(esi + 0x10)
            
            void* eax_4 = sub_6228d0(*(arg1 + 0x24), *(ebx_1 + eax_3))
            
            if (eax_4 != 0)
                int32_t var_4 = *(arg1 + 0x28)
                sub_404370(eax_4 + 0x2c, &var_4)
            
            if (ebp_1 != 0xffffffff)
                sub_621d30(*(arg1 + 0x24), ebp_1)
            
            ebx_1 = &ebx_1[3]
            i = arg2
            arg2 -= 1
        while (i != 1)
    
    int32_t eax_5
    
    if (sub_5ff5b0(arg1, esi).b == 0)
        eax_5.b = 0
        return eax_5
    
    int32_t ebp_2 = *(arg1 + 0x14)
    int32_t ebx_3 = *(esi + 0x14) + ebp_2
    int32_t eax_6 = *(arg1 + 0x18)
    
    if (ebx_3 u>= eax_6)
        uint32_t dwBytes = eax_6 + ebx_3
        *(arg1 + 0x18) = dwBytes
        
        if (eax_6 != neg.d(ebx_3))
            int32_t lpMem = *(arg1 + 0x10)
            
            if (lpMem == 0)
                eax_5 = HeapAlloc(data_7fcbf4, HEAP_NONE, dwBytes)
            else
                eax_5 = HeapReAlloc(data_7fcbf4, HEAP_NONE, lpMem, dwBytes)
            
            *(arg1 + 0x10) = eax_5
            
            if (eax_5 == 0)
                eax_5.b = 0
                return eax_5
    
    *(arg1 + 0x14) = ebx_3
    void* edx_1 = *(esi + 0x14)
    char* ecx_7
    
    if (edx_1 != 0)
        ecx_7 = *(esi + 0x10)
    else
        ecx_7 = nullptr
    
    void* eax_7
    
    if (ebx_3 != 0)
        eax_7 = *(arg1 + 0x10)
    else
        eax_7 = nullptr
    
    sub_700660(eax_7 + ebp_2, ecx_7, edx_1)

char* eax
eax.b = 1
return eax
