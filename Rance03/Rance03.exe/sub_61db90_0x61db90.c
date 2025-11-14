// 函数: sub_61db90
// 地址: 0x61db90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce1c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
(*(*arg1 + 0x14))(__security_cookie ^ &__saved_edi)
int32_t* ecx = arg1[7]
arg1[0xd] = 0
arg1[0x1d] = 0

if (ecx != 0)
    (*(*ecx + 4))()
    arg1[7] = 0

struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = &arg1[0x26]
EnterCriticalSection(arg1[0x27] + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t* ecx_1 = arg1[6]

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)
    arg1[6] = 0

int32_t var_4_1 = 0xffffffff
LeaveCriticalSection(arg1[0x27] + 4)
(*(*arg1 + 0x2c))(0)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
