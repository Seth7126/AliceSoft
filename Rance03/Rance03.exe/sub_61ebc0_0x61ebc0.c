// 函数: sub_61ebc0
// 地址: 0x61ebc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c30d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_1c = ebx
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (*(arg1 + 0x14) != 0)
    EnterCriticalSection(*(arg1 + 0x9c) + 4)
    ebx.b = *(arg1 + 0x18) != 0
    LeaveCriticalSection(*(arg1 + 0x9c) + 4)
    
    if (ebx.b == 0)
        eax_3.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3

bool cond:0 = *(arg1 + 0x14) != 0
*(arg1 + 8) = arg2

if (not(cond:0))
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 0x98
EnterCriticalSection(*(arg1 + 0x9c) + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t* esi_1 = *(arg1 + 0x18)
int32_t eax_11

if (esi_1 != 0)
    int32_t ecx_4
    
    if (not(0 f< arg2))
        ecx_4 = 0xffffd8f0
    else if (arg2 f< 1f)
        ecx_4 = int.d(___libm_sse2_log10f(arg2) * 2000f - 0.5f)
    else
        ecx_4 = 0
    
    eax_11 = (*(*esi_1 + 0x3c))(esi_1, ecx_4)

if (esi_1 == 0 || eax_11 != 0)
    ebx.b = 0
else
    ebx.b = 1

LeaveCriticalSection(*(arg1 + 0x9c) + 4)
int32_t eax_12
eax_12.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_12
