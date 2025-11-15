// 函数: ?QuerySupportsEC@Mod1@@UAEHXZ
// 地址: 0x4c5840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_1c = &thread::CCriticalLock::`vftable'
void* var_14 = arg1 + 0x38
EnterCriticalSection(*(arg1 + 0x3c) + 4)
char var_18 = 1
int32_t var_8_1 = 0
int32_t* i = *(arg1 + 0x40)

while (i != *(arg1 + 0x44))
    if ((*(*i[1] + 4))(eax_2) s> 0)
        (**i[1])()
        i = &i[2]
    else
        int32_t* ecx_1 = *i
        
        if (ecx_1 != 0)
            (**ecx_1)(1)
        
        int32_t edx_1 = *(arg1 + 0x44)
        
        for (void* j = &i[2]; j != edx_1; j += 8)
            *(j - 8) = *j
            *(j - 4) = *(j + 4)
        
        *(arg1 + 0x44) -= 8

int32_t result = LeaveCriticalSection(*(arg1 + 0x3c) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
