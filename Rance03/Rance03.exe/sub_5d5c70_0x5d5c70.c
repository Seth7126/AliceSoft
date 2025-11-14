// 函数: sub_5d5c70
// 地址: 0x5d5c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca51c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sys43vm::CPageManager::VTable** var_14 = arg1
*arg1 = &sys43vm::CPageManager::`vftable'
int32_t var_4 = 2
sub_5d5d40(arg1)
int32_t lpMem = arg1[0xe]
arg1[0xd] = &memory::CFastIntVector::`vftable'

if (lpMem != 0)
    HeapFree(data_75dc34, HEAP_NONE, lpMem)

arg1[7] = &sys43vm::CPageCache::`vftable'
void* var_10 = &arg1[7]
var_4.b = 3
sub_5d5780(&arg1[7])
int32_t eax_3 = arg1[9]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[9] = 0
    arg1[0xa] = 0
    arg1[0xb] = 0

int32_t result = arg1[2]

if (result != 0)
    result = j__free(result)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
