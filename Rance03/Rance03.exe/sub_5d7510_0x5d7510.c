// 函数: sub_5d7510
// 地址: 0x5d7510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi_1

if (arg2 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    esi_1 = *(*(arg1 + 8) + (arg2 << 2))
else
    esi_1 = nullptr

void* edi_1

if (arg3 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    edi_1 = *(*(arg1 + 8) + (arg3 << 2))
else
    edi_1 = nullptr

if (esi_1 == 0 || edi_1 == 0)
    int32_t eax_5
    eax_5.b = 0
    return eax_5

int32_t eax_6 = *(esi_1 + 0xc)
int32_t* lpMem = nullptr
void* ebp = nullptr
struct memory::CFastMemory::VTable* const var_14 = &memory::CFastMemory::`vftable'
int32_t* lpMem_1 = nullptr
void* var_c = nullptr
int32_t var_8 = 0
uint32_t eax_7

if (eax_6 == 0)
label_5d75b8:
    eax_7 = *(edi_1 + 0xc)
    *(esi_1 + 0xc) = 0
    
    if (eax_7 == 0)
    label_5d7624:
        *(edi_1 + 0xc) = 0
        
        if (ebp == 0)
            arg2.b = 1
        else if (sub_64aeb0(edi_1 + 4, ebp).b == 0)
            arg2.b = 0
        else if (*(edi_1 + 0xc) != 0)
            sub_69d850(*(edi_1 + 8), lpMem, ebp)
            arg2.b = 1
        else
            sub_69d850(nullptr, lpMem, ebp)
            arg2.b = 1
    else
        if (sub_64aeb0(esi_1 + 4, eax_7).b != 0)
            int32_t* ecx_3
            
            if (*(edi_1 + 0xc) != 0)
                ecx_3 = *(edi_1 + 8)
            else
                ecx_3 = nullptr
            
            int32_t* eax_8
            
            if (*(esi_1 + 0xc) != 0)
                eax_8 = *(esi_1 + 8)
            else
                eax_8 = nullptr
            
            sub_69d850(eax_8, ecx_3, *(edi_1 + 0xc))
            goto label_5d7624
        
        arg2.b = 0
else
    if (sub_64aeb0(&var_14, eax_6).b != 0)
        int32_t* ecx_1
        
        if (*(esi_1 + 0xc) != 0)
            ecx_1 = *(esi_1 + 8)
        else
            ecx_1 = nullptr
        
        ebp = var_c
        lpMem = lpMem_1
        int32_t* lpMem_2 = lpMem
        
        if (ebp == 0)
            lpMem_2 = nullptr
        
        sub_69d850(lpMem_2, ecx_1, *(esi_1 + 0xc))
        goto label_5d75b8
    
    lpMem = lpMem_1
    arg2.b = 0

if (lpMem != 0)
    HeapFree(data_75dc38, HEAP_NONE, lpMem)

eax_7.b = arg2.b
return eax_7
