// 函数: sub_54e140
// 地址: 0x54e140
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
int32_t ecx = EnterCriticalSection(*(arg1 + 8) + 4)
char var_14 = 1
int32_t var_4 = 0
uint32_t var_30_1 = zx.d(data_75dd2a)
int32_t var_34 = arg2
void* var_20
sub_4ce1a0(arg1 + 0x14, &var_20, ecx)
int32_t result = LeaveCriticalSection(*(arg1 + 8) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
