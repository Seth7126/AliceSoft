// 函数: sub_61e330
// 地址: 0x61e330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce258
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

uint32_t ecx_2 = *(arg1 + 0x64)
uint32_t var_20

if (ecx_2 != 0)
    var_20 = *(arg1 + 0x10) u>> 1
else
    var_20 = ecx_2

int32_t ebp = *(arg1 + 0x10)

if (ecx_2 != 0)
    ebp += 1

int32_t __saved_edi
int32_t esi_1 =
    (*(*(arg1 + 0x44) + 0x1c))(__security_cookie ^ &__saved_edi) * (*(*(arg1 + 0x44) + 0xc))()
char* eax_10 = *(arg1 + 0x2c) * (esi_1 u>> 3)
int32_t eax_12 = (*(*(arg1 + 0x44) + 0x1c))()
int32_t eax_13 = (*(*(arg1 + 0x44) + 0xc))()
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
int32_t edi_1 = *(arg1 + 0x30) * ((eax_12 * eax_13) u>> 3)
void* esi_6 = arg1 + 0x98
void* var_10 = esi_6
EnterCriticalSection(*(arg1 + 0x9c) + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t* eax_16 = *(arg1 + 0x18)
void* var_24 = nullptr
void* var_2c = nullptr
int32_t var_28 = 0
int32_t var_30 = 0
int32_t eax_17 =
    (*(*eax_16 + 0x2c))(eax_16, var_20, ebp u>> 1, &var_24, &var_28, &var_2c, &var_30, 0)
int32_t eax_21

if (eax_17 == 0)
    void* eax_18 = var_24
    
    if (eax_18 != 0)
        int32_t ecx_8 = var_28
        
        if (ecx_8 != 0)
            int32_t var_48_1 = edi_1
            sub_61e4e0(arg1, eax_18, ecx_8, eax_10)
            void* ecx_10 = var_2c
            
            if (ecx_10 != 0)
                int32_t eax_19 = var_30
                
                if (eax_19 != 0)
                    int32_t var_48_2 = edi_1
                    sub_61e4e0(arg1, ecx_10, eax_19, eax_10)
            
            esi_6 = arg1 + 0x98
    
    int32_t* eax_20 = *(arg1 + 0x18)
    eax_21 = (*(*eax_20 + 0x4c))(eax_20, var_24, var_28, var_2c, var_30)

void* ebx

if (eax_17 != 0 || eax_21 != 0)
    ebx.b = 0
else
    ebx.b = 1

LeaveCriticalSection(*(esi_6 + 4) + 4)
int32_t eax_22
eax_22.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_22
