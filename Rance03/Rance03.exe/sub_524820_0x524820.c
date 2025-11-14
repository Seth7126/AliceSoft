// 函数: sub_524820
// 地址: 0x524820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3048
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 4
EnterCriticalSection(*(arg1 + 8) + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t* var_1c
void arg_4
sub_420040(arg1 + 0x14, &var_1c, &arg_4)
int32_t* esi_1 = var_1c

if (esi_1 != *(arg1 + 0x14))
    int32_t* ecx_1 = esi_1[5]
    
    if (ecx_1 != 0)
        (**ecx_1)(1)
    
    sub_420180(arg1 + 0x14, &arg_4, esi_1)

int32_t result = LeaveCriticalSection(*(arg1 + 8) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
