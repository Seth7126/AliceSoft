// 函数: sub_5d32f0
// 地址: 0x5d32f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca496
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sys43vm::CPage::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sys43vm::CPage::VTable** var_10_1 = arg1
*arg1 = &sys43vm::CPage::`vftable'
int32_t var_4 = 1
int32_t* ecx = arg1[0x18]

if (ecx != 0)
    (*(*ecx + 0x3c))(1)

int32_t* ecx_1 = arg1[0x17]

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(1)

int32_t* ecx_2 = arg1[0x16]

if (ecx_2 != 0)
    (*(*ecx_2 + 0x14))(1)

int32_t* ecx_3 = arg1[0x15]

if (ecx_3 != 0)
    (*(*ecx_3 + 0x2c))(1)

int32_t* ecx_4 = arg1[0x14]

if (ecx_4 != 0)
    (*(*ecx_4 + 0x1c))(1)

int32_t lpMem = arg1[0xb]
arg1[0xa] = &memory::CFastIntVector::`vftable'

if (lpMem != 0)
    HeapFree(data_75dc34, HEAP_NONE, lpMem)

BOOL lpMem_1 = arg1[2]
arg1[1] = &memory::CFastMemory::`vftable'

if (lpMem_1 != 0)
    lpMem_1 = HeapFree(data_75dc38, HEAP_NONE, lpMem_1)

fsbase->NtTib.ExceptionList = ExceptionList
return lpMem_1
