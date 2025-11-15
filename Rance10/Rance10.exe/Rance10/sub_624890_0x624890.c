// 函数: sub_624890
// 地址: 0x624890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744b10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg3
int32_t ebx
ebx.b = sub_6249e0(arg1, arg2)
char eax_4 = sub_6249e0(arg1, esi)
char var_14

if (ebx.b == 0)
    var_14 = 1
    
    if (eax_4 == 0)
        var_14 = 0
    
    arg3.b = 0
else
    var_14 = 0
    
    if (eax_4 != 0)
        arg3.b = 0
    else
        arg3.b = 1

struct sys43vm::CReadFile::VTable* const var_2c = &sys43vm::CReadFile::`vftable'
struct memory::CFastMemory::VTable* const var_28 = &memory::CFastMemory::`vftable'
char* lpMem_1 = nullptr
void* var_20 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_8_1 = 0

if (sub_6246e0(arg1, esi, &var_2c, arg3.b).b != 0)
    struct sys43vm::CWriteFile::VTable* const var_44 = &sys43vm::CWriteFile::`vftable'
    struct memory::CFastMemory::VTable* const var_40_1 = &memory::CFastMemory::`vftable'
    void** lpMem = nullptr
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    var_8_1.b = 1
    char* lpMem_2 = lpMem_1
    
    if (var_20 == 0)
        lpMem_2 = nullptr
    
    char eax_6 = sub_62ab00(&var_44, lpMem_2, var_20)
    char eax_7
    
    if (eax_6 != 0)
        eax_7 = sub_6245e0(arg1, arg2, &var_44, var_14)
    
    if (eax_6 == 0 || eax_7 == 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    if (lpMem != 0)
        HeapFree(data_7fcbf4, HEAP_NONE, lpMem)
else
    ebx.b = 0

if (lpMem_1 != 0)
    HeapFree(data_7fcbf4, HEAP_NONE, lpMem_1)

void** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
