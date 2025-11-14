// 函数: sub_524b50
// 地址: 0x524b50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28 = 0
struct thread::CCriticalLock::VTable* const var_24 = &thread::CCriticalLock::`vftable'
void* var_1c = arg1 + 0xc
EnterCriticalSection(*(arg1 + 0x10) + 4)
char var_20 = 1
int32_t var_4 = 0
void* eax_5 = *(arg1 + 0x1c)
int32_t* result

if (eax_5 != 0)
    int32_t var_18
    sub_524e40(&var_18, eax_5 + 0x34)
    var_4.b = 1
    char var_20_1 = 0
    LeaveCriticalSection(*(arg1 + 0x10) + 4)
    result = arg2
    sub_524e40(result, &var_18)
    int32_t ecx_4 = var_18
    
    if (ecx_4 != 0)
        j__free(ecx_4)
else
    result = arg2
    *result = eax_5
    result[1] = eax_5
    result[2] = eax_5
    LeaveCriticalSection(*(arg1 + 0x10) + 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
