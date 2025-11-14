// 函数: sub_5de050
// 地址: 0x5de050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x14) = *(arg1 + 8)
struct memory::CFastIntVector::VTable* var_10
sub_64ad10(&var_10, arg2)
int32_t* lpMem_2
int32_t* lpMem = lpMem_2
int32_t ebx = 0
int32_t* lpMem_3 = lpMem
int32_t var_8
BOOL result = &lpMem[var_8]
uint32_t edx_3 = (result - lpMem + 3) u>> 2

if (lpMem u> result)
    edx_3 = 0

uint32_t var_18 = edx_3

if (edx_3 != 0)
    do
        int32_t eax_2 = *lpMem_3
        void* ecx_1 = *(arg1 + 0xc)
        int32_t edi_3 = (*(arg1 + 0x14) - *(arg1 + 8)) s>> 2
        
        if (edi_3 + 1 u>= ecx_1)
            void* eax_4 = ecx_1 * 2
            int32_t ecx_2 = *(arg1 + 0x10)
            
            if (eax_4 u> ecx_2)
                void* eax_5 = eax_4 + ecx_2
                int32_t lpMem_1 = *(arg1 + 8)
                *(arg1 + 0x10) = eax_5
                int32_t dwBytes = eax_5 << 2
                int32_t eax_6
                
                if (lpMem_1 == 0)
                    eax_6 = HeapAlloc(data_75dc34, HEAP_NONE, dwBytes)
                else
                    eax_6 = HeapReAlloc(data_75dc34, HEAP_NONE, lpMem_1, dwBytes)
                
                edx_3 = var_18
                *(arg1 + 8) = eax_6
            
            *(arg1 + 0xc) = eax_4
            *(arg1 + 0x14) = *(arg1 + 8) + (edi_3 << 2)
        
        result = *(arg1 + 0x14)
        ebx += 1
        lpMem_3 = &lpMem_3[1]
        *result = eax_2
        *(arg1 + 0x14) += 4
    while (ebx != edx_3)
    
    lpMem = lpMem_2

if (lpMem == 0)
    return result

return HeapFree(data_75dc34, HEAP_NONE, lpMem)
