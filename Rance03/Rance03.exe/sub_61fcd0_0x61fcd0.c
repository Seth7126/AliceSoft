// 函数: sub_61fcd0
// 地址: 0x61fcd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c30d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 0x4c
EnterCriticalSection(*(arg1 + 0x50) + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t* esi = *(arg1 + 0x18)

if (esi != 0)
    int32_t ecx
    
    if (not(0 f< arg2))
        ecx = 0xffffd8f0
    else if (arg2 f< 1f)
        ecx = int.d(___libm_sse2_log10f(arg2) * 2000f - 0.5f)
    else
        ecx = 0
    
    (*(*esi + 0x3c))(esi, ecx)

*(arg1 + 8) = arg2
LeaveCriticalSection(*(arg1 + 0x50) + 4)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
