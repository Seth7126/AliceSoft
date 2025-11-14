// 函数: sub_5db110
// 地址: 0x5db110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca8c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_58 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg4
int32_t ebx
ebx.b = sub_5db290(arg1, arg3)
char eax_4 = sub_5db290(arg1, esi)
char var_48

if (ebx.b == 0)
    var_48 = 1
    
    if (eax_4 == 0)
        var_48 = 0
    
    arg4.b = 0
else
    var_48 = 0
    
    if (eax_4 != 0)
        arg4.b = 0
    else
        arg4.b = 1

struct sys43vm::CReadFile::VTable* const var_44 = &sys43vm::CReadFile::`vftable'
struct memory::CFastMemory::VTable* const var_40 = &memory::CFastMemory::`vftable'
int32_t* lpMem = nullptr
void* var_38 = nullptr
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_4 = 0
void** ebx_1

if (sub_5daca0(arg1, arg2, esi, &var_44, arg4.b).b != 0)
    struct sys43vm::CWriteFile::VTable* const var_2c = &sys43vm::CWriteFile::`vftable'
    struct sys43vm::CMemoryFile::VTable* const var_28_1 = &sys43vm::CMemoryFile::`vftable'
    struct memory::CFastMemory::VTable* const var_24_1 = &memory::CFastMemory::`vftable'
    void** lpMem_1 = nullptr
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    var_4.b = 1
    
    if (var_38 == 0)
    label_5db237:
        
        if (sub_5dab20(arg1, arg2, arg3, &var_2c, var_48) != 0)
            ebx_1.b = 1
        else
            ebx_1.b = 0
    else
        if (sub_5de800(&var_2c, lpMem, var_38) != 0)
            goto label_5db237
        
        ebx_1.b = 0
    
    if (lpMem_1 != 0)
        HeapFree(data_75dc38, HEAP_NONE, lpMem_1)
else
    ebx_1.b = 0

if (lpMem != 0)
    HeapFree(data_75dc38, HEAP_NONE, lpMem)

void** result
result.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
