// 函数: sub_5c9a60
// 地址: 0x5c9a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx

if (*(arg2 + 0xc) != 0)
    ebx = *(arg2 + 8)
else
    ebx = 0

int32_t esi = arg3

if (esi s< 0)
    esi = 0

int32_t* eax

if (arg6 == 0)
    uint32_t ecx_1
    
    if (*(arg2 + 0x48) != 0)
        ecx_1 = *(arg2 + 0xc) u>> 2
    else
        ecx_1 = 0
    
    if (esi s< arg4)
        while (esi s< ecx_1)
            float xmm0_1 = *(ebx + (esi << 2))
            xmm0_1 - arg5
            eax:1.b = (xmm0_1 == arg5 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, arg5) ? 1 : 0) << 2
                | (xmm0_1 < arg5 ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                int32_t ecx_3 = *(arg1 + 0x22c)
                int32_t ebx_5 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
                
                if (ebx_5 + 1 u>= ecx_3)
                    sub_64ad90(arg1 + 0x224, ecx_3 * 2)
                    *(arg1 + 0x234) = *(arg1 + 0x228) + (ebx_5 << 2)
                
                **(arg1 + 0x234) = esi
                int32_t* eax_9
                eax_9.b = 1
                *(arg1 + 0x234) += 4
                return eax_9
            
            esi += 1
            
            if (esi s>= arg4)
                break
    
    int32_t ebx_1 = *(arg1 + 0x22c)
    int32_t esi_3 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
    
    if (esi_3 + 1 u>= ebx_1)
        int32_t eax_2 = *(arg1 + 0x230)
        int32_t ebx_2 = ebx_1 * 2
        
        if (ebx_2 u> eax_2)
            int32_t lpMem = *(arg1 + 0x228)
            int32_t eax_3 = eax_2 + ebx_2
            *(arg1 + 0x230) = eax_3
            int32_t dwBytes = eax_3 << 2
            int32_t eax_4
            
            if (lpMem == 0)
                eax_4 = HeapAlloc(data_75dc34, HEAP_NONE, dwBytes)
            else
                eax_4 = HeapReAlloc(data_75dc34, HEAP_NONE, lpMem, dwBytes)
            
            *(arg1 + 0x228) = eax_4
        
        *(arg1 + 0x22c) = ebx_2
        *(arg1 + 0x234) = *(arg1 + 0x228) + (esi_3 << 2)
    
    **(arg1 + 0x234) = 0xffffffff
    *(arg1 + 0x234) += 4

eax.b = 1
return eax
