// 函数: sub_4d5da0
// 地址: 0x4d5da0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734248
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_24 = &thread::CCriticalLock::`vftable'
void* var_1c = arg1 + 0x40
EnterCriticalSection(*(arg1 + 0x44) + 4)
char var_20 = 1
int32_t var_8_1 = 0
int32_t* eax_5 = *(arg1 + 0x48)
int32_t* i = *eax_5
int32_t* i_1 = i

if (i != eax_5)
    do
        if (*(i[0xa] + 4) == 1)
            (*(*i[0xa] + 4))(eax_2)
            int32_t* i_2 = i_1
            sub_429080(&i_1)
            void var_18
            sub_457890(arg1 + 0x48, &var_18, i_2)
        else
            sub_429080(&i_1)
        
        i = i_1
    while (i != *(arg1 + 0x48))

int32_t result = LeaveCriticalSection(*(arg1 + 0x44) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
