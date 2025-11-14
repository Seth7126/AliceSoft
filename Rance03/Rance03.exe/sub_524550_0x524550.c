// 函数: sub_524550
// 地址: 0x524550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2ff0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_24 = &thread::CCriticalLock::`vftable'
void* var_1c = arg1 + 0xc
EnterCriticalSection(*(arg1 + 0x10) + 4)
char var_20 = 1
int32_t var_4 = 0
int32_t* ecx = *(arg1 + 0x1c)

if (ecx != 0)
    (**ecx)(1)
    *(arg1 + 0x1c) = 0

char var_20_1 = 0
LeaveCriticalSection(*(arg1 + 0x10) + 4)
void* ebp = arg1 + 4
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = ebp
EnterCriticalSection(*(arg1 + 8) + 4)
char var_14 = 1
var_4.b = 1
int32_t* eax_10 = *(arg1 + 0x14)
int32_t* i = *eax_10

if (i != eax_10)
    do
        int32_t* ecx_1 = i[5]
        
        if (ecx_1 != 0)
            (**ecx_1)(1)
        
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
    while (i != *(arg1 + 0x14))

void** edi = *(*(arg1 + 0x14) + 4)
void** esi_1 = edi

if (*(edi + 0xd) == 0)
    do
        sub_420090(esi_1[2])
        esi_1 = *esi_1
        j__free(edi)
        edi = esi_1
    while (*(esi_1 + 0xd) == 0)

void* eax_13 = *(arg1 + 0x14)
*(eax_13 + 4) = eax_13
int32_t* eax_14 = *(arg1 + 0x14)
*eax_14 = eax_14
void* eax_15 = *(arg1 + 0x14)
*(eax_15 + 8) = eax_15
*(arg1 + 0x18) = 0
int32_t result = LeaveCriticalSection(*(ebp + 4) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
