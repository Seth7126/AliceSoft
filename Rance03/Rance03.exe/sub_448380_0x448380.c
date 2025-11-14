// 函数: sub_448380
// 地址: 0x448380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6aa8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_24 = &thread::CCriticalLock::`vftable'
void* var_1c = arg1 + 4
EnterCriticalSection(*(arg1 + 8) + 4)
char var_20 = 1
int32_t var_4 = 0

while (*(arg1 + 0x1c) != 0)
    void var_18
    int32_t* eax_5 = sub_448500(arg1 + 0xc, &var_18)
    int32_t* edi_1 = *eax_5
    
    if (edi_1 != 0)
        edi_1 = *edi_1
    
    int32_t edx_1 = eax_5[2]
    int32_t* ecx_4 = *(*(edi_1[1] + ((edx_1 u>> 2 & (edi_1[2] - 1)) << 2)) + ((edx_1 & 3) << 2))
    
    if (ecx_4 != 0)
        (**ecx_4)(1)
    
    int32_t temp0_1 = *(arg1 + 0x1c)
    *(arg1 + 0x1c) -= 1
    
    if (temp0_1 != 1)
        *(arg1 + 0x18) += 1
    else
        *(arg1 + 0x18) = 0

int32_t result = LeaveCriticalSection(*(arg1 + 8) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
