// 函数: sub_696890
// 地址: 0x696890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_file_id@8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_24 = ebx
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) != 0)
    EnterCriticalSection(*(arg1 + 0x80) + 4)
    ebx.b = *(arg1 + 0x18) != 0
    LeaveCriticalSection(*(arg1 + 0x80) + 4)
    
    if (ebx.b == 0)
        int32_t eax_7
        eax_7.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7

*(arg1 + 8)
*(arg1 + 8) = arg2

if (*(arg1 + 0x14) == 0)
    int32_t eax_9
    eax_9.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_9

struct thread::CCriticalLock::VTable* const var_20 = &thread::CCriticalLock::`vftable'
void* var_18 = arg1 + 0x7c
EnterCriticalSection(*(arg1 + 0x80) + 4)
char var_1c = 1
int32_t var_8_1 = 0
int32_t* esi_1 = *(arg1 + 0x18)
int32_t eax_13

if (esi_1 != 0)
    int128_t xmm1_1 = arg2
    int32_t ecx_5
    
    if (not(0 f< xmm1_1))
        ecx_5 = 0xffffd8f0
    else if (xmm1_1 f< 1f)
        ecx_5 = int.d(sub_48c490() * 2000f - 0.5f)
    else
        ecx_5 = 0
    
    eax_13 = (*(*esi_1 + 0x3c))(esi_1, ecx_5)

if (esi_1 == 0 || eax_13 != 0)
    ebx.b = 0
else
    ebx.b = 1

LeaveCriticalSection(*(arg1 + 0x80) + 4)
int32_t eax_14
eax_14.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_14
