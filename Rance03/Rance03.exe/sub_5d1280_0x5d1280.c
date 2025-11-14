// 函数: sub_5d1280
// 地址: 0x5d1280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca2b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* const ebx
void* const var_24 = ebx
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sys43vm::CMemoryFile::VTable* const var_20 = &sys43vm::CMemoryFile::`vftable'
struct memory::CFastMemory::VTable* const var_1c = &memory::CFastMemory::`vftable'
char* lpMem = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
BOOL result

if (sub_5d1070(&var_20, arg2).b == 0 || var_14 == 0 || lpMem == 0 || *lpMem != 0x47
        || lpMem[1] != 0x44)
    ebx.b = 0
else
    result.b = lpMem[2]
    
    if (result.b != *(arg1 + 4) || lpMem[3] != *(arg1 + 5))
        ebx.b = 0
    else if (sub_64aeb0(arg3, *(lpMem + 4)).b == 0)
        ebx.b = 0
    else
        result = *(arg3 + 8)
        
        if (result != 0)
            ebx = *(arg3 + 4)
        else
            ebx = nullptr
        
        int32_t* ecx_3 = *(arg1 + 0xc)
        
        if (ecx_3 == 0)
            ebx.b = 0
        else if ((*(*ecx_3 + 8))(ebx, result, &lpMem[8], var_14 - 8).b == 0)
            ebx.b = 0
        else
            ebx.b = 1

if (lpMem != 0)
    HeapFree(data_75dc38, HEAP_NONE, lpMem)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
