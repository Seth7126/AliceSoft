// 函数: ?OpenGlobals@DBI1@@UAEHPAPAUGSI@@@Z
// 地址: 0x699550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

struct thread::CCriticalLock::VTable* const var_1c = &thread::CCriticalLock::`vftable'
void* var_14 = arg1 + 0x54
EnterCriticalSection(*(arg1 + 0x58) + 4)
char var_18 = 1
int32_t var_8_1 = 0
int32_t ebx

if (*(arg1 + 0x18) == 0)
    ebx.b = 0
else
    int32_t* ecx_2 = *(arg1 + 0x74)
    
    if (ecx_2 == 0)
        ebx.b = 0
    else
        int32_t eax_6 = sub_484ed0(ecx_2, arg2)
        int32_t* ecx_3 = *(arg1 + 0x18)
        
        if ((*(*ecx_3 + 0x34))(ecx_3, eax_6) s< 0)
            ebx.b = 0
        else
            ebx.b = 1

LeaveCriticalSection(*(arg1 + 0x58) + 4)
int32_t eax_8
eax_8.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
