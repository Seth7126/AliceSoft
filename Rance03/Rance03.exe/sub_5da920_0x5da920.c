// 函数: sub_5da920
// 地址: 0x5da920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg1
*(arg2 + 8) = 0
int32_t* ecx = *(esi + 0x14)

if (*(esi + 0xc) s< &ecx[1])
    int32_t eax
    eax.b = 0
    return eax

int32_t eax_1

if (*(esi + 0xc) != 0)
    eax_1 = *(esi + 8)
else
    eax_1 = 0

void* eax_2 = *(ecx + eax_1)
int32_t ebp = 0
arg1 = eax_2
*(esi + 0x14) = &ecx[1]

if (eax_2 s> 0)
    do
        int32_t* ecx_1 = *(esi + 0x14)
        
        if (*(esi + 0xc) s< &ecx_1[1])
            eax_2.b = 0
            return eax_2
        
        int32_t eax_3
        
        if (*(esi + 0xc) != 0)
            eax_3 = *(esi + 8)
        else
            eax_3 = 0
        
        void* eax_4 = *(ecx_1 + eax_3)
        *(esi + 0x14) = &ecx_1[1]
        int32_t ebx_2 = *(arg2 + 8) + 1
        int32_t eax_5 = *(arg2 + 0xc)
        
        if (ebx_2 u> eax_5)
            int32_t lpMem = *(arg2 + 4)
            int32_t eax_6 = eax_5 + ebx_2
            *(arg2 + 0xc) = eax_6
            int32_t dwBytes = eax_6 << 2
            int32_t eax_7
            
            if (lpMem == 0)
                eax_7 = HeapAlloc(data_75dc34, HEAP_NONE, dwBytes)
            else
                eax_7 = HeapReAlloc(data_75dc34, HEAP_NONE, lpMem, dwBytes)
            
            *(arg2 + 4) = eax_7
        
        eax_2 = *(arg2 + 4)
        ebp += 1
        *(arg2 + 8) = ebx_2
        *(eax_2 + (ebx_2 << 2) - 4) = eax_4
    while (ebp s< arg1)

eax_2.b = 1
return eax_2
