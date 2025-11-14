// 函数: sub_5c9f90
// 地址: 0x5c9f90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx

if (arg2[3] != 0)
    ecx = arg2[2]
else
    ecx = 0

int32_t esi = arg3

if (esi s< 0)
    esi = 0

int32_t edx
edx.b = arg5 != 0

if (arg6 == 0)
    uint32_t eax
    
    if (arg2[0x12].b != 0)
        eax = arg2[3] u>> 2
    else
        eax = 0
    
    if (esi s< arg4)
        while (esi s< eax)
            if (*(ecx + (esi << 2)) == edx)
                int32_t ecx_1 = *(arg1 + 0x22c)
                int32_t ebx_6 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
                
                if (ebx_6 + 1 u>= ecx_1)
                    sub_64ad90(arg1 + 0x224, ecx_1 * 2)
                    *(arg1 + 0x234) = *(arg1 + 0x228) + (ebx_6 << 2)
                
                **(arg1 + 0x234) = esi
                int32_t* eax_10
                eax_10.b = 1
                *(arg1 + 0x234) += 4
                return eax_10
            
            esi += 1
            
            if (esi s>= arg4)
                break
    
    int32_t ebx_2 = *(arg1 + 0x22c)
    int32_t esi_3 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
    
    if (esi_3 + 1 u>= ebx_2)
        int32_t eax_3 = *(arg1 + 0x230)
        int32_t ebx_3 = ebx_2 * 2
        
        if (ebx_3 u> eax_3)
            int32_t lpMem = *(arg1 + 0x228)
            int32_t eax_4 = eax_3 + ebx_3
            *(arg1 + 0x230) = eax_4
            int32_t dwBytes = eax_4 << 2
            int32_t eax_5
            
            if (lpMem == 0)
                eax_5 = HeapAlloc(data_75dc34, HEAP_NONE, dwBytes)
            else
                eax_5 = HeapReAlloc(data_75dc34, HEAP_NONE, lpMem, dwBytes)
            
            *(arg1 + 0x228) = eax_5
        
        *(arg1 + 0x22c) = ebx_3
        *(arg1 + 0x234) = *(arg1 + 0x228) + (esi_3 << 2)
    
    **(arg1 + 0x234) = 0xffffffff
    *(arg1 + 0x234) += 4

int32_t* eax_13
eax_13.b = 1
return eax_13
