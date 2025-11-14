// 函数: sub_61e610
// 地址: 0x61e610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c30d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = &arg1[0x26]
EnterCriticalSection(arg1[0x27] + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t ebx

if (arg1[5] == 0 || arg1[6] != 0)
    char eax_7 = (*(*arg1 + 0x40))(eax_2)
    int32_t* ecx_1 = arg1[6]
    
    if (eax_7 == 0)
        if (ecx_1 != 0)
            (*(*ecx_1 + 0x30))(ecx_1, 0, 0, 1)
        
        arg1[0xe] += arg1[0x10]
        arg1[0x10] = 0
    else
        if (ecx_1 != 0)
            (*(*ecx_1 + 0x48))(ecx_1)
        
        arg1[0xf] = (**arg1[8])()
    
    ebx.b = 1
else
    ebx.b = 0

LeaveCriticalSection(arg1[0x27] + 4)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
