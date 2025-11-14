// 函数: sub_525870
// 地址: 0x525870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3238
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_38 = &thread::CCriticalLock::`vftable'
void* var_30 = arg1 + 4
EnterCriticalSection(*(arg1 + 8) + 4)
char var_34 = 1
int32_t var_4 = 0
char var_2c
char* eax_7 = sub_402d30(&var_2c, arg2)
void** eax_8 = sub_417ed0(arg1 + 0x28, eax_7)
char eax_10

if (eax_8 != *(arg1 + 0x28))
    eax_10 = sub_40c3a0(eax_7, &eax_8[4])

if (eax_8 == *(arg1 + 0x28) || eax_10 != 0)
    var_3c = *(arg1 + 0x28)
else
    var_3c = eax_8

void** esi_2 = var_3c
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
char* ebx

if (esi_2 != *(arg1 + 0x28))
    ebx.b = esi_2[0x12] != 0
else
    ebx.b = 0

LeaveCriticalSection(*(arg1 + 8) + 4)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
