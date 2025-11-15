// 函数: sub_699b00
// 地址: 0x699b00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_file_id@8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

struct thread::CCriticalLock::VTable* const var_20 = &thread::CCriticalLock::`vftable'
void* var_18 = arg1 + 0x54
EnterCriticalSection(*(arg1 + 0x58) + 4)
char var_1c = 1
int32_t var_8_1 = 0
int32_t* eax_6 = *(arg1 + 0x18)
void var_14
int32_t ebx

if ((*(*eax_6 + 0x24))(eax_6, &var_14) s>= 0)
    if (*(arg1 + 0x28) != 0xffffffff)
        int32_t eax_15 = (***(arg1 + 0x10))(eax_2) - *(arg1 + 0x28)
        *(arg1 + 0x24) += eax_15
        *(arg1 + 0x28) = 0xffffffff
    
    ebx.b = 0
else
    if (*(arg1 + 0x28) != 0xffffffff)
        int32_t eax_10 = (***(arg1 + 0x10))(eax_2) - *(arg1 + 0x28)
        *(arg1 + 0x24) += eax_10
    
    *(arg1 + 0x28) = (***(arg1 + 0x10))(eax_2)
    ebx.b = 1

LeaveCriticalSection(*(arg1 + 0x58) + 4)
int32_t eax_16
eax_16.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_16
