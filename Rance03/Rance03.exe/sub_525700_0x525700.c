// 函数: sub_525700
// 地址: 0x525700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3268
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_68 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_50 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 8) + 4)
char var_4c = 1
int32_t var_4 = 0
char var_44
char* eax_8 = sub_402d30(&var_44, arg2)
void** eax_9 = sub_417ed0(arg1 + 0x28, eax_8)
char eax_11

if (eax_9 != *(arg1 + 0x28))
    eax_11 = sub_40c3a0(eax_8, &eax_9[4])

if (eax_9 == *(arg1 + 0x28) || eax_11 != 0)
    var_54 = *(arg1 + 0x28)
else
    var_54 = eax_9

void** esi_2 = var_54
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
struct IMemory::common::CIMemory::VTable** result

if (esi_2 == *(arg1 + 0x28))
    result = nullptr
else
    void* esi_3
    
    if (esi_2[0x12] == 0)
        esi_3 = &esi_2[0xa]
    label_525810:
        int32_t eax_15 = *(esi_3 + 0xc)
        
        if (eax_15 == 0)
            result = sub_525ac0(arg1, esi_3)
        else if (eax_15 - 1 u> 1)
            result = nullptr
        else
            result = sub_525d60(arg1, esi_3)
    else
        int32_t var_2c
        sub_525fc0(arg1 + 0x28, &var_54, sub_402d30(&var_2c, &esi_2[0xe]))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        void** eax_14 = var_54
        
        if (eax_14 != *(arg1 + 0x28))
            esi_3 = &eax_14[0xa]
            goto label_525810
        
        result = nullptr

LeaveCriticalSection(*(arg1 + 8) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
