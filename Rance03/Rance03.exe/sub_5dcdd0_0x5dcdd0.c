// 函数: sub_5dcdd0
// 地址: 0x5dcdd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6caaa8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 s< 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t* lpMem_1 = nullptr
struct memory::CFastIntVector::VTable* const var_28 = &memory::CFastIntVector::`vftable'
int32_t* lpMem = nullptr
int32_t var_20 = arg3
int32_t var_1c = arg3

if (arg3 != 0)
    lpMem_1 = HeapAlloc(data_75dc34, HEAP_NONE, arg3 << 2)
    lpMem = lpMem_1

int32_t ecx_2 = 0
int32_t var_c_1 = 0

if (arg3 s> 0)
    int32_t* edx_2 = arg2 + ((arg3 - 1) << 2)
    
    do
        int32_t eax_7 = *edx_2
        edx_2 = &edx_2[-1]
        lpMem_1[ecx_2] = eax_7
        ecx_2 += 1
    while (ecx_2 s< arg3)

void* esi = arg1[1]

if (*(esi + 0x48) != 0)
    int32_t eax_11 = *lpMem_1
    
    if (eax_11 s> 0)
        uint32_t ecx_8 = *(esi + 0xc) u>> 2
        
        if (eax_11 == ecx_8)
            lpMem_1.b = 1
        else if (eax_11 s<= ecx_8)
            if (sub_5d4e30(esi, eax_11) != 0)
                lpMem_1.b = 1
            else
                lpMem_1.b = 0
        else if (sub_5d4c50(esi, eax_11) != 0)
            lpMem_1.b = 1
        else
            lpMem_1.b = 0
    else if (*(esi + 0x48) == 0)
        lpMem_1.b = 1
    else
        char eax_14
        
        if (*(esi + 0x38) != 0 || *(esi + 0x3c) - 0x10 u<= 1)
            eax_14 = sub_5d4ad0(esi)
        
        if ((*(esi + 0x38) != 0 || *(esi + 0x3c) - 0x10 u<= 1) && eax_14 == 0)
            lpMem_1.b = 0
        else
            *(esi + 0xc) = 0
            *(esi + 0x48) = 0
            lpMem_1.b = 1
else if (*lpMem_1 s<= 0)
    lpMem_1.b = 1
else
    lpMem_1.b = (*(*arg1 + 0x30))(arg2, arg3)

HeapFree(data_75dc34, HEAP_NONE, lpMem)
BOOL eax_15
eax_15.b = lpMem_1.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_15
