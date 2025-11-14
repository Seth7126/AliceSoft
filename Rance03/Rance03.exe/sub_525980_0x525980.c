// 函数: sub_525980
// 地址: 0x525980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3298
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
struct thread::CCriticalLock::VTable* const var_34 = &thread::CCriticalLock::`vftable'
void* var_2c = arg1 + 4
EnterCriticalSection(*(arg1 + 8) + 4)
char var_30 = 1
int32_t var_4 = 0
char var_28
char* eax_7 = sub_402d30(&var_28, arg3)
void** eax_8 = sub_417ed0(arg1 + 0x28, eax_7)
char eax_10

if (eax_8 != *(arg1 + 0x28))
    eax_10 = sub_40c3a0(eax_7, &eax_8[4])

void** var_3c_1

if (eax_8 == *(arg1 + 0x28) || eax_10 != 0)
    var_3c_1 = *(arg1 + 0x28)
else
    var_3c_1 = eax_8

int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28.d)

bool cond:0 = var_3c_1 != *(arg1 + 0x28)
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
int32_t var_14_1 = 0xf
int32_t var_18 = 0
var_28 = 0
*arg2 = 0
CRITICAL_SECTION* lpCriticalSection

if (cond:0)
    sub_401ff0(arg2, &var_3c_1[0xe], 0, 0xffffffff)
    lpCriticalSection = *(arg1 + 8) + 4
else
    lpCriticalSection = *(arg1 + 8) + 4

LeaveCriticalSection(lpCriticalSection)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return arg2
