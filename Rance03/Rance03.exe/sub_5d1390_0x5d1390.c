// 函数: sub_5d1390
// 地址: 0x5d1390
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca2e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x14)
struct _EXCEPTION_REGISTRATION_RECORD** edi_1

if (ecx != 0)
    edi_1 = (*(*ecx + 8))(arg3, arg4)

struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx == 0 || edi_1 == 0)
    result.b = 0
else
    struct sys43vm::CMemoryFile::VTable* const var_20 = &sys43vm::CMemoryFile::`vftable'
    struct memory::CFastMemory::VTable* const var_1c = &memory::CFastMemory::`vftable'
    int16_t* lpMem_1 = nullptr
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    void* ebx
    int16_t* lpMem
    
    if (sub_64aeb0(&var_1c, (*edi_1)->__offset(0x14).d(eax_2) + 8).b == 0 || 0 == 0)
        lpMem = lpMem_1
        ebx.b = 0
    else
        lpMem = lpMem_1
        
        if (lpMem == 0)
            ebx.b = 0
        else
            *lpMem = 0x4447
            result.b = *(arg1 + 4)
            lpMem[1].b = result.b
            result.b = *(arg1 + 5)
            *(lpMem + 3) = result.b
            *(lpMem + 4) = arg4
            sub_69d850(&lpMem[4], (*edi_1)->__offset(0x18).d((*edi_1)->__offset(0x14).d()))
            (*edi_1)->Handler()
            
            if (sub_5d0fe0(&var_20, arg2).b == 0)
                lpMem = lpMem_1
                ebx.b = 0
            else
                lpMem = lpMem_1
                ebx.b = 1
    
    if (lpMem != 0)
        HeapFree(data_75dc38, HEAP_NONE, lpMem)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
