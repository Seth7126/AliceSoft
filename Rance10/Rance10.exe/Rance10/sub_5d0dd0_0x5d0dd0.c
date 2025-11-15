// 函数: sub_5d0dd0
// 地址: 0x5d0dd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737ed6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
EnterCriticalSection(*(arg1 + 4) + 4)
int32_t* edi = *(arg1 + 8)
void* ebx_1 = arg1 + 8
int32_t* i = *edi

while (i != edi)
    __Smtx_lock_shared(&i[0xb])
    void* ebx_2 = i[0xa]
    __Smtx_unlock_shared(&i[0xb])
    *(ebx_2 + 0x28) = 0
    
    if (*(i + 0xd) == 0)
        int32_t* i_1 = i[2]
        
        if (*(i_1 + 0xd) != 0)
            int32_t* i_3 = i[1]
            
            if (*(i_3 + 0xd) == 0)
                while (i == i_3[2])
                    i = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0xd) != 0)
                        break
            
            i = i_3
        else
            i = i_1
            int32_t* i_2 = *i
            
            while (*(i_2 + 0xd) == 0)
                i = i_2
                i_2 = *i

int32_t var_8_1 = 0
sub_5d17c0(*(*ebx_1 + 4))
void* eax_8 = *ebx_1
*(eax_8 + 4) = eax_8
int32_t* eax_9 = *ebx_1
*eax_9 = eax_9
void* eax_10 = *ebx_1
*(eax_10 + 8) = eax_10
*(ebx_1 + 4) = 0
int32_t result = LeaveCriticalSection(*(arg1 + 4) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
