// 函数: sub_69a120
// 地址: 0x69a120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_1c = &thread::CCriticalLock::`vftable'
void* var_14 = arg1 + 0x54
EnterCriticalSection(*(arg1 + 0x58) + 4)
char var_18 = 1
int32_t var_8_1 = 0
int32_t* esi = *(arg1 + 0x18)

if (esi != 0)
    int128_t xmm1_1 = arg2
    int32_t ecx
    
    if (not(0 f< xmm1_1))
        ecx = 0xffffd8f0
    else if (xmm1_1 f< 1f)
        ecx = int.d(sub_48c490() * 2000f - 0.5f)
    else
        ecx = 0
    
    (*(*esi + 0x3c))(esi, ecx)

*(arg1 + 8) = arg2
LeaveCriticalSection(*(arg1 + 0x58) + 4)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
