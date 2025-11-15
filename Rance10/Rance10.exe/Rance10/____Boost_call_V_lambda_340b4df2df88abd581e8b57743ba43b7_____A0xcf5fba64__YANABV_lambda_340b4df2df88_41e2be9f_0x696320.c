// 函数: ??$_Boost_call@V<lambda_340b4df2df88abd581e8b57743ba43b7>@@@?A0xcf5fba64@@YANABV<lambda_340b4df2df88abd581e8b57743ba43b7>@@@Z
// 地址: 0x696320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_1c = &thread::CCriticalLock::`vftable'
void* var_14 = &arg1[0x1f]
EnterCriticalSection(arg1[0x20] + 4)
char var_18 = 1
int32_t var_8_1 = 0
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

LeaveCriticalSection(arg1[0x20] + 4)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
