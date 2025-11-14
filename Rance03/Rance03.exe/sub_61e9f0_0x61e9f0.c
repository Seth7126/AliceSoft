// 函数: sub_61e9f0
// 地址: 0x61e9f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce2d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct thread::CCriticalLock::VTable* const var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_30

if (*(arg1 + 0x14) != 0)
    struct thread::CCriticalLock::VTable* const var_58_1 = &thread::CCriticalLock::`vftable'
    EnterCriticalSection(*(arg1 + 0x9c) + 4)
    char var_54_1 = 1
    int32_t var_4 = 0
    int32_t* ecx = *(arg1 + 0x18)
    
    if (ecx != 0)
        (*(*ecx + 8))(ecx)
        *(arg1 + 0x18) = 0
    
    int32_t var_4_1 = 0xffffffff
    LeaveCriticalSection(*(arg1 + 0x9c) + 4)
    int16_t var_24 = 1
    int16_t eax_12 = (*(*(arg1 + 0x44) + 0xc))(eax_4)
    int32_t eax_15 = (*(*(arg1 + 0x44) + 0x10))()
    int16_t eax_18 = (*(*(arg1 + 0x44) + 0x1c))()
    int16_t var_16_1 = eax_18
    int128_t var_48
    __builtin_memset(&var_48, 0, 0x24)
    int16_t var_14_1 = 0
    int32_t eax_21
    int32_t edx_1
    edx_1:eax_21 = sx.q(zx.d(eax_18) * zx.d(eax_12))
    var_48.d = 0x24
    var_48:4.d = 0x18088
    int16_t eax_23 = ((eax_21 + (edx_1 & 7)) s>> 3).w
    int16_t var_18_1 = eax_23
    int32_t eax_25 = zx.d(eax_23) * eax_15
    var_64 = &thread::CCriticalLock::`vftable'
    int32_t var_1c_1 = eax_25
    *(arg1 + 0x10) = eax_25
    var_48:8.d = eax_25
    int128_t var_38
    var_38.d = &var_24
    void* var_5c_1 = arg1 + 0x98
    EnterCriticalSection(*(arg1 + 0x9c) + 4)
    char var_60_1 = 1
    int32_t var_4_2 = 1
    int32_t* eax_29 = *(arg1 + 0x14)
    eax_30 = (*(*eax_29 + 0xc))(eax_29, &var_48, arg1 + 0x18, 0)
    int32_t var_4_3 = 0xffffffff
    LeaveCriticalSection(*(arg1 + 0x9c) + 4)

struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x14) == 0 || eax_30 == 0)
    result.b = 1
else
    if (**(arg1 + 0xc) == 0)
        sub_64b530("DirectSound")
        **(arg1 + 0xc) = 1
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
