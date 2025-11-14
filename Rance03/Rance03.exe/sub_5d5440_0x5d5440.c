// 函数: sub_5d5440
// 地址: 0x5d5440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg2
uint32_t ebx_1 = *(ebp + 0xc) u>> 2

if (ebx_1 s< 3)
    int32_t eax
    eax.b = 1
    return eax

void* eax_1

if (*(ebp + 0xc) != 0)
    eax_1 = *(ebp + 8)
else
    eax_1 = nullptr

int32_t esi = 0
arg2 = eax_1

if (ebx_1 s> 0)
    do
        if (sub_5d5100(arg1, *(eax_1 + (esi << 2)), *(eax_1 + (esi << 2) + 4)).b == 0)
            goto label_5d54d8
        
        eax_1 = arg2
        esi += 3
    while (esi s< ebx_1)

int32_t ebx_2 = *(arg1 + 0xc)
int32_t esi_2 = *(ebp + 0xc) + ebx_2
int32_t eax_3 = *(arg1 + 0x10)

if (esi_2 u< eax_3)
label_5d54de:
    *(arg1 + 0xc) = esi_2
    void* edx = *(ebp + 0xc)
    int32_t* ecx_1
    
    if (edx != 0)
        ecx_1 = *(ebp + 8)
    else
        ecx_1 = nullptr
    
    void* eax_4
    
    if (esi_2 != 0)
        eax_4 = *(arg1 + 8)
    else
        eax_4 = nullptr
    
    sub_69d850(eax_4 + ebx_2, ecx_1, edx)
    int32_t* eax_6
    eax_6.b = 1
    return eax_6

uint32_t dwBytes = eax_3 + esi_2
*(arg1 + 0x10) = dwBytes

if (eax_3 == neg.d(esi_2))
    goto label_5d54de

int32_t lpMem = *(arg1 + 8)
uint32_t eax_2

if (lpMem == 0)
    eax_2 = HeapAlloc(data_75dc38, HEAP_NONE, dwBytes)
else
    eax_2 = HeapReAlloc(data_75dc38, HEAP_NONE, lpMem, dwBytes)

*(arg1 + 8) = eax_2

if (eax_2 != 0)
    goto label_5d54de

label_5d54d8:
eax_2.b = 0
return eax_2
